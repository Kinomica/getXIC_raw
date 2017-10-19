

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat Nov 26 18:12:33 2016
 */
/* Compiler settings for .\XRawfile2_x64.IDL:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=IA64 8.00.0603 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __XRawfile2_x64_h__
#define __XRawfile2_x64_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IXRawfile_FWD_DEFINED__
#define __IXRawfile_FWD_DEFINED__
typedef interface IXRawfile IXRawfile;

#endif 	/* __IXRawfile_FWD_DEFINED__ */


#ifndef __IXRawfile2_FWD_DEFINED__
#define __IXRawfile2_FWD_DEFINED__
typedef interface IXRawfile2 IXRawfile2;

#endif 	/* __IXRawfile2_FWD_DEFINED__ */


#ifndef __IXRawfile3_FWD_DEFINED__
#define __IXRawfile3_FWD_DEFINED__
typedef interface IXRawfile3 IXRawfile3;

#endif 	/* __IXRawfile3_FWD_DEFINED__ */


#ifndef __IXRawfile4_FWD_DEFINED__
#define __IXRawfile4_FWD_DEFINED__
typedef interface IXRawfile4 IXRawfile4;

#endif 	/* __IXRawfile4_FWD_DEFINED__ */


#ifndef __IXRawfile5_FWD_DEFINED__
#define __IXRawfile5_FWD_DEFINED__
typedef interface IXRawfile5 IXRawfile5;

#endif 	/* __IXRawfile5_FWD_DEFINED__ */


#ifndef __IXVirMS_FWD_DEFINED__
#define __IXVirMS_FWD_DEFINED__
typedef interface IXVirMS IXVirMS;

#endif 	/* __IXVirMS_FWD_DEFINED__ */


#ifndef __IXVirMS64_FWD_DEFINED__
#define __IXVirMS64_FWD_DEFINED__
typedef interface IXVirMS64 IXVirMS64;

#endif 	/* __IXVirMS64_FWD_DEFINED__ */


#ifndef __IXVirUV_FWD_DEFINED__
#define __IXVirUV_FWD_DEFINED__
typedef interface IXVirUV IXVirUV;

#endif 	/* __IXVirUV_FWD_DEFINED__ */


#ifndef __MSFileReader_XRawfile_FWD_DEFINED__
#define __MSFileReader_XRawfile_FWD_DEFINED__

#ifdef __cplusplus
typedef class MSFileReader_XRawfile MSFileReader_XRawfile;
#else
typedef struct MSFileReader_XRawfile MSFileReader_XRawfile;
#endif /* __cplusplus */

#endif 	/* __MSFileReader_XRawfile_FWD_DEFINED__ */


#ifndef __MSFileReader_XVirMS_FWD_DEFINED__
#define __MSFileReader_XVirMS_FWD_DEFINED__

#ifdef __cplusplus
typedef class MSFileReader_XVirMS MSFileReader_XVirMS;
#else
typedef struct MSFileReader_XVirMS MSFileReader_XVirMS;
#endif /* __cplusplus */

#endif 	/* __MSFileReader_XVirMS_FWD_DEFINED__ */


#ifndef __MSFileReader_XVirUV_FWD_DEFINED__
#define __MSFileReader_XVirUV_FWD_DEFINED__

#ifdef __cplusplus
typedef class MSFileReader_XVirUV MSFileReader_XVirUV;
#else
typedef struct MSFileReader_XVirUV MSFileReader_XVirUV;
#endif /* __cplusplus */

#endif 	/* __MSFileReader_XVirUV_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __MSFileReaderLib_LIBRARY_DEFINED__
#define __MSFileReaderLib_LIBRARY_DEFINED__

/* library MSFileReaderLib */
/* [custom][custom][custom][helpstring][version][uuid] */ 










enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0001
    {
        MS_TRAILER_NOT_AVAILABLE	= 0xffffffff
    } 	;


enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0002
    {
        MS_SCAN_TYPE_NOT_SPECIFIED	= 0xffffffff
    } 	;


enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0003
    {
        MS_MAX_NUM_MASS_RANGES	= 100
    } 	;


enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0004
    {
        MS_MAX_MS_ORDER	= 100
    } 	;

typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0005
    {
        MS_PacketTypes_PROF_SP_TYPE	= 0,
        MS_PacketTypes_LR_SP_TYPE	= 1,
        MS_PacketTypes_HR_SP_TYPE	= 2,
        MS_PacketTypes_PROF_INDEX_TYPE	= 3,
        MS_PacketTypes_COMP_ACC_SP_TYPE	= 4,
        MS_PacketTypes_STD_ACC_SP_TYPE	= 5,
        MS_PacketTypes_STD_UNCAL_SP_TYPE	= 6,
        MS_PacketTypes_ACC_MASS_PROF_SP_TYPE	= 7,
        MS_PacketTypes_DG_xAQR_TYPE	= 8,
        MS_PacketTypes_DG_xAQR_INDEX_TYPE	= 9,
        MS_PacketTypes_DG_xASR_TYPE	= 10,
        MS_PacketTypes_DG_xASR_INDEX_TYPE	= 11,
        MS_PacketTypes_CHANNEL_UV_TYPE	= 12,
        MS_PacketTypes_MS_ANALOG_TYPE	= 13,
        MS_PacketTypes_PROF_SP_TYPE2	= 14,
        MS_PacketTypes_LR_SP_TYPE2	= 15,
        MS_PacketTypes_PROF_SP_TYPE3	= 16,
        MS_PacketTypes_LR_SP_TYPE3	= 17
    } 	MS_PacketTypes;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0006
    {
        MS_Negative	= 0,
        MS_Positive	= 1,
        MS_AnyPolarity	= 2
    } 	MS_Polarity;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0007
    {
        MS_Centroid	= 0,
        MS_Profile	= 1,
        MS_AcceptAnyScanData	= 2
    } 	MS_ScanData;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0008
    {
        MS_NotDependent	= 0,
        MS_Dependent	= 1,
        MS_AcceptAnyDep	= 2
    } 	MS_Dep;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0009
    {
        MS_WidebandOff	= 0,
        MS_WidebandOn	= 1,
        MS_AcceptAnyWideband	= 2
    } 	MS_Wideband;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0010
    {
        MS_SourceCIDon	= 0,
        MS_SourceCIDoff	= 1,
        MS_AcceptAnySourceCID	= 2
    } 	MS_SourceCID;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0011
    {
        MS_SourceCIDTypeNoValue	= 0,
        MS_SourceCIDTypeSingleValue	= 1,
        MS_SourceCIDTypeRamp	= 2,
        MS_SourceCIDTypeSIM	= 3,
        MS_AcceptAnySourceCIDType	= 4
    } 	MS_SourceCIDType;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0012
    {
        MS_ng	= 0xfffffffd,
        MS_nl	= 0xfffffffe,
        MS_par	= 0xffffffff,
        MS_AcceptAnyMSorder	= 0,
        MS_ms	= 1,
        MS_ms2	= 2,
        MS_ms3	= 3,
        MS_ms4	= 4,
        MS_ms5	= 5,
        MS_ms6	= 6,
        MS_ms7	= 7,
        MS_ms8	= 8,
        MS_ms9	= 9,
        MS_ms10	= 10,
        MS_ms11	= 11,
        MS_ms12	= 12,
        MS_ms13	= 13,
        MS_ms14	= 14,
        MS_ms15	= 15,
        MS_ms16	= 16,
        MS_ms17	= 17,
        MS_ms18	= 18,
        MS_ms19	= 19,
        MS_ms20	= 20,
        MS_ms21	= 21,
        MS_ms22	= 22,
        MS_ms23	= 23,
        MS_ms24	= 24,
        MS_ms25	= 25,
        MS_ms26	= 26,
        MS_ms27	= 27,
        MS_ms28	= 28,
        MS_ms29	= 29,
        MS_ms30	= 30,
        MS_ms31	= 31,
        MS_ms32	= 32,
        MS_ms33	= 33,
        MS_ms34	= 34,
        MS_ms35	= 35,
        MS_ms36	= 36,
        MS_ms37	= 37,
        MS_ms38	= 38,
        MS_ms39	= 39,
        MS_ms40	= 40,
        MS_ms41	= 41,
        MS_ms42	= 42,
        MS_ms43	= 43,
        MS_ms44	= 44,
        MS_ms45	= 45,
        MS_ms46	= 46,
        MS_ms47	= 47,
        MS_ms48	= 48,
        MS_ms49	= 49,
        MS_ms50	= 50,
        MS_ms51	= 51,
        MS_ms52	= 52,
        MS_ms53	= 53,
        MS_ms54	= 54,
        MS_ms55	= 55,
        MS_ms56	= 56,
        MS_ms57	= 57,
        MS_ms58	= 58,
        MS_ms59	= 59,
        MS_ms60	= 60,
        MS_ms61	= 61,
        MS_ms62	= 62,
        MS_ms63	= 63,
        MS_ms64	= 64,
        MS_ms65	= 65,
        MS_ms66	= 66,
        MS_ms67	= 67,
        MS_ms68	= 68,
        MS_ms69	= 69,
        MS_ms70	= 70,
        MS_ms71	= 71,
        MS_ms72	= 72,
        MS_ms73	= 73,
        MS_ms74	= 74,
        MS_ms75	= 75,
        MS_ms76	= 76,
        MS_ms77	= 77,
        MS_ms78	= 78,
        MS_ms79	= 79,
        MS_ms80	= 80,
        MS_ms81	= 81,
        MS_ms82	= 82,
        MS_ms83	= 83,
        MS_ms84	= 84,
        MS_ms85	= 85,
        MS_ms86	= 86,
        MS_ms87	= 87,
        MS_ms88	= 88,
        MS_ms89	= 89,
        MS_ms90	= 90,
        MS_ms91	= 91,
        MS_ms92	= 92,
        MS_ms93	= 93,
        MS_ms94	= 94,
        MS_ms95	= 95,
        MS_ms96	= 96,
        MS_ms97	= 97,
        MS_ms98	= 98,
        MS_ms99	= 99,
        MS_ms100	= 100
    } 	MS_MSOrder;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0013
    {
        MS_Fullsc	= 0,
        MS_Zoomsc	= 1,
        MS_SIMsc	= 2,
        MS_SRMsc	= 3,
        MS_CRMsc	= 4,
        MS_AcceptAnyScanType	= 5,
        MS_Q1MSsc	= 6,
        MS_Q3MSsc	= 7
    } 	MS_ScanType;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0014
    {
        MS_TurboScanOn	= 0,
        MS_TurboScanOff	= 1,
        MS_AcceptAnyTurboScan	= 2
    } 	MS_TurboScan;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0015
    {
        MS_ElectronImpact	= 0,
        MS_ChemicalIonization	= 1,
        MS_FastAtomBombardment	= 2,
        MS_Electrospray	= 3,
        MS_AtmosphericPressureChemicalIonization	= 4,
        MS_Nanospray	= 5,
        MS_Thermospray	= 6,
        MS_FieldDesorption	= 7,
        MS_MatrixAssistedLaserDesorptionIonization	= 8,
        MS_GlowDischarge	= 9,
        MS_AcceptAnyIonizationMode	= 10
    } 	MS_IonizationMode;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0016
    {
        MS_CoronaOn	= 0,
        MS_CoronaOff	= 1,
        MS_AcceptAnyCorona	= 2
    } 	MS_Corona;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0017
    {
        MS_DetectorValid	= 0,
        MS_AcceptAnyDetector	= 1
    } 	MS_Detector;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0018
    {
        MS_PrecursorEnergyValid	= 0,
        MS_AcceptAnyPrecursorEnergy	= 1
    } 	MS_PrecursorEnergy;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0019
    {
        MS_MultiplexOff	= 0,
        MS_MultiplexOn	= 1,
        MS_AcceptAnyMultiplex	= 2
    } 	MS_Multiplex;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0020
    {
        MS_Param_A_Off	= 0,
        MS_Param_A_On	= 1,
        MS_AcceptAnyParam_A	= 2
    } 	MS_Param_A;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0021
    {
        MS_Param_B_Off	= 0,
        MS_Param_B_On	= 1,
        MS_AcceptAnyParam_B	= 2
    } 	MS_Param_B;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0022
    {
        MS_Param_F_Off	= 0,
        MS_Param_F_On	= 1,
        MS_AcceptAnyParam_F	= 2
    } 	MS_Param_F;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0023
    {
        MS_Param_K_Off	= 0,
        MS_Param_K_On	= 1,
        MS_AcceptAnyParam_K	= 2
    } 	MS_Param_K;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0024
    {
        MS_Param_R_Off	= 0,
        MS_Param_R_On	= 1,
        MS_AcceptAnyParam_R	= 2
    } 	MS_Param_R;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0025
    {
        MS_Param_V_Off	= 0,
        MS_Param_V_On	= 1,
        MS_AcceptAnyParam_V	= 2
    } 	MS_Param_V;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0000_0000_0026
    {
        MS_RCIDactivation	= 0,
        MS_RMPDactivation	= 1,
        MS_RECDactivation	= 2,
        MS_RPQDactivation	= 3,
        MS_RETDactivation	= 4,
        MS_RHCDactivation	= 5,
        MS_RAnyactivation	= 6,
        MS_RSAactivation	= 7,
        MS_RPTRactivation	= 8,
        MS_RNETDactivation	= 9,
        MS_RNPTRactivation	= 10
    } 	MS_Activations;

typedef struct tagMS_FullMSOrderPrecursorInfo
    {
    double dPrecursorMass;
    double dIsolationWidth;
    double dCollisionEnergy;
    long uiCollisionEnergyValid;
    unsigned short bRangeIsValid;
    double dFirstPrecursorMass;
    double dLastPrecursorMass;
    double dIsolationWidthOffset;
    } 	MS_FullMSOrderPrecursorInfo;

typedef struct tagMS_MassRange
    {
    double dLowMass;
    double dHighMass;
    } 	MS_MassRange;

typedef struct tagMS_ScanEvent
    {
    long bIsValid;
    MS_ScanData eScanData;
    MS_Polarity ePolarity;
    MS_MSOrder eMSOrder;
    MS_Dep eDependent;
    MS_Wideband eWideband;
    long bCustom;
    MS_SourceCID eSourceCID;
    MS_ScanType eScanType;
    MS_TurboScan eTurboScan;
    MS_IonizationMode eIonizationMode;
    MS_Corona eCorona;
    MS_Detector eDetector;
    double dDetectorValue;
    MS_SourceCIDType eSourceCIDType;
    long nlScanTypeIndex;
    long nNumMassRanges;
    MS_MassRange arrMassRanges[ 100 ];
    long nNumPrecursorMasses;
    double arrPrecursorMasses[ 100 ];
    double arrPrecursorEnergies[ 100 ];
    long arrPrecursorEnergiesValid[ 100 ];
    long nNumSourceFragmentationEnergies;
    double arrSourceFragmentationEnergies[ 100 ];
    long arrSourceFragmentationEnergiesValid[ 100 ];
    } 	MS_ScanEvent;

typedef struct tagMS_ScanIndex
    {
    unsigned long m_ulDataOffset;
    long m_nlTrailerOffset;
    long m_nlScanTypeIndex;
    int m_nScanNumber;
    int m_nPacketType;
    int m_nNumberPackets;
    double m_dStartTime;
    double m_dTIC;
    double m_dBasePeakIntensity;
    double m_dBasePeakMass;
    double m_dLowMass;
    double m_dHighMass;
    } 	MS_ScanIndex;

typedef struct tagMS_ScanIndex64
    {
    INT64 m_llDataOffset;
    long m_nlTrailerOffset;
    long m_nlScanTypeIndex;
    int m_nScanNumber;
    int m_nPacketType;
    int m_nNumberPackets;
    double m_dStartTime;
    double m_dTIC;
    double m_dBasePeakIntensity;
    double m_dBasePeakMass;
    double m_dLowMass;
    double m_dHighMass;
    } 	MS_ScanIndex64;

typedef struct tagMS_UVScanIndex
    {
    int nPacketType;
    int nNumberOfChannels;
    double dStartTime;
    double dTIC;
    } 	MS_UVScanIndex;

typedef struct tagMS_DataPeak
    {
    double intensity;
    double position;
    float basepeak;
    long scan;
    } 	MS_DataPeak;

typedef struct tagMS_PrecursorInfo
    {
    double dMonoIsoMZ;
    double dIsolationMZ;
    long nChargeState;
    long nScanNumber;
    } 	MS_PrecursorInfo;

typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_XRawfile2_x64_0001_0004_0001
    {
        MS_DataTypes_NULL	= 0,
        MS_DataTypes_CHAR	= 1,
        MS_DataTypes_TRUEFALSE	= 2,
        MS_DataTypes_YESNO	= 3,
        MS_DataTypes_ONOFF	= 4,
        MS_DataTypes_UCHAR	= 5,
        MS_DataTypes_SHORT	= 6,
        MS_DataTypes_USHORT	= 7,
        MS_DataTypes_LONG	= 8,
        MS_DataTypes_ULONG	= 9,
        MS_DataTypes_FLOAT	= 10,
        MS_DataTypes_DOUBLE	= 11,
        MS_DataTypes_CHAR_STRING	= 12,
        MS_DataTypes_WCHAR_STRING	= 13
    } 	MS_DataTypes;

typedef /* [uuid] */  DECLSPEC_UUID("BFEC2952-90CB-40E5-93AF-90C797D944A8") struct tagMS_ScanDataStruct
    {
    double dMass;
    double dMassAccyPPM;
    double dMassAccyMMU;
    double dIntensity;
    double dResolution;
    } 	MS_ScanDataStruct;


EXTERN_C const IID LIBID_MSFileReaderLib;

#ifndef __IXRawfile_INTERFACE_DEFINED__
#define __IXRawfile_INTERFACE_DEFINED__

