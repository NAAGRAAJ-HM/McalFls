/******************************************************************************/
/* File   : McalFls.cpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalFls.hpp"
#include "infMcalFls_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_McalFls, MCALFLS_VAR) McalFls;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
#if(STD_ON == _ReSIM)
//#include <iostream>
//#include <fstream>
//using namespace std;
//using std::ios;

#include "ReSimFm.hpp"
#else
#endif

FUNC(void, MCALFLS_CODE) module_McalFls::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALFLS_CONST,       MCALFLS_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALFLS_CONFIG_DATA, MCALFLS_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalFls_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalFls_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == _ReSIM)
//      if(FALSE){
         //TBD: Read from Flash -> CfgGen_McalFls
//      }
//      else{
         //TBD: Read from File -> CfgGen_McalFls
//      }
#else
#endif
#if(STD_ON == McalFls_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalFls_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALFLS_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALFLS_CODE) module_McalFls::DeInitFunction(
   void
){
#if(STD_ON == McalFls_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalFls_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalFls_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALFLS_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALFLS_CODE) module_McalFls::MainFunction(
   void
){
#if(STD_ON == McalFls_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalFls_InitCheck)
   }
   else{
#if(STD_ON == McalFls_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALFLS_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALFLS_CODE) module_McalFls::Erase(
   void
){
}

FUNC(void, MCALFLS_CODE) module_McalFls::Write(
   void
){
}

FUNC(void, MCALFLS_CODE) module_McalFls::McalCancel(
   void
){
}

FUNC(void, MCALFLS_CODE) module_McalFls::GetStatus(
   void
){
}

FUNC(void, MCALFLS_CODE) module_McalFls::GetJobResult(
   void
){
}

FUNC(void, MCALFLS_CODE) module_McalFls::Read(
   void
){
}

FUNC(void, MCALFLS_CODE) module_McalFls::ServiceCompare(
   void
){
}

FUNC(void, MCALFLS_CODE) module_McalFls::SetMode(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