/* interface IXRawfile */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IXRawfile;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11B488A0-69B1-41FC-A660-FE8DF2A31F5B")
    IXRawfile : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            BSTR szFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFileName( 
            BSTR *pbstrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCreatorID( 
            BSTR *pbstrCreatorID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVersionNumber( 
            long *pnVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCreationDate( 
            DATE *pCreationDate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsError( 
            long *pbIsError) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsNewFile( 
            long *pbIsNewFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorCode( 
            long *pnErrorCode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorMessage( 
            BSTR *pbstrErrorMessage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetWarningMessage( 
            BSTR *pbstrWarningMessage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowNumber( 
            long *pnSeqRowNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowSampleType( 
            long *pnSampleType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowDataPath( 
            BSTR *pbstrDataPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowRawFileName( 
            BSTR *pbstrRawFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowSampleName( 
            BSTR *pbstrSampleName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowSampleID( 
            BSTR *pbstrSampleID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowComment( 
            BSTR *pbstrComment) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowLevelName( 
            BSTR *pbstrLevelName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowUserText( 
            long nIndex,
            BSTR *pbstrUserText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowInstrumentMethod( 
            BSTR *pbstrInstrumentMethod) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowProcessingMethod( 
            BSTR *pbstrProcessingMethod) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowCalibrationFile( 
            BSTR *pbstrCalibrationFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowVial( 
            BSTR *pbstrVial) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowInjectionVolume( 
            double *pdInjVol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowSampleWeight( 
            double *pdSampleWt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowSampleVolume( 
            double *pdSampleVolume) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowISTDAmount( 
            double *pdISTDAmount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowDilutionFactor( 
            double *pdDilutionFactor) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowUserLabel( 
            long nIndex,
            BSTR *pbstrUserLabel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InAcquisition( 
            long *pbInAcquisition) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumberOfControllers( 
            long *pnNumControllers) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetControllerType( 
            long nIndex,
            long *pnControllerType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetCurrentController( 
            long nControllerType,
            long nControllerNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCurrentController( 
            long *pnControllerType,
            long *pnControllerNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumSpectra( 
            long *pnNumberOfSpectra) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumStatusLog( 
            long *pnNumberOfStatusLogEntries) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumErrorLog( 
            long *pnNumberOfErrorLogEntries) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumTuneData( 
            long *pnNumTuneData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMassResolution( 
            double *pdMassResolution) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetExpectedRunTime( 
            double *pdExpectedRunTime) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumTrailerExtra( 
            long *pnNumberOfTrailerExtraEntries) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLowMass( 
            double *pdLowMass) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetHighMass( 
            double *pdHighMass) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStartTime( 
            double *pdStartTime) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetEndTime( 
            double *pdEndTime) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMaxIntegratedIntensity( 
            double *pdMaxIntegIntensity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMaxIntensity( 
            long *pnMaxIntensity) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFirstSpectrumNumber( 
            long *pnFirstSpectrum) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLastSpectrumNumber( 
            long *pnLastSpectrum) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstrumentID( 
            long *pnInstrumentID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInletID( 
            long *pnInletID) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorFlag( 
            long *pnErrorFlag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSampleVolume( 
            double *pdSampleVolume) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSampleWeight( 
            double *pdSampleWeight) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVialNumber( 
            long *pnVialNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInjectionVolume( 
            double *pdInjectionVolume) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFlags( 
            BSTR *pbstrFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAcquisitionFileName( 
            BSTR *pbstrFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstrumentDescription( 
            BSTR *pbstrInstrumentDescription) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAcquisitionDate( 
            BSTR *pbstrAcquisitionDate) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetOperator( 
            BSTR *pbstrOperator) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetComment1( 
            BSTR *pbstrComment1) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetComment2( 
            BSTR *pbstrComment2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSampleAmountUnits( 
            BSTR *pbstrSampleAmountUnits) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInjectionAmountUnits( 
            BSTR *pbstrInjectionAmountUnits) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSampleVolumeUnits( 
            BSTR *pbstrSampleVolumeUnits) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFilters( 
            VARIANT *pvarFilterArray,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ScanNumFromRT( 
            double dRT,
            long *pnScanNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RTFromScanNum( 
            long nScanNumber,
            double *pdRT) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFilterForScanNum( 
            long nScanNumber,
            BSTR *pbstrFilter) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFilterForScanRT( 
            double dRT,
            BSTR *pbstrFilter) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMassListFromScanNum( 
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMassListFromRT( 
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNextMassListFromScanNum( 
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPrevMassListFromScanNum( 
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsProfileScanForScanNum( 
            long nScanNumber,
            long *pbIsProfileScan) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsCentroidScanForScanNum( 
            long nScanNumber,
            long *pbIsCentroidScan) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetScanHeaderInfoForScanNum( 
            long nScanNumber,
            long *pnNumPackets,
            double *pdStartTime,
            double *pdLowMass,
            double *pdHighMass,
            double *pdTIC,
            double *pdBasePeakMass,
            double *pdBasePeakIntensity,
            long *pnNumChannels,
            long *pbUniformTime,
            double *pdFrequency) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatusLogForScanNum( 
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatusLogForRT( 
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatusLogLabelsForScanNum( 
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatusLogLabelsForRT( 
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatusLogValueForScanNum( 
            long nScanNumber,
            BSTR bstrLabel,
            double *pdStatusLogRT,
            VARIANT *pvarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatusLogValueForRT( 
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTrailerExtraForScanNum( 
            long nScanNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTrailerExtraForRT( 
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTrailerExtraLabelsForScanNum( 
            long nScanNumber,
            VARIANT *pvarLabels,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTrailerExtraLabelsForRT( 
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTrailerExtraValueForScanNum( 
            long nScanNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTrailerExtraValueForRT( 
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetErrorLogItem( 
            long nItemNumber,
            double *pdRT,
            BSTR *pbstrErrorMessage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTuneData( 
            long nSegmentNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumInstMethods( 
            long *pnNumInstMethods) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstMethod( 
            long nInstMethodItem,
            BSTR *pbstrInstMethod) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChroData( 
            long nChroType1,
            long nChroOperator,
            long nChroType2,
            BSTR bstrFilter,
            BSTR bstrMassRanges1,
            BSTR bstrMassRanges2,
            double dDelay,
            double *pdStartTime,
            double *pdEndTime,
            long nSmoothingType,
            long nSmoothingValue,
            VARIANT *pvarChroData,
            VARIANT *pvarPeakFlags,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RefreshViewOfFile( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTuneDataValue( 
            long nSegmentNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTuneDataLabels( 
            long nSegmentNumber,
            VARIANT *pvarLabels,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstName( 
            BSTR *pbstrInstName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstModel( 
            BSTR *pbstrInstModel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstSerialNumber( 
            BSTR *pbstrInstSerialNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstSoftwareVersion( 
            BSTR *pbstrInstSoftwareVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstHardwareVersion( 
            BSTR *pbstrInstHardwareVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstFlags( 
            BSTR *pbstrInstFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstNumChannelLabels( 
            long *pnInstNumChannelLabels) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstChannelLabel( 
            long nChannelLabelNumber,
            BSTR *pbstrInstChannelLabel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumberOfControllersOfType( 
            long nControllerType,
            long *pnNumControllersOfType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAverageMassList( 
            long *pnFirstAvgScanNumber,
            long *pnLastAvgScanNumber,
            long *pnFirstBkg1ScanNumber,
            long *pnLastBkg1ScanNumber,
            long *pnFirstBkg2ScanNumber,
            long *pnLastBkg2ScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsThereMSData( 
            long *pbMSData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE HasExpMethod( 
            long *pbMethod) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFilterMassPrecision( 
            long *pnFilterMassPrecision) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatusLogForPos( 
            long nPos,
            VARIANT *pvarRT,
            VARIANT *pvarValue,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStatusLogPlottableIndex( 
            VARIANT *pvarIndex,
            VARIANT *pvarValues,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstMethodNames( 
            long *pnNumInstMethods,
            VARIANT *pvarNames) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetMassTolerance( 
            long bUseUserDefined,
            double dMassTolerance,
            long nUnits) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChros( 
            long nNumChros,
            double *pdStartTime,
            double *pdEndTime,
            VARIANT *pvarChroParamsArray,
            VARIANT *pvarChroDataSizeArray,
            VARIANT *pvarChroDataArray,
            VARIANT *pvarPeakFlagsArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXRawfileVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXRawfile * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXRawfile * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXRawfile * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IXRawfile * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IXRawfile * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IXRawfile * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IXRawfile * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IXRawfile * This,
            BSTR szFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IXRawfile * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IXRawfile * This,
            BSTR *pbstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCreatorID )( 
            IXRawfile * This,
            BSTR *pbstrCreatorID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )( 
            IXRawfile * This,
            long *pnVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCreationDate )( 
            IXRawfile * This,
            DATE *pCreationDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsError )( 
            IXRawfile * This,
            long *pbIsError);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsNewFile )( 
            IXRawfile * This,
            long *pbIsNewFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorCode )( 
            IXRawfile * This,
            long *pnErrorCode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorMessage )( 
            IXRawfile * This,
            BSTR *pbstrErrorMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWarningMessage )( 
            IXRawfile * This,
            BSTR *pbstrWarningMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowNumber )( 
            IXRawfile * This,
            long *pnSeqRowNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleType )( 
            IXRawfile * This,
            long *pnSampleType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowDataPath )( 
            IXRawfile * This,
            BSTR *pbstrDataPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowRawFileName )( 
            IXRawfile * This,
            BSTR *pbstrRawFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleName )( 
            IXRawfile * This,
            BSTR *pbstrSampleName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleID )( 
            IXRawfile * This,
            BSTR *pbstrSampleID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowComment )( 
            IXRawfile * This,
            BSTR *pbstrComment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowLevelName )( 
            IXRawfile * This,
            BSTR *pbstrLevelName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserText )( 
            IXRawfile * This,
            long nIndex,
            BSTR *pbstrUserText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowInstrumentMethod )( 
            IXRawfile * This,
            BSTR *pbstrInstrumentMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowProcessingMethod )( 
            IXRawfile * This,
            BSTR *pbstrProcessingMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowCalibrationFile )( 
            IXRawfile * This,
            BSTR *pbstrCalibrationFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowVial )( 
            IXRawfile * This,
            BSTR *pbstrVial);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowInjectionVolume )( 
            IXRawfile * This,
            double *pdInjVol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleWeight )( 
            IXRawfile * This,
            double *pdSampleWt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleVolume )( 
            IXRawfile * This,
            double *pdSampleVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowISTDAmount )( 
            IXRawfile * This,
            double *pdISTDAmount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowDilutionFactor )( 
            IXRawfile * This,
            double *pdDilutionFactor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserLabel )( 
            IXRawfile * This,
            long nIndex,
            BSTR *pbstrUserLabel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InAcquisition )( 
            IXRawfile * This,
            long *pbInAcquisition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfControllers )( 
            IXRawfile * This,
            long *pnNumControllers);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetControllerType )( 
            IXRawfile * This,
            long nIndex,
            long *pnControllerType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCurrentController )( 
            IXRawfile * This,
            long nControllerType,
            long nControllerNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentController )( 
            IXRawfile * This,
            long *pnControllerType,
            long *pnControllerNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumSpectra )( 
            IXRawfile * This,
            long *pnNumberOfSpectra);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumStatusLog )( 
            IXRawfile * This,
            long *pnNumberOfStatusLogEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumErrorLog )( 
            IXRawfile * This,
            long *pnNumberOfErrorLogEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumTuneData )( 
            IXRawfile * This,
            long *pnNumTuneData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassResolution )( 
            IXRawfile * This,
            double *pdMassResolution);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExpectedRunTime )( 
            IXRawfile * This,
            double *pdExpectedRunTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumTrailerExtra )( 
            IXRawfile * This,
            long *pnNumberOfTrailerExtraEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLowMass )( 
            IXRawfile * This,
            double *pdLowMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHighMass )( 
            IXRawfile * This,
            double *pdHighMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStartTime )( 
            IXRawfile * This,
            double *pdStartTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEndTime )( 
            IXRawfile * This,
            double *pdEndTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMaxIntegratedIntensity )( 
            IXRawfile * This,
            double *pdMaxIntegIntensity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMaxIntensity )( 
            IXRawfile * This,
            long *pnMaxIntensity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstSpectrumNumber )( 
            IXRawfile * This,
            long *pnFirstSpectrum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLastSpectrumNumber )( 
            IXRawfile * This,
            long *pnLastSpectrum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstrumentID )( 
            IXRawfile * This,
            long *pnInstrumentID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInletID )( 
            IXRawfile * This,
            long *pnInletID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorFlag )( 
            IXRawfile * This,
            long *pnErrorFlag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleVolume )( 
            IXRawfile * This,
            double *pdSampleVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleWeight )( 
            IXRawfile * This,
            double *pdSampleWeight);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVialNumber )( 
            IXRawfile * This,
            long *pnVialNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInjectionVolume )( 
            IXRawfile * This,
            double *pdInjectionVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXRawfile * This,
            BSTR *pbstrFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAcquisitionFileName )( 
            IXRawfile * This,
            BSTR *pbstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstrumentDescription )( 
            IXRawfile * This,
            BSTR *pbstrInstrumentDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAcquisitionDate )( 
            IXRawfile * This,
            BSTR *pbstrAcquisitionDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOperator )( 
            IXRawfile * This,
            BSTR *pbstrOperator);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComment1 )( 
            IXRawfile * This,
            BSTR *pbstrComment1);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComment2 )( 
            IXRawfile * This,
            BSTR *pbstrComment2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleAmountUnits )( 
            IXRawfile * This,
            BSTR *pbstrSampleAmountUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInjectionAmountUnits )( 
            IXRawfile * This,
            BSTR *pbstrInjectionAmountUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleVolumeUnits )( 
            IXRawfile * This,
            BSTR *pbstrSampleVolumeUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilters )( 
            IXRawfile * This,
            VARIANT *pvarFilterArray,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScanNumFromRT )( 
            IXRawfile * This,
            double dRT,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RTFromScanNum )( 
            IXRawfile * This,
            long nScanNumber,
            double *pdRT);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterForScanNum )( 
            IXRawfile * This,
            long nScanNumber,
            BSTR *pbstrFilter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterForScanRT )( 
            IXRawfile * This,
            double dRT,
            BSTR *pbstrFilter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListFromScanNum )( 
            IXRawfile * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListFromRT )( 
            IXRawfile * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextMassListFromScanNum )( 
            IXRawfile * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrevMassListFromScanNum )( 
            IXRawfile * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsProfileScanForScanNum )( 
            IXRawfile * This,
            long nScanNumber,
            long *pbIsProfileScan);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsCentroidScanForScanNum )( 
            IXRawfile * This,
            long nScanNumber,
            long *pbIsCentroidScan);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScanHeaderInfoForScanNum )( 
            IXRawfile * This,
            long nScanNumber,
            long *pnNumPackets,
            double *pdStartTime,
            double *pdLowMass,
            double *pdHighMass,
            double *pdTIC,
            double *pdBasePeakMass,
            double *pdBasePeakIntensity,
            long *pnNumChannels,
            long *pbUniformTime,
            double *pdFrequency);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForScanNum )( 
            IXRawfile * This,
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForRT )( 
            IXRawfile * This,
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogLabelsForScanNum )( 
            IXRawfile * This,
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogLabelsForRT )( 
            IXRawfile * This,
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogValueForScanNum )( 
            IXRawfile * This,
            long nScanNumber,
            BSTR bstrLabel,
            double *pdStatusLogRT,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogValueForRT )( 
            IXRawfile * This,
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraForScanNum )( 
            IXRawfile * This,
            long nScanNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraForRT )( 
            IXRawfile * This,
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraLabelsForScanNum )( 
            IXRawfile * This,
            long nScanNumber,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraLabelsForRT )( 
            IXRawfile * This,
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraValueForScanNum )( 
            IXRawfile * This,
            long nScanNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraValueForRT )( 
            IXRawfile * This,
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorLogItem )( 
            IXRawfile * This,
            long nItemNumber,
            double *pdRT,
            BSTR *pbstrErrorMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneData )( 
            IXRawfile * This,
            long nSegmentNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumInstMethods )( 
            IXRawfile * This,
            long *pnNumInstMethods);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstMethod )( 
            IXRawfile * This,
            long nInstMethodItem,
            BSTR *pbstrInstMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChroData )( 
            IXRawfile * This,
            long nChroType1,
            long nChroOperator,
            long nChroType2,
            BSTR bstrFilter,
            BSTR bstrMassRanges1,
            BSTR bstrMassRanges2,
            double dDelay,
            double *pdStartTime,
            double *pdEndTime,
            long nSmoothingType,
            long nSmoothingValue,
            VARIANT *pvarChroData,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RefreshViewOfFile )( 
            IXRawfile * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneDataValue )( 
            IXRawfile * This,
            long nSegmentNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneDataLabels )( 
            IXRawfile * This,
            long nSegmentNumber,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstName )( 
            IXRawfile * This,
            BSTR *pbstrInstName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstModel )( 
            IXRawfile * This,
            BSTR *pbstrInstModel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstSerialNumber )( 
            IXRawfile * This,
            BSTR *pbstrInstSerialNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstSoftwareVersion )( 
            IXRawfile * This,
            BSTR *pbstrInstSoftwareVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstHardwareVersion )( 
            IXRawfile * This,
            BSTR *pbstrInstHardwareVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstFlags )( 
            IXRawfile * This,
            BSTR *pbstrInstFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstNumChannelLabels )( 
            IXRawfile * This,
            long *pnInstNumChannelLabels);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstChannelLabel )( 
            IXRawfile * This,
            long nChannelLabelNumber,
            BSTR *pbstrInstChannelLabel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfControllersOfType )( 
            IXRawfile * This,
            long nControllerType,
            long *pnNumControllersOfType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAverageMassList )( 
            IXRawfile * This,
            long *pnFirstAvgScanNumber,
            long *pnLastAvgScanNumber,
            long *pnFirstBkg1ScanNumber,
            long *pnLastBkg1ScanNumber,
            long *pnFirstBkg2ScanNumber,
            long *pnLastBkg2ScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsThereMSData )( 
            IXRawfile * This,
            long *pbMSData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasExpMethod )( 
            IXRawfile * This,
            long *pbMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterMassPrecision )( 
            IXRawfile * This,
            long *pnFilterMassPrecision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForPos )( 
            IXRawfile * This,
            long nPos,
            VARIANT *pvarRT,
            VARIANT *pvarValue,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogPlottableIndex )( 
            IXRawfile * This,
            VARIANT *pvarIndex,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstMethodNames )( 
            IXRawfile * This,
            long *pnNumInstMethods,
            VARIANT *pvarNames);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMassTolerance )( 
            IXRawfile * This,
            long bUseUserDefined,
            double dMassTolerance,
            long nUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChros )( 
            IXRawfile * This,
            long nNumChros,
            double *pdStartTime,
            double *pdEndTime,
            VARIANT *pvarChroParamsArray,
            VARIANT *pvarChroDataSizeArray,
            VARIANT *pvarChroDataArray,
            VARIANT *pvarPeakFlagsArray);
        
        END_INTERFACE
    } IXRawfileVtbl;

    interface IXRawfile
    {
        CONST_VTBL struct IXRawfileVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXRawfile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXRawfile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXRawfile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXRawfile_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IXRawfile_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IXRawfile_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IXRawfile_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IXRawfile_Open(This,szFileName)	\
    ( (This)->lpVtbl -> Open(This,szFileName) ) 

#define IXRawfile_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IXRawfile_GetFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetFileName(This,pbstrFileName) ) 

#define IXRawfile_GetCreatorID(This,pbstrCreatorID)	\
    ( (This)->lpVtbl -> GetCreatorID(This,pbstrCreatorID) ) 

#define IXRawfile_GetVersionNumber(This,pnVersion)	\
    ( (This)->lpVtbl -> GetVersionNumber(This,pnVersion) ) 

#define IXRawfile_GetCreationDate(This,pCreationDate)	\
    ( (This)->lpVtbl -> GetCreationDate(This,pCreationDate) ) 

#define IXRawfile_IsError(This,pbIsError)	\
    ( (This)->lpVtbl -> IsError(This,pbIsError) ) 

#define IXRawfile_IsNewFile(This,pbIsNewFile)	\
    ( (This)->lpVtbl -> IsNewFile(This,pbIsNewFile) ) 

#define IXRawfile_GetErrorCode(This,pnErrorCode)	\
    ( (This)->lpVtbl -> GetErrorCode(This,pnErrorCode) ) 

#define IXRawfile_GetErrorMessage(This,pbstrErrorMessage)	\
    ( (This)->lpVtbl -> GetErrorMessage(This,pbstrErrorMessage) ) 

#define IXRawfile_GetWarningMessage(This,pbstrWarningMessage)	\
    ( (This)->lpVtbl -> GetWarningMessage(This,pbstrWarningMessage) ) 

#define IXRawfile_GetSeqRowNumber(This,pnSeqRowNumber)	\
    ( (This)->lpVtbl -> GetSeqRowNumber(This,pnSeqRowNumber) ) 

#define IXRawfile_GetSeqRowSampleType(This,pnSampleType)	\
    ( (This)->lpVtbl -> GetSeqRowSampleType(This,pnSampleType) ) 

#define IXRawfile_GetSeqRowDataPath(This,pbstrDataPath)	\
    ( (This)->lpVtbl -> GetSeqRowDataPath(This,pbstrDataPath) ) 

#define IXRawfile_GetSeqRowRawFileName(This,pbstrRawFileName)	\
    ( (This)->lpVtbl -> GetSeqRowRawFileName(This,pbstrRawFileName) ) 

#define IXRawfile_GetSeqRowSampleName(This,pbstrSampleName)	\
    ( (This)->lpVtbl -> GetSeqRowSampleName(This,pbstrSampleName) ) 

#define IXRawfile_GetSeqRowSampleID(This,pbstrSampleID)	\
    ( (This)->lpVtbl -> GetSeqRowSampleID(This,pbstrSampleID) ) 

#define IXRawfile_GetSeqRowComment(This,pbstrComment)	\
    ( (This)->lpVtbl -> GetSeqRowComment(This,pbstrComment) ) 

#define IXRawfile_GetSeqRowLevelName(This,pbstrLevelName)	\
    ( (This)->lpVtbl -> GetSeqRowLevelName(This,pbstrLevelName) ) 

#define IXRawfile_GetSeqRowUserText(This,nIndex,pbstrUserText)	\
    ( (This)->lpVtbl -> GetSeqRowUserText(This,nIndex,pbstrUserText) ) 

#define IXRawfile_GetSeqRowInstrumentMethod(This,pbstrInstrumentMethod)	\
    ( (This)->lpVtbl -> GetSeqRowInstrumentMethod(This,pbstrInstrumentMethod) ) 

#define IXRawfile_GetSeqRowProcessingMethod(This,pbstrProcessingMethod)	\
    ( (This)->lpVtbl -> GetSeqRowProcessingMethod(This,pbstrProcessingMethod) ) 

#define IXRawfile_GetSeqRowCalibrationFile(This,pbstrCalibrationFile)	\
    ( (This)->lpVtbl -> GetSeqRowCalibrationFile(This,pbstrCalibrationFile) ) 

#define IXRawfile_GetSeqRowVial(This,pbstrVial)	\
    ( (This)->lpVtbl -> GetSeqRowVial(This,pbstrVial) ) 

#define IXRawfile_GetSeqRowInjectionVolume(This,pdInjVol)	\
    ( (This)->lpVtbl -> GetSeqRowInjectionVolume(This,pdInjVol) ) 

#define IXRawfile_GetSeqRowSampleWeight(This,pdSampleWt)	\
    ( (This)->lpVtbl -> GetSeqRowSampleWeight(This,pdSampleWt) ) 

#define IXRawfile_GetSeqRowSampleVolume(This,pdSampleVolume)	\
    ( (This)->lpVtbl -> GetSeqRowSampleVolume(This,pdSampleVolume) ) 

#define IXRawfile_GetSeqRowISTDAmount(This,pdISTDAmount)	\
    ( (This)->lpVtbl -> GetSeqRowISTDAmount(This,pdISTDAmount) ) 

#define IXRawfile_GetSeqRowDilutionFactor(This,pdDilutionFactor)	\
    ( (This)->lpVtbl -> GetSeqRowDilutionFactor(This,pdDilutionFactor) ) 

#define IXRawfile_GetSeqRowUserLabel(This,nIndex,pbstrUserLabel)	\
    ( (This)->lpVtbl -> GetSeqRowUserLabel(This,nIndex,pbstrUserLabel) ) 

#define IXRawfile_InAcquisition(This,pbInAcquisition)	\
    ( (This)->lpVtbl -> InAcquisition(This,pbInAcquisition) ) 

#define IXRawfile_GetNumberOfControllers(This,pnNumControllers)	\
    ( (This)->lpVtbl -> GetNumberOfControllers(This,pnNumControllers) ) 

#define IXRawfile_GetControllerType(This,nIndex,pnControllerType)	\
    ( (This)->lpVtbl -> GetControllerType(This,nIndex,pnControllerType) ) 

#define IXRawfile_SetCurrentController(This,nControllerType,nControllerNumber)	\
    ( (This)->lpVtbl -> SetCurrentController(This,nControllerType,nControllerNumber) ) 

#define IXRawfile_GetCurrentController(This,pnControllerType,pnControllerNumber)	\
    ( (This)->lpVtbl -> GetCurrentController(This,pnControllerType,pnControllerNumber) ) 

#define IXRawfile_GetNumSpectra(This,pnNumberOfSpectra)	\
    ( (This)->lpVtbl -> GetNumSpectra(This,pnNumberOfSpectra) ) 

#define IXRawfile_GetNumStatusLog(This,pnNumberOfStatusLogEntries)	\
    ( (This)->lpVtbl -> GetNumStatusLog(This,pnNumberOfStatusLogEntries) ) 

#define IXRawfile_GetNumErrorLog(This,pnNumberOfErrorLogEntries)	\
    ( (This)->lpVtbl -> GetNumErrorLog(This,pnNumberOfErrorLogEntries) ) 

#define IXRawfile_GetNumTuneData(This,pnNumTuneData)	\
    ( (This)->lpVtbl -> GetNumTuneData(This,pnNumTuneData) ) 

#define IXRawfile_GetMassResolution(This,pdMassResolution)	\
    ( (This)->lpVtbl -> GetMassResolution(This,pdMassResolution) ) 

#define IXRawfile_GetExpectedRunTime(This,pdExpectedRunTime)	\
    ( (This)->lpVtbl -> GetExpectedRunTime(This,pdExpectedRunTime) ) 

#define IXRawfile_GetNumTrailerExtra(This,pnNumberOfTrailerExtraEntries)	\
    ( (This)->lpVtbl -> GetNumTrailerExtra(This,pnNumberOfTrailerExtraEntries) ) 

#define IXRawfile_GetLowMass(This,pdLowMass)	\
    ( (This)->lpVtbl -> GetLowMass(This,pdLowMass) ) 

#define IXRawfile_GetHighMass(This,pdHighMass)	\
    ( (This)->lpVtbl -> GetHighMass(This,pdHighMass) ) 

#define IXRawfile_GetStartTime(This,pdStartTime)	\
    ( (This)->lpVtbl -> GetStartTime(This,pdStartTime) ) 

#define IXRawfile_GetEndTime(This,pdEndTime)	\
    ( (This)->lpVtbl -> GetEndTime(This,pdEndTime) ) 

#define IXRawfile_GetMaxIntegratedIntensity(This,pdMaxIntegIntensity)	\
    ( (This)->lpVtbl -> GetMaxIntegratedIntensity(This,pdMaxIntegIntensity) ) 

#define IXRawfile_GetMaxIntensity(This,pnMaxIntensity)	\
    ( (This)->lpVtbl -> GetMaxIntensity(This,pnMaxIntensity) ) 

#define IXRawfile_GetFirstSpectrumNumber(This,pnFirstSpectrum)	\
    ( (This)->lpVtbl -> GetFirstSpectrumNumber(This,pnFirstSpectrum) ) 

#define IXRawfile_GetLastSpectrumNumber(This,pnLastSpectrum)	\
    ( (This)->lpVtbl -> GetLastSpectrumNumber(This,pnLastSpectrum) ) 

#define IXRawfile_GetInstrumentID(This,pnInstrumentID)	\
    ( (This)->lpVtbl -> GetInstrumentID(This,pnInstrumentID) ) 

#define IXRawfile_GetInletID(This,pnInletID)	\
    ( (This)->lpVtbl -> GetInletID(This,pnInletID) ) 

#define IXRawfile_GetErrorFlag(This,pnErrorFlag)	\
    ( (This)->lpVtbl -> GetErrorFlag(This,pnErrorFlag) ) 

#define IXRawfile_GetSampleVolume(This,pdSampleVolume)	\
    ( (This)->lpVtbl -> GetSampleVolume(This,pdSampleVolume) ) 

#define IXRawfile_GetSampleWeight(This,pdSampleWeight)	\
    ( (This)->lpVtbl -> GetSampleWeight(This,pdSampleWeight) ) 

#define IXRawfile_GetVialNumber(This,pnVialNumber)	\
    ( (This)->lpVtbl -> GetVialNumber(This,pnVialNumber) ) 

#define IXRawfile_GetInjectionVolume(This,pdInjectionVolume)	\
    ( (This)->lpVtbl -> GetInjectionVolume(This,pdInjectionVolume) ) 

#define IXRawfile_GetFlags(This,pbstrFlags)	\
    ( (This)->lpVtbl -> GetFlags(This,pbstrFlags) ) 

#define IXRawfile_GetAcquisitionFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetAcquisitionFileName(This,pbstrFileName) ) 

#define IXRawfile_GetInstrumentDescription(This,pbstrInstrumentDescription)	\
    ( (This)->lpVtbl -> GetInstrumentDescription(This,pbstrInstrumentDescription) ) 

#define IXRawfile_GetAcquisitionDate(This,pbstrAcquisitionDate)	\
    ( (This)->lpVtbl -> GetAcquisitionDate(This,pbstrAcquisitionDate) ) 

#define IXRawfile_GetOperator(This,pbstrOperator)	\
    ( (This)->lpVtbl -> GetOperator(This,pbstrOperator) ) 

#define IXRawfile_GetComment1(This,pbstrComment1)	\
    ( (This)->lpVtbl -> GetComment1(This,pbstrComment1) ) 

#define IXRawfile_GetComment2(This,pbstrComment2)	\
    ( (This)->lpVtbl -> GetComment2(This,pbstrComment2) ) 

#define IXRawfile_GetSampleAmountUnits(This,pbstrSampleAmountUnits)	\
    ( (This)->lpVtbl -> GetSampleAmountUnits(This,pbstrSampleAmountUnits) ) 

#define IXRawfile_GetInjectionAmountUnits(This,pbstrInjectionAmountUnits)	\
    ( (This)->lpVtbl -> GetInjectionAmountUnits(This,pbstrInjectionAmountUnits) ) 

#define IXRawfile_GetSampleVolumeUnits(This,pbstrSampleVolumeUnits)	\
    ( (This)->lpVtbl -> GetSampleVolumeUnits(This,pbstrSampleVolumeUnits) ) 

#define IXRawfile_GetFilters(This,pvarFilterArray,pnArraySize)	\
    ( (This)->lpVtbl -> GetFilters(This,pvarFilterArray,pnArraySize) ) 

#define IXRawfile_ScanNumFromRT(This,dRT,pnScanNumber)	\
    ( (This)->lpVtbl -> ScanNumFromRT(This,dRT,pnScanNumber) ) 

#define IXRawfile_RTFromScanNum(This,nScanNumber,pdRT)	\
    ( (This)->lpVtbl -> RTFromScanNum(This,nScanNumber,pdRT) ) 

#define IXRawfile_GetFilterForScanNum(This,nScanNumber,pbstrFilter)	\
    ( (This)->lpVtbl -> GetFilterForScanNum(This,nScanNumber,pbstrFilter) ) 

#define IXRawfile_GetFilterForScanRT(This,dRT,pbstrFilter)	\
    ( (This)->lpVtbl -> GetFilterForScanRT(This,dRT,pbstrFilter) ) 

#define IXRawfile_GetMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile_GetMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile_GetNextMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetNextMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile_GetPrevMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetPrevMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile_IsProfileScanForScanNum(This,nScanNumber,pbIsProfileScan)	\
    ( (This)->lpVtbl -> IsProfileScanForScanNum(This,nScanNumber,pbIsProfileScan) ) 

#define IXRawfile_IsCentroidScanForScanNum(This,nScanNumber,pbIsCentroidScan)	\
    ( (This)->lpVtbl -> IsCentroidScanForScanNum(This,nScanNumber,pbIsCentroidScan) ) 

#define IXRawfile_GetScanHeaderInfoForScanNum(This,nScanNumber,pnNumPackets,pdStartTime,pdLowMass,pdHighMass,pdTIC,pdBasePeakMass,pdBasePeakIntensity,pnNumChannels,pbUniformTime,pdFrequency)	\
    ( (This)->lpVtbl -> GetScanHeaderInfoForScanNum(This,nScanNumber,pnNumPackets,pdStartTime,pdLowMass,pdHighMass,pdTIC,pdBasePeakMass,pdBasePeakIntensity,pnNumChannels,pbUniformTime,pdFrequency) ) 

#define IXRawfile_GetStatusLogForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile_GetStatusLogForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile_GetStatusLogLabelsForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogLabelsForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pnArraySize) ) 

#define IXRawfile_GetStatusLogLabelsForRT(This,pdRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogLabelsForRT(This,pdRT,pvarLabels,pnArraySize) ) 

#define IXRawfile_GetStatusLogValueForScanNum(This,nScanNumber,bstrLabel,pdStatusLogRT,pvarValue)	\
    ( (This)->lpVtbl -> GetStatusLogValueForScanNum(This,nScanNumber,bstrLabel,pdStatusLogRT,pvarValue) ) 

#define IXRawfile_GetStatusLogValueForRT(This,pdRT,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetStatusLogValueForRT(This,pdRT,bstrLabel,pvarValue) ) 

#define IXRawfile_GetTrailerExtraForScanNum(This,nScanNumber,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraForScanNum(This,nScanNumber,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile_GetTrailerExtraForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile_GetTrailerExtraLabelsForScanNum(This,nScanNumber,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraLabelsForScanNum(This,nScanNumber,pvarLabels,pnArraySize) ) 

#define IXRawfile_GetTrailerExtraLabelsForRT(This,pdRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraLabelsForRT(This,pdRT,pvarLabels,pnArraySize) ) 

#define IXRawfile_GetTrailerExtraValueForScanNum(This,nScanNumber,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTrailerExtraValueForScanNum(This,nScanNumber,bstrLabel,pvarValue) ) 

#define IXRawfile_GetTrailerExtraValueForRT(This,pdRT,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTrailerExtraValueForRT(This,pdRT,bstrLabel,pvarValue) ) 

#define IXRawfile_GetErrorLogItem(This,nItemNumber,pdRT,pbstrErrorMessage)	\
    ( (This)->lpVtbl -> GetErrorLogItem(This,nItemNumber,pdRT,pbstrErrorMessage) ) 

#define IXRawfile_GetTuneData(This,nSegmentNumber,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTuneData(This,nSegmentNumber,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile_GetNumInstMethods(This,pnNumInstMethods)	\
    ( (This)->lpVtbl -> GetNumInstMethods(This,pnNumInstMethods) ) 

#define IXRawfile_GetInstMethod(This,nInstMethodItem,pbstrInstMethod)	\
    ( (This)->lpVtbl -> GetInstMethod(This,nInstMethodItem,pbstrInstMethod) ) 

#define IXRawfile_GetChroData(This,nChroType1,nChroOperator,nChroType2,bstrFilter,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetChroData(This,nChroType1,nChroOperator,nChroType2,bstrFilter,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile_RefreshViewOfFile(This)	\
    ( (This)->lpVtbl -> RefreshViewOfFile(This) ) 

#define IXRawfile_GetTuneDataValue(This,nSegmentNumber,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTuneDataValue(This,nSegmentNumber,bstrLabel,pvarValue) ) 

#define IXRawfile_GetTuneDataLabels(This,nSegmentNumber,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTuneDataLabels(This,nSegmentNumber,pvarLabels,pnArraySize) ) 

#define IXRawfile_GetInstName(This,pbstrInstName)	\
    ( (This)->lpVtbl -> GetInstName(This,pbstrInstName) ) 

#define IXRawfile_GetInstModel(This,pbstrInstModel)	\
    ( (This)->lpVtbl -> GetInstModel(This,pbstrInstModel) ) 

#define IXRawfile_GetInstSerialNumber(This,pbstrInstSerialNumber)	\
    ( (This)->lpVtbl -> GetInstSerialNumber(This,pbstrInstSerialNumber) ) 

#define IXRawfile_GetInstSoftwareVersion(This,pbstrInstSoftwareVersion)	\
    ( (This)->lpVtbl -> GetInstSoftwareVersion(This,pbstrInstSoftwareVersion) ) 

#define IXRawfile_GetInstHardwareVersion(This,pbstrInstHardwareVersion)	\
    ( (This)->lpVtbl -> GetInstHardwareVersion(This,pbstrInstHardwareVersion) ) 

#define IXRawfile_GetInstFlags(This,pbstrInstFlags)	\
    ( (This)->lpVtbl -> GetInstFlags(This,pbstrInstFlags) ) 

#define IXRawfile_GetInstNumChannelLabels(This,pnInstNumChannelLabels)	\
    ( (This)->lpVtbl -> GetInstNumChannelLabels(This,pnInstNumChannelLabels) ) 

#define IXRawfile_GetInstChannelLabel(This,nChannelLabelNumber,pbstrInstChannelLabel)	\
    ( (This)->lpVtbl -> GetInstChannelLabel(This,nChannelLabelNumber,pbstrInstChannelLabel) ) 

#define IXRawfile_GetNumberOfControllersOfType(This,nControllerType,pnNumControllersOfType)	\
    ( (This)->lpVtbl -> GetNumberOfControllersOfType(This,nControllerType,pnNumControllersOfType) ) 

#define IXRawfile_GetAverageMassList(This,pnFirstAvgScanNumber,pnLastAvgScanNumber,pnFirstBkg1ScanNumber,pnLastBkg1ScanNumber,pnFirstBkg2ScanNumber,pnLastBkg2ScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetAverageMassList(This,pnFirstAvgScanNumber,pnLastAvgScanNumber,pnFirstBkg1ScanNumber,pnLastBkg1ScanNumber,pnFirstBkg2ScanNumber,pnLastBkg2ScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile_IsThereMSData(This,pbMSData)	\
    ( (This)->lpVtbl -> IsThereMSData(This,pbMSData) ) 

#define IXRawfile_HasExpMethod(This,pbMethod)	\
    ( (This)->lpVtbl -> HasExpMethod(This,pbMethod) ) 

#define IXRawfile_GetFilterMassPrecision(This,pnFilterMassPrecision)	\
    ( (This)->lpVtbl -> GetFilterMassPrecision(This,pnFilterMassPrecision) ) 

#define IXRawfile_GetStatusLogForPos(This,nPos,pvarRT,pvarValue,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForPos(This,nPos,pvarRT,pvarValue,pnArraySize) ) 

#define IXRawfile_GetStatusLogPlottableIndex(This,pvarIndex,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogPlottableIndex(This,pvarIndex,pvarValues,pnArraySize) ) 

#define IXRawfile_GetInstMethodNames(This,pnNumInstMethods,pvarNames)	\
    ( (This)->lpVtbl -> GetInstMethodNames(This,pnNumInstMethods,pvarNames) ) 

#define IXRawfile_SetMassTolerance(This,bUseUserDefined,dMassTolerance,nUnits)	\
    ( (This)->lpVtbl -> SetMassTolerance(This,bUseUserDefined,dMassTolerance,nUnits) ) 

#define IXRawfile_GetChros(This,nNumChros,pdStartTime,pdEndTime,pvarChroParamsArray,pvarChroDataSizeArray,pvarChroDataArray,pvarPeakFlagsArray)	\
    ( (This)->lpVtbl -> GetChros(This,nNumChros,pdStartTime,pdEndTime,pvarChroParamsArray,pvarChroDataSizeArray,pvarChroDataArray,pvarPeakFlagsArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXRawfile_INTERFACE_DEFINED__ */


#ifndef __IXRawfile2_INTERFACE_DEFINED__
#define __IXRawfile2_INTERFACE_DEFINED__

/* interface IXRawfile2 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IXRawfile2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("55A25FF7-F437-471F-909A-D7F2B5930805")
    IXRawfile2 : public IXRawfile
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLabelData( 
            VARIANT *pvarLabels,
            VARIANT *pvarFlags,
            long *pnScanNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNoiseData( 
            VARIANT *pvarNoisePacket,
            long *pnScanNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSegmentedMassListFromRT( 
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize,
            VARIANT *pvarSegments,
            long *pnNumSegments,
            VARIANT *pvarLowHighMassRange) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSegmentedMassListFromScanNum( 
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize,
            VARIANT *pvarSegments,
            long *pnNumSegments,
            VARIANT *pvarLowHighMassRange) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetScanEventForScanNum( 
            long nScanNumber,
            BSTR *pbstrScanEvent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowUserTextEx( 
            long nIndex,
            BSTR *pbstrUserText) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowBarcode( 
            BSTR *pbstrBarcode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSeqRowBarcodeStatus( 
            long *pnBarcodeStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXRawfile2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXRawfile2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXRawfile2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXRawfile2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IXRawfile2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IXRawfile2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IXRawfile2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IXRawfile2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IXRawfile2 * This,
            BSTR szFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IXRawfile2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IXRawfile2 * This,
            BSTR *pbstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCreatorID )( 
            IXRawfile2 * This,
            BSTR *pbstrCreatorID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )( 
            IXRawfile2 * This,
            long *pnVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCreationDate )( 
            IXRawfile2 * This,
            DATE *pCreationDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsError )( 
            IXRawfile2 * This,
            long *pbIsError);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsNewFile )( 
            IXRawfile2 * This,
            long *pbIsNewFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorCode )( 
            IXRawfile2 * This,
            long *pnErrorCode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorMessage )( 
            IXRawfile2 * This,
            BSTR *pbstrErrorMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWarningMessage )( 
            IXRawfile2 * This,
            BSTR *pbstrWarningMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowNumber )( 
            IXRawfile2 * This,
            long *pnSeqRowNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleType )( 
            IXRawfile2 * This,
            long *pnSampleType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowDataPath )( 
            IXRawfile2 * This,
            BSTR *pbstrDataPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowRawFileName )( 
            IXRawfile2 * This,
            BSTR *pbstrRawFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleName )( 
            IXRawfile2 * This,
            BSTR *pbstrSampleName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleID )( 
            IXRawfile2 * This,
            BSTR *pbstrSampleID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowComment )( 
            IXRawfile2 * This,
            BSTR *pbstrComment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowLevelName )( 
            IXRawfile2 * This,
            BSTR *pbstrLevelName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserText )( 
            IXRawfile2 * This,
            long nIndex,
            BSTR *pbstrUserText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowInstrumentMethod )( 
            IXRawfile2 * This,
            BSTR *pbstrInstrumentMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowProcessingMethod )( 
            IXRawfile2 * This,
            BSTR *pbstrProcessingMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowCalibrationFile )( 
            IXRawfile2 * This,
            BSTR *pbstrCalibrationFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowVial )( 
            IXRawfile2 * This,
            BSTR *pbstrVial);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowInjectionVolume )( 
            IXRawfile2 * This,
            double *pdInjVol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleWeight )( 
            IXRawfile2 * This,
            double *pdSampleWt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleVolume )( 
            IXRawfile2 * This,
            double *pdSampleVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowISTDAmount )( 
            IXRawfile2 * This,
            double *pdISTDAmount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowDilutionFactor )( 
            IXRawfile2 * This,
            double *pdDilutionFactor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserLabel )( 
            IXRawfile2 * This,
            long nIndex,
            BSTR *pbstrUserLabel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InAcquisition )( 
            IXRawfile2 * This,
            long *pbInAcquisition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfControllers )( 
            IXRawfile2 * This,
            long *pnNumControllers);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetControllerType )( 
            IXRawfile2 * This,
            long nIndex,
            long *pnControllerType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCurrentController )( 
            IXRawfile2 * This,
            long nControllerType,
            long nControllerNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentController )( 
            IXRawfile2 * This,
            long *pnControllerType,
            long *pnControllerNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumSpectra )( 
            IXRawfile2 * This,
            long *pnNumberOfSpectra);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumStatusLog )( 
            IXRawfile2 * This,
            long *pnNumberOfStatusLogEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumErrorLog )( 
            IXRawfile2 * This,
            long *pnNumberOfErrorLogEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumTuneData )( 
            IXRawfile2 * This,
            long *pnNumTuneData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassResolution )( 
            IXRawfile2 * This,
            double *pdMassResolution);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExpectedRunTime )( 
            IXRawfile2 * This,
            double *pdExpectedRunTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumTrailerExtra )( 
            IXRawfile2 * This,
            long *pnNumberOfTrailerExtraEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLowMass )( 
            IXRawfile2 * This,
            double *pdLowMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHighMass )( 
            IXRawfile2 * This,
            double *pdHighMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStartTime )( 
            IXRawfile2 * This,
            double *pdStartTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEndTime )( 
            IXRawfile2 * This,
            double *pdEndTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMaxIntegratedIntensity )( 
            IXRawfile2 * This,
            double *pdMaxIntegIntensity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMaxIntensity )( 
            IXRawfile2 * This,
            long *pnMaxIntensity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstSpectrumNumber )( 
            IXRawfile2 * This,
            long *pnFirstSpectrum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLastSpectrumNumber )( 
            IXRawfile2 * This,
            long *pnLastSpectrum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstrumentID )( 
            IXRawfile2 * This,
            long *pnInstrumentID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInletID )( 
            IXRawfile2 * This,
            long *pnInletID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorFlag )( 
            IXRawfile2 * This,
            long *pnErrorFlag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleVolume )( 
            IXRawfile2 * This,
            double *pdSampleVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleWeight )( 
            IXRawfile2 * This,
            double *pdSampleWeight);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVialNumber )( 
            IXRawfile2 * This,
            long *pnVialNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInjectionVolume )( 
            IXRawfile2 * This,
            double *pdInjectionVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXRawfile2 * This,
            BSTR *pbstrFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAcquisitionFileName )( 
            IXRawfile2 * This,
            BSTR *pbstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstrumentDescription )( 
            IXRawfile2 * This,
            BSTR *pbstrInstrumentDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAcquisitionDate )( 
            IXRawfile2 * This,
            BSTR *pbstrAcquisitionDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOperator )( 
            IXRawfile2 * This,
            BSTR *pbstrOperator);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComment1 )( 
            IXRawfile2 * This,
            BSTR *pbstrComment1);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComment2 )( 
            IXRawfile2 * This,
            BSTR *pbstrComment2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleAmountUnits )( 
            IXRawfile2 * This,
            BSTR *pbstrSampleAmountUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInjectionAmountUnits )( 
            IXRawfile2 * This,
            BSTR *pbstrInjectionAmountUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleVolumeUnits )( 
            IXRawfile2 * This,
            BSTR *pbstrSampleVolumeUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilters )( 
            IXRawfile2 * This,
            VARIANT *pvarFilterArray,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScanNumFromRT )( 
            IXRawfile2 * This,
            double dRT,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RTFromScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            double *pdRT);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterForScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            BSTR *pbstrFilter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterForScanRT )( 
            IXRawfile2 * This,
            double dRT,
            BSTR *pbstrFilter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListFromScanNum )( 
            IXRawfile2 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListFromRT )( 
            IXRawfile2 * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextMassListFromScanNum )( 
            IXRawfile2 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrevMassListFromScanNum )( 
            IXRawfile2 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsProfileScanForScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            long *pbIsProfileScan);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsCentroidScanForScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            long *pbIsCentroidScan);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScanHeaderInfoForScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            long *pnNumPackets,
            double *pdStartTime,
            double *pdLowMass,
            double *pdHighMass,
            double *pdTIC,
            double *pdBasePeakMass,
            double *pdBasePeakIntensity,
            long *pnNumChannels,
            long *pbUniformTime,
            double *pdFrequency);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForRT )( 
            IXRawfile2 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogLabelsForScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogLabelsForRT )( 
            IXRawfile2 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogValueForScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            BSTR bstrLabel,
            double *pdStatusLogRT,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogValueForRT )( 
            IXRawfile2 * This,
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraForScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraForRT )( 
            IXRawfile2 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraLabelsForScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraLabelsForRT )( 
            IXRawfile2 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraValueForScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraValueForRT )( 
            IXRawfile2 * This,
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorLogItem )( 
            IXRawfile2 * This,
            long nItemNumber,
            double *pdRT,
            BSTR *pbstrErrorMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneData )( 
            IXRawfile2 * This,
            long nSegmentNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumInstMethods )( 
            IXRawfile2 * This,
            long *pnNumInstMethods);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstMethod )( 
            IXRawfile2 * This,
            long nInstMethodItem,
            BSTR *pbstrInstMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChroData )( 
            IXRawfile2 * This,
            long nChroType1,
            long nChroOperator,
            long nChroType2,
            BSTR bstrFilter,
            BSTR bstrMassRanges1,
            BSTR bstrMassRanges2,
            double dDelay,
            double *pdStartTime,
            double *pdEndTime,
            long nSmoothingType,
            long nSmoothingValue,
            VARIANT *pvarChroData,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RefreshViewOfFile )( 
            IXRawfile2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneDataValue )( 
            IXRawfile2 * This,
            long nSegmentNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneDataLabels )( 
            IXRawfile2 * This,
            long nSegmentNumber,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstName )( 
            IXRawfile2 * This,
            BSTR *pbstrInstName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstModel )( 
            IXRawfile2 * This,
            BSTR *pbstrInstModel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstSerialNumber )( 
            IXRawfile2 * This,
            BSTR *pbstrInstSerialNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstSoftwareVersion )( 
            IXRawfile2 * This,
            BSTR *pbstrInstSoftwareVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstHardwareVersion )( 
            IXRawfile2 * This,
            BSTR *pbstrInstHardwareVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstFlags )( 
            IXRawfile2 * This,
            BSTR *pbstrInstFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstNumChannelLabels )( 
            IXRawfile2 * This,
            long *pnInstNumChannelLabels);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstChannelLabel )( 
            IXRawfile2 * This,
            long nChannelLabelNumber,
            BSTR *pbstrInstChannelLabel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfControllersOfType )( 
            IXRawfile2 * This,
            long nControllerType,
            long *pnNumControllersOfType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAverageMassList )( 
            IXRawfile2 * This,
            long *pnFirstAvgScanNumber,
            long *pnLastAvgScanNumber,
            long *pnFirstBkg1ScanNumber,
            long *pnLastBkg1ScanNumber,
            long *pnFirstBkg2ScanNumber,
            long *pnLastBkg2ScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsThereMSData )( 
            IXRawfile2 * This,
            long *pbMSData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasExpMethod )( 
            IXRawfile2 * This,
            long *pbMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterMassPrecision )( 
            IXRawfile2 * This,
            long *pnFilterMassPrecision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForPos )( 
            IXRawfile2 * This,
            long nPos,
            VARIANT *pvarRT,
            VARIANT *pvarValue,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogPlottableIndex )( 
            IXRawfile2 * This,
            VARIANT *pvarIndex,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstMethodNames )( 
            IXRawfile2 * This,
            long *pnNumInstMethods,
            VARIANT *pvarNames);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMassTolerance )( 
            IXRawfile2 * This,
            long bUseUserDefined,
            double dMassTolerance,
            long nUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChros )( 
            IXRawfile2 * This,
            long nNumChros,
            double *pdStartTime,
            double *pdEndTime,
            VARIANT *pvarChroParamsArray,
            VARIANT *pvarChroDataSizeArray,
            VARIANT *pvarChroDataArray,
            VARIANT *pvarPeakFlagsArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLabelData )( 
            IXRawfile2 * This,
            VARIANT *pvarLabels,
            VARIANT *pvarFlags,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNoiseData )( 
            IXRawfile2 * This,
            VARIANT *pvarNoisePacket,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSegmentedMassListFromRT )( 
            IXRawfile2 * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize,
            VARIANT *pvarSegments,
            long *pnNumSegments,
            VARIANT *pvarLowHighMassRange);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSegmentedMassListFromScanNum )( 
            IXRawfile2 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize,
            VARIANT *pvarSegments,
            long *pnNumSegments,
            VARIANT *pvarLowHighMassRange);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScanEventForScanNum )( 
            IXRawfile2 * This,
            long nScanNumber,
            BSTR *pbstrScanEvent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserTextEx )( 
            IXRawfile2 * This,
            long nIndex,
            BSTR *pbstrUserText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowBarcode )( 
            IXRawfile2 * This,
            BSTR *pbstrBarcode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowBarcodeStatus )( 
            IXRawfile2 * This,
            long *pnBarcodeStatus);
        
        END_INTERFACE
    } IXRawfile2Vtbl;

    interface IXRawfile2
    {
        CONST_VTBL struct IXRawfile2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXRawfile2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXRawfile2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXRawfile2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXRawfile2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IXRawfile2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IXRawfile2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IXRawfile2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IXRawfile2_Open(This,szFileName)	\
    ( (This)->lpVtbl -> Open(This,szFileName) ) 

#define IXRawfile2_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IXRawfile2_GetFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetFileName(This,pbstrFileName) ) 

#define IXRawfile2_GetCreatorID(This,pbstrCreatorID)	\
    ( (This)->lpVtbl -> GetCreatorID(This,pbstrCreatorID) ) 

#define IXRawfile2_GetVersionNumber(This,pnVersion)	\
    ( (This)->lpVtbl -> GetVersionNumber(This,pnVersion) ) 

#define IXRawfile2_GetCreationDate(This,pCreationDate)	\
    ( (This)->lpVtbl -> GetCreationDate(This,pCreationDate) ) 

#define IXRawfile2_IsError(This,pbIsError)	\
    ( (This)->lpVtbl -> IsError(This,pbIsError) ) 

#define IXRawfile2_IsNewFile(This,pbIsNewFile)	\
    ( (This)->lpVtbl -> IsNewFile(This,pbIsNewFile) ) 

#define IXRawfile2_GetErrorCode(This,pnErrorCode)	\
    ( (This)->lpVtbl -> GetErrorCode(This,pnErrorCode) ) 

#define IXRawfile2_GetErrorMessage(This,pbstrErrorMessage)	\
    ( (This)->lpVtbl -> GetErrorMessage(This,pbstrErrorMessage) ) 

#define IXRawfile2_GetWarningMessage(This,pbstrWarningMessage)	\
    ( (This)->lpVtbl -> GetWarningMessage(This,pbstrWarningMessage) ) 

#define IXRawfile2_GetSeqRowNumber(This,pnSeqRowNumber)	\
    ( (This)->lpVtbl -> GetSeqRowNumber(This,pnSeqRowNumber) ) 

#define IXRawfile2_GetSeqRowSampleType(This,pnSampleType)	\
    ( (This)->lpVtbl -> GetSeqRowSampleType(This,pnSampleType) ) 

#define IXRawfile2_GetSeqRowDataPath(This,pbstrDataPath)	\
    ( (This)->lpVtbl -> GetSeqRowDataPath(This,pbstrDataPath) ) 

#define IXRawfile2_GetSeqRowRawFileName(This,pbstrRawFileName)	\
    ( (This)->lpVtbl -> GetSeqRowRawFileName(This,pbstrRawFileName) ) 

#define IXRawfile2_GetSeqRowSampleName(This,pbstrSampleName)	\
    ( (This)->lpVtbl -> GetSeqRowSampleName(This,pbstrSampleName) ) 

#define IXRawfile2_GetSeqRowSampleID(This,pbstrSampleID)	\
    ( (This)->lpVtbl -> GetSeqRowSampleID(This,pbstrSampleID) ) 

#define IXRawfile2_GetSeqRowComment(This,pbstrComment)	\
    ( (This)->lpVtbl -> GetSeqRowComment(This,pbstrComment) ) 

#define IXRawfile2_GetSeqRowLevelName(This,pbstrLevelName)	\
    ( (This)->lpVtbl -> GetSeqRowLevelName(This,pbstrLevelName) ) 

#define IXRawfile2_GetSeqRowUserText(This,nIndex,pbstrUserText)	\
    ( (This)->lpVtbl -> GetSeqRowUserText(This,nIndex,pbstrUserText) ) 

#define IXRawfile2_GetSeqRowInstrumentMethod(This,pbstrInstrumentMethod)	\
    ( (This)->lpVtbl -> GetSeqRowInstrumentMethod(This,pbstrInstrumentMethod) ) 

#define IXRawfile2_GetSeqRowProcessingMethod(This,pbstrProcessingMethod)	\
    ( (This)->lpVtbl -> GetSeqRowProcessingMethod(This,pbstrProcessingMethod) ) 

#define IXRawfile2_GetSeqRowCalibrationFile(This,pbstrCalibrationFile)	\
    ( (This)->lpVtbl -> GetSeqRowCalibrationFile(This,pbstrCalibrationFile) ) 

#define IXRawfile2_GetSeqRowVial(This,pbstrVial)	\
    ( (This)->lpVtbl -> GetSeqRowVial(This,pbstrVial) ) 

#define IXRawfile2_GetSeqRowInjectionVolume(This,pdInjVol)	\
    ( (This)->lpVtbl -> GetSeqRowInjectionVolume(This,pdInjVol) ) 

#define IXRawfile2_GetSeqRowSampleWeight(This,pdSampleWt)	\
    ( (This)->lpVtbl -> GetSeqRowSampleWeight(This,pdSampleWt) ) 

#define IXRawfile2_GetSeqRowSampleVolume(This,pdSampleVolume)	\
    ( (This)->lpVtbl -> GetSeqRowSampleVolume(This,pdSampleVolume) ) 

#define IXRawfile2_GetSeqRowISTDAmount(This,pdISTDAmount)	\
    ( (This)->lpVtbl -> GetSeqRowISTDAmount(This,pdISTDAmount) ) 

#define IXRawfile2_GetSeqRowDilutionFactor(This,pdDilutionFactor)	\
    ( (This)->lpVtbl -> GetSeqRowDilutionFactor(This,pdDilutionFactor) ) 

#define IXRawfile2_GetSeqRowUserLabel(This,nIndex,pbstrUserLabel)	\
    ( (This)->lpVtbl -> GetSeqRowUserLabel(This,nIndex,pbstrUserLabel) ) 

#define IXRawfile2_InAcquisition(This,pbInAcquisition)	\
    ( (This)->lpVtbl -> InAcquisition(This,pbInAcquisition) ) 

#define IXRawfile2_GetNumberOfControllers(This,pnNumControllers)	\
    ( (This)->lpVtbl -> GetNumberOfControllers(This,pnNumControllers) ) 

#define IXRawfile2_GetControllerType(This,nIndex,pnControllerType)	\
    ( (This)->lpVtbl -> GetControllerType(This,nIndex,pnControllerType) ) 

#define IXRawfile2_SetCurrentController(This,nControllerType,nControllerNumber)	\
    ( (This)->lpVtbl -> SetCurrentController(This,nControllerType,nControllerNumber) ) 

#define IXRawfile2_GetCurrentController(This,pnControllerType,pnControllerNumber)	\
    ( (This)->lpVtbl -> GetCurrentController(This,pnControllerType,pnControllerNumber) ) 

#define IXRawfile2_GetNumSpectra(This,pnNumberOfSpectra)	\
    ( (This)->lpVtbl -> GetNumSpectra(This,pnNumberOfSpectra) ) 

#define IXRawfile2_GetNumStatusLog(This,pnNumberOfStatusLogEntries)	\
    ( (This)->lpVtbl -> GetNumStatusLog(This,pnNumberOfStatusLogEntries) ) 

#define IXRawfile2_GetNumErrorLog(This,pnNumberOfErrorLogEntries)	\
    ( (This)->lpVtbl -> GetNumErrorLog(This,pnNumberOfErrorLogEntries) ) 

#define IXRawfile2_GetNumTuneData(This,pnNumTuneData)	\
    ( (This)->lpVtbl -> GetNumTuneData(This,pnNumTuneData) ) 

#define IXRawfile2_GetMassResolution(This,pdMassResolution)	\
    ( (This)->lpVtbl -> GetMassResolution(This,pdMassResolution) ) 

#define IXRawfile2_GetExpectedRunTime(This,pdExpectedRunTime)	\
    ( (This)->lpVtbl -> GetExpectedRunTime(This,pdExpectedRunTime) ) 

#define IXRawfile2_GetNumTrailerExtra(This,pnNumberOfTrailerExtraEntries)	\
    ( (This)->lpVtbl -> GetNumTrailerExtra(This,pnNumberOfTrailerExtraEntries) ) 

#define IXRawfile2_GetLowMass(This,pdLowMass)	\
    ( (This)->lpVtbl -> GetLowMass(This,pdLowMass) ) 

#define IXRawfile2_GetHighMass(This,pdHighMass)	\
    ( (This)->lpVtbl -> GetHighMass(This,pdHighMass) ) 

#define IXRawfile2_GetStartTime(This,pdStartTime)	\
    ( (This)->lpVtbl -> GetStartTime(This,pdStartTime) ) 

#define IXRawfile2_GetEndTime(This,pdEndTime)	\
    ( (This)->lpVtbl -> GetEndTime(This,pdEndTime) ) 

#define IXRawfile2_GetMaxIntegratedIntensity(This,pdMaxIntegIntensity)	\
    ( (This)->lpVtbl -> GetMaxIntegratedIntensity(This,pdMaxIntegIntensity) ) 

#define IXRawfile2_GetMaxIntensity(This,pnMaxIntensity)	\
    ( (This)->lpVtbl -> GetMaxIntensity(This,pnMaxIntensity) ) 

#define IXRawfile2_GetFirstSpectrumNumber(This,pnFirstSpectrum)	\
    ( (This)->lpVtbl -> GetFirstSpectrumNumber(This,pnFirstSpectrum) ) 

#define IXRawfile2_GetLastSpectrumNumber(This,pnLastSpectrum)	\
    ( (This)->lpVtbl -> GetLastSpectrumNumber(This,pnLastSpectrum) ) 

#define IXRawfile2_GetInstrumentID(This,pnInstrumentID)	\
    ( (This)->lpVtbl -> GetInstrumentID(This,pnInstrumentID) ) 

#define IXRawfile2_GetInletID(This,pnInletID)	\
    ( (This)->lpVtbl -> GetInletID(This,pnInletID) ) 

#define IXRawfile2_GetErrorFlag(This,pnErrorFlag)	\
    ( (This)->lpVtbl -> GetErrorFlag(This,pnErrorFlag) ) 

#define IXRawfile2_GetSampleVolume(This,pdSampleVolume)	\
    ( (This)->lpVtbl -> GetSampleVolume(This,pdSampleVolume) ) 

#define IXRawfile2_GetSampleWeight(This,pdSampleWeight)	\
    ( (This)->lpVtbl -> GetSampleWeight(This,pdSampleWeight) ) 

#define IXRawfile2_GetVialNumber(This,pnVialNumber)	\
    ( (This)->lpVtbl -> GetVialNumber(This,pnVialNumber) ) 

#define IXRawfile2_GetInjectionVolume(This,pdInjectionVolume)	\
    ( (This)->lpVtbl -> GetInjectionVolume(This,pdInjectionVolume) ) 

#define IXRawfile2_GetFlags(This,pbstrFlags)	\
    ( (This)->lpVtbl -> GetFlags(This,pbstrFlags) ) 

#define IXRawfile2_GetAcquisitionFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetAcquisitionFileName(This,pbstrFileName) ) 

#define IXRawfile2_GetInstrumentDescription(This,pbstrInstrumentDescription)	\
    ( (This)->lpVtbl -> GetInstrumentDescription(This,pbstrInstrumentDescription) ) 

#define IXRawfile2_GetAcquisitionDate(This,pbstrAcquisitionDate)	\
    ( (This)->lpVtbl -> GetAcquisitionDate(This,pbstrAcquisitionDate) ) 

#define IXRawfile2_GetOperator(This,pbstrOperator)	\
    ( (This)->lpVtbl -> GetOperator(This,pbstrOperator) ) 

#define IXRawfile2_GetComment1(This,pbstrComment1)	\
    ( (This)->lpVtbl -> GetComment1(This,pbstrComment1) ) 

#define IXRawfile2_GetComment2(This,pbstrComment2)	\
    ( (This)->lpVtbl -> GetComment2(This,pbstrComment2) ) 

#define IXRawfile2_GetSampleAmountUnits(This,pbstrSampleAmountUnits)	\
    ( (This)->lpVtbl -> GetSampleAmountUnits(This,pbstrSampleAmountUnits) ) 

#define IXRawfile2_GetInjectionAmountUnits(This,pbstrInjectionAmountUnits)	\
    ( (This)->lpVtbl -> GetInjectionAmountUnits(This,pbstrInjectionAmountUnits) ) 

#define IXRawfile2_GetSampleVolumeUnits(This,pbstrSampleVolumeUnits)	\
    ( (This)->lpVtbl -> GetSampleVolumeUnits(This,pbstrSampleVolumeUnits) ) 

#define IXRawfile2_GetFilters(This,pvarFilterArray,pnArraySize)	\
    ( (This)->lpVtbl -> GetFilters(This,pvarFilterArray,pnArraySize) ) 

#define IXRawfile2_ScanNumFromRT(This,dRT,pnScanNumber)	\
    ( (This)->lpVtbl -> ScanNumFromRT(This,dRT,pnScanNumber) ) 

#define IXRawfile2_RTFromScanNum(This,nScanNumber,pdRT)	\
    ( (This)->lpVtbl -> RTFromScanNum(This,nScanNumber,pdRT) ) 

#define IXRawfile2_GetFilterForScanNum(This,nScanNumber,pbstrFilter)	\
    ( (This)->lpVtbl -> GetFilterForScanNum(This,nScanNumber,pbstrFilter) ) 

#define IXRawfile2_GetFilterForScanRT(This,dRT,pbstrFilter)	\
    ( (This)->lpVtbl -> GetFilterForScanRT(This,dRT,pbstrFilter) ) 

#define IXRawfile2_GetMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile2_GetMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile2_GetNextMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetNextMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile2_GetPrevMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetPrevMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile2_IsProfileScanForScanNum(This,nScanNumber,pbIsProfileScan)	\
    ( (This)->lpVtbl -> IsProfileScanForScanNum(This,nScanNumber,pbIsProfileScan) ) 

#define IXRawfile2_IsCentroidScanForScanNum(This,nScanNumber,pbIsCentroidScan)	\
    ( (This)->lpVtbl -> IsCentroidScanForScanNum(This,nScanNumber,pbIsCentroidScan) ) 

#define IXRawfile2_GetScanHeaderInfoForScanNum(This,nScanNumber,pnNumPackets,pdStartTime,pdLowMass,pdHighMass,pdTIC,pdBasePeakMass,pdBasePeakIntensity,pnNumChannels,pbUniformTime,pdFrequency)	\
    ( (This)->lpVtbl -> GetScanHeaderInfoForScanNum(This,nScanNumber,pnNumPackets,pdStartTime,pdLowMass,pdHighMass,pdTIC,pdBasePeakMass,pdBasePeakIntensity,pnNumChannels,pbUniformTime,pdFrequency) ) 

#define IXRawfile2_GetStatusLogForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile2_GetStatusLogForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile2_GetStatusLogLabelsForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogLabelsForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pnArraySize) ) 

#define IXRawfile2_GetStatusLogLabelsForRT(This,pdRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogLabelsForRT(This,pdRT,pvarLabels,pnArraySize) ) 

#define IXRawfile2_GetStatusLogValueForScanNum(This,nScanNumber,bstrLabel,pdStatusLogRT,pvarValue)	\
    ( (This)->lpVtbl -> GetStatusLogValueForScanNum(This,nScanNumber,bstrLabel,pdStatusLogRT,pvarValue) ) 

#define IXRawfile2_GetStatusLogValueForRT(This,pdRT,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetStatusLogValueForRT(This,pdRT,bstrLabel,pvarValue) ) 

#define IXRawfile2_GetTrailerExtraForScanNum(This,nScanNumber,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraForScanNum(This,nScanNumber,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile2_GetTrailerExtraForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile2_GetTrailerExtraLabelsForScanNum(This,nScanNumber,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraLabelsForScanNum(This,nScanNumber,pvarLabels,pnArraySize) ) 

#define IXRawfile2_GetTrailerExtraLabelsForRT(This,pdRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraLabelsForRT(This,pdRT,pvarLabels,pnArraySize) ) 

#define IXRawfile2_GetTrailerExtraValueForScanNum(This,nScanNumber,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTrailerExtraValueForScanNum(This,nScanNumber,bstrLabel,pvarValue) ) 

#define IXRawfile2_GetTrailerExtraValueForRT(This,pdRT,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTrailerExtraValueForRT(This,pdRT,bstrLabel,pvarValue) ) 

#define IXRawfile2_GetErrorLogItem(This,nItemNumber,pdRT,pbstrErrorMessage)	\
    ( (This)->lpVtbl -> GetErrorLogItem(This,nItemNumber,pdRT,pbstrErrorMessage) ) 

#define IXRawfile2_GetTuneData(This,nSegmentNumber,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTuneData(This,nSegmentNumber,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile2_GetNumInstMethods(This,pnNumInstMethods)	\
    ( (This)->lpVtbl -> GetNumInstMethods(This,pnNumInstMethods) ) 

#define IXRawfile2_GetInstMethod(This,nInstMethodItem,pbstrInstMethod)	\
    ( (This)->lpVtbl -> GetInstMethod(This,nInstMethodItem,pbstrInstMethod) ) 

#define IXRawfile2_GetChroData(This,nChroType1,nChroOperator,nChroType2,bstrFilter,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetChroData(This,nChroType1,nChroOperator,nChroType2,bstrFilter,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile2_RefreshViewOfFile(This)	\
    ( (This)->lpVtbl -> RefreshViewOfFile(This) ) 

#define IXRawfile2_GetTuneDataValue(This,nSegmentNumber,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTuneDataValue(This,nSegmentNumber,bstrLabel,pvarValue) ) 

#define IXRawfile2_GetTuneDataLabels(This,nSegmentNumber,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTuneDataLabels(This,nSegmentNumber,pvarLabels,pnArraySize) ) 

#define IXRawfile2_GetInstName(This,pbstrInstName)	\
    ( (This)->lpVtbl -> GetInstName(This,pbstrInstName) ) 

#define IXRawfile2_GetInstModel(This,pbstrInstModel)	\
    ( (This)->lpVtbl -> GetInstModel(This,pbstrInstModel) ) 

#define IXRawfile2_GetInstSerialNumber(This,pbstrInstSerialNumber)	\
    ( (This)->lpVtbl -> GetInstSerialNumber(This,pbstrInstSerialNumber) ) 

#define IXRawfile2_GetInstSoftwareVersion(This,pbstrInstSoftwareVersion)	\
    ( (This)->lpVtbl -> GetInstSoftwareVersion(This,pbstrInstSoftwareVersion) ) 

#define IXRawfile2_GetInstHardwareVersion(This,pbstrInstHardwareVersion)	\
    ( (This)->lpVtbl -> GetInstHardwareVersion(This,pbstrInstHardwareVersion) ) 

#define IXRawfile2_GetInstFlags(This,pbstrInstFlags)	\
    ( (This)->lpVtbl -> GetInstFlags(This,pbstrInstFlags) ) 

#define IXRawfile2_GetInstNumChannelLabels(This,pnInstNumChannelLabels)	\
    ( (This)->lpVtbl -> GetInstNumChannelLabels(This,pnInstNumChannelLabels) ) 

#define IXRawfile2_GetInstChannelLabel(This,nChannelLabelNumber,pbstrInstChannelLabel)	\
    ( (This)->lpVtbl -> GetInstChannelLabel(This,nChannelLabelNumber,pbstrInstChannelLabel) ) 

#define IXRawfile2_GetNumberOfControllersOfType(This,nControllerType,pnNumControllersOfType)	\
    ( (This)->lpVtbl -> GetNumberOfControllersOfType(This,nControllerType,pnNumControllersOfType) ) 

#define IXRawfile2_GetAverageMassList(This,pnFirstAvgScanNumber,pnLastAvgScanNumber,pnFirstBkg1ScanNumber,pnLastBkg1ScanNumber,pnFirstBkg2ScanNumber,pnLastBkg2ScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetAverageMassList(This,pnFirstAvgScanNumber,pnLastAvgScanNumber,pnFirstBkg1ScanNumber,pnLastBkg1ScanNumber,pnFirstBkg2ScanNumber,pnLastBkg2ScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile2_IsThereMSData(This,pbMSData)	\
    ( (This)->lpVtbl -> IsThereMSData(This,pbMSData) ) 

#define IXRawfile2_HasExpMethod(This,pbMethod)	\
    ( (This)->lpVtbl -> HasExpMethod(This,pbMethod) ) 

#define IXRawfile2_GetFilterMassPrecision(This,pnFilterMassPrecision)	\
    ( (This)->lpVtbl -> GetFilterMassPrecision(This,pnFilterMassPrecision) ) 

#define IXRawfile2_GetStatusLogForPos(This,nPos,pvarRT,pvarValue,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForPos(This,nPos,pvarRT,pvarValue,pnArraySize) ) 

#define IXRawfile2_GetStatusLogPlottableIndex(This,pvarIndex,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogPlottableIndex(This,pvarIndex,pvarValues,pnArraySize) ) 

#define IXRawfile2_GetInstMethodNames(This,pnNumInstMethods,pvarNames)	\
    ( (This)->lpVtbl -> GetInstMethodNames(This,pnNumInstMethods,pvarNames) ) 

#define IXRawfile2_SetMassTolerance(This,bUseUserDefined,dMassTolerance,nUnits)	\
    ( (This)->lpVtbl -> SetMassTolerance(This,bUseUserDefined,dMassTolerance,nUnits) ) 

#define IXRawfile2_GetChros(This,nNumChros,pdStartTime,pdEndTime,pvarChroParamsArray,pvarChroDataSizeArray,pvarChroDataArray,pvarPeakFlagsArray)	\
    ( (This)->lpVtbl -> GetChros(This,nNumChros,pdStartTime,pdEndTime,pvarChroParamsArray,pvarChroDataSizeArray,pvarChroDataArray,pvarPeakFlagsArray) ) 


#define IXRawfile2_GetLabelData(This,pvarLabels,pvarFlags,pnScanNumber)	\
    ( (This)->lpVtbl -> GetLabelData(This,pvarLabels,pvarFlags,pnScanNumber) ) 

#define IXRawfile2_GetNoiseData(This,pvarNoisePacket,pnScanNumber)	\
    ( (This)->lpVtbl -> GetNoiseData(This,pvarNoisePacket,pnScanNumber) ) 

#define IXRawfile2_GetSegmentedMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange)	\
    ( (This)->lpVtbl -> GetSegmentedMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange) ) 

#define IXRawfile2_GetSegmentedMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange)	\
    ( (This)->lpVtbl -> GetSegmentedMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange) ) 

#define IXRawfile2_GetScanEventForScanNum(This,nScanNumber,pbstrScanEvent)	\
    ( (This)->lpVtbl -> GetScanEventForScanNum(This,nScanNumber,pbstrScanEvent) ) 

#define IXRawfile2_GetSeqRowUserTextEx(This,nIndex,pbstrUserText)	\
    ( (This)->lpVtbl -> GetSeqRowUserTextEx(This,nIndex,pbstrUserText) ) 

#define IXRawfile2_GetSeqRowBarcode(This,pbstrBarcode)	\
    ( (This)->lpVtbl -> GetSeqRowBarcode(This,pbstrBarcode) ) 

#define IXRawfile2_GetSeqRowBarcodeStatus(This,pnBarcodeStatus)	\
    ( (This)->lpVtbl -> GetSeqRowBarcodeStatus(This,pnBarcodeStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile2_GetScanEventForScanNum_Proxy( 
    IXRawfile2 * This,
    long nScanNumber,
    BSTR *pbstrScanEvent);


void __RPC_STUB IXRawfile2_GetScanEventForScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile2_GetSeqRowUserTextEx_Proxy( 
    IXRawfile2 * This,
    long nIndex,
    BSTR *pbstrUserText);


void __RPC_STUB IXRawfile2_GetSeqRowUserTextEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile2_GetSeqRowBarcode_Proxy( 
    IXRawfile2 * This,
    BSTR *pbstrBarcode);


void __RPC_STUB IXRawfile2_GetSeqRowBarcode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile2_GetSeqRowBarcodeStatus_Proxy( 
    IXRawfile2 * This,
    long *pnBarcodeStatus);


void __RPC_STUB IXRawfile2_GetSeqRowBarcodeStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXRawfile2_INTERFACE_DEFINED__ */


#ifndef __IXRawfile3_INTERFACE_DEFINED__
#define __IXRawfile3_INTERFACE_DEFINED__

/* interface IXRawfile3 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IXRawfile3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("19A00B1E-1559-42B1-9A46-08A5E599EDEE")
    IXRawfile3 : public IXRawfile2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMassListRangeFromScanNum( 
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMassListRangeFromRT( 
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNextMassListRangeFromScanNum( 
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPrevMassListRangeFromScanNum( 
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPrecursorInfoFromScanNum( 
            long nScanNumber,
            VARIANT *pvarPrecursorInfos,
            long *pnArraySize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXRawfile3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXRawfile3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXRawfile3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXRawfile3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IXRawfile3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IXRawfile3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IXRawfile3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IXRawfile3 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IXRawfile3 * This,
            BSTR szFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IXRawfile3 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IXRawfile3 * This,
            BSTR *pbstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCreatorID )( 
            IXRawfile3 * This,
            BSTR *pbstrCreatorID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )( 
            IXRawfile3 * This,
            long *pnVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCreationDate )( 
            IXRawfile3 * This,
            DATE *pCreationDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsError )( 
            IXRawfile3 * This,
            long *pbIsError);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsNewFile )( 
            IXRawfile3 * This,
            long *pbIsNewFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorCode )( 
            IXRawfile3 * This,
            long *pnErrorCode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorMessage )( 
            IXRawfile3 * This,
            BSTR *pbstrErrorMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWarningMessage )( 
            IXRawfile3 * This,
            BSTR *pbstrWarningMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowNumber )( 
            IXRawfile3 * This,
            long *pnSeqRowNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleType )( 
            IXRawfile3 * This,
            long *pnSampleType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowDataPath )( 
            IXRawfile3 * This,
            BSTR *pbstrDataPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowRawFileName )( 
            IXRawfile3 * This,
            BSTR *pbstrRawFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleName )( 
            IXRawfile3 * This,
            BSTR *pbstrSampleName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleID )( 
            IXRawfile3 * This,
            BSTR *pbstrSampleID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowComment )( 
            IXRawfile3 * This,
            BSTR *pbstrComment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowLevelName )( 
            IXRawfile3 * This,
            BSTR *pbstrLevelName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserText )( 
            IXRawfile3 * This,
            long nIndex,
            BSTR *pbstrUserText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowInstrumentMethod )( 
            IXRawfile3 * This,
            BSTR *pbstrInstrumentMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowProcessingMethod )( 
            IXRawfile3 * This,
            BSTR *pbstrProcessingMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowCalibrationFile )( 
            IXRawfile3 * This,
            BSTR *pbstrCalibrationFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowVial )( 
            IXRawfile3 * This,
            BSTR *pbstrVial);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowInjectionVolume )( 
            IXRawfile3 * This,
            double *pdInjVol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleWeight )( 
            IXRawfile3 * This,
            double *pdSampleWt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleVolume )( 
            IXRawfile3 * This,
            double *pdSampleVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowISTDAmount )( 
            IXRawfile3 * This,
            double *pdISTDAmount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowDilutionFactor )( 
            IXRawfile3 * This,
            double *pdDilutionFactor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserLabel )( 
            IXRawfile3 * This,
            long nIndex,
            BSTR *pbstrUserLabel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InAcquisition )( 
            IXRawfile3 * This,
            long *pbInAcquisition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfControllers )( 
            IXRawfile3 * This,
            long *pnNumControllers);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetControllerType )( 
            IXRawfile3 * This,
            long nIndex,
            long *pnControllerType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCurrentController )( 
            IXRawfile3 * This,
            long nControllerType,
            long nControllerNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentController )( 
            IXRawfile3 * This,
            long *pnControllerType,
            long *pnControllerNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumSpectra )( 
            IXRawfile3 * This,
            long *pnNumberOfSpectra);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumStatusLog )( 
            IXRawfile3 * This,
            long *pnNumberOfStatusLogEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumErrorLog )( 
            IXRawfile3 * This,
            long *pnNumberOfErrorLogEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumTuneData )( 
            IXRawfile3 * This,
            long *pnNumTuneData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassResolution )( 
            IXRawfile3 * This,
            double *pdMassResolution);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExpectedRunTime )( 
            IXRawfile3 * This,
            double *pdExpectedRunTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumTrailerExtra )( 
            IXRawfile3 * This,
            long *pnNumberOfTrailerExtraEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLowMass )( 
            IXRawfile3 * This,
            double *pdLowMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHighMass )( 
            IXRawfile3 * This,
            double *pdHighMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStartTime )( 
            IXRawfile3 * This,
            double *pdStartTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEndTime )( 
            IXRawfile3 * This,
            double *pdEndTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMaxIntegratedIntensity )( 
            IXRawfile3 * This,
            double *pdMaxIntegIntensity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMaxIntensity )( 
            IXRawfile3 * This,
            long *pnMaxIntensity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstSpectrumNumber )( 
            IXRawfile3 * This,
            long *pnFirstSpectrum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLastSpectrumNumber )( 
            IXRawfile3 * This,
            long *pnLastSpectrum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstrumentID )( 
            IXRawfile3 * This,
            long *pnInstrumentID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInletID )( 
            IXRawfile3 * This,
            long *pnInletID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorFlag )( 
            IXRawfile3 * This,
            long *pnErrorFlag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleVolume )( 
            IXRawfile3 * This,
            double *pdSampleVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleWeight )( 
            IXRawfile3 * This,
            double *pdSampleWeight);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVialNumber )( 
            IXRawfile3 * This,
            long *pnVialNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInjectionVolume )( 
            IXRawfile3 * This,
            double *pdInjectionVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXRawfile3 * This,
            BSTR *pbstrFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAcquisitionFileName )( 
            IXRawfile3 * This,
            BSTR *pbstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstrumentDescription )( 
            IXRawfile3 * This,
            BSTR *pbstrInstrumentDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAcquisitionDate )( 
            IXRawfile3 * This,
            BSTR *pbstrAcquisitionDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOperator )( 
            IXRawfile3 * This,
            BSTR *pbstrOperator);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComment1 )( 
            IXRawfile3 * This,
            BSTR *pbstrComment1);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComment2 )( 
            IXRawfile3 * This,
            BSTR *pbstrComment2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleAmountUnits )( 
            IXRawfile3 * This,
            BSTR *pbstrSampleAmountUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInjectionAmountUnits )( 
            IXRawfile3 * This,
            BSTR *pbstrInjectionAmountUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleVolumeUnits )( 
            IXRawfile3 * This,
            BSTR *pbstrSampleVolumeUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilters )( 
            IXRawfile3 * This,
            VARIANT *pvarFilterArray,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScanNumFromRT )( 
            IXRawfile3 * This,
            double dRT,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RTFromScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            double *pdRT);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterForScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            BSTR *pbstrFilter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterForScanRT )( 
            IXRawfile3 * This,
            double dRT,
            BSTR *pbstrFilter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListFromScanNum )( 
            IXRawfile3 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListFromRT )( 
            IXRawfile3 * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextMassListFromScanNum )( 
            IXRawfile3 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrevMassListFromScanNum )( 
            IXRawfile3 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsProfileScanForScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            long *pbIsProfileScan);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsCentroidScanForScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            long *pbIsCentroidScan);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScanHeaderInfoForScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            long *pnNumPackets,
            double *pdStartTime,
            double *pdLowMass,
            double *pdHighMass,
            double *pdTIC,
            double *pdBasePeakMass,
            double *pdBasePeakIntensity,
            long *pnNumChannels,
            long *pbUniformTime,
            double *pdFrequency);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForRT )( 
            IXRawfile3 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogLabelsForScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogLabelsForRT )( 
            IXRawfile3 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogValueForScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            BSTR bstrLabel,
            double *pdStatusLogRT,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogValueForRT )( 
            IXRawfile3 * This,
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraForScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraForRT )( 
            IXRawfile3 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraLabelsForScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraLabelsForRT )( 
            IXRawfile3 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraValueForScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraValueForRT )( 
            IXRawfile3 * This,
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorLogItem )( 
            IXRawfile3 * This,
            long nItemNumber,
            double *pdRT,
            BSTR *pbstrErrorMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneData )( 
            IXRawfile3 * This,
            long nSegmentNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumInstMethods )( 
            IXRawfile3 * This,
            long *pnNumInstMethods);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstMethod )( 
            IXRawfile3 * This,
            long nInstMethodItem,
            BSTR *pbstrInstMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChroData )( 
            IXRawfile3 * This,
            long nChroType1,
            long nChroOperator,
            long nChroType2,
            BSTR bstrFilter,
            BSTR bstrMassRanges1,
            BSTR bstrMassRanges2,
            double dDelay,
            double *pdStartTime,
            double *pdEndTime,
            long nSmoothingType,
            long nSmoothingValue,
            VARIANT *pvarChroData,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RefreshViewOfFile )( 
            IXRawfile3 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneDataValue )( 
            IXRawfile3 * This,
            long nSegmentNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneDataLabels )( 
            IXRawfile3 * This,
            long nSegmentNumber,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstName )( 
            IXRawfile3 * This,
            BSTR *pbstrInstName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstModel )( 
            IXRawfile3 * This,
            BSTR *pbstrInstModel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstSerialNumber )( 
            IXRawfile3 * This,
            BSTR *pbstrInstSerialNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstSoftwareVersion )( 
            IXRawfile3 * This,
            BSTR *pbstrInstSoftwareVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstHardwareVersion )( 
            IXRawfile3 * This,
            BSTR *pbstrInstHardwareVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstFlags )( 
            IXRawfile3 * This,
            BSTR *pbstrInstFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstNumChannelLabels )( 
            IXRawfile3 * This,
            long *pnInstNumChannelLabels);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstChannelLabel )( 
            IXRawfile3 * This,
            long nChannelLabelNumber,
            BSTR *pbstrInstChannelLabel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfControllersOfType )( 
            IXRawfile3 * This,
            long nControllerType,
            long *pnNumControllersOfType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAverageMassList )( 
            IXRawfile3 * This,
            long *pnFirstAvgScanNumber,
            long *pnLastAvgScanNumber,
            long *pnFirstBkg1ScanNumber,
            long *pnLastBkg1ScanNumber,
            long *pnFirstBkg2ScanNumber,
            long *pnLastBkg2ScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsThereMSData )( 
            IXRawfile3 * This,
            long *pbMSData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasExpMethod )( 
            IXRawfile3 * This,
            long *pbMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterMassPrecision )( 
            IXRawfile3 * This,
            long *pnFilterMassPrecision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForPos )( 
            IXRawfile3 * This,
            long nPos,
            VARIANT *pvarRT,
            VARIANT *pvarValue,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogPlottableIndex )( 
            IXRawfile3 * This,
            VARIANT *pvarIndex,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstMethodNames )( 
            IXRawfile3 * This,
            long *pnNumInstMethods,
            VARIANT *pvarNames);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMassTolerance )( 
            IXRawfile3 * This,
            long bUseUserDefined,
            double dMassTolerance,
            long nUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChros )( 
            IXRawfile3 * This,
            long nNumChros,
            double *pdStartTime,
            double *pdEndTime,
            VARIANT *pvarChroParamsArray,
            VARIANT *pvarChroDataSizeArray,
            VARIANT *pvarChroDataArray,
            VARIANT *pvarPeakFlagsArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLabelData )( 
            IXRawfile3 * This,
            VARIANT *pvarLabels,
            VARIANT *pvarFlags,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNoiseData )( 
            IXRawfile3 * This,
            VARIANT *pvarNoisePacket,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSegmentedMassListFromRT )( 
            IXRawfile3 * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize,
            VARIANT *pvarSegments,
            long *pnNumSegments,
            VARIANT *pvarLowHighMassRange);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSegmentedMassListFromScanNum )( 
            IXRawfile3 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize,
            VARIANT *pvarSegments,
            long *pnNumSegments,
            VARIANT *pvarLowHighMassRange);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScanEventForScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            BSTR *pbstrScanEvent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserTextEx )( 
            IXRawfile3 * This,
            long nIndex,
            BSTR *pbstrUserText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowBarcode )( 
            IXRawfile3 * This,
            BSTR *pbstrBarcode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowBarcodeStatus )( 
            IXRawfile3 * This,
            long *pnBarcodeStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListRangeFromScanNum )( 
            IXRawfile3 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListRangeFromRT )( 
            IXRawfile3 * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextMassListRangeFromScanNum )( 
            IXRawfile3 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrevMassListRangeFromScanNum )( 
            IXRawfile3 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrecursorInfoFromScanNum )( 
            IXRawfile3 * This,
            long nScanNumber,
            VARIANT *pvarPrecursorInfos,
            long *pnArraySize);
        
        END_INTERFACE
    } IXRawfile3Vtbl;

    interface IXRawfile3
    {
        CONST_VTBL struct IXRawfile3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXRawfile3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXRawfile3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXRawfile3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXRawfile3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IXRawfile3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IXRawfile3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IXRawfile3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IXRawfile3_Open(This,szFileName)	\
    ( (This)->lpVtbl -> Open(This,szFileName) ) 

#define IXRawfile3_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IXRawfile3_GetFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetFileName(This,pbstrFileName) ) 

#define IXRawfile3_GetCreatorID(This,pbstrCreatorID)	\
    ( (This)->lpVtbl -> GetCreatorID(This,pbstrCreatorID) ) 

#define IXRawfile3_GetVersionNumber(This,pnVersion)	\
    ( (This)->lpVtbl -> GetVersionNumber(This,pnVersion) ) 

#define IXRawfile3_GetCreationDate(This,pCreationDate)	\
    ( (This)->lpVtbl -> GetCreationDate(This,pCreationDate) ) 

#define IXRawfile3_IsError(This,pbIsError)	\
    ( (This)->lpVtbl -> IsError(This,pbIsError) ) 

#define IXRawfile3_IsNewFile(This,pbIsNewFile)	\
    ( (This)->lpVtbl -> IsNewFile(This,pbIsNewFile) ) 

#define IXRawfile3_GetErrorCode(This,pnErrorCode)	\
    ( (This)->lpVtbl -> GetErrorCode(This,pnErrorCode) ) 

#define IXRawfile3_GetErrorMessage(This,pbstrErrorMessage)	\
    ( (This)->lpVtbl -> GetErrorMessage(This,pbstrErrorMessage) ) 

#define IXRawfile3_GetWarningMessage(This,pbstrWarningMessage)	\
    ( (This)->lpVtbl -> GetWarningMessage(This,pbstrWarningMessage) ) 

#define IXRawfile3_GetSeqRowNumber(This,pnSeqRowNumber)	\
    ( (This)->lpVtbl -> GetSeqRowNumber(This,pnSeqRowNumber) ) 

#define IXRawfile3_GetSeqRowSampleType(This,pnSampleType)	\
    ( (This)->lpVtbl -> GetSeqRowSampleType(This,pnSampleType) ) 

#define IXRawfile3_GetSeqRowDataPath(This,pbstrDataPath)	\
    ( (This)->lpVtbl -> GetSeqRowDataPath(This,pbstrDataPath) ) 

#define IXRawfile3_GetSeqRowRawFileName(This,pbstrRawFileName)	\
    ( (This)->lpVtbl -> GetSeqRowRawFileName(This,pbstrRawFileName) ) 

#define IXRawfile3_GetSeqRowSampleName(This,pbstrSampleName)	\
    ( (This)->lpVtbl -> GetSeqRowSampleName(This,pbstrSampleName) ) 

#define IXRawfile3_GetSeqRowSampleID(This,pbstrSampleID)	\
    ( (This)->lpVtbl -> GetSeqRowSampleID(This,pbstrSampleID) ) 

#define IXRawfile3_GetSeqRowComment(This,pbstrComment)	\
    ( (This)->lpVtbl -> GetSeqRowComment(This,pbstrComment) ) 

#define IXRawfile3_GetSeqRowLevelName(This,pbstrLevelName)	\
    ( (This)->lpVtbl -> GetSeqRowLevelName(This,pbstrLevelName) ) 

#define IXRawfile3_GetSeqRowUserText(This,nIndex,pbstrUserText)	\
    ( (This)->lpVtbl -> GetSeqRowUserText(This,nIndex,pbstrUserText) ) 

#define IXRawfile3_GetSeqRowInstrumentMethod(This,pbstrInstrumentMethod)	\
    ( (This)->lpVtbl -> GetSeqRowInstrumentMethod(This,pbstrInstrumentMethod) ) 

#define IXRawfile3_GetSeqRowProcessingMethod(This,pbstrProcessingMethod)	\
    ( (This)->lpVtbl -> GetSeqRowProcessingMethod(This,pbstrProcessingMethod) ) 

#define IXRawfile3_GetSeqRowCalibrationFile(This,pbstrCalibrationFile)	\
    ( (This)->lpVtbl -> GetSeqRowCalibrationFile(This,pbstrCalibrationFile) ) 

#define IXRawfile3_GetSeqRowVial(This,pbstrVial)	\
    ( (This)->lpVtbl -> GetSeqRowVial(This,pbstrVial) ) 

#define IXRawfile3_GetSeqRowInjectionVolume(This,pdInjVol)	\
    ( (This)->lpVtbl -> GetSeqRowInjectionVolume(This,pdInjVol) ) 

#define IXRawfile3_GetSeqRowSampleWeight(This,pdSampleWt)	\
    ( (This)->lpVtbl -> GetSeqRowSampleWeight(This,pdSampleWt) ) 

#define IXRawfile3_GetSeqRowSampleVolume(This,pdSampleVolume)	\
    ( (This)->lpVtbl -> GetSeqRowSampleVolume(This,pdSampleVolume) ) 

#define IXRawfile3_GetSeqRowISTDAmount(This,pdISTDAmount)	\
    ( (This)->lpVtbl -> GetSeqRowISTDAmount(This,pdISTDAmount) ) 

#define IXRawfile3_GetSeqRowDilutionFactor(This,pdDilutionFactor)	\
    ( (This)->lpVtbl -> GetSeqRowDilutionFactor(This,pdDilutionFactor) ) 

#define IXRawfile3_GetSeqRowUserLabel(This,nIndex,pbstrUserLabel)	\
    ( (This)->lpVtbl -> GetSeqRowUserLabel(This,nIndex,pbstrUserLabel) ) 

#define IXRawfile3_InAcquisition(This,pbInAcquisition)	\
    ( (This)->lpVtbl -> InAcquisition(This,pbInAcquisition) ) 

#define IXRawfile3_GetNumberOfControllers(This,pnNumControllers)	\
    ( (This)->lpVtbl -> GetNumberOfControllers(This,pnNumControllers) ) 

#define IXRawfile3_GetControllerType(This,nIndex,pnControllerType)	\
    ( (This)->lpVtbl -> GetControllerType(This,nIndex,pnControllerType) ) 

#define IXRawfile3_SetCurrentController(This,nControllerType,nControllerNumber)	\
    ( (This)->lpVtbl -> SetCurrentController(This,nControllerType,nControllerNumber) ) 

#define IXRawfile3_GetCurrentController(This,pnControllerType,pnControllerNumber)	\
    ( (This)->lpVtbl -> GetCurrentController(This,pnControllerType,pnControllerNumber) ) 

#define IXRawfile3_GetNumSpectra(This,pnNumberOfSpectra)	\
    ( (This)->lpVtbl -> GetNumSpectra(This,pnNumberOfSpectra) ) 

#define IXRawfile3_GetNumStatusLog(This,pnNumberOfStatusLogEntries)	\
    ( (This)->lpVtbl -> GetNumStatusLog(This,pnNumberOfStatusLogEntries) ) 

#define IXRawfile3_GetNumErrorLog(This,pnNumberOfErrorLogEntries)	\
    ( (This)->lpVtbl -> GetNumErrorLog(This,pnNumberOfErrorLogEntries) ) 

#define IXRawfile3_GetNumTuneData(This,pnNumTuneData)	\
    ( (This)->lpVtbl -> GetNumTuneData(This,pnNumTuneData) ) 

#define IXRawfile3_GetMassResolution(This,pdMassResolution)	\
    ( (This)->lpVtbl -> GetMassResolution(This,pdMassResolution) ) 

#define IXRawfile3_GetExpectedRunTime(This,pdExpectedRunTime)	\
    ( (This)->lpVtbl -> GetExpectedRunTime(This,pdExpectedRunTime) ) 

#define IXRawfile3_GetNumTrailerExtra(This,pnNumberOfTrailerExtraEntries)	\
    ( (This)->lpVtbl -> GetNumTrailerExtra(This,pnNumberOfTrailerExtraEntries) ) 

#define IXRawfile3_GetLowMass(This,pdLowMass)	\
    ( (This)->lpVtbl -> GetLowMass(This,pdLowMass) ) 

#define IXRawfile3_GetHighMass(This,pdHighMass)	\
    ( (This)->lpVtbl -> GetHighMass(This,pdHighMass) ) 

#define IXRawfile3_GetStartTime(This,pdStartTime)	\
    ( (This)->lpVtbl -> GetStartTime(This,pdStartTime) ) 

#define IXRawfile3_GetEndTime(This,pdEndTime)	\
    ( (This)->lpVtbl -> GetEndTime(This,pdEndTime) ) 

#define IXRawfile3_GetMaxIntegratedIntensity(This,pdMaxIntegIntensity)	\
    ( (This)->lpVtbl -> GetMaxIntegratedIntensity(This,pdMaxIntegIntensity) ) 

#define IXRawfile3_GetMaxIntensity(This,pnMaxIntensity)	\
    ( (This)->lpVtbl -> GetMaxIntensity(This,pnMaxIntensity) ) 

#define IXRawfile3_GetFirstSpectrumNumber(This,pnFirstSpectrum)	\
    ( (This)->lpVtbl -> GetFirstSpectrumNumber(This,pnFirstSpectrum) ) 

#define IXRawfile3_GetLastSpectrumNumber(This,pnLastSpectrum)	\
    ( (This)->lpVtbl -> GetLastSpectrumNumber(This,pnLastSpectrum) ) 

#define IXRawfile3_GetInstrumentID(This,pnInstrumentID)	\
    ( (This)->lpVtbl -> GetInstrumentID(This,pnInstrumentID) ) 

#define IXRawfile3_GetInletID(This,pnInletID)	\
    ( (This)->lpVtbl -> GetInletID(This,pnInletID) ) 

#define IXRawfile3_GetErrorFlag(This,pnErrorFlag)	\
    ( (This)->lpVtbl -> GetErrorFlag(This,pnErrorFlag) ) 

#define IXRawfile3_GetSampleVolume(This,pdSampleVolume)	\
    ( (This)->lpVtbl -> GetSampleVolume(This,pdSampleVolume) ) 

#define IXRawfile3_GetSampleWeight(This,pdSampleWeight)	\
    ( (This)->lpVtbl -> GetSampleWeight(This,pdSampleWeight) ) 

#define IXRawfile3_GetVialNumber(This,pnVialNumber)	\
    ( (This)->lpVtbl -> GetVialNumber(This,pnVialNumber) ) 

#define IXRawfile3_GetInjectionVolume(This,pdInjectionVolume)	\
    ( (This)->lpVtbl -> GetInjectionVolume(This,pdInjectionVolume) ) 

#define IXRawfile3_GetFlags(This,pbstrFlags)	\
    ( (This)->lpVtbl -> GetFlags(This,pbstrFlags) ) 

#define IXRawfile3_GetAcquisitionFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetAcquisitionFileName(This,pbstrFileName) ) 

#define IXRawfile3_GetInstrumentDescription(This,pbstrInstrumentDescription)	\
    ( (This)->lpVtbl -> GetInstrumentDescription(This,pbstrInstrumentDescription) ) 

#define IXRawfile3_GetAcquisitionDate(This,pbstrAcquisitionDate)	\
    ( (This)->lpVtbl -> GetAcquisitionDate(This,pbstrAcquisitionDate) ) 

#define IXRawfile3_GetOperator(This,pbstrOperator)	\
    ( (This)->lpVtbl -> GetOperator(This,pbstrOperator) ) 

#define IXRawfile3_GetComment1(This,pbstrComment1)	\
    ( (This)->lpVtbl -> GetComment1(This,pbstrComment1) ) 

#define IXRawfile3_GetComment2(This,pbstrComment2)	\
    ( (This)->lpVtbl -> GetComment2(This,pbstrComment2) ) 

#define IXRawfile3_GetSampleAmountUnits(This,pbstrSampleAmountUnits)	\
    ( (This)->lpVtbl -> GetSampleAmountUnits(This,pbstrSampleAmountUnits) ) 

#define IXRawfile3_GetInjectionAmountUnits(This,pbstrInjectionAmountUnits)	\
    ( (This)->lpVtbl -> GetInjectionAmountUnits(This,pbstrInjectionAmountUnits) ) 

#define IXRawfile3_GetSampleVolumeUnits(This,pbstrSampleVolumeUnits)	\
    ( (This)->lpVtbl -> GetSampleVolumeUnits(This,pbstrSampleVolumeUnits) ) 

#define IXRawfile3_GetFilters(This,pvarFilterArray,pnArraySize)	\
    ( (This)->lpVtbl -> GetFilters(This,pvarFilterArray,pnArraySize) ) 

#define IXRawfile3_ScanNumFromRT(This,dRT,pnScanNumber)	\
    ( (This)->lpVtbl -> ScanNumFromRT(This,dRT,pnScanNumber) ) 

#define IXRawfile3_RTFromScanNum(This,nScanNumber,pdRT)	\
    ( (This)->lpVtbl -> RTFromScanNum(This,nScanNumber,pdRT) ) 

#define IXRawfile3_GetFilterForScanNum(This,nScanNumber,pbstrFilter)	\
    ( (This)->lpVtbl -> GetFilterForScanNum(This,nScanNumber,pbstrFilter) ) 

#define IXRawfile3_GetFilterForScanRT(This,dRT,pbstrFilter)	\
    ( (This)->lpVtbl -> GetFilterForScanRT(This,dRT,pbstrFilter) ) 

#define IXRawfile3_GetMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile3_GetMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile3_GetNextMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetNextMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile3_GetPrevMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetPrevMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile3_IsProfileScanForScanNum(This,nScanNumber,pbIsProfileScan)	\
    ( (This)->lpVtbl -> IsProfileScanForScanNum(This,nScanNumber,pbIsProfileScan) ) 

#define IXRawfile3_IsCentroidScanForScanNum(This,nScanNumber,pbIsCentroidScan)	\
    ( (This)->lpVtbl -> IsCentroidScanForScanNum(This,nScanNumber,pbIsCentroidScan) ) 

#define IXRawfile3_GetScanHeaderInfoForScanNum(This,nScanNumber,pnNumPackets,pdStartTime,pdLowMass,pdHighMass,pdTIC,pdBasePeakMass,pdBasePeakIntensity,pnNumChannels,pbUniformTime,pdFrequency)	\
    ( (This)->lpVtbl -> GetScanHeaderInfoForScanNum(This,nScanNumber,pnNumPackets,pdStartTime,pdLowMass,pdHighMass,pdTIC,pdBasePeakMass,pdBasePeakIntensity,pnNumChannels,pbUniformTime,pdFrequency) ) 

#define IXRawfile3_GetStatusLogForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile3_GetStatusLogForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile3_GetStatusLogLabelsForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogLabelsForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pnArraySize) ) 

#define IXRawfile3_GetStatusLogLabelsForRT(This,pdRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogLabelsForRT(This,pdRT,pvarLabels,pnArraySize) ) 

#define IXRawfile3_GetStatusLogValueForScanNum(This,nScanNumber,bstrLabel,pdStatusLogRT,pvarValue)	\
    ( (This)->lpVtbl -> GetStatusLogValueForScanNum(This,nScanNumber,bstrLabel,pdStatusLogRT,pvarValue) ) 

#define IXRawfile3_GetStatusLogValueForRT(This,pdRT,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetStatusLogValueForRT(This,pdRT,bstrLabel,pvarValue) ) 

#define IXRawfile3_GetTrailerExtraForScanNum(This,nScanNumber,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraForScanNum(This,nScanNumber,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile3_GetTrailerExtraForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile3_GetTrailerExtraLabelsForScanNum(This,nScanNumber,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraLabelsForScanNum(This,nScanNumber,pvarLabels,pnArraySize) ) 

#define IXRawfile3_GetTrailerExtraLabelsForRT(This,pdRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraLabelsForRT(This,pdRT,pvarLabels,pnArraySize) ) 

#define IXRawfile3_GetTrailerExtraValueForScanNum(This,nScanNumber,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTrailerExtraValueForScanNum(This,nScanNumber,bstrLabel,pvarValue) ) 

#define IXRawfile3_GetTrailerExtraValueForRT(This,pdRT,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTrailerExtraValueForRT(This,pdRT,bstrLabel,pvarValue) ) 

#define IXRawfile3_GetErrorLogItem(This,nItemNumber,pdRT,pbstrErrorMessage)	\
    ( (This)->lpVtbl -> GetErrorLogItem(This,nItemNumber,pdRT,pbstrErrorMessage) ) 

#define IXRawfile3_GetTuneData(This,nSegmentNumber,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTuneData(This,nSegmentNumber,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile3_GetNumInstMethods(This,pnNumInstMethods)	\
    ( (This)->lpVtbl -> GetNumInstMethods(This,pnNumInstMethods) ) 

#define IXRawfile3_GetInstMethod(This,nInstMethodItem,pbstrInstMethod)	\
    ( (This)->lpVtbl -> GetInstMethod(This,nInstMethodItem,pbstrInstMethod) ) 

#define IXRawfile3_GetChroData(This,nChroType1,nChroOperator,nChroType2,bstrFilter,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetChroData(This,nChroType1,nChroOperator,nChroType2,bstrFilter,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile3_RefreshViewOfFile(This)	\
    ( (This)->lpVtbl -> RefreshViewOfFile(This) ) 

#define IXRawfile3_GetTuneDataValue(This,nSegmentNumber,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTuneDataValue(This,nSegmentNumber,bstrLabel,pvarValue) ) 

#define IXRawfile3_GetTuneDataLabels(This,nSegmentNumber,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTuneDataLabels(This,nSegmentNumber,pvarLabels,pnArraySize) ) 

#define IXRawfile3_GetInstName(This,pbstrInstName)	\
    ( (This)->lpVtbl -> GetInstName(This,pbstrInstName) ) 

#define IXRawfile3_GetInstModel(This,pbstrInstModel)	\
    ( (This)->lpVtbl -> GetInstModel(This,pbstrInstModel) ) 

#define IXRawfile3_GetInstSerialNumber(This,pbstrInstSerialNumber)	\
    ( (This)->lpVtbl -> GetInstSerialNumber(This,pbstrInstSerialNumber) ) 

#define IXRawfile3_GetInstSoftwareVersion(This,pbstrInstSoftwareVersion)	\
    ( (This)->lpVtbl -> GetInstSoftwareVersion(This,pbstrInstSoftwareVersion) ) 

#define IXRawfile3_GetInstHardwareVersion(This,pbstrInstHardwareVersion)	\
    ( (This)->lpVtbl -> GetInstHardwareVersion(This,pbstrInstHardwareVersion) ) 

#define IXRawfile3_GetInstFlags(This,pbstrInstFlags)	\
    ( (This)->lpVtbl -> GetInstFlags(This,pbstrInstFlags) ) 

#define IXRawfile3_GetInstNumChannelLabels(This,pnInstNumChannelLabels)	\
    ( (This)->lpVtbl -> GetInstNumChannelLabels(This,pnInstNumChannelLabels) ) 

#define IXRawfile3_GetInstChannelLabel(This,nChannelLabelNumber,pbstrInstChannelLabel)	\
    ( (This)->lpVtbl -> GetInstChannelLabel(This,nChannelLabelNumber,pbstrInstChannelLabel) ) 

#define IXRawfile3_GetNumberOfControllersOfType(This,nControllerType,pnNumControllersOfType)	\
    ( (This)->lpVtbl -> GetNumberOfControllersOfType(This,nControllerType,pnNumControllersOfType) ) 

#define IXRawfile3_GetAverageMassList(This,pnFirstAvgScanNumber,pnLastAvgScanNumber,pnFirstBkg1ScanNumber,pnLastBkg1ScanNumber,pnFirstBkg2ScanNumber,pnLastBkg2ScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetAverageMassList(This,pnFirstAvgScanNumber,pnLastAvgScanNumber,pnFirstBkg1ScanNumber,pnLastBkg1ScanNumber,pnFirstBkg2ScanNumber,pnLastBkg2ScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile3_IsThereMSData(This,pbMSData)	\
    ( (This)->lpVtbl -> IsThereMSData(This,pbMSData) ) 

#define IXRawfile3_HasExpMethod(This,pbMethod)	\
    ( (This)->lpVtbl -> HasExpMethod(This,pbMethod) ) 

#define IXRawfile3_GetFilterMassPrecision(This,pnFilterMassPrecision)	\
    ( (This)->lpVtbl -> GetFilterMassPrecision(This,pnFilterMassPrecision) ) 

#define IXRawfile3_GetStatusLogForPos(This,nPos,pvarRT,pvarValue,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForPos(This,nPos,pvarRT,pvarValue,pnArraySize) ) 

#define IXRawfile3_GetStatusLogPlottableIndex(This,pvarIndex,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogPlottableIndex(This,pvarIndex,pvarValues,pnArraySize) ) 

#define IXRawfile3_GetInstMethodNames(This,pnNumInstMethods,pvarNames)	\
    ( (This)->lpVtbl -> GetInstMethodNames(This,pnNumInstMethods,pvarNames) ) 

#define IXRawfile3_SetMassTolerance(This,bUseUserDefined,dMassTolerance,nUnits)	\
    ( (This)->lpVtbl -> SetMassTolerance(This,bUseUserDefined,dMassTolerance,nUnits) ) 

#define IXRawfile3_GetChros(This,nNumChros,pdStartTime,pdEndTime,pvarChroParamsArray,pvarChroDataSizeArray,pvarChroDataArray,pvarPeakFlagsArray)	\
    ( (This)->lpVtbl -> GetChros(This,nNumChros,pdStartTime,pdEndTime,pvarChroParamsArray,pvarChroDataSizeArray,pvarChroDataArray,pvarPeakFlagsArray) ) 


#define IXRawfile3_GetLabelData(This,pvarLabels,pvarFlags,pnScanNumber)	\
    ( (This)->lpVtbl -> GetLabelData(This,pvarLabels,pvarFlags,pnScanNumber) ) 

#define IXRawfile3_GetNoiseData(This,pvarNoisePacket,pnScanNumber)	\
    ( (This)->lpVtbl -> GetNoiseData(This,pvarNoisePacket,pnScanNumber) ) 

#define IXRawfile3_GetSegmentedMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange)	\
    ( (This)->lpVtbl -> GetSegmentedMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange) ) 

#define IXRawfile3_GetSegmentedMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange)	\
    ( (This)->lpVtbl -> GetSegmentedMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange) ) 

#define IXRawfile3_GetScanEventForScanNum(This,nScanNumber,pbstrScanEvent)	\
    ( (This)->lpVtbl -> GetScanEventForScanNum(This,nScanNumber,pbstrScanEvent) ) 

#define IXRawfile3_GetSeqRowUserTextEx(This,nIndex,pbstrUserText)	\
    ( (This)->lpVtbl -> GetSeqRowUserTextEx(This,nIndex,pbstrUserText) ) 

#define IXRawfile3_GetSeqRowBarcode(This,pbstrBarcode)	\
    ( (This)->lpVtbl -> GetSeqRowBarcode(This,pbstrBarcode) ) 

#define IXRawfile3_GetSeqRowBarcodeStatus(This,pnBarcodeStatus)	\
    ( (This)->lpVtbl -> GetSeqRowBarcodeStatus(This,pnBarcodeStatus) ) 


#define IXRawfile3_GetMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile3_GetMassListRangeFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListRangeFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile3_GetNextMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetNextMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile3_GetPrevMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetPrevMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile3_GetPrecursorInfoFromScanNum(This,nScanNumber,pvarPrecursorInfos,pnArraySize)	\
    ( (This)->lpVtbl -> GetPrecursorInfoFromScanNum(This,nScanNumber,pvarPrecursorInfos,pnArraySize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile3_GetMassListRangeFromScanNum_Proxy( 
    IXRawfile3 * This,
    long *pnScanNumber,
    BSTR bstrFilter,
    long nIntensityCutoffType,
    long nIntensityCutoffValue,
    long nMaxNumberOfPeaks,
    long bCentroidResult,
    double *pdCentroidPeakWidth,
    VARIANT *pvarMassList,
    VARIANT *pvarPeakFlags,
    LPWSTR szMassRange1,
    long *pnArraySize);


void __RPC_STUB IXRawfile3_GetMassListRangeFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile3_GetMassListRangeFromRT_Proxy( 
    IXRawfile3 * This,
    double *pdRT,
    BSTR bstrFilter,
    long nIntensityCutoffType,
    long nIntensityCutoffValue,
    long nMaxNumberOfPeaks,
    long bCentroidResult,
    double *pdCentroidPeakWidth,
    VARIANT *pvarMassList,
    VARIANT *pvarPeakFlags,
    LPWSTR szMassRange1,
    long *pnArraySize);


void __RPC_STUB IXRawfile3_GetMassListRangeFromRT_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile3_GetNextMassListRangeFromScanNum_Proxy( 
    IXRawfile3 * This,
    long *pnScanNumber,
    BSTR bstrFilter,
    long nIntensityCutoffType,
    long nIntensityCutoffValue,
    long nMaxNumberOfPeaks,
    long bCentroidResult,
    double *pdCentroidPeakWidth,
    VARIANT *pvarMassList,
    VARIANT *pvarPeakFlags,
    LPWSTR szMassRange1,
    long *pnArraySize);


void __RPC_STUB IXRawfile3_GetNextMassListRangeFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile3_GetPrevMassListRangeFromScanNum_Proxy( 
    IXRawfile3 * This,
    long *pnScanNumber,
    BSTR bstrFilter,
    long nIntensityCutoffType,
    long nIntensityCutoffValue,
    long nMaxNumberOfPeaks,
    long bCentroidResult,
    double *pdCentroidPeakWidth,
    VARIANT *pvarMassList,
    VARIANT *pvarPeakFlags,
    LPWSTR szMassRange1,
    long *pnArraySize);


void __RPC_STUB IXRawfile3_GetPrevMassListRangeFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile3_GetPrecursorInfoFromScanNum_Proxy( 
    IXRawfile3 * This,
    long nScanNumber,
    VARIANT *pvarPrecursorInfos,
    long *pnArraySize);


void __RPC_STUB IXRawfile3_GetPrecursorInfoFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXRawfile3_INTERFACE_DEFINED__ */


#ifndef __IXRawfile4_INTERFACE_DEFINED__
#define __IXRawfile4_INTERFACE_DEFINED__

/* interface IXRawfile4 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IXRawfile4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7CF6760-11CD-4260-B5B0-FCE2AD97547B")
    IXRawfile4 : public IXRawfile3
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExtractInstMethodFromRaw( 
            BSTR szInstMethodFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSegmentAndEventForScanNum( 
            long nScanNumber,
            long *pnSegment,
            long *pnScanEvent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMassPrecisionEstimate( 
            long lScanNumber,
            VARIANT *pvarMassList,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetActivationTypeForScanNum( 
            long nScan,
            long lMSOrder,
            long *pnActivationType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDetectorTypeForScanNum( 
            long nScan,
            long *pnDetectorType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMassAnalyzerTypeForScanNum( 
            long nScan,
            long *pnMassAnalyzerType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMSOrderForScanNum( 
            long nScan,
            long *pnMSOrder) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPrecursorMassForScanNum( 
            long nScan,
            long lMSOrder,
            double *pdMass) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetScanTypeForScanNum( 
            long nScan,
            long *pnScanType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAveragedMassSpectrum( 
            long *pnScanNumbers,
            long nScansToAverage,
            VARIANT_BOOL bCentroidResult,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSummedMassSpectrum( 
            long *pnScanNumbers,
            long nScansToSum,
            VARIANT_BOOL bCentroidResult,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAveragedLabelData( 
            long *pnScanNumbers,
            long nScansToAverage,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FindPrecursorMassInFullScan( 
            long nScan,
            long *pnMasterScan,
            double *pdFoundMass,
            double *pdHeaderMass,
            long *pnChargeState) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Version( 
            long *pnMajorVersion,
            long *pnMinorVersion,
            long *pnSubMinorVersion,
            long *nBuildNumber) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXRawfile4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXRawfile4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXRawfile4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXRawfile4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IXRawfile4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IXRawfile4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IXRawfile4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IXRawfile4 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IXRawfile4 * This,
            BSTR szFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IXRawfile4 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IXRawfile4 * This,
            BSTR *pbstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCreatorID )( 
            IXRawfile4 * This,
            BSTR *pbstrCreatorID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )( 
            IXRawfile4 * This,
            long *pnVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCreationDate )( 
            IXRawfile4 * This,
            DATE *pCreationDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsError )( 
            IXRawfile4 * This,
            long *pbIsError);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsNewFile )( 
            IXRawfile4 * This,
            long *pbIsNewFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorCode )( 
            IXRawfile4 * This,
            long *pnErrorCode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorMessage )( 
            IXRawfile4 * This,
            BSTR *pbstrErrorMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWarningMessage )( 
            IXRawfile4 * This,
            BSTR *pbstrWarningMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowNumber )( 
            IXRawfile4 * This,
            long *pnSeqRowNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleType )( 
            IXRawfile4 * This,
            long *pnSampleType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowDataPath )( 
            IXRawfile4 * This,
            BSTR *pbstrDataPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowRawFileName )( 
            IXRawfile4 * This,
            BSTR *pbstrRawFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleName )( 
            IXRawfile4 * This,
            BSTR *pbstrSampleName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleID )( 
            IXRawfile4 * This,
            BSTR *pbstrSampleID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowComment )( 
            IXRawfile4 * This,
            BSTR *pbstrComment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowLevelName )( 
            IXRawfile4 * This,
            BSTR *pbstrLevelName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserText )( 
            IXRawfile4 * This,
            long nIndex,
            BSTR *pbstrUserText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowInstrumentMethod )( 
            IXRawfile4 * This,
            BSTR *pbstrInstrumentMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowProcessingMethod )( 
            IXRawfile4 * This,
            BSTR *pbstrProcessingMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowCalibrationFile )( 
            IXRawfile4 * This,
            BSTR *pbstrCalibrationFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowVial )( 
            IXRawfile4 * This,
            BSTR *pbstrVial);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowInjectionVolume )( 
            IXRawfile4 * This,
            double *pdInjVol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleWeight )( 
            IXRawfile4 * This,
            double *pdSampleWt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleVolume )( 
            IXRawfile4 * This,
            double *pdSampleVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowISTDAmount )( 
            IXRawfile4 * This,
            double *pdISTDAmount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowDilutionFactor )( 
            IXRawfile4 * This,
            double *pdDilutionFactor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserLabel )( 
            IXRawfile4 * This,
            long nIndex,
            BSTR *pbstrUserLabel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InAcquisition )( 
            IXRawfile4 * This,
            long *pbInAcquisition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfControllers )( 
            IXRawfile4 * This,
            long *pnNumControllers);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetControllerType )( 
            IXRawfile4 * This,
            long nIndex,
            long *pnControllerType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCurrentController )( 
            IXRawfile4 * This,
            long nControllerType,
            long nControllerNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentController )( 
            IXRawfile4 * This,
            long *pnControllerType,
            long *pnControllerNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumSpectra )( 
            IXRawfile4 * This,
            long *pnNumberOfSpectra);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumStatusLog )( 
            IXRawfile4 * This,
            long *pnNumberOfStatusLogEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumErrorLog )( 
            IXRawfile4 * This,
            long *pnNumberOfErrorLogEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumTuneData )( 
            IXRawfile4 * This,
            long *pnNumTuneData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassResolution )( 
            IXRawfile4 * This,
            double *pdMassResolution);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExpectedRunTime )( 
            IXRawfile4 * This,
            double *pdExpectedRunTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumTrailerExtra )( 
            IXRawfile4 * This,
            long *pnNumberOfTrailerExtraEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLowMass )( 
            IXRawfile4 * This,
            double *pdLowMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHighMass )( 
            IXRawfile4 * This,
            double *pdHighMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStartTime )( 
            IXRawfile4 * This,
            double *pdStartTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEndTime )( 
            IXRawfile4 * This,
            double *pdEndTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMaxIntegratedIntensity )( 
            IXRawfile4 * This,
            double *pdMaxIntegIntensity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMaxIntensity )( 
            IXRawfile4 * This,
            long *pnMaxIntensity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstSpectrumNumber )( 
            IXRawfile4 * This,
            long *pnFirstSpectrum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLastSpectrumNumber )( 
            IXRawfile4 * This,
            long *pnLastSpectrum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstrumentID )( 
            IXRawfile4 * This,
            long *pnInstrumentID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInletID )( 
            IXRawfile4 * This,
            long *pnInletID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorFlag )( 
            IXRawfile4 * This,
            long *pnErrorFlag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleVolume )( 
            IXRawfile4 * This,
            double *pdSampleVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleWeight )( 
            IXRawfile4 * This,
            double *pdSampleWeight);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVialNumber )( 
            IXRawfile4 * This,
            long *pnVialNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInjectionVolume )( 
            IXRawfile4 * This,
            double *pdInjectionVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXRawfile4 * This,
            BSTR *pbstrFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAcquisitionFileName )( 
            IXRawfile4 * This,
            BSTR *pbstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstrumentDescription )( 
            IXRawfile4 * This,
            BSTR *pbstrInstrumentDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAcquisitionDate )( 
            IXRawfile4 * This,
            BSTR *pbstrAcquisitionDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOperator )( 
            IXRawfile4 * This,
            BSTR *pbstrOperator);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComment1 )( 
            IXRawfile4 * This,
            BSTR *pbstrComment1);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComment2 )( 
            IXRawfile4 * This,
            BSTR *pbstrComment2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleAmountUnits )( 
            IXRawfile4 * This,
            BSTR *pbstrSampleAmountUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInjectionAmountUnits )( 
            IXRawfile4 * This,
            BSTR *pbstrInjectionAmountUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleVolumeUnits )( 
            IXRawfile4 * This,
            BSTR *pbstrSampleVolumeUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilters )( 
            IXRawfile4 * This,
            VARIANT *pvarFilterArray,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScanNumFromRT )( 
            IXRawfile4 * This,
            double dRT,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RTFromScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            double *pdRT);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            BSTR *pbstrFilter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterForScanRT )( 
            IXRawfile4 * This,
            double dRT,
            BSTR *pbstrFilter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListFromScanNum )( 
            IXRawfile4 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListFromRT )( 
            IXRawfile4 * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextMassListFromScanNum )( 
            IXRawfile4 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrevMassListFromScanNum )( 
            IXRawfile4 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsProfileScanForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            long *pbIsProfileScan);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsCentroidScanForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            long *pbIsCentroidScan);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScanHeaderInfoForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            long *pnNumPackets,
            double *pdStartTime,
            double *pdLowMass,
            double *pdHighMass,
            double *pdTIC,
            double *pdBasePeakMass,
            double *pdBasePeakIntensity,
            long *pnNumChannels,
            long *pbUniformTime,
            double *pdFrequency);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForRT )( 
            IXRawfile4 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogLabelsForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogLabelsForRT )( 
            IXRawfile4 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogValueForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            BSTR bstrLabel,
            double *pdStatusLogRT,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogValueForRT )( 
            IXRawfile4 * This,
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraForRT )( 
            IXRawfile4 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraLabelsForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraLabelsForRT )( 
            IXRawfile4 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraValueForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraValueForRT )( 
            IXRawfile4 * This,
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorLogItem )( 
            IXRawfile4 * This,
            long nItemNumber,
            double *pdRT,
            BSTR *pbstrErrorMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneData )( 
            IXRawfile4 * This,
            long nSegmentNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumInstMethods )( 
            IXRawfile4 * This,
            long *pnNumInstMethods);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstMethod )( 
            IXRawfile4 * This,
            long nInstMethodItem,
            BSTR *pbstrInstMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChroData )( 
            IXRawfile4 * This,
            long nChroType1,
            long nChroOperator,
            long nChroType2,
            BSTR bstrFilter,
            BSTR bstrMassRanges1,
            BSTR bstrMassRanges2,
            double dDelay,
            double *pdStartTime,
            double *pdEndTime,
            long nSmoothingType,
            long nSmoothingValue,
            VARIANT *pvarChroData,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RefreshViewOfFile )( 
            IXRawfile4 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneDataValue )( 
            IXRawfile4 * This,
            long nSegmentNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneDataLabels )( 
            IXRawfile4 * This,
            long nSegmentNumber,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstName )( 
            IXRawfile4 * This,
            BSTR *pbstrInstName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstModel )( 
            IXRawfile4 * This,
            BSTR *pbstrInstModel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstSerialNumber )( 
            IXRawfile4 * This,
            BSTR *pbstrInstSerialNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstSoftwareVersion )( 
            IXRawfile4 * This,
            BSTR *pbstrInstSoftwareVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstHardwareVersion )( 
            IXRawfile4 * This,
            BSTR *pbstrInstHardwareVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstFlags )( 
            IXRawfile4 * This,
            BSTR *pbstrInstFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstNumChannelLabels )( 
            IXRawfile4 * This,
            long *pnInstNumChannelLabels);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstChannelLabel )( 
            IXRawfile4 * This,
            long nChannelLabelNumber,
            BSTR *pbstrInstChannelLabel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfControllersOfType )( 
            IXRawfile4 * This,
            long nControllerType,
            long *pnNumControllersOfType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAverageMassList )( 
            IXRawfile4 * This,
            long *pnFirstAvgScanNumber,
            long *pnLastAvgScanNumber,
            long *pnFirstBkg1ScanNumber,
            long *pnLastBkg1ScanNumber,
            long *pnFirstBkg2ScanNumber,
            long *pnLastBkg2ScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsThereMSData )( 
            IXRawfile4 * This,
            long *pbMSData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasExpMethod )( 
            IXRawfile4 * This,
            long *pbMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterMassPrecision )( 
            IXRawfile4 * This,
            long *pnFilterMassPrecision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForPos )( 
            IXRawfile4 * This,
            long nPos,
            VARIANT *pvarRT,
            VARIANT *pvarValue,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogPlottableIndex )( 
            IXRawfile4 * This,
            VARIANT *pvarIndex,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstMethodNames )( 
            IXRawfile4 * This,
            long *pnNumInstMethods,
            VARIANT *pvarNames);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMassTolerance )( 
            IXRawfile4 * This,
            long bUseUserDefined,
            double dMassTolerance,
            long nUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChros )( 
            IXRawfile4 * This,
            long nNumChros,
            double *pdStartTime,
            double *pdEndTime,
            VARIANT *pvarChroParamsArray,
            VARIANT *pvarChroDataSizeArray,
            VARIANT *pvarChroDataArray,
            VARIANT *pvarPeakFlagsArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLabelData )( 
            IXRawfile4 * This,
            VARIANT *pvarLabels,
            VARIANT *pvarFlags,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNoiseData )( 
            IXRawfile4 * This,
            VARIANT *pvarNoisePacket,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSegmentedMassListFromRT )( 
            IXRawfile4 * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize,
            VARIANT *pvarSegments,
            long *pnNumSegments,
            VARIANT *pvarLowHighMassRange);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSegmentedMassListFromScanNum )( 
            IXRawfile4 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize,
            VARIANT *pvarSegments,
            long *pnNumSegments,
            VARIANT *pvarLowHighMassRange);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScanEventForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            BSTR *pbstrScanEvent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserTextEx )( 
            IXRawfile4 * This,
            long nIndex,
            BSTR *pbstrUserText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowBarcode )( 
            IXRawfile4 * This,
            BSTR *pbstrBarcode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowBarcodeStatus )( 
            IXRawfile4 * This,
            long *pnBarcodeStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListRangeFromScanNum )( 
            IXRawfile4 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListRangeFromRT )( 
            IXRawfile4 * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextMassListRangeFromScanNum )( 
            IXRawfile4 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrevMassListRangeFromScanNum )( 
            IXRawfile4 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrecursorInfoFromScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            VARIANT *pvarPrecursorInfos,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractInstMethodFromRaw )( 
            IXRawfile4 * This,
            BSTR szInstMethodFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSegmentAndEventForScanNum )( 
            IXRawfile4 * This,
            long nScanNumber,
            long *pnSegment,
            long *pnScanEvent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassPrecisionEstimate )( 
            IXRawfile4 * This,
            long lScanNumber,
            VARIANT *pvarMassList,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetActivationTypeForScanNum )( 
            IXRawfile4 * This,
            long nScan,
            long lMSOrder,
            long *pnActivationType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDetectorTypeForScanNum )( 
            IXRawfile4 * This,
            long nScan,
            long *pnDetectorType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassAnalyzerTypeForScanNum )( 
            IXRawfile4 * This,
            long nScan,
            long *pnMassAnalyzerType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMSOrderForScanNum )( 
            IXRawfile4 * This,
            long nScan,
            long *pnMSOrder);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrecursorMassForScanNum )( 
            IXRawfile4 * This,
            long nScan,
            long lMSOrder,
            double *pdMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScanTypeForScanNum )( 
            IXRawfile4 * This,
            long nScan,
            long *pnScanType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAveragedMassSpectrum )( 
            IXRawfile4 * This,
            long *pnScanNumbers,
            long nScansToAverage,
            VARIANT_BOOL bCentroidResult,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSummedMassSpectrum )( 
            IXRawfile4 * This,
            long *pnScanNumbers,
            long nScansToSum,
            VARIANT_BOOL bCentroidResult,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAveragedLabelData )( 
            IXRawfile4 * This,
            long *pnScanNumbers,
            long nScansToAverage,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindPrecursorMassInFullScan )( 
            IXRawfile4 * This,
            long nScan,
            long *pnMasterScan,
            double *pdFoundMass,
            double *pdHeaderMass,
            long *pnChargeState);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Version )( 
            IXRawfile4 * This,
            long *pnMajorVersion,
            long *pnMinorVersion,
            long *pnSubMinorVersion,
            long *nBuildNumber);
        
        END_INTERFACE
    } IXRawfile4Vtbl;

    interface IXRawfile4
    {
        CONST_VTBL struct IXRawfile4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXRawfile4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXRawfile4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXRawfile4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXRawfile4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IXRawfile4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IXRawfile4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IXRawfile4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IXRawfile4_Open(This,szFileName)	\
    ( (This)->lpVtbl -> Open(This,szFileName) ) 

#define IXRawfile4_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IXRawfile4_GetFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetFileName(This,pbstrFileName) ) 

#define IXRawfile4_GetCreatorID(This,pbstrCreatorID)	\
    ( (This)->lpVtbl -> GetCreatorID(This,pbstrCreatorID) ) 

#define IXRawfile4_GetVersionNumber(This,pnVersion)	\
    ( (This)->lpVtbl -> GetVersionNumber(This,pnVersion) ) 

#define IXRawfile4_GetCreationDate(This,pCreationDate)	\
    ( (This)->lpVtbl -> GetCreationDate(This,pCreationDate) ) 

#define IXRawfile4_IsError(This,pbIsError)	\
    ( (This)->lpVtbl -> IsError(This,pbIsError) ) 

#define IXRawfile4_IsNewFile(This,pbIsNewFile)	\
    ( (This)->lpVtbl -> IsNewFile(This,pbIsNewFile) ) 

#define IXRawfile4_GetErrorCode(This,pnErrorCode)	\
    ( (This)->lpVtbl -> GetErrorCode(This,pnErrorCode) ) 

#define IXRawfile4_GetErrorMessage(This,pbstrErrorMessage)	\
    ( (This)->lpVtbl -> GetErrorMessage(This,pbstrErrorMessage) ) 

#define IXRawfile4_GetWarningMessage(This,pbstrWarningMessage)	\
    ( (This)->lpVtbl -> GetWarningMessage(This,pbstrWarningMessage) ) 

#define IXRawfile4_GetSeqRowNumber(This,pnSeqRowNumber)	\
    ( (This)->lpVtbl -> GetSeqRowNumber(This,pnSeqRowNumber) ) 

#define IXRawfile4_GetSeqRowSampleType(This,pnSampleType)	\
    ( (This)->lpVtbl -> GetSeqRowSampleType(This,pnSampleType) ) 

#define IXRawfile4_GetSeqRowDataPath(This,pbstrDataPath)	\
    ( (This)->lpVtbl -> GetSeqRowDataPath(This,pbstrDataPath) ) 

#define IXRawfile4_GetSeqRowRawFileName(This,pbstrRawFileName)	\
    ( (This)->lpVtbl -> GetSeqRowRawFileName(This,pbstrRawFileName) ) 

#define IXRawfile4_GetSeqRowSampleName(This,pbstrSampleName)	\
    ( (This)->lpVtbl -> GetSeqRowSampleName(This,pbstrSampleName) ) 

#define IXRawfile4_GetSeqRowSampleID(This,pbstrSampleID)	\
    ( (This)->lpVtbl -> GetSeqRowSampleID(This,pbstrSampleID) ) 

#define IXRawfile4_GetSeqRowComment(This,pbstrComment)	\
    ( (This)->lpVtbl -> GetSeqRowComment(This,pbstrComment) ) 

#define IXRawfile4_GetSeqRowLevelName(This,pbstrLevelName)	\
    ( (This)->lpVtbl -> GetSeqRowLevelName(This,pbstrLevelName) ) 

#define IXRawfile4_GetSeqRowUserText(This,nIndex,pbstrUserText)	\
    ( (This)->lpVtbl -> GetSeqRowUserText(This,nIndex,pbstrUserText) ) 

#define IXRawfile4_GetSeqRowInstrumentMethod(This,pbstrInstrumentMethod)	\
    ( (This)->lpVtbl -> GetSeqRowInstrumentMethod(This,pbstrInstrumentMethod) ) 

#define IXRawfile4_GetSeqRowProcessingMethod(This,pbstrProcessingMethod)	\
    ( (This)->lpVtbl -> GetSeqRowProcessingMethod(This,pbstrProcessingMethod) ) 

#define IXRawfile4_GetSeqRowCalibrationFile(This,pbstrCalibrationFile)	\
    ( (This)->lpVtbl -> GetSeqRowCalibrationFile(This,pbstrCalibrationFile) ) 

#define IXRawfile4_GetSeqRowVial(This,pbstrVial)	\
    ( (This)->lpVtbl -> GetSeqRowVial(This,pbstrVial) ) 

#define IXRawfile4_GetSeqRowInjectionVolume(This,pdInjVol)	\
    ( (This)->lpVtbl -> GetSeqRowInjectionVolume(This,pdInjVol) ) 

#define IXRawfile4_GetSeqRowSampleWeight(This,pdSampleWt)	\
    ( (This)->lpVtbl -> GetSeqRowSampleWeight(This,pdSampleWt) ) 

#define IXRawfile4_GetSeqRowSampleVolume(This,pdSampleVolume)	\
    ( (This)->lpVtbl -> GetSeqRowSampleVolume(This,pdSampleVolume) ) 

#define IXRawfile4_GetSeqRowISTDAmount(This,pdISTDAmount)	\
    ( (This)->lpVtbl -> GetSeqRowISTDAmount(This,pdISTDAmount) ) 

#define IXRawfile4_GetSeqRowDilutionFactor(This,pdDilutionFactor)	\
    ( (This)->lpVtbl -> GetSeqRowDilutionFactor(This,pdDilutionFactor) ) 

#define IXRawfile4_GetSeqRowUserLabel(This,nIndex,pbstrUserLabel)	\
    ( (This)->lpVtbl -> GetSeqRowUserLabel(This,nIndex,pbstrUserLabel) ) 

#define IXRawfile4_InAcquisition(This,pbInAcquisition)	\
    ( (This)->lpVtbl -> InAcquisition(This,pbInAcquisition) ) 

#define IXRawfile4_GetNumberOfControllers(This,pnNumControllers)	\
    ( (This)->lpVtbl -> GetNumberOfControllers(This,pnNumControllers) ) 

#define IXRawfile4_GetControllerType(This,nIndex,pnControllerType)	\
    ( (This)->lpVtbl -> GetControllerType(This,nIndex,pnControllerType) ) 

#define IXRawfile4_SetCurrentController(This,nControllerType,nControllerNumber)	\
    ( (This)->lpVtbl -> SetCurrentController(This,nControllerType,nControllerNumber) ) 

#define IXRawfile4_GetCurrentController(This,pnControllerType,pnControllerNumber)	\
    ( (This)->lpVtbl -> GetCurrentController(This,pnControllerType,pnControllerNumber) ) 

#define IXRawfile4_GetNumSpectra(This,pnNumberOfSpectra)	\
    ( (This)->lpVtbl -> GetNumSpectra(This,pnNumberOfSpectra) ) 

#define IXRawfile4_GetNumStatusLog(This,pnNumberOfStatusLogEntries)	\
    ( (This)->lpVtbl -> GetNumStatusLog(This,pnNumberOfStatusLogEntries) ) 

#define IXRawfile4_GetNumErrorLog(This,pnNumberOfErrorLogEntries)	\
    ( (This)->lpVtbl -> GetNumErrorLog(This,pnNumberOfErrorLogEntries) ) 

#define IXRawfile4_GetNumTuneData(This,pnNumTuneData)	\
    ( (This)->lpVtbl -> GetNumTuneData(This,pnNumTuneData) ) 

#define IXRawfile4_GetMassResolution(This,pdMassResolution)	\
    ( (This)->lpVtbl -> GetMassResolution(This,pdMassResolution) ) 

#define IXRawfile4_GetExpectedRunTime(This,pdExpectedRunTime)	\
    ( (This)->lpVtbl -> GetExpectedRunTime(This,pdExpectedRunTime) ) 

#define IXRawfile4_GetNumTrailerExtra(This,pnNumberOfTrailerExtraEntries)	\
    ( (This)->lpVtbl -> GetNumTrailerExtra(This,pnNumberOfTrailerExtraEntries) ) 

#define IXRawfile4_GetLowMass(This,pdLowMass)	\
    ( (This)->lpVtbl -> GetLowMass(This,pdLowMass) ) 

#define IXRawfile4_GetHighMass(This,pdHighMass)	\
    ( (This)->lpVtbl -> GetHighMass(This,pdHighMass) ) 

#define IXRawfile4_GetStartTime(This,pdStartTime)	\
    ( (This)->lpVtbl -> GetStartTime(This,pdStartTime) ) 

#define IXRawfile4_GetEndTime(This,pdEndTime)	\
    ( (This)->lpVtbl -> GetEndTime(This,pdEndTime) ) 

#define IXRawfile4_GetMaxIntegratedIntensity(This,pdMaxIntegIntensity)	\
    ( (This)->lpVtbl -> GetMaxIntegratedIntensity(This,pdMaxIntegIntensity) ) 

#define IXRawfile4_GetMaxIntensity(This,pnMaxIntensity)	\
    ( (This)->lpVtbl -> GetMaxIntensity(This,pnMaxIntensity) ) 

#define IXRawfile4_GetFirstSpectrumNumber(This,pnFirstSpectrum)	\
    ( (This)->lpVtbl -> GetFirstSpectrumNumber(This,pnFirstSpectrum) ) 

#define IXRawfile4_GetLastSpectrumNumber(This,pnLastSpectrum)	\
    ( (This)->lpVtbl -> GetLastSpectrumNumber(This,pnLastSpectrum) ) 

#define IXRawfile4_GetInstrumentID(This,pnInstrumentID)	\
    ( (This)->lpVtbl -> GetInstrumentID(This,pnInstrumentID) ) 

#define IXRawfile4_GetInletID(This,pnInletID)	\
    ( (This)->lpVtbl -> GetInletID(This,pnInletID) ) 

#define IXRawfile4_GetErrorFlag(This,pnErrorFlag)	\
    ( (This)->lpVtbl -> GetErrorFlag(This,pnErrorFlag) ) 

#define IXRawfile4_GetSampleVolume(This,pdSampleVolume)	\
    ( (This)->lpVtbl -> GetSampleVolume(This,pdSampleVolume) ) 

#define IXRawfile4_GetSampleWeight(This,pdSampleWeight)	\
    ( (This)->lpVtbl -> GetSampleWeight(This,pdSampleWeight) ) 

#define IXRawfile4_GetVialNumber(This,pnVialNumber)	\
    ( (This)->lpVtbl -> GetVialNumber(This,pnVialNumber) ) 

#define IXRawfile4_GetInjectionVolume(This,pdInjectionVolume)	\
    ( (This)->lpVtbl -> GetInjectionVolume(This,pdInjectionVolume) ) 

#define IXRawfile4_GetFlags(This,pbstrFlags)	\
    ( (This)->lpVtbl -> GetFlags(This,pbstrFlags) ) 

#define IXRawfile4_GetAcquisitionFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetAcquisitionFileName(This,pbstrFileName) ) 

#define IXRawfile4_GetInstrumentDescription(This,pbstrInstrumentDescription)	\
    ( (This)->lpVtbl -> GetInstrumentDescription(This,pbstrInstrumentDescription) ) 

#define IXRawfile4_GetAcquisitionDate(This,pbstrAcquisitionDate)	\
    ( (This)->lpVtbl -> GetAcquisitionDate(This,pbstrAcquisitionDate) ) 

#define IXRawfile4_GetOperator(This,pbstrOperator)	\
    ( (This)->lpVtbl -> GetOperator(This,pbstrOperator) ) 

#define IXRawfile4_GetComment1(This,pbstrComment1)	\
    ( (This)->lpVtbl -> GetComment1(This,pbstrComment1) ) 

#define IXRawfile4_GetComment2(This,pbstrComment2)	\
    ( (This)->lpVtbl -> GetComment2(This,pbstrComment2) ) 

#define IXRawfile4_GetSampleAmountUnits(This,pbstrSampleAmountUnits)	\
    ( (This)->lpVtbl -> GetSampleAmountUnits(This,pbstrSampleAmountUnits) ) 

#define IXRawfile4_GetInjectionAmountUnits(This,pbstrInjectionAmountUnits)	\
    ( (This)->lpVtbl -> GetInjectionAmountUnits(This,pbstrInjectionAmountUnits) ) 

#define IXRawfile4_GetSampleVolumeUnits(This,pbstrSampleVolumeUnits)	\
    ( (This)->lpVtbl -> GetSampleVolumeUnits(This,pbstrSampleVolumeUnits) ) 

#define IXRawfile4_GetFilters(This,pvarFilterArray,pnArraySize)	\
    ( (This)->lpVtbl -> GetFilters(This,pvarFilterArray,pnArraySize) ) 

#define IXRawfile4_ScanNumFromRT(This,dRT,pnScanNumber)	\
    ( (This)->lpVtbl -> ScanNumFromRT(This,dRT,pnScanNumber) ) 

#define IXRawfile4_RTFromScanNum(This,nScanNumber,pdRT)	\
    ( (This)->lpVtbl -> RTFromScanNum(This,nScanNumber,pdRT) ) 

#define IXRawfile4_GetFilterForScanNum(This,nScanNumber,pbstrFilter)	\
    ( (This)->lpVtbl -> GetFilterForScanNum(This,nScanNumber,pbstrFilter) ) 

#define IXRawfile4_GetFilterForScanRT(This,dRT,pbstrFilter)	\
    ( (This)->lpVtbl -> GetFilterForScanRT(This,dRT,pbstrFilter) ) 

#define IXRawfile4_GetMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile4_GetMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile4_GetNextMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetNextMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile4_GetPrevMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetPrevMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile4_IsProfileScanForScanNum(This,nScanNumber,pbIsProfileScan)	\
    ( (This)->lpVtbl -> IsProfileScanForScanNum(This,nScanNumber,pbIsProfileScan) ) 

#define IXRawfile4_IsCentroidScanForScanNum(This,nScanNumber,pbIsCentroidScan)	\
    ( (This)->lpVtbl -> IsCentroidScanForScanNum(This,nScanNumber,pbIsCentroidScan) ) 

#define IXRawfile4_GetScanHeaderInfoForScanNum(This,nScanNumber,pnNumPackets,pdStartTime,pdLowMass,pdHighMass,pdTIC,pdBasePeakMass,pdBasePeakIntensity,pnNumChannels,pbUniformTime,pdFrequency)	\
    ( (This)->lpVtbl -> GetScanHeaderInfoForScanNum(This,nScanNumber,pnNumPackets,pdStartTime,pdLowMass,pdHighMass,pdTIC,pdBasePeakMass,pdBasePeakIntensity,pnNumChannels,pbUniformTime,pdFrequency) ) 

#define IXRawfile4_GetStatusLogForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile4_GetStatusLogForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile4_GetStatusLogLabelsForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogLabelsForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pnArraySize) ) 

#define IXRawfile4_GetStatusLogLabelsForRT(This,pdRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogLabelsForRT(This,pdRT,pvarLabels,pnArraySize) ) 

#define IXRawfile4_GetStatusLogValueForScanNum(This,nScanNumber,bstrLabel,pdStatusLogRT,pvarValue)	\
    ( (This)->lpVtbl -> GetStatusLogValueForScanNum(This,nScanNumber,bstrLabel,pdStatusLogRT,pvarValue) ) 

#define IXRawfile4_GetStatusLogValueForRT(This,pdRT,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetStatusLogValueForRT(This,pdRT,bstrLabel,pvarValue) ) 

#define IXRawfile4_GetTrailerExtraForScanNum(This,nScanNumber,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraForScanNum(This,nScanNumber,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile4_GetTrailerExtraForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile4_GetTrailerExtraLabelsForScanNum(This,nScanNumber,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraLabelsForScanNum(This,nScanNumber,pvarLabels,pnArraySize) ) 

#define IXRawfile4_GetTrailerExtraLabelsForRT(This,pdRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraLabelsForRT(This,pdRT,pvarLabels,pnArraySize) ) 

#define IXRawfile4_GetTrailerExtraValueForScanNum(This,nScanNumber,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTrailerExtraValueForScanNum(This,nScanNumber,bstrLabel,pvarValue) ) 

#define IXRawfile4_GetTrailerExtraValueForRT(This,pdRT,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTrailerExtraValueForRT(This,pdRT,bstrLabel,pvarValue) ) 

#define IXRawfile4_GetErrorLogItem(This,nItemNumber,pdRT,pbstrErrorMessage)	\
    ( (This)->lpVtbl -> GetErrorLogItem(This,nItemNumber,pdRT,pbstrErrorMessage) ) 

#define IXRawfile4_GetTuneData(This,nSegmentNumber,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTuneData(This,nSegmentNumber,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile4_GetNumInstMethods(This,pnNumInstMethods)	\
    ( (This)->lpVtbl -> GetNumInstMethods(This,pnNumInstMethods) ) 

#define IXRawfile4_GetInstMethod(This,nInstMethodItem,pbstrInstMethod)	\
    ( (This)->lpVtbl -> GetInstMethod(This,nInstMethodItem,pbstrInstMethod) ) 

#define IXRawfile4_GetChroData(This,nChroType1,nChroOperator,nChroType2,bstrFilter,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetChroData(This,nChroType1,nChroOperator,nChroType2,bstrFilter,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile4_RefreshViewOfFile(This)	\
    ( (This)->lpVtbl -> RefreshViewOfFile(This) ) 

#define IXRawfile4_GetTuneDataValue(This,nSegmentNumber,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTuneDataValue(This,nSegmentNumber,bstrLabel,pvarValue) ) 

#define IXRawfile4_GetTuneDataLabels(This,nSegmentNumber,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTuneDataLabels(This,nSegmentNumber,pvarLabels,pnArraySize) ) 

#define IXRawfile4_GetInstName(This,pbstrInstName)	\
    ( (This)->lpVtbl -> GetInstName(This,pbstrInstName) ) 

#define IXRawfile4_GetInstModel(This,pbstrInstModel)	\
    ( (This)->lpVtbl -> GetInstModel(This,pbstrInstModel) ) 

#define IXRawfile4_GetInstSerialNumber(This,pbstrInstSerialNumber)	\
    ( (This)->lpVtbl -> GetInstSerialNumber(This,pbstrInstSerialNumber) ) 

#define IXRawfile4_GetInstSoftwareVersion(This,pbstrInstSoftwareVersion)	\
    ( (This)->lpVtbl -> GetInstSoftwareVersion(This,pbstrInstSoftwareVersion) ) 

#define IXRawfile4_GetInstHardwareVersion(This,pbstrInstHardwareVersion)	\
    ( (This)->lpVtbl -> GetInstHardwareVersion(This,pbstrInstHardwareVersion) ) 

#define IXRawfile4_GetInstFlags(This,pbstrInstFlags)	\
    ( (This)->lpVtbl -> GetInstFlags(This,pbstrInstFlags) ) 

#define IXRawfile4_GetInstNumChannelLabels(This,pnInstNumChannelLabels)	\
    ( (This)->lpVtbl -> GetInstNumChannelLabels(This,pnInstNumChannelLabels) ) 

#define IXRawfile4_GetInstChannelLabel(This,nChannelLabelNumber,pbstrInstChannelLabel)	\
    ( (This)->lpVtbl -> GetInstChannelLabel(This,nChannelLabelNumber,pbstrInstChannelLabel) ) 

#define IXRawfile4_GetNumberOfControllersOfType(This,nControllerType,pnNumControllersOfType)	\
    ( (This)->lpVtbl -> GetNumberOfControllersOfType(This,nControllerType,pnNumControllersOfType) ) 

#define IXRawfile4_GetAverageMassList(This,pnFirstAvgScanNumber,pnLastAvgScanNumber,pnFirstBkg1ScanNumber,pnLastBkg1ScanNumber,pnFirstBkg2ScanNumber,pnLastBkg2ScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetAverageMassList(This,pnFirstAvgScanNumber,pnLastAvgScanNumber,pnFirstBkg1ScanNumber,pnLastBkg1ScanNumber,pnFirstBkg2ScanNumber,pnLastBkg2ScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile4_IsThereMSData(This,pbMSData)	\
    ( (This)->lpVtbl -> IsThereMSData(This,pbMSData) ) 

#define IXRawfile4_HasExpMethod(This,pbMethod)	\
    ( (This)->lpVtbl -> HasExpMethod(This,pbMethod) ) 

#define IXRawfile4_GetFilterMassPrecision(This,pnFilterMassPrecision)	\
    ( (This)->lpVtbl -> GetFilterMassPrecision(This,pnFilterMassPrecision) ) 

#define IXRawfile4_GetStatusLogForPos(This,nPos,pvarRT,pvarValue,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForPos(This,nPos,pvarRT,pvarValue,pnArraySize) ) 

#define IXRawfile4_GetStatusLogPlottableIndex(This,pvarIndex,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogPlottableIndex(This,pvarIndex,pvarValues,pnArraySize) ) 

#define IXRawfile4_GetInstMethodNames(This,pnNumInstMethods,pvarNames)	\
    ( (This)->lpVtbl -> GetInstMethodNames(This,pnNumInstMethods,pvarNames) ) 

#define IXRawfile4_SetMassTolerance(This,bUseUserDefined,dMassTolerance,nUnits)	\
    ( (This)->lpVtbl -> SetMassTolerance(This,bUseUserDefined,dMassTolerance,nUnits) ) 

#define IXRawfile4_GetChros(This,nNumChros,pdStartTime,pdEndTime,pvarChroParamsArray,pvarChroDataSizeArray,pvarChroDataArray,pvarPeakFlagsArray)	\
    ( (This)->lpVtbl -> GetChros(This,nNumChros,pdStartTime,pdEndTime,pvarChroParamsArray,pvarChroDataSizeArray,pvarChroDataArray,pvarPeakFlagsArray) ) 


#define IXRawfile4_GetLabelData(This,pvarLabels,pvarFlags,pnScanNumber)	\
    ( (This)->lpVtbl -> GetLabelData(This,pvarLabels,pvarFlags,pnScanNumber) ) 

#define IXRawfile4_GetNoiseData(This,pvarNoisePacket,pnScanNumber)	\
    ( (This)->lpVtbl -> GetNoiseData(This,pvarNoisePacket,pnScanNumber) ) 

#define IXRawfile4_GetSegmentedMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange)	\
    ( (This)->lpVtbl -> GetSegmentedMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange) ) 

#define IXRawfile4_GetSegmentedMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange)	\
    ( (This)->lpVtbl -> GetSegmentedMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange) ) 

#define IXRawfile4_GetScanEventForScanNum(This,nScanNumber,pbstrScanEvent)	\
    ( (This)->lpVtbl -> GetScanEventForScanNum(This,nScanNumber,pbstrScanEvent) ) 

#define IXRawfile4_GetSeqRowUserTextEx(This,nIndex,pbstrUserText)	\
    ( (This)->lpVtbl -> GetSeqRowUserTextEx(This,nIndex,pbstrUserText) ) 

#define IXRawfile4_GetSeqRowBarcode(This,pbstrBarcode)	\
    ( (This)->lpVtbl -> GetSeqRowBarcode(This,pbstrBarcode) ) 

#define IXRawfile4_GetSeqRowBarcodeStatus(This,pnBarcodeStatus)	\
    ( (This)->lpVtbl -> GetSeqRowBarcodeStatus(This,pnBarcodeStatus) ) 


#define IXRawfile4_GetMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile4_GetMassListRangeFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListRangeFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile4_GetNextMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetNextMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile4_GetPrevMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetPrevMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile4_GetPrecursorInfoFromScanNum(This,nScanNumber,pvarPrecursorInfos,pnArraySize)	\
    ( (This)->lpVtbl -> GetPrecursorInfoFromScanNum(This,nScanNumber,pvarPrecursorInfos,pnArraySize) ) 


#define IXRawfile4_ExtractInstMethodFromRaw(This,szInstMethodFileName)	\
    ( (This)->lpVtbl -> ExtractInstMethodFromRaw(This,szInstMethodFileName) ) 

#define IXRawfile4_GetSegmentAndEventForScanNum(This,nScanNumber,pnSegment,pnScanEvent)	\
    ( (This)->lpVtbl -> GetSegmentAndEventForScanNum(This,nScanNumber,pnSegment,pnScanEvent) ) 

#define IXRawfile4_GetMassPrecisionEstimate(This,lScanNumber,pvarMassList,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassPrecisionEstimate(This,lScanNumber,pvarMassList,pnArraySize) ) 

#define IXRawfile4_GetActivationTypeForScanNum(This,nScan,lMSOrder,pnActivationType)	\
    ( (This)->lpVtbl -> GetActivationTypeForScanNum(This,nScan,lMSOrder,pnActivationType) ) 

#define IXRawfile4_GetDetectorTypeForScanNum(This,nScan,pnDetectorType)	\
    ( (This)->lpVtbl -> GetDetectorTypeForScanNum(This,nScan,pnDetectorType) ) 

#define IXRawfile4_GetMassAnalyzerTypeForScanNum(This,nScan,pnMassAnalyzerType)	\
    ( (This)->lpVtbl -> GetMassAnalyzerTypeForScanNum(This,nScan,pnMassAnalyzerType) ) 

#define IXRawfile4_GetMSOrderForScanNum(This,nScan,pnMSOrder)	\
    ( (This)->lpVtbl -> GetMSOrderForScanNum(This,nScan,pnMSOrder) ) 

#define IXRawfile4_GetPrecursorMassForScanNum(This,nScan,lMSOrder,pdMass)	\
    ( (This)->lpVtbl -> GetPrecursorMassForScanNum(This,nScan,lMSOrder,pdMass) ) 

#define IXRawfile4_GetScanTypeForScanNum(This,nScan,pnScanType)	\
    ( (This)->lpVtbl -> GetScanTypeForScanNum(This,nScan,pnScanType) ) 

#define IXRawfile4_GetAveragedMassSpectrum(This,pnScanNumbers,nScansToAverage,bCentroidResult,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetAveragedMassSpectrum(This,pnScanNumbers,nScansToAverage,bCentroidResult,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile4_GetSummedMassSpectrum(This,pnScanNumbers,nScansToSum,bCentroidResult,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetSummedMassSpectrum(This,pnScanNumbers,nScansToSum,bCentroidResult,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile4_GetAveragedLabelData(This,pnScanNumbers,nScansToAverage,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetAveragedLabelData(This,pnScanNumbers,nScansToAverage,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile4_FindPrecursorMassInFullScan(This,nScan,pnMasterScan,pdFoundMass,pdHeaderMass,pnChargeState)	\
    ( (This)->lpVtbl -> FindPrecursorMassInFullScan(This,nScan,pnMasterScan,pdFoundMass,pdHeaderMass,pnChargeState) ) 

#define IXRawfile4_Version(This,pnMajorVersion,pnMinorVersion,pnSubMinorVersion,nBuildNumber)	\
    ( (This)->lpVtbl -> Version(This,pnMajorVersion,pnMinorVersion,pnSubMinorVersion,nBuildNumber) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_ExtractInstMethodFromRaw_Proxy( 
    IXRawfile4 * This,
    BSTR szInstMethodFileName);


void __RPC_STUB IXRawfile4_ExtractInstMethodFromRaw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_GetSegmentAndEventForScanNum_Proxy( 
    IXRawfile4 * This,
    long nScanNumber,
    long *pnSegment,
    long *pnScanEvent);


void __RPC_STUB IXRawfile4_GetSegmentAndEventForScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_GetMassPrecisionEstimate_Proxy( 
    IXRawfile4 * This,
    long lScanNumber,
    VARIANT *pvarMassList,
    long *pnArraySize);


void __RPC_STUB IXRawfile4_GetMassPrecisionEstimate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_GetActivationTypeForScanNum_Proxy( 
    IXRawfile4 * This,
    long nScan,
    long lMSOrder,
    long *pnActivationType);


void __RPC_STUB IXRawfile4_GetActivationTypeForScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_GetDetectorTypeForScanNum_Proxy( 
    IXRawfile4 * This,
    long nScan,
    long *pnDetectorType);


void __RPC_STUB IXRawfile4_GetDetectorTypeForScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_GetMassAnalyzerTypeForScanNum_Proxy( 
    IXRawfile4 * This,
    long nScan,
    long *pnMassAnalyzerType);


void __RPC_STUB IXRawfile4_GetMassAnalyzerTypeForScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_GetMSOrderForScanNum_Proxy( 
    IXRawfile4 * This,
    long nScan,
    long *pnMSOrder);


void __RPC_STUB IXRawfile4_GetMSOrderForScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_GetPrecursorMassForScanNum_Proxy( 
    IXRawfile4 * This,
    long nScan,
    long lMSOrder,
    double *pdMass);


void __RPC_STUB IXRawfile4_GetPrecursorMassForScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_GetScanTypeForScanNum_Proxy( 
    IXRawfile4 * This,
    long nScan,
    long *pnScanType);


void __RPC_STUB IXRawfile4_GetScanTypeForScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_GetAveragedMassSpectrum_Proxy( 
    IXRawfile4 * This,
    long *pnScanNumbers,
    long nScansToAverage,
    VARIANT_BOOL bCentroidResult,
    VARIANT *pvarMassList,
    VARIANT *pvarPeakFlags,
    long *pnArraySize);


void __RPC_STUB IXRawfile4_GetAveragedMassSpectrum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_GetSummedMassSpectrum_Proxy( 
    IXRawfile4 * This,
    long *pnScanNumbers,
    long nScansToSum,
    VARIANT_BOOL bCentroidResult,
    VARIANT *pvarMassList,
    VARIANT *pvarPeakFlags,
    long *pnArraySize);


void __RPC_STUB IXRawfile4_GetSummedMassSpectrum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_GetAveragedLabelData_Proxy( 
    IXRawfile4 * This,
    long *pnScanNumbers,
    long nScansToAverage,
    VARIANT *pvarMassList,
    VARIANT *pvarPeakFlags,
    long *pnArraySize);


void __RPC_STUB IXRawfile4_GetAveragedLabelData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_FindPrecursorMassInFullScan_Proxy( 
    IXRawfile4 * This,
    long nScan,
    long *pnMasterScan,
    double *pdFoundMass,
    double *pdHeaderMass,
    long *pnChargeState);


void __RPC_STUB IXRawfile4_FindPrecursorMassInFullScan_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile4_Version_Proxy( 
    IXRawfile4 * This,
    long *pnMajorVersion,
    long *pnMinorVersion,
    long *pnSubMinorVersion,
    long *nBuildNumber);


void __RPC_STUB IXRawfile4_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXRawfile4_INTERFACE_DEFINED__ */


#ifndef __IXRawfile5_INTERFACE_DEFINED__
#define __IXRawfile5_INTERFACE_DEFINED__

/* interface IXRawfile5 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IXRawfile5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("06F53853-E43C-4F30-9E5F-D1B3668F0C3C")
    IXRawfile5 : public IXRawfile4
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumberOfMassRangesFromScanNum( 
            int nScanNumber,
            long *pnNumMassRanges) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFullMSOrderPrecursorDataFromScanNum( 
            int nScanNumber,
            long nMSOrder,
            VARIANT *pvarFullMSOrderPrecursorInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMassRangeFromScanNum( 
            long nScanNumber,
            long nMassRangeIndex,
            double *pdMassRangeLowValue,
            double *pdMassRangeHighValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCycleNumberFromScanNumber( 
            long nScanNumber,
            long *pnCycleNumber) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCompoundNameFromScanNum( 
            int nScanNumber,
            BSTR *pbstrCompoundName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUniqueCompoundNames( 
            VARIANT *pvarCompoundNamesArray,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetChroByCompoundName( 
            long nChroType1,
            long nChroOperator,
            long nChroType2,
            VARIANT *pCompoundNames,
            BSTR bstrMassRanges1,
            BSTR bstrMassRanges2,
            double dDelay,
            double *pdStartTime,
            double *pdEndTime,
            long nSmoothingType,
            long nSmoothingValue,
            VARIANT *pvarChroData,
            VARIANT *pvarPeakFlags,
            long *pnArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMSXMultiplexValueFromScanNum( 
            long nScanNumber,
            long *pnMSXValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAValueFromScanNum( 
            long nScanNumber,
            long *pnAValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBValueFromScanNum( 
            long nScanNumber,
            long *pnBValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFValueFromScanNum( 
            long nScanNumber,
            long *pnFValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetKValueFromScanNum( 
            long nScanNumber,
            long *pnKValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRValueFromScanNum( 
            long nScanNumber,
            long *pnRValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVValueFromScanNum( 
            long nScanNumber,
            long *pnVValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumberOfMassCalibratorsFromScanNum( 
            int nScanNumber,
            long *pnNumMassCalibrators) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMassCalibrationValueFromScanNum( 
            long nScanNumber,
            long nMassCalibrationndex,
            double *pnMassCalibrationValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMassTolerance( 
            long *bUserDefined,
            double *dMassTolerance,
            long *nUnits) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumberOfSourceFragmentsFromScanNum( 
            long nScanNumber,
            long *pnNumSourceFragments) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSourceFragmentValueFromScanNum( 
            long nScanNumber,
            long nSourceFragmentIndex,
            double *pdSourceFragmentValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumberOfSourceFragmentationMassRangesFromScanNum( 
            long nScanNumber,
            long *pnNumSourceFragmentationMassRanges) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSourceFragmentationMassRangeFromScanNum( 
            long nScanNumber,
            long nSourceFragmentMassRangeIndex,
            double *pdSourceFragmentRangeLowValue,
            double *pdSourceFragmentRangeHighValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumberOfMSOrdersFromScanNum( 
            int nScanNumber,
            long *pnNumMSOrders) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetIsolationWidthForScanNum( 
            long nScanNumber,
            long nMSOrder,
            double *pdIsolationWidth) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCollisionEnergyForScanNum( 
            long nScanNumber,
            long nMSOrder,
            double *pdCollisionEnergy) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPrecursorRangeForScanNum( 
            long nScanNumber,
            long nMSOrder,
            double *pdFirstPrecursorMass,
            double *pdLastPrecursorMass,
            long *pbIsValid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAllMSOrderData( 
            long nScanNumber,
            VARIANT *pvarDoubleData,
            VARIANT *pvarFlagsData,
            long *pnNumberOfMSOrders) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsQExactive( 
            long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IncludeReferenceAndExceptionData( 
            long value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXRawfile5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXRawfile5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXRawfile5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXRawfile5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IXRawfile5 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IXRawfile5 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IXRawfile5 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IXRawfile5 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Open )( 
            IXRawfile5 * This,
            BSTR szFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IXRawfile5 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IXRawfile5 * This,
            BSTR *pbstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCreatorID )( 
            IXRawfile5 * This,
            BSTR *pbstrCreatorID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )( 
            IXRawfile5 * This,
            long *pnVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCreationDate )( 
            IXRawfile5 * This,
            DATE *pCreationDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsError )( 
            IXRawfile5 * This,
            long *pbIsError);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsNewFile )( 
            IXRawfile5 * This,
            long *pbIsNewFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorCode )( 
            IXRawfile5 * This,
            long *pnErrorCode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorMessage )( 
            IXRawfile5 * This,
            BSTR *pbstrErrorMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetWarningMessage )( 
            IXRawfile5 * This,
            BSTR *pbstrWarningMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowNumber )( 
            IXRawfile5 * This,
            long *pnSeqRowNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleType )( 
            IXRawfile5 * This,
            long *pnSampleType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowDataPath )( 
            IXRawfile5 * This,
            BSTR *pbstrDataPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowRawFileName )( 
            IXRawfile5 * This,
            BSTR *pbstrRawFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleName )( 
            IXRawfile5 * This,
            BSTR *pbstrSampleName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleID )( 
            IXRawfile5 * This,
            BSTR *pbstrSampleID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowComment )( 
            IXRawfile5 * This,
            BSTR *pbstrComment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowLevelName )( 
            IXRawfile5 * This,
            BSTR *pbstrLevelName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserText )( 
            IXRawfile5 * This,
            long nIndex,
            BSTR *pbstrUserText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowInstrumentMethod )( 
            IXRawfile5 * This,
            BSTR *pbstrInstrumentMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowProcessingMethod )( 
            IXRawfile5 * This,
            BSTR *pbstrProcessingMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowCalibrationFile )( 
            IXRawfile5 * This,
            BSTR *pbstrCalibrationFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowVial )( 
            IXRawfile5 * This,
            BSTR *pbstrVial);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowInjectionVolume )( 
            IXRawfile5 * This,
            double *pdInjVol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleWeight )( 
            IXRawfile5 * This,
            double *pdSampleWt);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowSampleVolume )( 
            IXRawfile5 * This,
            double *pdSampleVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowISTDAmount )( 
            IXRawfile5 * This,
            double *pdISTDAmount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowDilutionFactor )( 
            IXRawfile5 * This,
            double *pdDilutionFactor);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserLabel )( 
            IXRawfile5 * This,
            long nIndex,
            BSTR *pbstrUserLabel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InAcquisition )( 
            IXRawfile5 * This,
            long *pbInAcquisition);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfControllers )( 
            IXRawfile5 * This,
            long *pnNumControllers);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetControllerType )( 
            IXRawfile5 * This,
            long nIndex,
            long *pnControllerType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetCurrentController )( 
            IXRawfile5 * This,
            long nControllerType,
            long nControllerNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentController )( 
            IXRawfile5 * This,
            long *pnControllerType,
            long *pnControllerNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumSpectra )( 
            IXRawfile5 * This,
            long *pnNumberOfSpectra);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumStatusLog )( 
            IXRawfile5 * This,
            long *pnNumberOfStatusLogEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumErrorLog )( 
            IXRawfile5 * This,
            long *pnNumberOfErrorLogEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumTuneData )( 
            IXRawfile5 * This,
            long *pnNumTuneData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassResolution )( 
            IXRawfile5 * This,
            double *pdMassResolution);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExpectedRunTime )( 
            IXRawfile5 * This,
            double *pdExpectedRunTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumTrailerExtra )( 
            IXRawfile5 * This,
            long *pnNumberOfTrailerExtraEntries);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLowMass )( 
            IXRawfile5 * This,
            double *pdLowMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetHighMass )( 
            IXRawfile5 * This,
            double *pdHighMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStartTime )( 
            IXRawfile5 * This,
            double *pdStartTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEndTime )( 
            IXRawfile5 * This,
            double *pdEndTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMaxIntegratedIntensity )( 
            IXRawfile5 * This,
            double *pdMaxIntegIntensity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMaxIntensity )( 
            IXRawfile5 * This,
            long *pnMaxIntensity);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFirstSpectrumNumber )( 
            IXRawfile5 * This,
            long *pnFirstSpectrum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLastSpectrumNumber )( 
            IXRawfile5 * This,
            long *pnLastSpectrum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstrumentID )( 
            IXRawfile5 * This,
            long *pnInstrumentID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInletID )( 
            IXRawfile5 * This,
            long *pnInletID);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorFlag )( 
            IXRawfile5 * This,
            long *pnErrorFlag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleVolume )( 
            IXRawfile5 * This,
            double *pdSampleVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleWeight )( 
            IXRawfile5 * This,
            double *pdSampleWeight);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVialNumber )( 
            IXRawfile5 * This,
            long *pnVialNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInjectionVolume )( 
            IXRawfile5 * This,
            double *pdInjectionVolume);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IXRawfile5 * This,
            BSTR *pbstrFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAcquisitionFileName )( 
            IXRawfile5 * This,
            BSTR *pbstrFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstrumentDescription )( 
            IXRawfile5 * This,
            BSTR *pbstrInstrumentDescription);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAcquisitionDate )( 
            IXRawfile5 * This,
            BSTR *pbstrAcquisitionDate);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOperator )( 
            IXRawfile5 * This,
            BSTR *pbstrOperator);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComment1 )( 
            IXRawfile5 * This,
            BSTR *pbstrComment1);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetComment2 )( 
            IXRawfile5 * This,
            BSTR *pbstrComment2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleAmountUnits )( 
            IXRawfile5 * This,
            BSTR *pbstrSampleAmountUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInjectionAmountUnits )( 
            IXRawfile5 * This,
            BSTR *pbstrInjectionAmountUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSampleVolumeUnits )( 
            IXRawfile5 * This,
            BSTR *pbstrSampleVolumeUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilters )( 
            IXRawfile5 * This,
            VARIANT *pvarFilterArray,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ScanNumFromRT )( 
            IXRawfile5 * This,
            double dRT,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RTFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            double *pdRT);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            BSTR *pbstrFilter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterForScanRT )( 
            IXRawfile5 * This,
            double dRT,
            BSTR *pbstrFilter);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListFromScanNum )( 
            IXRawfile5 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListFromRT )( 
            IXRawfile5 * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextMassListFromScanNum )( 
            IXRawfile5 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrevMassListFromScanNum )( 
            IXRawfile5 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsProfileScanForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pbIsProfileScan);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsCentroidScanForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pbIsCentroidScan);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScanHeaderInfoForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnNumPackets,
            double *pdStartTime,
            double *pdLowMass,
            double *pdHighMass,
            double *pdTIC,
            double *pdBasePeakMass,
            double *pdBasePeakIntensity,
            long *pnNumChannels,
            long *pbUniformTime,
            double *pdFrequency);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForRT )( 
            IXRawfile5 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogLabelsForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            double *pdStatusLogRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogLabelsForRT )( 
            IXRawfile5 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogValueForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            BSTR bstrLabel,
            double *pdStatusLogRT,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogValueForRT )( 
            IXRawfile5 * This,
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraForRT )( 
            IXRawfile5 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraLabelsForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraLabelsForRT )( 
            IXRawfile5 * This,
            double *pdRT,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraValueForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTrailerExtraValueForRT )( 
            IXRawfile5 * This,
            double *pdRT,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetErrorLogItem )( 
            IXRawfile5 * This,
            long nItemNumber,
            double *pdRT,
            BSTR *pbstrErrorMessage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneData )( 
            IXRawfile5 * This,
            long nSegmentNumber,
            VARIANT *pvarLabels,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumInstMethods )( 
            IXRawfile5 * This,
            long *pnNumInstMethods);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstMethod )( 
            IXRawfile5 * This,
            long nInstMethodItem,
            BSTR *pbstrInstMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChroData )( 
            IXRawfile5 * This,
            long nChroType1,
            long nChroOperator,
            long nChroType2,
            BSTR bstrFilter,
            BSTR bstrMassRanges1,
            BSTR bstrMassRanges2,
            double dDelay,
            double *pdStartTime,
            double *pdEndTime,
            long nSmoothingType,
            long nSmoothingValue,
            VARIANT *pvarChroData,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RefreshViewOfFile )( 
            IXRawfile5 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneDataValue )( 
            IXRawfile5 * This,
            long nSegmentNumber,
            BSTR bstrLabel,
            VARIANT *pvarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTuneDataLabels )( 
            IXRawfile5 * This,
            long nSegmentNumber,
            VARIANT *pvarLabels,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstName )( 
            IXRawfile5 * This,
            BSTR *pbstrInstName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstModel )( 
            IXRawfile5 * This,
            BSTR *pbstrInstModel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstSerialNumber )( 
            IXRawfile5 * This,
            BSTR *pbstrInstSerialNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstSoftwareVersion )( 
            IXRawfile5 * This,
            BSTR *pbstrInstSoftwareVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstHardwareVersion )( 
            IXRawfile5 * This,
            BSTR *pbstrInstHardwareVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstFlags )( 
            IXRawfile5 * This,
            BSTR *pbstrInstFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstNumChannelLabels )( 
            IXRawfile5 * This,
            long *pnInstNumChannelLabels);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstChannelLabel )( 
            IXRawfile5 * This,
            long nChannelLabelNumber,
            BSTR *pbstrInstChannelLabel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfControllersOfType )( 
            IXRawfile5 * This,
            long nControllerType,
            long *pnNumControllersOfType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAverageMassList )( 
            IXRawfile5 * This,
            long *pnFirstAvgScanNumber,
            long *pnLastAvgScanNumber,
            long *pnFirstBkg1ScanNumber,
            long *pnLastBkg1ScanNumber,
            long *pnFirstBkg2ScanNumber,
            long *pnLastBkg2ScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsThereMSData )( 
            IXRawfile5 * This,
            long *pbMSData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *HasExpMethod )( 
            IXRawfile5 * This,
            long *pbMethod);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilterMassPrecision )( 
            IXRawfile5 * This,
            long *pnFilterMassPrecision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogForPos )( 
            IXRawfile5 * This,
            long nPos,
            VARIANT *pvarRT,
            VARIANT *pvarValue,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStatusLogPlottableIndex )( 
            IXRawfile5 * This,
            VARIANT *pvarIndex,
            VARIANT *pvarValues,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstMethodNames )( 
            IXRawfile5 * This,
            long *pnNumInstMethods,
            VARIANT *pvarNames);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMassTolerance )( 
            IXRawfile5 * This,
            long bUseUserDefined,
            double dMassTolerance,
            long nUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChros )( 
            IXRawfile5 * This,
            long nNumChros,
            double *pdStartTime,
            double *pdEndTime,
            VARIANT *pvarChroParamsArray,
            VARIANT *pvarChroDataSizeArray,
            VARIANT *pvarChroDataArray,
            VARIANT *pvarPeakFlagsArray);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLabelData )( 
            IXRawfile5 * This,
            VARIANT *pvarLabels,
            VARIANT *pvarFlags,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNoiseData )( 
            IXRawfile5 * This,
            VARIANT *pvarNoisePacket,
            long *pnScanNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSegmentedMassListFromRT )( 
            IXRawfile5 * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize,
            VARIANT *pvarSegments,
            long *pnNumSegments,
            VARIANT *pvarLowHighMassRange);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSegmentedMassListFromScanNum )( 
            IXRawfile5 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize,
            VARIANT *pvarSegments,
            long *pnNumSegments,
            VARIANT *pvarLowHighMassRange);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScanEventForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            BSTR *pbstrScanEvent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowUserTextEx )( 
            IXRawfile5 * This,
            long nIndex,
            BSTR *pbstrUserText);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowBarcode )( 
            IXRawfile5 * This,
            BSTR *pbstrBarcode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSeqRowBarcodeStatus )( 
            IXRawfile5 * This,
            long *pnBarcodeStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListRangeFromScanNum )( 
            IXRawfile5 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassListRangeFromRT )( 
            IXRawfile5 * This,
            double *pdRT,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNextMassListRangeFromScanNum )( 
            IXRawfile5 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrevMassListRangeFromScanNum )( 
            IXRawfile5 * This,
            long *pnScanNumber,
            BSTR bstrFilter,
            long nIntensityCutoffType,
            long nIntensityCutoffValue,
            long nMaxNumberOfPeaks,
            long bCentroidResult,
            double *pdCentroidPeakWidth,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            LPWSTR szMassRange1,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrecursorInfoFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            VARIANT *pvarPrecursorInfos,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExtractInstMethodFromRaw )( 
            IXRawfile5 * This,
            BSTR szInstMethodFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSegmentAndEventForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnSegment,
            long *pnScanEvent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassPrecisionEstimate )( 
            IXRawfile5 * This,
            long lScanNumber,
            VARIANT *pvarMassList,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetActivationTypeForScanNum )( 
            IXRawfile5 * This,
            long nScan,
            long lMSOrder,
            long *pnActivationType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDetectorTypeForScanNum )( 
            IXRawfile5 * This,
            long nScan,
            long *pnDetectorType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassAnalyzerTypeForScanNum )( 
            IXRawfile5 * This,
            long nScan,
            long *pnMassAnalyzerType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMSOrderForScanNum )( 
            IXRawfile5 * This,
            long nScan,
            long *pnMSOrder);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrecursorMassForScanNum )( 
            IXRawfile5 * This,
            long nScan,
            long lMSOrder,
            double *pdMass);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetScanTypeForScanNum )( 
            IXRawfile5 * This,
            long nScan,
            long *pnScanType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAveragedMassSpectrum )( 
            IXRawfile5 * This,
            long *pnScanNumbers,
            long nScansToAverage,
            VARIANT_BOOL bCentroidResult,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSummedMassSpectrum )( 
            IXRawfile5 * This,
            long *pnScanNumbers,
            long nScansToSum,
            VARIANT_BOOL bCentroidResult,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAveragedLabelData )( 
            IXRawfile5 * This,
            long *pnScanNumbers,
            long nScansToAverage,
            VARIANT *pvarMassList,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FindPrecursorMassInFullScan )( 
            IXRawfile5 * This,
            long nScan,
            long *pnMasterScan,
            double *pdFoundMass,
            double *pdHeaderMass,
            long *pnChargeState);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Version )( 
            IXRawfile5 * This,
            long *pnMajorVersion,
            long *pnMinorVersion,
            long *pnSubMinorVersion,
            long *nBuildNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfMassRangesFromScanNum )( 
            IXRawfile5 * This,
            int nScanNumber,
            long *pnNumMassRanges);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFullMSOrderPrecursorDataFromScanNum )( 
            IXRawfile5 * This,
            int nScanNumber,
            long nMSOrder,
            VARIANT *pvarFullMSOrderPrecursorInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassRangeFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long nMassRangeIndex,
            double *pdMassRangeLowValue,
            double *pdMassRangeHighValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCycleNumberFromScanNumber )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnCycleNumber);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCompoundNameFromScanNum )( 
            IXRawfile5 * This,
            int nScanNumber,
            BSTR *pbstrCompoundName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUniqueCompoundNames )( 
            IXRawfile5 * This,
            VARIANT *pvarCompoundNamesArray,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetChroByCompoundName )( 
            IXRawfile5 * This,
            long nChroType1,
            long nChroOperator,
            long nChroType2,
            VARIANT *pCompoundNames,
            BSTR bstrMassRanges1,
            BSTR bstrMassRanges2,
            double dDelay,
            double *pdStartTime,
            double *pdEndTime,
            long nSmoothingType,
            long nSmoothingValue,
            VARIANT *pvarChroData,
            VARIANT *pvarPeakFlags,
            long *pnArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMSXMultiplexValueFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnMSXValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAValueFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnAValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBValueFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnBValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFValueFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnFValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetKValueFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnKValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRValueFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnRValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVValueFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnVValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfMassCalibratorsFromScanNum )( 
            IXRawfile5 * This,
            int nScanNumber,
            long *pnNumMassCalibrators);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassCalibrationValueFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long nMassCalibrationndex,
            double *pnMassCalibrationValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMassTolerance )( 
            IXRawfile5 * This,
            long *bUserDefined,
            double *dMassTolerance,
            long *nUnits);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfSourceFragmentsFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnNumSourceFragments);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSourceFragmentValueFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long nSourceFragmentIndex,
            double *pdSourceFragmentValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfSourceFragmentationMassRangesFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long *pnNumSourceFragmentationMassRanges);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSourceFragmentationMassRangeFromScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long nSourceFragmentMassRangeIndex,
            double *pdSourceFragmentRangeLowValue,
            double *pdSourceFragmentRangeHighValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumberOfMSOrdersFromScanNum )( 
            IXRawfile5 * This,
            int nScanNumber,
            long *pnNumMSOrders);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetIsolationWidthForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long nMSOrder,
            double *pdIsolationWidth);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCollisionEnergyForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long nMSOrder,
            double *pdCollisionEnergy);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPrecursorRangeForScanNum )( 
            IXRawfile5 * This,
            long nScanNumber,
            long nMSOrder,
            double *pdFirstPrecursorMass,
            double *pdLastPrecursorMass,
            long *pbIsValid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllMSOrderData )( 
            IXRawfile5 * This,
            long nScanNumber,
            VARIANT *pvarDoubleData,
            VARIANT *pvarFlagsData,
            long *pnNumberOfMSOrders);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsQExactive )( 
            IXRawfile5 * This,
            long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IncludeReferenceAndExceptionData )( 
            IXRawfile5 * This,
            long value);
        
        END_INTERFACE
    } IXRawfile5Vtbl;

    interface IXRawfile5
    {
        CONST_VTBL struct IXRawfile5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXRawfile5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXRawfile5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXRawfile5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXRawfile5_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IXRawfile5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IXRawfile5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IXRawfile5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IXRawfile5_Open(This,szFileName)	\
    ( (This)->lpVtbl -> Open(This,szFileName) ) 

#define IXRawfile5_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IXRawfile5_GetFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetFileName(This,pbstrFileName) ) 

#define IXRawfile5_GetCreatorID(This,pbstrCreatorID)	\
    ( (This)->lpVtbl -> GetCreatorID(This,pbstrCreatorID) ) 

#define IXRawfile5_GetVersionNumber(This,pnVersion)	\
    ( (This)->lpVtbl -> GetVersionNumber(This,pnVersion) ) 

#define IXRawfile5_GetCreationDate(This,pCreationDate)	\
    ( (This)->lpVtbl -> GetCreationDate(This,pCreationDate) ) 

#define IXRawfile5_IsError(This,pbIsError)	\
    ( (This)->lpVtbl -> IsError(This,pbIsError) ) 

#define IXRawfile5_IsNewFile(This,pbIsNewFile)	\
    ( (This)->lpVtbl -> IsNewFile(This,pbIsNewFile) ) 

#define IXRawfile5_GetErrorCode(This,pnErrorCode)	\
    ( (This)->lpVtbl -> GetErrorCode(This,pnErrorCode) ) 

#define IXRawfile5_GetErrorMessage(This,pbstrErrorMessage)	\
    ( (This)->lpVtbl -> GetErrorMessage(This,pbstrErrorMessage) ) 

#define IXRawfile5_GetWarningMessage(This,pbstrWarningMessage)	\
    ( (This)->lpVtbl -> GetWarningMessage(This,pbstrWarningMessage) ) 

#define IXRawfile5_GetSeqRowNumber(This,pnSeqRowNumber)	\
    ( (This)->lpVtbl -> GetSeqRowNumber(This,pnSeqRowNumber) ) 

#define IXRawfile5_GetSeqRowSampleType(This,pnSampleType)	\
    ( (This)->lpVtbl -> GetSeqRowSampleType(This,pnSampleType) ) 

#define IXRawfile5_GetSeqRowDataPath(This,pbstrDataPath)	\
    ( (This)->lpVtbl -> GetSeqRowDataPath(This,pbstrDataPath) ) 

#define IXRawfile5_GetSeqRowRawFileName(This,pbstrRawFileName)	\
    ( (This)->lpVtbl -> GetSeqRowRawFileName(This,pbstrRawFileName) ) 

#define IXRawfile5_GetSeqRowSampleName(This,pbstrSampleName)	\
    ( (This)->lpVtbl -> GetSeqRowSampleName(This,pbstrSampleName) ) 

#define IXRawfile5_GetSeqRowSampleID(This,pbstrSampleID)	\
    ( (This)->lpVtbl -> GetSeqRowSampleID(This,pbstrSampleID) ) 

#define IXRawfile5_GetSeqRowComment(This,pbstrComment)	\
    ( (This)->lpVtbl -> GetSeqRowComment(This,pbstrComment) ) 

#define IXRawfile5_GetSeqRowLevelName(This,pbstrLevelName)	\
    ( (This)->lpVtbl -> GetSeqRowLevelName(This,pbstrLevelName) ) 

#define IXRawfile5_GetSeqRowUserText(This,nIndex,pbstrUserText)	\
    ( (This)->lpVtbl -> GetSeqRowUserText(This,nIndex,pbstrUserText) ) 

#define IXRawfile5_GetSeqRowInstrumentMethod(This,pbstrInstrumentMethod)	\
    ( (This)->lpVtbl -> GetSeqRowInstrumentMethod(This,pbstrInstrumentMethod) ) 

#define IXRawfile5_GetSeqRowProcessingMethod(This,pbstrProcessingMethod)	\
    ( (This)->lpVtbl -> GetSeqRowProcessingMethod(This,pbstrProcessingMethod) ) 

#define IXRawfile5_GetSeqRowCalibrationFile(This,pbstrCalibrationFile)	\
    ( (This)->lpVtbl -> GetSeqRowCalibrationFile(This,pbstrCalibrationFile) ) 

#define IXRawfile5_GetSeqRowVial(This,pbstrVial)	\
    ( (This)->lpVtbl -> GetSeqRowVial(This,pbstrVial) ) 

#define IXRawfile5_GetSeqRowInjectionVolume(This,pdInjVol)	\
    ( (This)->lpVtbl -> GetSeqRowInjectionVolume(This,pdInjVol) ) 

#define IXRawfile5_GetSeqRowSampleWeight(This,pdSampleWt)	\
    ( (This)->lpVtbl -> GetSeqRowSampleWeight(This,pdSampleWt) ) 

#define IXRawfile5_GetSeqRowSampleVolume(This,pdSampleVolume)	\
    ( (This)->lpVtbl -> GetSeqRowSampleVolume(This,pdSampleVolume) ) 

#define IXRawfile5_GetSeqRowISTDAmount(This,pdISTDAmount)	\
    ( (This)->lpVtbl -> GetSeqRowISTDAmount(This,pdISTDAmount) ) 

#define IXRawfile5_GetSeqRowDilutionFactor(This,pdDilutionFactor)	\
    ( (This)->lpVtbl -> GetSeqRowDilutionFactor(This,pdDilutionFactor) ) 

#define IXRawfile5_GetSeqRowUserLabel(This,nIndex,pbstrUserLabel)	\
    ( (This)->lpVtbl -> GetSeqRowUserLabel(This,nIndex,pbstrUserLabel) ) 

#define IXRawfile5_InAcquisition(This,pbInAcquisition)	\
    ( (This)->lpVtbl -> InAcquisition(This,pbInAcquisition) ) 

#define IXRawfile5_GetNumberOfControllers(This,pnNumControllers)	\
    ( (This)->lpVtbl -> GetNumberOfControllers(This,pnNumControllers) ) 

#define IXRawfile5_GetControllerType(This,nIndex,pnControllerType)	\
    ( (This)->lpVtbl -> GetControllerType(This,nIndex,pnControllerType) ) 

#define IXRawfile5_SetCurrentController(This,nControllerType,nControllerNumber)	\
    ( (This)->lpVtbl -> SetCurrentController(This,nControllerType,nControllerNumber) ) 

#define IXRawfile5_GetCurrentController(This,pnControllerType,pnControllerNumber)	\
    ( (This)->lpVtbl -> GetCurrentController(This,pnControllerType,pnControllerNumber) ) 

#define IXRawfile5_GetNumSpectra(This,pnNumberOfSpectra)	\
    ( (This)->lpVtbl -> GetNumSpectra(This,pnNumberOfSpectra) ) 

#define IXRawfile5_GetNumStatusLog(This,pnNumberOfStatusLogEntries)	\
    ( (This)->lpVtbl -> GetNumStatusLog(This,pnNumberOfStatusLogEntries) ) 

#define IXRawfile5_GetNumErrorLog(This,pnNumberOfErrorLogEntries)	\
    ( (This)->lpVtbl -> GetNumErrorLog(This,pnNumberOfErrorLogEntries) ) 

#define IXRawfile5_GetNumTuneData(This,pnNumTuneData)	\
    ( (This)->lpVtbl -> GetNumTuneData(This,pnNumTuneData) ) 

#define IXRawfile5_GetMassResolution(This,pdMassResolution)	\
    ( (This)->lpVtbl -> GetMassResolution(This,pdMassResolution) ) 

#define IXRawfile5_GetExpectedRunTime(This,pdExpectedRunTime)	\
    ( (This)->lpVtbl -> GetExpectedRunTime(This,pdExpectedRunTime) ) 

#define IXRawfile5_GetNumTrailerExtra(This,pnNumberOfTrailerExtraEntries)	\
    ( (This)->lpVtbl -> GetNumTrailerExtra(This,pnNumberOfTrailerExtraEntries) ) 

#define IXRawfile5_GetLowMass(This,pdLowMass)	\
    ( (This)->lpVtbl -> GetLowMass(This,pdLowMass) ) 

#define IXRawfile5_GetHighMass(This,pdHighMass)	\
    ( (This)->lpVtbl -> GetHighMass(This,pdHighMass) ) 

#define IXRawfile5_GetStartTime(This,pdStartTime)	\
    ( (This)->lpVtbl -> GetStartTime(This,pdStartTime) ) 

#define IXRawfile5_GetEndTime(This,pdEndTime)	\
    ( (This)->lpVtbl -> GetEndTime(This,pdEndTime) ) 

#define IXRawfile5_GetMaxIntegratedIntensity(This,pdMaxIntegIntensity)	\
    ( (This)->lpVtbl -> GetMaxIntegratedIntensity(This,pdMaxIntegIntensity) ) 

#define IXRawfile5_GetMaxIntensity(This,pnMaxIntensity)	\
    ( (This)->lpVtbl -> GetMaxIntensity(This,pnMaxIntensity) ) 

#define IXRawfile5_GetFirstSpectrumNumber(This,pnFirstSpectrum)	\
    ( (This)->lpVtbl -> GetFirstSpectrumNumber(This,pnFirstSpectrum) ) 

#define IXRawfile5_GetLastSpectrumNumber(This,pnLastSpectrum)	\
    ( (This)->lpVtbl -> GetLastSpectrumNumber(This,pnLastSpectrum) ) 

#define IXRawfile5_GetInstrumentID(This,pnInstrumentID)	\
    ( (This)->lpVtbl -> GetInstrumentID(This,pnInstrumentID) ) 

#define IXRawfile5_GetInletID(This,pnInletID)	\
    ( (This)->lpVtbl -> GetInletID(This,pnInletID) ) 

#define IXRawfile5_GetErrorFlag(This,pnErrorFlag)	\
    ( (This)->lpVtbl -> GetErrorFlag(This,pnErrorFlag) ) 

#define IXRawfile5_GetSampleVolume(This,pdSampleVolume)	\
    ( (This)->lpVtbl -> GetSampleVolume(This,pdSampleVolume) ) 

#define IXRawfile5_GetSampleWeight(This,pdSampleWeight)	\
    ( (This)->lpVtbl -> GetSampleWeight(This,pdSampleWeight) ) 

#define IXRawfile5_GetVialNumber(This,pnVialNumber)	\
    ( (This)->lpVtbl -> GetVialNumber(This,pnVialNumber) ) 

#define IXRawfile5_GetInjectionVolume(This,pdInjectionVolume)	\
    ( (This)->lpVtbl -> GetInjectionVolume(This,pdInjectionVolume) ) 

#define IXRawfile5_GetFlags(This,pbstrFlags)	\
    ( (This)->lpVtbl -> GetFlags(This,pbstrFlags) ) 

#define IXRawfile5_GetAcquisitionFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetAcquisitionFileName(This,pbstrFileName) ) 

#define IXRawfile5_GetInstrumentDescription(This,pbstrInstrumentDescription)	\
    ( (This)->lpVtbl -> GetInstrumentDescription(This,pbstrInstrumentDescription) ) 

#define IXRawfile5_GetAcquisitionDate(This,pbstrAcquisitionDate)	\
    ( (This)->lpVtbl -> GetAcquisitionDate(This,pbstrAcquisitionDate) ) 

#define IXRawfile5_GetOperator(This,pbstrOperator)	\
    ( (This)->lpVtbl -> GetOperator(This,pbstrOperator) ) 

#define IXRawfile5_GetComment1(This,pbstrComment1)	\
    ( (This)->lpVtbl -> GetComment1(This,pbstrComment1) ) 

#define IXRawfile5_GetComment2(This,pbstrComment2)	\
    ( (This)->lpVtbl -> GetComment2(This,pbstrComment2) ) 

#define IXRawfile5_GetSampleAmountUnits(This,pbstrSampleAmountUnits)	\
    ( (This)->lpVtbl -> GetSampleAmountUnits(This,pbstrSampleAmountUnits) ) 

#define IXRawfile5_GetInjectionAmountUnits(This,pbstrInjectionAmountUnits)	\
    ( (This)->lpVtbl -> GetInjectionAmountUnits(This,pbstrInjectionAmountUnits) ) 

#define IXRawfile5_GetSampleVolumeUnits(This,pbstrSampleVolumeUnits)	\
    ( (This)->lpVtbl -> GetSampleVolumeUnits(This,pbstrSampleVolumeUnits) ) 

#define IXRawfile5_GetFilters(This,pvarFilterArray,pnArraySize)	\
    ( (This)->lpVtbl -> GetFilters(This,pvarFilterArray,pnArraySize) ) 

#define IXRawfile5_ScanNumFromRT(This,dRT,pnScanNumber)	\
    ( (This)->lpVtbl -> ScanNumFromRT(This,dRT,pnScanNumber) ) 

#define IXRawfile5_RTFromScanNum(This,nScanNumber,pdRT)	\
    ( (This)->lpVtbl -> RTFromScanNum(This,nScanNumber,pdRT) ) 

#define IXRawfile5_GetFilterForScanNum(This,nScanNumber,pbstrFilter)	\
    ( (This)->lpVtbl -> GetFilterForScanNum(This,nScanNumber,pbstrFilter) ) 

#define IXRawfile5_GetFilterForScanRT(This,dRT,pbstrFilter)	\
    ( (This)->lpVtbl -> GetFilterForScanRT(This,dRT,pbstrFilter) ) 

#define IXRawfile5_GetMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile5_GetMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile5_GetNextMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetNextMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile5_GetPrevMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetPrevMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile5_IsProfileScanForScanNum(This,nScanNumber,pbIsProfileScan)	\
    ( (This)->lpVtbl -> IsProfileScanForScanNum(This,nScanNumber,pbIsProfileScan) ) 

#define IXRawfile5_IsCentroidScanForScanNum(This,nScanNumber,pbIsCentroidScan)	\
    ( (This)->lpVtbl -> IsCentroidScanForScanNum(This,nScanNumber,pbIsCentroidScan) ) 

#define IXRawfile5_GetScanHeaderInfoForScanNum(This,nScanNumber,pnNumPackets,pdStartTime,pdLowMass,pdHighMass,pdTIC,pdBasePeakMass,pdBasePeakIntensity,pnNumChannels,pbUniformTime,pdFrequency)	\
    ( (This)->lpVtbl -> GetScanHeaderInfoForScanNum(This,nScanNumber,pnNumPackets,pdStartTime,pdLowMass,pdHighMass,pdTIC,pdBasePeakMass,pdBasePeakIntensity,pnNumChannels,pbUniformTime,pdFrequency) ) 

#define IXRawfile5_GetStatusLogForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile5_GetStatusLogForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile5_GetStatusLogLabelsForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogLabelsForScanNum(This,nScanNumber,pdStatusLogRT,pvarLabels,pnArraySize) ) 

#define IXRawfile5_GetStatusLogLabelsForRT(This,pdRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogLabelsForRT(This,pdRT,pvarLabels,pnArraySize) ) 

#define IXRawfile5_GetStatusLogValueForScanNum(This,nScanNumber,bstrLabel,pdStatusLogRT,pvarValue)	\
    ( (This)->lpVtbl -> GetStatusLogValueForScanNum(This,nScanNumber,bstrLabel,pdStatusLogRT,pvarValue) ) 

#define IXRawfile5_GetStatusLogValueForRT(This,pdRT,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetStatusLogValueForRT(This,pdRT,bstrLabel,pvarValue) ) 

#define IXRawfile5_GetTrailerExtraForScanNum(This,nScanNumber,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraForScanNum(This,nScanNumber,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile5_GetTrailerExtraForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraForRT(This,pdRT,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile5_GetTrailerExtraLabelsForScanNum(This,nScanNumber,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraLabelsForScanNum(This,nScanNumber,pvarLabels,pnArraySize) ) 

#define IXRawfile5_GetTrailerExtraLabelsForRT(This,pdRT,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTrailerExtraLabelsForRT(This,pdRT,pvarLabels,pnArraySize) ) 

#define IXRawfile5_GetTrailerExtraValueForScanNum(This,nScanNumber,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTrailerExtraValueForScanNum(This,nScanNumber,bstrLabel,pvarValue) ) 

#define IXRawfile5_GetTrailerExtraValueForRT(This,pdRT,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTrailerExtraValueForRT(This,pdRT,bstrLabel,pvarValue) ) 

#define IXRawfile5_GetErrorLogItem(This,nItemNumber,pdRT,pbstrErrorMessage)	\
    ( (This)->lpVtbl -> GetErrorLogItem(This,nItemNumber,pdRT,pbstrErrorMessage) ) 

#define IXRawfile5_GetTuneData(This,nSegmentNumber,pvarLabels,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetTuneData(This,nSegmentNumber,pvarLabels,pvarValues,pnArraySize) ) 

#define IXRawfile5_GetNumInstMethods(This,pnNumInstMethods)	\
    ( (This)->lpVtbl -> GetNumInstMethods(This,pnNumInstMethods) ) 

#define IXRawfile5_GetInstMethod(This,nInstMethodItem,pbstrInstMethod)	\
    ( (This)->lpVtbl -> GetInstMethod(This,nInstMethodItem,pbstrInstMethod) ) 

#define IXRawfile5_GetChroData(This,nChroType1,nChroOperator,nChroType2,bstrFilter,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetChroData(This,nChroType1,nChroOperator,nChroType2,bstrFilter,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile5_RefreshViewOfFile(This)	\
    ( (This)->lpVtbl -> RefreshViewOfFile(This) ) 

#define IXRawfile5_GetTuneDataValue(This,nSegmentNumber,bstrLabel,pvarValue)	\
    ( (This)->lpVtbl -> GetTuneDataValue(This,nSegmentNumber,bstrLabel,pvarValue) ) 

#define IXRawfile5_GetTuneDataLabels(This,nSegmentNumber,pvarLabels,pnArraySize)	\
    ( (This)->lpVtbl -> GetTuneDataLabels(This,nSegmentNumber,pvarLabels,pnArraySize) ) 

#define IXRawfile5_GetInstName(This,pbstrInstName)	\
    ( (This)->lpVtbl -> GetInstName(This,pbstrInstName) ) 

#define IXRawfile5_GetInstModel(This,pbstrInstModel)	\
    ( (This)->lpVtbl -> GetInstModel(This,pbstrInstModel) ) 

#define IXRawfile5_GetInstSerialNumber(This,pbstrInstSerialNumber)	\
    ( (This)->lpVtbl -> GetInstSerialNumber(This,pbstrInstSerialNumber) ) 

#define IXRawfile5_GetInstSoftwareVersion(This,pbstrInstSoftwareVersion)	\
    ( (This)->lpVtbl -> GetInstSoftwareVersion(This,pbstrInstSoftwareVersion) ) 

#define IXRawfile5_GetInstHardwareVersion(This,pbstrInstHardwareVersion)	\
    ( (This)->lpVtbl -> GetInstHardwareVersion(This,pbstrInstHardwareVersion) ) 

#define IXRawfile5_GetInstFlags(This,pbstrInstFlags)	\
    ( (This)->lpVtbl -> GetInstFlags(This,pbstrInstFlags) ) 

#define IXRawfile5_GetInstNumChannelLabels(This,pnInstNumChannelLabels)	\
    ( (This)->lpVtbl -> GetInstNumChannelLabels(This,pnInstNumChannelLabels) ) 

#define IXRawfile5_GetInstChannelLabel(This,nChannelLabelNumber,pbstrInstChannelLabel)	\
    ( (This)->lpVtbl -> GetInstChannelLabel(This,nChannelLabelNumber,pbstrInstChannelLabel) ) 

#define IXRawfile5_GetNumberOfControllersOfType(This,nControllerType,pnNumControllersOfType)	\
    ( (This)->lpVtbl -> GetNumberOfControllersOfType(This,nControllerType,pnNumControllersOfType) ) 

#define IXRawfile5_GetAverageMassList(This,pnFirstAvgScanNumber,pnLastAvgScanNumber,pnFirstBkg1ScanNumber,pnLastBkg1ScanNumber,pnFirstBkg2ScanNumber,pnLastBkg2ScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetAverageMassList(This,pnFirstAvgScanNumber,pnLastAvgScanNumber,pnFirstBkg1ScanNumber,pnLastBkg1ScanNumber,pnFirstBkg2ScanNumber,pnLastBkg2ScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile5_IsThereMSData(This,pbMSData)	\
    ( (This)->lpVtbl -> IsThereMSData(This,pbMSData) ) 

#define IXRawfile5_HasExpMethod(This,pbMethod)	\
    ( (This)->lpVtbl -> HasExpMethod(This,pbMethod) ) 

#define IXRawfile5_GetFilterMassPrecision(This,pnFilterMassPrecision)	\
    ( (This)->lpVtbl -> GetFilterMassPrecision(This,pnFilterMassPrecision) ) 

#define IXRawfile5_GetStatusLogForPos(This,nPos,pvarRT,pvarValue,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogForPos(This,nPos,pvarRT,pvarValue,pnArraySize) ) 

#define IXRawfile5_GetStatusLogPlottableIndex(This,pvarIndex,pvarValues,pnArraySize)	\
    ( (This)->lpVtbl -> GetStatusLogPlottableIndex(This,pvarIndex,pvarValues,pnArraySize) ) 

#define IXRawfile5_GetInstMethodNames(This,pnNumInstMethods,pvarNames)	\
    ( (This)->lpVtbl -> GetInstMethodNames(This,pnNumInstMethods,pvarNames) ) 

#define IXRawfile5_SetMassTolerance(This,bUseUserDefined,dMassTolerance,nUnits)	\
    ( (This)->lpVtbl -> SetMassTolerance(This,bUseUserDefined,dMassTolerance,nUnits) ) 

#define IXRawfile5_GetChros(This,nNumChros,pdStartTime,pdEndTime,pvarChroParamsArray,pvarChroDataSizeArray,pvarChroDataArray,pvarPeakFlagsArray)	\
    ( (This)->lpVtbl -> GetChros(This,nNumChros,pdStartTime,pdEndTime,pvarChroParamsArray,pvarChroDataSizeArray,pvarChroDataArray,pvarPeakFlagsArray) ) 


#define IXRawfile5_GetLabelData(This,pvarLabels,pvarFlags,pnScanNumber)	\
    ( (This)->lpVtbl -> GetLabelData(This,pvarLabels,pvarFlags,pnScanNumber) ) 

#define IXRawfile5_GetNoiseData(This,pvarNoisePacket,pnScanNumber)	\
    ( (This)->lpVtbl -> GetNoiseData(This,pvarNoisePacket,pnScanNumber) ) 

#define IXRawfile5_GetSegmentedMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange)	\
    ( (This)->lpVtbl -> GetSegmentedMassListFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange) ) 

#define IXRawfile5_GetSegmentedMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange)	\
    ( (This)->lpVtbl -> GetSegmentedMassListFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,pnArraySize,pvarSegments,pnNumSegments,pvarLowHighMassRange) ) 

#define IXRawfile5_GetScanEventForScanNum(This,nScanNumber,pbstrScanEvent)	\
    ( (This)->lpVtbl -> GetScanEventForScanNum(This,nScanNumber,pbstrScanEvent) ) 

#define IXRawfile5_GetSeqRowUserTextEx(This,nIndex,pbstrUserText)	\
    ( (This)->lpVtbl -> GetSeqRowUserTextEx(This,nIndex,pbstrUserText) ) 

#define IXRawfile5_GetSeqRowBarcode(This,pbstrBarcode)	\
    ( (This)->lpVtbl -> GetSeqRowBarcode(This,pbstrBarcode) ) 

#define IXRawfile5_GetSeqRowBarcodeStatus(This,pnBarcodeStatus)	\
    ( (This)->lpVtbl -> GetSeqRowBarcodeStatus(This,pnBarcodeStatus) ) 


#define IXRawfile5_GetMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile5_GetMassListRangeFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassListRangeFromRT(This,pdRT,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile5_GetNextMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetNextMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile5_GetPrevMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize)	\
    ( (This)->lpVtbl -> GetPrevMassListRangeFromScanNum(This,pnScanNumber,bstrFilter,nIntensityCutoffType,nIntensityCutoffValue,nMaxNumberOfPeaks,bCentroidResult,pdCentroidPeakWidth,pvarMassList,pvarPeakFlags,szMassRange1,pnArraySize) ) 

#define IXRawfile5_GetPrecursorInfoFromScanNum(This,nScanNumber,pvarPrecursorInfos,pnArraySize)	\
    ( (This)->lpVtbl -> GetPrecursorInfoFromScanNum(This,nScanNumber,pvarPrecursorInfos,pnArraySize) ) 


#define IXRawfile5_ExtractInstMethodFromRaw(This,szInstMethodFileName)	\
    ( (This)->lpVtbl -> ExtractInstMethodFromRaw(This,szInstMethodFileName) ) 

#define IXRawfile5_GetSegmentAndEventForScanNum(This,nScanNumber,pnSegment,pnScanEvent)	\
    ( (This)->lpVtbl -> GetSegmentAndEventForScanNum(This,nScanNumber,pnSegment,pnScanEvent) ) 

#define IXRawfile5_GetMassPrecisionEstimate(This,lScanNumber,pvarMassList,pnArraySize)	\
    ( (This)->lpVtbl -> GetMassPrecisionEstimate(This,lScanNumber,pvarMassList,pnArraySize) ) 

#define IXRawfile5_GetActivationTypeForScanNum(This,nScan,lMSOrder,pnActivationType)	\
    ( (This)->lpVtbl -> GetActivationTypeForScanNum(This,nScan,lMSOrder,pnActivationType) ) 

#define IXRawfile5_GetDetectorTypeForScanNum(This,nScan,pnDetectorType)	\
    ( (This)->lpVtbl -> GetDetectorTypeForScanNum(This,nScan,pnDetectorType) ) 

#define IXRawfile5_GetMassAnalyzerTypeForScanNum(This,nScan,pnMassAnalyzerType)	\
    ( (This)->lpVtbl -> GetMassAnalyzerTypeForScanNum(This,nScan,pnMassAnalyzerType) ) 

#define IXRawfile5_GetMSOrderForScanNum(This,nScan,pnMSOrder)	\
    ( (This)->lpVtbl -> GetMSOrderForScanNum(This,nScan,pnMSOrder) ) 

#define IXRawfile5_GetPrecursorMassForScanNum(This,nScan,lMSOrder,pdMass)	\
    ( (This)->lpVtbl -> GetPrecursorMassForScanNum(This,nScan,lMSOrder,pdMass) ) 

#define IXRawfile5_GetScanTypeForScanNum(This,nScan,pnScanType)	\
    ( (This)->lpVtbl -> GetScanTypeForScanNum(This,nScan,pnScanType) ) 

#define IXRawfile5_GetAveragedMassSpectrum(This,pnScanNumbers,nScansToAverage,bCentroidResult,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetAveragedMassSpectrum(This,pnScanNumbers,nScansToAverage,bCentroidResult,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile5_GetSummedMassSpectrum(This,pnScanNumbers,nScansToSum,bCentroidResult,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetSummedMassSpectrum(This,pnScanNumbers,nScansToSum,bCentroidResult,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile5_GetAveragedLabelData(This,pnScanNumbers,nScansToAverage,pvarMassList,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetAveragedLabelData(This,pnScanNumbers,nScansToAverage,pvarMassList,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile5_FindPrecursorMassInFullScan(This,nScan,pnMasterScan,pdFoundMass,pdHeaderMass,pnChargeState)	\
    ( (This)->lpVtbl -> FindPrecursorMassInFullScan(This,nScan,pnMasterScan,pdFoundMass,pdHeaderMass,pnChargeState) ) 

#define IXRawfile5_Version(This,pnMajorVersion,pnMinorVersion,pnSubMinorVersion,nBuildNumber)	\
    ( (This)->lpVtbl -> Version(This,pnMajorVersion,pnMinorVersion,pnSubMinorVersion,nBuildNumber) ) 


#define IXRawfile5_GetNumberOfMassRangesFromScanNum(This,nScanNumber,pnNumMassRanges)	\
    ( (This)->lpVtbl -> GetNumberOfMassRangesFromScanNum(This,nScanNumber,pnNumMassRanges) ) 

#define IXRawfile5_GetFullMSOrderPrecursorDataFromScanNum(This,nScanNumber,nMSOrder,pvarFullMSOrderPrecursorInfo)	\
    ( (This)->lpVtbl -> GetFullMSOrderPrecursorDataFromScanNum(This,nScanNumber,nMSOrder,pvarFullMSOrderPrecursorInfo) ) 

#define IXRawfile5_GetMassRangeFromScanNum(This,nScanNumber,nMassRangeIndex,pdMassRangeLowValue,pdMassRangeHighValue)	\
    ( (This)->lpVtbl -> GetMassRangeFromScanNum(This,nScanNumber,nMassRangeIndex,pdMassRangeLowValue,pdMassRangeHighValue) ) 

#define IXRawfile5_GetCycleNumberFromScanNumber(This,nScanNumber,pnCycleNumber)	\
    ( (This)->lpVtbl -> GetCycleNumberFromScanNumber(This,nScanNumber,pnCycleNumber) ) 

#define IXRawfile5_GetCompoundNameFromScanNum(This,nScanNumber,pbstrCompoundName)	\
    ( (This)->lpVtbl -> GetCompoundNameFromScanNum(This,nScanNumber,pbstrCompoundName) ) 

#define IXRawfile5_GetUniqueCompoundNames(This,pvarCompoundNamesArray,pnArraySize)	\
    ( (This)->lpVtbl -> GetUniqueCompoundNames(This,pvarCompoundNamesArray,pnArraySize) ) 

#define IXRawfile5_GetChroByCompoundName(This,nChroType1,nChroOperator,nChroType2,pCompoundNames,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize)	\
    ( (This)->lpVtbl -> GetChroByCompoundName(This,nChroType1,nChroOperator,nChroType2,pCompoundNames,bstrMassRanges1,bstrMassRanges2,dDelay,pdStartTime,pdEndTime,nSmoothingType,nSmoothingValue,pvarChroData,pvarPeakFlags,pnArraySize) ) 

#define IXRawfile5_GetMSXMultiplexValueFromScanNum(This,nScanNumber,pnMSXValue)	\
    ( (This)->lpVtbl -> GetMSXMultiplexValueFromScanNum(This,nScanNumber,pnMSXValue) ) 

#define IXRawfile5_GetAValueFromScanNum(This,nScanNumber,pnAValue)	\
    ( (This)->lpVtbl -> GetAValueFromScanNum(This,nScanNumber,pnAValue) ) 

#define IXRawfile5_GetBValueFromScanNum(This,nScanNumber,pnBValue)	\
    ( (This)->lpVtbl -> GetBValueFromScanNum(This,nScanNumber,pnBValue) ) 

#define IXRawfile5_GetFValueFromScanNum(This,nScanNumber,pnFValue)	\
    ( (This)->lpVtbl -> GetFValueFromScanNum(This,nScanNumber,pnFValue) ) 

#define IXRawfile5_GetKValueFromScanNum(This,nScanNumber,pnKValue)	\
    ( (This)->lpVtbl -> GetKValueFromScanNum(This,nScanNumber,pnKValue) ) 

#define IXRawfile5_GetRValueFromScanNum(This,nScanNumber,pnRValue)	\
    ( (This)->lpVtbl -> GetRValueFromScanNum(This,nScanNumber,pnRValue) ) 

#define IXRawfile5_GetVValueFromScanNum(This,nScanNumber,pnVValue)	\
    ( (This)->lpVtbl -> GetVValueFromScanNum(This,nScanNumber,pnVValue) ) 

#define IXRawfile5_GetNumberOfMassCalibratorsFromScanNum(This,nScanNumber,pnNumMassCalibrators)	\
    ( (This)->lpVtbl -> GetNumberOfMassCalibratorsFromScanNum(This,nScanNumber,pnNumMassCalibrators) ) 

#define IXRawfile5_GetMassCalibrationValueFromScanNum(This,nScanNumber,nMassCalibrationndex,pnMassCalibrationValue)	\
    ( (This)->lpVtbl -> GetMassCalibrationValueFromScanNum(This,nScanNumber,nMassCalibrationndex,pnMassCalibrationValue) ) 

#define IXRawfile5_GetMassTolerance(This,bUserDefined,dMassTolerance,nUnits)	\
    ( (This)->lpVtbl -> GetMassTolerance(This,bUserDefined,dMassTolerance,nUnits) ) 

#define IXRawfile5_GetNumberOfSourceFragmentsFromScanNum(This,nScanNumber,pnNumSourceFragments)	\
    ( (This)->lpVtbl -> GetNumberOfSourceFragmentsFromScanNum(This,nScanNumber,pnNumSourceFragments) ) 

#define IXRawfile5_GetSourceFragmentValueFromScanNum(This,nScanNumber,nSourceFragmentIndex,pdSourceFragmentValue)	\
    ( (This)->lpVtbl -> GetSourceFragmentValueFromScanNum(This,nScanNumber,nSourceFragmentIndex,pdSourceFragmentValue) ) 

#define IXRawfile5_GetNumberOfSourceFragmentationMassRangesFromScanNum(This,nScanNumber,pnNumSourceFragmentationMassRanges)	\
    ( (This)->lpVtbl -> GetNumberOfSourceFragmentationMassRangesFromScanNum(This,nScanNumber,pnNumSourceFragmentationMassRanges) ) 

#define IXRawfile5_GetSourceFragmentationMassRangeFromScanNum(This,nScanNumber,nSourceFragmentMassRangeIndex,pdSourceFragmentRangeLowValue,pdSourceFragmentRangeHighValue)	\
    ( (This)->lpVtbl -> GetSourceFragmentationMassRangeFromScanNum(This,nScanNumber,nSourceFragmentMassRangeIndex,pdSourceFragmentRangeLowValue,pdSourceFragmentRangeHighValue) ) 

#define IXRawfile5_GetNumberOfMSOrdersFromScanNum(This,nScanNumber,pnNumMSOrders)	\
    ( (This)->lpVtbl -> GetNumberOfMSOrdersFromScanNum(This,nScanNumber,pnNumMSOrders) ) 

#define IXRawfile5_GetIsolationWidthForScanNum(This,nScanNumber,nMSOrder,pdIsolationWidth)	\
    ( (This)->lpVtbl -> GetIsolationWidthForScanNum(This,nScanNumber,nMSOrder,pdIsolationWidth) ) 

#define IXRawfile5_GetCollisionEnergyForScanNum(This,nScanNumber,nMSOrder,pdCollisionEnergy)	\
    ( (This)->lpVtbl -> GetCollisionEnergyForScanNum(This,nScanNumber,nMSOrder,pdCollisionEnergy) ) 

#define IXRawfile5_GetPrecursorRangeForScanNum(This,nScanNumber,nMSOrder,pdFirstPrecursorMass,pdLastPrecursorMass,pbIsValid)	\
    ( (This)->lpVtbl -> GetPrecursorRangeForScanNum(This,nScanNumber,nMSOrder,pdFirstPrecursorMass,pdLastPrecursorMass,pbIsValid) ) 

#define IXRawfile5_GetAllMSOrderData(This,nScanNumber,pvarDoubleData,pvarFlagsData,pnNumberOfMSOrders)	\
    ( (This)->lpVtbl -> GetAllMSOrderData(This,nScanNumber,pvarDoubleData,pvarFlagsData,pnNumberOfMSOrders) ) 

#define IXRawfile5_IsQExactive(This,pVal)	\
    ( (This)->lpVtbl -> IsQExactive(This,pVal) ) 

#define IXRawfile5_IncludeReferenceAndExceptionData(This,value)	\
    ( (This)->lpVtbl -> IncludeReferenceAndExceptionData(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetNumberOfMassRangesFromScanNum_Proxy( 
    IXRawfile5 * This,
    int nScanNumber,
    long *pnNumMassRanges);


void __RPC_STUB IXRawfile5_GetNumberOfMassRangesFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetFullMSOrderPrecursorDataFromScanNum_Proxy( 
    IXRawfile5 * This,
    int nScanNumber,
    long nMSOrder,
    VARIANT *pvarFullMSOrderPrecursorInfo);


void __RPC_STUB IXRawfile5_GetFullMSOrderPrecursorDataFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetMassRangeFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long nMassRangeIndex,
    double *pdMassRangeLowValue,
    double *pdMassRangeHighValue);


void __RPC_STUB IXRawfile5_GetMassRangeFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetCycleNumberFromScanNumber_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long *pnCycleNumber);


void __RPC_STUB IXRawfile5_GetCycleNumberFromScanNumber_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetCompoundNameFromScanNum_Proxy( 
    IXRawfile5 * This,
    int nScanNumber,
    BSTR *pbstrCompoundName);


void __RPC_STUB IXRawfile5_GetCompoundNameFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetUniqueCompoundNames_Proxy( 
    IXRawfile5 * This,
    VARIANT *pvarCompoundNamesArray,
    long *pnArraySize);


void __RPC_STUB IXRawfile5_GetUniqueCompoundNames_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetChroByCompoundName_Proxy( 
    IXRawfile5 * This,
    long nChroType1,
    long nChroOperator,
    long nChroType2,
    VARIANT *pCompoundNames,
    BSTR bstrMassRanges1,
    BSTR bstrMassRanges2,
    double dDelay,
    double *pdStartTime,
    double *pdEndTime,
    long nSmoothingType,
    long nSmoothingValue,
    VARIANT *pvarChroData,
    VARIANT *pvarPeakFlags,
    long *pnArraySize);


void __RPC_STUB IXRawfile5_GetChroByCompoundName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetMSXMultiplexValueFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long *pnMSXValue);


void __RPC_STUB IXRawfile5_GetMSXMultiplexValueFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetAValueFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long *pnAValue);


void __RPC_STUB IXRawfile5_GetAValueFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetBValueFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long *pnBValue);


void __RPC_STUB IXRawfile5_GetBValueFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetFValueFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long *pnFValue);


void __RPC_STUB IXRawfile5_GetFValueFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetKValueFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long *pnKValue);


void __RPC_STUB IXRawfile5_GetKValueFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetRValueFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long *pnRValue);


void __RPC_STUB IXRawfile5_GetRValueFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetVValueFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long *pnVValue);


void __RPC_STUB IXRawfile5_GetVValueFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetNumberOfMassCalibratorsFromScanNum_Proxy( 
    IXRawfile5 * This,
    int nScanNumber,
    long *pnNumMassCalibrators);


void __RPC_STUB IXRawfile5_GetNumberOfMassCalibratorsFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetMassCalibrationValueFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long nMassCalibrationndex,
    double *pnMassCalibrationValue);


void __RPC_STUB IXRawfile5_GetMassCalibrationValueFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetMassTolerance_Proxy( 
    IXRawfile5 * This,
    long *bUserDefined,
    double *dMassTolerance,
    long *nUnits);


void __RPC_STUB IXRawfile5_GetMassTolerance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetNumberOfSourceFragmentsFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long *pnNumSourceFragments);


void __RPC_STUB IXRawfile5_GetNumberOfSourceFragmentsFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetSourceFragmentValueFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long nSourceFragmentIndex,
    double *pdSourceFragmentValue);


void __RPC_STUB IXRawfile5_GetSourceFragmentValueFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetNumberOfSourceFragmentationMassRangesFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long *pnNumSourceFragmentationMassRanges);


void __RPC_STUB IXRawfile5_GetNumberOfSourceFragmentationMassRangesFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetSourceFragmentationMassRangeFromScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long nSourceFragmentMassRangeIndex,
    double *pdSourceFragmentRangeLowValue,
    double *pdSourceFragmentRangeHighValue);


void __RPC_STUB IXRawfile5_GetSourceFragmentationMassRangeFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetNumberOfMSOrdersFromScanNum_Proxy( 
    IXRawfile5 * This,
    int nScanNumber,
    long *pnNumMSOrders);


void __RPC_STUB IXRawfile5_GetNumberOfMSOrdersFromScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetIsolationWidthForScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long nMSOrder,
    double *pdIsolationWidth);


void __RPC_STUB IXRawfile5_GetIsolationWidthForScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetCollisionEnergyForScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long nMSOrder,
    double *pdCollisionEnergy);


void __RPC_STUB IXRawfile5_GetCollisionEnergyForScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetPrecursorRangeForScanNum_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    long nMSOrder,
    double *pdFirstPrecursorMass,
    double *pdLastPrecursorMass,
    long *pbIsValid);


void __RPC_STUB IXRawfile5_GetPrecursorRangeForScanNum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_GetAllMSOrderData_Proxy( 
    IXRawfile5 * This,
    long nScanNumber,
    VARIANT *pvarDoubleData,
    VARIANT *pvarFlagsData,
    long *pnNumberOfMSOrders);


void __RPC_STUB IXRawfile5_GetAllMSOrderData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_IsQExactive_Proxy( 
    IXRawfile5 * This,
    long *pVal);


void __RPC_STUB IXRawfile5_IsQExactive_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IXRawfile5_IncludeReferenceAndExceptionData_Proxy( 
    IXRawfile5 * This,
    long value);


void __RPC_STUB IXRawfile5_IncludeReferenceAndExceptionData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IXRawfile5_INTERFACE_DEFINED__ */


#ifndef __IXVirMS_INTERFACE_DEFINED__
#define __IXVirMS_INTERFACE_DEFINED__

/* interface IXVirMS */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IXVirMS;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("55EA38B7-5419-4BE4-9198-3E4D78E64632")
    IXVirMS : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ LPWSTR szFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFileName( 
            /* [in] */ BSTR *pbstrFileName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsError( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ErrorCode( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsValid( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteInstID( 
            /* [in] */ LPWSTR szName,
            /* [in] */ LPWSTR szModel,
            /* [in] */ LPWSTR szSerialNumber,
            /* [in] */ LPWSTR szSoftwareRev,
            /* [in] */ LPWSTR ExpType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteRunHeaderInfo( 
            /* [in] */ double dExpectedRunTime,
            /* [in] */ double dMassResolution,
            /* [in] */ LPWSTR szComment1,
            /* [in] */ LPWSTR szComment2) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteInstData( 
            /* [in] */ unsigned char *pcData,
            /* [in] */ long nDataSize,
            /* [in] */ MS_PacketTypes eType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetTrailerHeaderNumFields( 
            /* [in] */ long nFields) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetTrailerHeaderField( 
            /* [in] */ long nIdx,
            /* [in] */ LPWSTR szLabel,
            /* [in] */ MS_DataTypes eDataType,
            /* [in] */ long nPrecision) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteTrailerHeader( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetStatusLogHeaderNumFields( 
            long nFields) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetStatusLogHeaderField( 
            /* [in] */ long nIdx,
            /* [in] */ LPWSTR szLabel,
            /* [in] */ MS_DataTypes eDataType,
            /* [in] */ long nPrecision) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteStatusLogHeader( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetTuneDataHeaderNumFields( 
            long nFields) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetTuneDataHeaderField( 
            /* [in] */ long nIdx,
            /* [in] */ LPWSTR szLabel,
            /* [in] */ MS_DataTypes eDataType,
            /* [in] */ long nPrecision) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteTuneDataHeader( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteTuneData( 
            /* [in] */ unsigned char *pcData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteStatusLog( 
            /* [in] */ float fTime,
            /* [in] */ unsigned char *pcData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteTrailer( 
            /* [in] */ unsigned char *pcData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitializeScanEvent( 
            /* [in] */ MS_ScanEvent *pScanEvent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitMethodScanEvents( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetMethodScanEvent( 
            /* [in] */ long nSegment,
            /* [in] */ long nScanEvent,
            /* [in] */ MS_ScanEvent *pScanEvent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteMethodScanEvents( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteScanIndex( 
            /* [in] */ MS_ScanIndex *pScanIndex,
            /* [in] */ MS_ScanEvent *pScanEvent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteInstData2( 
            /* [in] */ long nNumPkts,
            /* [in] */ MS_DataPeak *pPackets) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitializeScanIndex( 
            /* [in] */ long nScanIndexPosition,
            /* [in] */ MS_PacketTypes eType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteScanIndex2( 
            /* [in] */ MS_ScanIndex *pScanIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXVirMSVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXVirMS * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXVirMS * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXVirMS * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IXVirMS * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IXVirMS * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IXVirMS * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IXVirMS * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IXVirMS * This,
            /* [in] */ LPWSTR szFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IXVirMS * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IXVirMS * This,
            /* [in] */ BSTR *pbstrFileName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsError )( 
            IXVirMS * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )( 
            IXVirMS * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsValid )( 
            IXVirMS * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteInstID )( 
            IXVirMS * This,
            /* [in] */ LPWSTR szName,
            /* [in] */ LPWSTR szModel,
            /* [in] */ LPWSTR szSerialNumber,
            /* [in] */ LPWSTR szSoftwareRev,
            /* [in] */ LPWSTR ExpType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteRunHeaderInfo )( 
            IXVirMS * This,
            /* [in] */ double dExpectedRunTime,
            /* [in] */ double dMassResolution,
            /* [in] */ LPWSTR szComment1,
            /* [in] */ LPWSTR szComment2);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteInstData )( 
            IXVirMS * This,
            /* [in] */ unsigned char *pcData,
            /* [in] */ long nDataSize,
            /* [in] */ MS_PacketTypes eType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTrailerHeaderNumFields )( 
            IXVirMS * This,
            /* [in] */ long nFields);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTrailerHeaderField )( 
            IXVirMS * This,
            /* [in] */ long nIdx,
            /* [in] */ LPWSTR szLabel,
            /* [in] */ MS_DataTypes eDataType,
            /* [in] */ long nPrecision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteTrailerHeader )( 
            IXVirMS * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetStatusLogHeaderNumFields )( 
            IXVirMS * This,
            long nFields);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetStatusLogHeaderField )( 
            IXVirMS * This,
            /* [in] */ long nIdx,
            /* [in] */ LPWSTR szLabel,
            /* [in] */ MS_DataTypes eDataType,
            /* [in] */ long nPrecision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteStatusLogHeader )( 
            IXVirMS * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTuneDataHeaderNumFields )( 
            IXVirMS * This,
            long nFields);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetTuneDataHeaderField )( 
            IXVirMS * This,
            /* [in] */ long nIdx,
            /* [in] */ LPWSTR szLabel,
            /* [in] */ MS_DataTypes eDataType,
            /* [in] */ long nPrecision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteTuneDataHeader )( 
            IXVirMS * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteTuneData )( 
            IXVirMS * This,
            /* [in] */ unsigned char *pcData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteStatusLog )( 
            IXVirMS * This,
            /* [in] */ float fTime,
            /* [in] */ unsigned char *pcData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteTrailer )( 
            IXVirMS * This,
            /* [in] */ unsigned char *pcData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitializeScanEvent )( 
            IXVirMS * This,
            /* [in] */ MS_ScanEvent *pScanEvent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitMethodScanEvents )( 
            IXVirMS * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMethodScanEvent )( 
            IXVirMS * This,
            /* [in] */ long nSegment,
            /* [in] */ long nScanEvent,
            /* [in] */ MS_ScanEvent *pScanEvent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteMethodScanEvents )( 
            IXVirMS * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteScanIndex )( 
            IXVirMS * This,
            /* [in] */ MS_ScanIndex *pScanIndex,
            /* [in] */ MS_ScanEvent *pScanEvent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteInstData2 )( 
            IXVirMS * This,
            /* [in] */ long nNumPkts,
            /* [in] */ MS_DataPeak *pPackets);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitializeScanIndex )( 
            IXVirMS * This,
            /* [in] */ long nScanIndexPosition,
            /* [in] */ MS_PacketTypes eType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteScanIndex2 )( 
            IXVirMS * This,
            /* [in] */ MS_ScanIndex *pScanIndex);
        
        END_INTERFACE
    } IXVirMSVtbl;

    interface IXVirMS
    {
        CONST_VTBL struct IXVirMSVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXVirMS_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXVirMS_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXVirMS_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXVirMS_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IXVirMS_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IXVirMS_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IXVirMS_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IXVirMS_Create(This,szFileName)	\
    ( (This)->lpVtbl -> Create(This,szFileName) ) 

#define IXVirMS_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IXVirMS_GetFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetFileName(This,pbstrFileName) ) 

#define IXVirMS_get_IsError(This,pVal)	\
    ( (This)->lpVtbl -> get_IsError(This,pVal) ) 

#define IXVirMS_get_ErrorCode(This,pVal)	\
    ( (This)->lpVtbl -> get_ErrorCode(This,pVal) ) 

#define IXVirMS_get_IsValid(This,pVal)	\
    ( (This)->lpVtbl -> get_IsValid(This,pVal) ) 

#define IXVirMS_WriteInstID(This,szName,szModel,szSerialNumber,szSoftwareRev,ExpType)	\
    ( (This)->lpVtbl -> WriteInstID(This,szName,szModel,szSerialNumber,szSoftwareRev,ExpType) ) 

#define IXVirMS_WriteRunHeaderInfo(This,dExpectedRunTime,dMassResolution,szComment1,szComment2)	\
    ( (This)->lpVtbl -> WriteRunHeaderInfo(This,dExpectedRunTime,dMassResolution,szComment1,szComment2) ) 

#define IXVirMS_WriteInstData(This,pcData,nDataSize,eType)	\
    ( (This)->lpVtbl -> WriteInstData(This,pcData,nDataSize,eType) ) 

#define IXVirMS_SetTrailerHeaderNumFields(This,nFields)	\
    ( (This)->lpVtbl -> SetTrailerHeaderNumFields(This,nFields) ) 

#define IXVirMS_SetTrailerHeaderField(This,nIdx,szLabel,eDataType,nPrecision)	\
    ( (This)->lpVtbl -> SetTrailerHeaderField(This,nIdx,szLabel,eDataType,nPrecision) ) 

#define IXVirMS_WriteTrailerHeader(This)	\
    ( (This)->lpVtbl -> WriteTrailerHeader(This) ) 

#define IXVirMS_SetStatusLogHeaderNumFields(This,nFields)	\
    ( (This)->lpVtbl -> SetStatusLogHeaderNumFields(This,nFields) ) 

#define IXVirMS_SetStatusLogHeaderField(This,nIdx,szLabel,eDataType,nPrecision)	\
    ( (This)->lpVtbl -> SetStatusLogHeaderField(This,nIdx,szLabel,eDataType,nPrecision) ) 

#define IXVirMS_WriteStatusLogHeader(This)	\
    ( (This)->lpVtbl -> WriteStatusLogHeader(This) ) 

#define IXVirMS_SetTuneDataHeaderNumFields(This,nFields)	\
    ( (This)->lpVtbl -> SetTuneDataHeaderNumFields(This,nFields) ) 

#define IXVirMS_SetTuneDataHeaderField(This,nIdx,szLabel,eDataType,nPrecision)	\
    ( (This)->lpVtbl -> SetTuneDataHeaderField(This,nIdx,szLabel,eDataType,nPrecision) ) 

#define IXVirMS_WriteTuneDataHeader(This)	\
    ( (This)->lpVtbl -> WriteTuneDataHeader(This) ) 

#define IXVirMS_WriteTuneData(This,pcData)	\
    ( (This)->lpVtbl -> WriteTuneData(This,pcData) ) 

#define IXVirMS_WriteStatusLog(This,fTime,pcData)	\
    ( (This)->lpVtbl -> WriteStatusLog(This,fTime,pcData) ) 

#define IXVirMS_WriteTrailer(This,pcData)	\
    ( (This)->lpVtbl -> WriteTrailer(This,pcData) ) 

#define IXVirMS_InitializeScanEvent(This,pScanEvent)	\
    ( (This)->lpVtbl -> InitializeScanEvent(This,pScanEvent) ) 

#define IXVirMS_InitMethodScanEvents(This)	\
    ( (This)->lpVtbl -> InitMethodScanEvents(This) ) 

#define IXVirMS_SetMethodScanEvent(This,nSegment,nScanEvent,pScanEvent)	\
    ( (This)->lpVtbl -> SetMethodScanEvent(This,nSegment,nScanEvent,pScanEvent) ) 

#define IXVirMS_WriteMethodScanEvents(This)	\
    ( (This)->lpVtbl -> WriteMethodScanEvents(This) ) 

#define IXVirMS_WriteScanIndex(This,pScanIndex,pScanEvent)	\
    ( (This)->lpVtbl -> WriteScanIndex(This,pScanIndex,pScanEvent) ) 

#define IXVirMS_WriteInstData2(This,nNumPkts,pPackets)	\
    ( (This)->lpVtbl -> WriteInstData2(This,nNumPkts,pPackets) ) 

#define IXVirMS_InitializeScanIndex(This,nScanIndexPosition,eType)	\
    ( (This)->lpVtbl -> InitializeScanIndex(This,nScanIndexPosition,eType) ) 

#define IXVirMS_WriteScanIndex2(This,pScanIndex)	\
    ( (This)->lpVtbl -> WriteScanIndex2(This,pScanIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXVirMS_INTERFACE_DEFINED__ */


#ifndef __IXVirMS64_INTERFACE_DEFINED__
#define __IXVirMS64_INTERFACE_DEFINED__

/* interface IXVirMS64 */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IXVirMS64;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7FF032A3-FB2A-46EF-A579-039DA67C0AAA")
    IXVirMS64 : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteScanIndex_64( 
            /* [in] */ MS_ScanIndex64 *pScanIndex,
            /* [in] */ MS_ScanEvent *pScanEvent) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteScanIndex2_64( 
            /* [in] */ MS_ScanIndex64 *pScanIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXVirMS64Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXVirMS64 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXVirMS64 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXVirMS64 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IXVirMS64 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IXVirMS64 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IXVirMS64 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IXVirMS64 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteScanIndex_64 )( 
            IXVirMS64 * This,
            /* [in] */ MS_ScanIndex64 *pScanIndex,
            /* [in] */ MS_ScanEvent *pScanEvent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteScanIndex2_64 )( 
            IXVirMS64 * This,
            /* [in] */ MS_ScanIndex64 *pScanIndex);
        
        END_INTERFACE
    } IXVirMS64Vtbl;

    interface IXVirMS64
    {
        CONST_VTBL struct IXVirMS64Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXVirMS64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXVirMS64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXVirMS64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXVirMS64_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IXVirMS64_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IXVirMS64_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IXVirMS64_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IXVirMS64_WriteScanIndex_64(This,pScanIndex,pScanEvent)	\
    ( (This)->lpVtbl -> WriteScanIndex_64(This,pScanIndex,pScanEvent) ) 

#define IXVirMS64_WriteScanIndex2_64(This,pScanIndex)	\
    ( (This)->lpVtbl -> WriteScanIndex2_64(This,pScanIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXVirMS64_INTERFACE_DEFINED__ */


#ifndef __IXVirUV_INTERFACE_DEFINED__
#define __IXVirUV_INTERFACE_DEFINED__

/* interface IXVirUV */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IXVirUV;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("796CB3FE-C696-4AFE-B719-18246F38A740")
    IXVirUV : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ LPWSTR szFileName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFileName( 
            BSTR *pbstrFileName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsError( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ErrorCode( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsValid( 
            /* [retval][out] */ long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteErrorLog( 
            /* [in] */ float fTime,
            /* [in] */ LPWSTR szError) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteInstID( 
            /* [in] */ LPWSTR szName,
            /* [in] */ LPWSTR szModel,
            /* [in] */ LPWSTR szSerialNumber,
            /* [in] */ LPWSTR szSoftwareRev,
            /* [in] */ LPWSTR szLabel1,
            /* [in] */ LPWSTR szLabel2,
            /* [in] */ LPWSTR szLabel3,
            /* [in] */ LPWSTR szLabel4) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteRunHeaderInfo( 
            double dExpectedRunTime) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteInstData( 
            /* [in] */ unsigned char *pcData,
            /* [in] */ long nDataSize,
            /* [in] */ MS_PacketTypes eType,
            /* [in] */ long nDataLen) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteScanIndex( 
            /* [in] */ MS_UVScanIndex *pScanIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXVirUVVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IXVirUV * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IXVirUV * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IXVirUV * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IXVirUV * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IXVirUV * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IXVirUV * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IXVirUV * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IXVirUV * This,
            /* [in] */ LPWSTR szFileName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IXVirUV * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFileName )( 
            IXVirUV * This,
            BSTR *pbstrFileName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsError )( 
            IXVirUV * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )( 
            IXVirUV * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsValid )( 
            IXVirUV * This,
            /* [retval][out] */ long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteErrorLog )( 
            IXVirUV * This,
            /* [in] */ float fTime,
            /* [in] */ LPWSTR szError);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteInstID )( 
            IXVirUV * This,
            /* [in] */ LPWSTR szName,
            /* [in] */ LPWSTR szModel,
            /* [in] */ LPWSTR szSerialNumber,
            /* [in] */ LPWSTR szSoftwareRev,
            /* [in] */ LPWSTR szLabel1,
            /* [in] */ LPWSTR szLabel2,
            /* [in] */ LPWSTR szLabel3,
            /* [in] */ LPWSTR szLabel4);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteRunHeaderInfo )( 
            IXVirUV * This,
            double dExpectedRunTime);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteInstData )( 
            IXVirUV * This,
            /* [in] */ unsigned char *pcData,
            /* [in] */ long nDataSize,
            /* [in] */ MS_PacketTypes eType,
            /* [in] */ long nDataLen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteScanIndex )( 
            IXVirUV * This,
            /* [in] */ MS_UVScanIndex *pScanIndex);
        
        END_INTERFACE
    } IXVirUVVtbl;

    interface IXVirUV
    {
        CONST_VTBL struct IXVirUVVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXVirUV_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXVirUV_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXVirUV_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXVirUV_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IXVirUV_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IXVirUV_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IXVirUV_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IXVirUV_Create(This,szFileName)	\
    ( (This)->lpVtbl -> Create(This,szFileName) ) 

#define IXVirUV_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IXVirUV_GetFileName(This,pbstrFileName)	\
    ( (This)->lpVtbl -> GetFileName(This,pbstrFileName) ) 

#define IXVirUV_get_IsError(This,pVal)	\
    ( (This)->lpVtbl -> get_IsError(This,pVal) ) 

#define IXVirUV_get_ErrorCode(This,pVal)	\
    ( (This)->lpVtbl -> get_ErrorCode(This,pVal) ) 

#define IXVirUV_get_IsValid(This,pVal)	\
    ( (This)->lpVtbl -> get_IsValid(This,pVal) ) 

#define IXVirUV_WriteErrorLog(This,fTime,szError)	\
    ( (This)->lpVtbl -> WriteErrorLog(This,fTime,szError) ) 

#define IXVirUV_WriteInstID(This,szName,szModel,szSerialNumber,szSoftwareRev,szLabel1,szLabel2,szLabel3,szLabel4)	\
    ( (This)->lpVtbl -> WriteInstID(This,szName,szModel,szSerialNumber,szSoftwareRev,szLabel1,szLabel2,szLabel3,szLabel4) ) 

#define IXVirUV_WriteRunHeaderInfo(This,dExpectedRunTime)	\
    ( (This)->lpVtbl -> WriteRunHeaderInfo(This,dExpectedRunTime) ) 

#define IXVirUV_WriteInstData(This,pcData,nDataSize,eType,nDataLen)	\
    ( (This)->lpVtbl -> WriteInstData(This,pcData,nDataSize,eType,nDataLen) ) 

#define IXVirUV_WriteScanIndex(This,pScanIndex)	\
    ( (This)->lpVtbl -> WriteScanIndex(This,pScanIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXVirUV_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MSFileReader_XRawfile;

#ifdef __cplusplus

class DECLSPEC_UUID("1D23188D-53FE-4C25-B032-DC70ACDBDC02")
MSFileReader_XRawfile;
#endif

EXTERN_C const CLSID CLSID_MSFileReader_XVirMS;

#ifdef __cplusplus

class DECLSPEC_UUID("6F2F5BD9-1C11-4CBC-AF0D-6DE0E3B06E3B")
MSFileReader_XVirMS;
#endif

EXTERN_C const CLSID CLSID_MSFileReader_XVirUV;

#ifdef __cplusplus

class DECLSPEC_UUID("B3DB6431-A183-43F1-8BBD-F354064D9041")
MSFileReader_XVirUV;
#endif
#endif /* __MSFileReaderLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


