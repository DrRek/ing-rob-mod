﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t0220FF45E5BFB60B915FDBD07078D14BE4CB9A68;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_t0D15C0166A58F8A2CEE6D84105856B797F7DAC6B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_tCF4DC3453D4D30322E6F91556B0561160EA9612A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_tD431CA53D2DA04D533C85B6F283DF4535D06B9FC;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t6CC82F01278D7AA7C3DC2939506F0C54E06AAADE;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>
struct IReadOnlyDictionary_2_tF12AC6C54B252680968AC58C45E1522DA1C72D03;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>[]
struct KeyValuePair_2U5BU5D_tAC201058159F8B6B433415A0AB937BD11FC8A36F;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t10B4421F82E8EBC91ADE783085927FD018F09A47;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t358A375827DE759C632FEC77C83FEE87CCE55529;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.BeforeRenderHelper/OrderBlock[]
struct OrderBlockU5BU5D_t1C62FB945EC1F218FB6301A770FBF3C67B0AA101;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t59E317D853AAC982D5D18D4C1581422FC151F7E3;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_tAE8DA030BEBA505907556F161EB49FD565976C80;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ISubsystem
struct ISubsystem_t33DA72BE41C4C99E2A9201979C86ABECD4B7FF78;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_tA93C9CA08EF430375F9D4356DD0963BAEE961B77;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t4295259AA991FCAA75878E4731813266CFC5351D;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData[]
struct PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24;
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t2574091AF57F902BF504098AB113416E8D15186A;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5;
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04444310B8C9D216A6BC1D1CC9542ECC75BC02DF;
IL2CPP_EXTERN_C String_t* _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3199988097E4BB3103E8C34B8DFE8796545D8F;
IL2CPP_EXTERN_C String_t* _stringLiteral64358BBCCF8C380C05E774933982A64691BCEB28;
IL2CPP_EXTERN_C String_t* _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF;
IL2CPP_EXTERN_C String_t* _stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346;
IL2CPP_EXTERN_C String_t* _stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA;
IL2CPP_EXTERN_C String_t* _stringLiteralF18BFB74E613AFB11F36BDD80CF05CD5DFAD98D6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mBA598D1852E66122156731750BBF1D8EDFEBAC55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisCancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_m0318D47BE2AB57E53839293C15DD335B8B0583AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515_m1A4B88B46CEC94307CF29224873D7CE4027C40C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_m2FD87C18D9E6848633DF705BFFAFEB78D9396EA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_mB284F11FF6EAAF07725EE9EEECAAD865E149E9CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisEphemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_m4277A55FF0F7CC43A28269EF99E761F3BA612EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisFormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_m47A9D1BA5A97752AF36397686537AB4612A836EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisHitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_m02FDDCF30AEA5010D3F032AAD267FCB98051A142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m646E9CD2F8B82E5F35FBDE2A0EFD98A0F195D680_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mB47101014CAE26A07ACE2888ADF044342599F247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC0D56DB29145576351D3144C0174C3DB3DFF9C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m69766EC28E50BA89284F2D32C8684A401A19B346_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisIntPtr_t_mDAAED5E34FC82EC1CE912628ED6EFA3FD73BF68D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_mD6A0D9843EAA93E58C03D148C4944DA9AA85608A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_m3B53EB9E61040DA92DCE1D4373F9ECFC85FE5651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisOrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_m3A94BC2B4F31DBA1005FB94913C3130C69A2E39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_m83A26FF89E9009B96B3B82235BC9508BB8406D77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m3B2A6B15ACEDDD69DFC2A7B1F1549239040CC12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisPlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_m362D4C945930128AB5451EC5F1413FB6543D01C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisPlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_mADFAEA14DF51FA2CBF3AE91F680FC1DDA4766E36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisPoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_mDBA27A85789E51BDF5ECD99FC5933335F7F2ED4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisRaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3_mDCDC36064BB0FF4DC76546ED1CA3DDB6C303F4FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_m6880A2B25322CD928A2218BAC463B0F9D7450BD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisRuntimeObject_m98D2A0CAA60FCDAD14B318032271D194A0FC463A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m288F7FA25642BAF460C919173FFBACFF200256FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m77CE54A431B9137F71AE4EB8DD6BD6896CAD51D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m6F26E3B1889F792C114EA852B45C022258DDF5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m92C7FC890AD3637D775B949E40AC58993090D84D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m92E8524E021B44BD9FBA8B7B532C1C1D1AE2591E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m67422E4BCD6185FCCC24C2E10B17354B5CA4881F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisWorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_mE136BEFAFFA4D20AC5F03D08E9E761773B432A66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisXRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A_m8C5E586FAD0BC5D6B3A4209F6FAB3807603CB6CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_Tisjvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_mDBCC0EDA1351D0C8CD9E092FCEE99C99E0E2F487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0145FEACBF5643445A468A312880F27CA4205396_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m4289829E8C0F3DA67A5B3E27721CF5D1C203CED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mBA598D1852E66122156731750BBF1D8EDFEBAC55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisCancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_m0318D47BE2AB57E53839293C15DD335B8B0583AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515_m1A4B88B46CEC94307CF29224873D7CE4027C40C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_m2FD87C18D9E6848633DF705BFFAFEB78D9396EA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_mB284F11FF6EAAF07725EE9EEECAAD865E149E9CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisEphemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_m4277A55FF0F7CC43A28269EF99E761F3BA612EE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisFormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_m47A9D1BA5A97752AF36397686537AB4612A836EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisHitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_m02FDDCF30AEA5010D3F032AAD267FCB98051A142_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m646E9CD2F8B82E5F35FBDE2A0EFD98A0F195D680_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mB47101014CAE26A07ACE2888ADF044342599F247_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC0D56DB29145576351D3144C0174C3DB3DFF9C84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m69766EC28E50BA89284F2D32C8684A401A19B346_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisIntPtr_t_mDAAED5E34FC82EC1CE912628ED6EFA3FD73BF68D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_mD6A0D9843EAA93E58C03D148C4944DA9AA85608A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_m3B53EB9E61040DA92DCE1D4373F9ECFC85FE5651_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisOrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_m3A94BC2B4F31DBA1005FB94913C3130C69A2E39F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_m83A26FF89E9009B96B3B82235BC9508BB8406D77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m3B2A6B15ACEDDD69DFC2A7B1F1549239040CC12D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisPlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_m362D4C945930128AB5451EC5F1413FB6543D01C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisPlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_mADFAEA14DF51FA2CBF3AE91F680FC1DDA4766E36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisPoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_mDBA27A85789E51BDF5ECD99FC5933335F7F2ED4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisRaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3_mDCDC36064BB0FF4DC76546ED1CA3DDB6C303F4FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_m6880A2B25322CD928A2218BAC463B0F9D7450BD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisRuntimeObject_m98D2A0CAA60FCDAD14B318032271D194A0FC463A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m288F7FA25642BAF460C919173FFBACFF200256FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m77CE54A431B9137F71AE4EB8DD6BD6896CAD51D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m6F26E3B1889F792C114EA852B45C022258DDF5D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m92C7FC890AD3637D775B949E40AC58993090D84D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m92E8524E021B44BD9FBA8B7B532C1C1D1AE2591E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m67422E4BCD6185FCCC24C2E10B17354B5CA4881F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisWorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_mE136BEFAFFA4D20AC5F03D08E9E761773B432A66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisXRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A_m8C5E586FAD0BC5D6B3A4209F6FAB3807603CB6CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_Tisjvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_mDBCC0EDA1351D0C8CD9E092FCEE99C99E0E2F487_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m7AEF0374A18EED15CB2B6318117FDC6364AC2F3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mA75245E8BF9FAB8A58686B2B26E4FC342453E774_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m4289829E8C0F3DA67A5B3E27721CF5D1C203CED2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Resources_Load_TisRuntimeObject_m312D167000593C478994C1F4C93930C5DAED66D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScriptableObject_CreateInstance_TisRuntimeObject_m7A8F75139352BA04C2EEC1D72D430FAC94C753DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_m8D18B6F86DF3BF0F0C2102EFAE7DF661C3A09931_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67GenericMethods2_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;
struct PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshaled_com;
struct PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct KeyValuePair_2U5BU5D_tAC201058159F8B6B433415A0AB937BD11FC8A36F;
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
struct OrderBlockU5BU5D_t1C62FB945EC1F218FB6301A770FBF3C67B0AA101;
struct PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24;
struct WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0;
struct XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.CollectionExtensions
struct  CollectionExtensions_t1943508648E4A2A0FBCF65503E3BD7032F003E0A  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct  Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0220FF45E5BFB60B915FDBD07078D14BE4CB9A68* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0D15C0166A58F8A2CEE6D84105856B797F7DAC6B * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCF4DC3453D4D30322E6F91556B0561160EA9612A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___entries_1)); }
	inline EntryU5BU5D_t0220FF45E5BFB60B915FDBD07078D14BE4CB9A68* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0220FF45E5BFB60B915FDBD07078D14BE4CB9A68** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0220FF45E5BFB60B915FDBD07078D14BE4CB9A68* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___keys_7)); }
	inline KeyCollection_t0D15C0166A58F8A2CEE6D84105856B797F7DAC6B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0D15C0166A58F8A2CEE6D84105856B797F7DAC6B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0D15C0166A58F8A2CEE6D84105856B797F7DAC6B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___values_8)); }
	inline ValueCollection_tCF4DC3453D4D30322E6F91556B0561160EA9612A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCF4DC3453D4D30322E6F91556B0561160EA9612A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCF4DC3453D4D30322E6F91556B0561160EA9612A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Char>
struct  EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields, ___Value_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_Value_0() const { return ___Value_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Linq.Enumerable
struct  Enumerable_tECC271C86C6E8F72E4E27C7C8FD5DB7B63D5D737  : public RuntimeObject
{
public:

public:
};


// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData_LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorInfo_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorArgs_1), (void*)value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedArgs_2), (void*)value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___lazyData_3)); }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lazyData_3), (void*)value);
	}
};


// System.Reflection.CustomAttributeExtensions
struct  CustomAttributeExtensions_t46E823943384E2B9D2E7A6A492117E1A2331F5D3  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.JitHelpers
struct  JitHelpers_t6BCD6CAFCA9C54EDD15CC80B7D7416E8711E8AAB  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Threading.Interlocked
struct  Interlocked_tFC2D55B9E6E624D5151A9DC89A50567677F7F433  : public RuntimeObject
{
public:

public:
};


// System.Threading.LazyInitializer
struct  LazyInitializer_tFC4C124B28D8DA023D36F3298FC7EA95653CB8A7  : public RuntimeObject
{
public:

public:
};


// System.Threading.Volatile
struct  Volatile_tE96815F4BB2ADA7D8E4005AD52AC020C22856632  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct  NativeArrayUnsafeUtility_t2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct  UnsafeUtility_t78D5F2C60E6994F1B44020D1B4368BB8DD559AA8  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t22E0A0A6E68E2DFAFB28B91CC8AFCE4630723601  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t22E0A0A6E68E2DFAFB28B91CC8AFCE4630723601_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t59E317D853AAC982D5D18D4C1581422FC151F7E3* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_tAE8DA030BEBA505907556F161EB49FD565976C80* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t4295259AA991FCAA75878E4731813266CFC5351D* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t22E0A0A6E68E2DFAFB28B91CC8AFCE4630723601_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t59E317D853AAC982D5D18D4C1581422FC151F7E3* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t59E317D853AAC982D5D18D4C1581422FC151F7E3** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t59E317D853AAC982D5D18D4C1581422FC151F7E3* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disallowMultipleComponentArray_0), (void*)value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t22E0A0A6E68E2DFAFB28B91CC8AFCE4630723601_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_tAE8DA030BEBA505907556F161EB49FD565976C80* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_tAE8DA030BEBA505907556F161EB49FD565976C80** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_tAE8DA030BEBA505907556F161EB49FD565976C80* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____executeInEditModeArray_1), (void*)value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t22E0A0A6E68E2DFAFB28B91CC8AFCE4630723601_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t4295259AA991FCAA75878E4731813266CFC5351D* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t4295259AA991FCAA75878E4731813266CFC5351D** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t4295259AA991FCAA75878E4731813266CFC5351D* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requireComponentArray_2), (void*)value);
	}
};


// UnityEngine.Resources
struct  Resources_t516CB639AA1F373695D285E3F9274C65A70D3935  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.ParameterizedStrings_FormatParam
struct  FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800 
{
public:
	// System.Int32 System.ParameterizedStrings_FormatParam::_int32
	int32_t ____int32_0;
	// System.String System.ParameterizedStrings_FormatParam::_string
	String_t* ____string_1;

public:
	inline static int32_t get_offset_of__int32_0() { return static_cast<int32_t>(offsetof(FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800, ____int32_0)); }
	inline int32_t get__int32_0() const { return ____int32_0; }
	inline int32_t* get_address_of__int32_0() { return &____int32_0; }
	inline void set__int32_0(int32_t value)
	{
		____int32_0 = value;
	}

	inline static int32_t get_offset_of__string_1() { return static_cast<int32_t>(offsetof(FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800, ____string_1)); }
	inline String_t* get__string_1() const { return ____string_1; }
	inline String_t** get_address_of__string_1() { return &____string_1; }
	inline void set__string_1(String_t* value)
	{
		____string_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____string_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.ParameterizedStrings/FormatParam
struct FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshaled_pinvoke
{
	int32_t ____int32_0;
	char* ____string_1;
};
// Native definition for COM marshalling of System.ParameterizedStrings/FormatParam
struct FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_marshaled_com
{
	int32_t ____int32_0;
	Il2CppChar* ____string_1;
};

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};

// System.Reflection.ParameterModifier
struct  ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____byRef_0;

public:
	inline static int32_t get_offset_of__byRef_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E, ____byRef_0)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__byRef_0() const { return ____byRef_0; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__byRef_0() { return &____byRef_0; }
	inline void set__byRef_0(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____byRef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____byRef_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_marshaled_com
{
	int32_t* ____byRef_0;
};

// System.Resources.ResourceLocator
struct  ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C 
{
public:
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject * ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C, ____value_0)); }
	inline RuntimeObject * get__value_0() const { return ____value_0; }
	inline RuntimeObject ** get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(RuntimeObject * value)
	{
		____value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_0), (void*)value);
	}

	inline static int32_t get_offset_of__dataPos_1() { return static_cast<int32_t>(offsetof(ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C, ____dataPos_1)); }
	inline int32_t get__dataPos_1() const { return ____dataPos_1; }
	inline int32_t* get_address_of__dataPos_1() { return &____dataPos_1; }
	inline void set__dataPos_1(int32_t value)
	{
		____dataPos_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};

// System.Runtime.CompilerServices.Ephemeron
struct  Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA 
{
public:
	// System.Object System.Runtime.CompilerServices.Ephemeron::key
	RuntimeObject * ___key_0;
	// System.Object System.Runtime.CompilerServices.Ephemeron::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};

// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct  SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_tA54224D01E2FDC03AC2867CDDC8C53E17FA933D7 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.BeforeRenderHelper_OrderBlock
struct  OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper_OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper_OrderBlock::callback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727, ___callback_1)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct  LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Keyframe
struct  Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rendering.BatchVisibility
struct  BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// UnityEngine.SendMouseEvents_HitInfo
struct  HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents_HitInfo::target
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents_HitInfo::camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746, ___target_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_target_0() const { return ___target_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_0), (void*)value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746, ___camera_1)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_camera_1() const { return ___camera_1; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camera_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___target_0;
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___target_0;
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera_1;
};

// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData
struct  PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE 
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData::PoseNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData::Poses
	List_1_t10B4421F82E8EBC91ADE783085927FD018F09A47 * ___Poses_1;

public:
	inline static int32_t get_offset_of_PoseNames_0() { return static_cast<int32_t>(offsetof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE, ___PoseNames_0)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_PoseNames_0() const { return ___PoseNames_0; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_PoseNames_0() { return &___PoseNames_0; }
	inline void set_PoseNames_0(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___PoseNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PoseNames_0), (void*)value);
	}

	inline static int32_t get_offset_of_Poses_1() { return static_cast<int32_t>(offsetof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE, ___Poses_1)); }
	inline List_1_t10B4421F82E8EBC91ADE783085927FD018F09A47 * get_Poses_1() const { return ___Poses_1; }
	inline List_1_t10B4421F82E8EBC91ADE783085927FD018F09A47 ** get_address_of_Poses_1() { return &___Poses_1; }
	inline void set_Poses_1(List_1_t10B4421F82E8EBC91ADE783085927FD018F09A47 * value)
	{
		___Poses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Poses_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_pinvoke
{
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___PoseNames_0;
	List_1_t10B4421F82E8EBC91ADE783085927FD018F09A47 * ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_com
{
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___PoseNames_0;
	List_1_t10B4421F82E8EBC91ADE783085927FD018F09A47 * ___Poses_1;
};

// UnityEngine.UnitySynchronizationContext_WorkRequest
struct  WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext_WorkRequest::m_DelagateCallback
	SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext_WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext_WorkRequest::m_WaitHandle
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_WaitHandle_2)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>
struct  KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B, ___key_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_key_0() const { return ___key_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		___typedArgument_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_com
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct  CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshaled_pinvoke
{
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_marshaled_com
{
	CancellationCallbackInfo_t8CDEA0AA9C9D1A2321FE2F88878F4B5E0901CF36 * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t0A76BDD84EBF76BEF894419FC221D25BB3D4FBEE  ___m_registrationInfo_1;
};

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CastHelper`1<System.Object>
struct  CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF 
{
public:
	// T UnityEngine.CastHelper`1::t
	RuntimeObject * ___t_0;
	// System.IntPtr UnityEngine.CastHelper`1::onePointerFurtherThanT
	intptr_t ___onePointerFurtherThanT_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF, ___t_0)); }
	inline RuntimeObject * get_t_0() const { return ___t_0; }
	inline RuntimeObject ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(RuntimeObject * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_0), (void*)value);
	}

	inline static int32_t get_offset_of_onePointerFurtherThanT_1() { return static_cast<int32_t>(offsetof(CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF, ___onePointerFurtherThanT_1)); }
	inline intptr_t get_onePointerFurtherThanT_1() const { return ___onePointerFurtherThanT_1; }
	inline intptr_t* get_address_of_onePointerFurtherThanT_1() { return &___onePointerFurtherThanT_1; }
	inline void set_onePointerFurtherThanT_1(intptr_t value)
	{
		___onePointerFurtherThanT_1 = value;
	}
};


// UnityEngine.ContactPoint
struct  ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct  FalloffType_t7875E80627449B25D89C044D11A2BA22AB4996E9 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t7875E80627449B25D89C044D11A2BA22AB4996E9, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct  LightMode_t2EFF26B7FB14FB7D2ACF550C591375B5A95A854A 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t2EFF26B7FB14FB7D2ACF550C591375B5A95A854A, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct  LightType_t684FE1E4FB26D1A27EFCDB36446F55984C414E88 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t684FE1E4FB26D1A27EFCDB36446F55984C414E88, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LowLevel.PlayerLoopSystem
struct  PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93 
{
public:
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t * ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_tA93C9CA08EF430375F9D4356DD0963BAEE961B77* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem_UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E * ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_subSystemList_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93, ___subSystemList_1)); }
	inline PlayerLoopSystemU5BU5D_tA93C9CA08EF430375F9D4356DD0963BAEE961B77* get_subSystemList_1() const { return ___subSystemList_1; }
	inline PlayerLoopSystemU5BU5D_tA93C9CA08EF430375F9D4356DD0963BAEE961B77** get_address_of_subSystemList_1() { return &___subSystemList_1; }
	inline void set_subSystemList_1(PlayerLoopSystemU5BU5D_tA93C9CA08EF430375F9D4356DD0963BAEE961B77* value)
	{
		___subSystemList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subSystemList_1), (void*)value);
	}

	inline static int32_t get_offset_of_updateDelegate_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93, ___updateDelegate_2)); }
	inline UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E * get_updateDelegate_2() const { return ___updateDelegate_2; }
	inline UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E ** get_address_of_updateDelegate_2() { return &___updateDelegate_2; }
	inline void set_updateDelegate_2(UpdateFunction_tD84FFC4AEE25C3DEBD3AB85700E096090FC7995E * value)
	{
		___updateDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_updateFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93, ___updateFunction_3)); }
	inline intptr_t get_updateFunction_3() const { return ___updateFunction_3; }
	inline intptr_t* get_address_of_updateFunction_3() { return &___updateFunction_3; }
	inline void set_updateFunction_3(intptr_t value)
	{
		___updateFunction_3 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93, ___loopConditionFunction_4)); }
	inline intptr_t get_loopConditionFunction_4() const { return ___loopConditionFunction_4; }
	inline intptr_t* get_address_of_loopConditionFunction_4() { return &___loopConditionFunction_4; }
	inline void set_loopConditionFunction_4(intptr_t value)
	{
		___loopConditionFunction_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshaled_pinvoke
{
	Type_t * ___type_0;
	PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshaled_com
{
	Type_t * ___type_0;
	PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.XR.AvailableTrackingData
struct  AvailableTrackingData_tF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvailableTrackingData_tF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRNode
struct  XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.jvalue
struct  jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_z_0() { return static_cast<int32_t>(offsetof(jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37, ___z_0)); }
	inline bool get_z_0() const { return ___z_0; }
	inline bool* get_address_of_z_0() { return &___z_0; }
	inline void set_z_0(bool value)
	{
		___z_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37, ___b_1)); }
	inline int8_t get_b_1() const { return ___b_1; }
	inline int8_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int8_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37, ___c_2)); }
	inline Il2CppChar get_c_2() const { return ___c_2; }
	inline Il2CppChar* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(Il2CppChar value)
	{
		___c_2 = value;
	}

	inline static int32_t get_offset_of_s_3() { return static_cast<int32_t>(offsetof(jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37, ___s_3)); }
	inline int16_t get_s_3() const { return ___s_3; }
	inline int16_t* get_address_of_s_3() { return &___s_3; }
	inline void set_s_3(int16_t value)
	{
		___s_3 = value;
	}

	inline static int32_t get_offset_of_i_4() { return static_cast<int32_t>(offsetof(jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37, ___i_4)); }
	inline int32_t get_i_4() const { return ___i_4; }
	inline int32_t* get_address_of_i_4() { return &___i_4; }
	inline void set_i_4(int32_t value)
	{
		___i_4 = value;
	}

	inline static int32_t get_offset_of_j_5() { return static_cast<int32_t>(offsetof(jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37, ___j_5)); }
	inline int64_t get_j_5() const { return ___j_5; }
	inline int64_t* get_address_of_j_5() { return &___j_5; }
	inline void set_j_5(int64_t value)
	{
		___j_5 = value;
	}

	inline static int32_t get_offset_of_f_6() { return static_cast<int32_t>(offsetof(jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37, ___f_6)); }
	inline float get_f_6() const { return ___f_6; }
	inline float* get_address_of_f_6() { return &___f_6; }
	inline void set_f_6(float value)
	{
		___f_6 = value;
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37, ___d_7)); }
	inline double get_d_7() const { return ___d_7; }
	inline double* get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(double value)
	{
		___d_7 = value;
	}

	inline static int32_t get_offset_of_l_8() { return static_cast<int32_t>(offsetof(jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37, ___l_8)); }
	inline intptr_t get_l_8() const { return ___l_8; }
	inline intptr_t* get_address_of_l_8() { return &___l_8; }
	inline void set_l_8(intptr_t value)
	{
		___l_8 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct  NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct  LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  ___color_1;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  ___indirectColor_2;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation_3;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_4;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_5;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_9;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_10;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_11;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_12;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_13;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___color_1)); }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  get_color_1() const { return ___color_1; }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_indirectColor_2() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___indirectColor_2)); }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  get_indirectColor_2() const { return ___indirectColor_2; }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD * get_address_of_indirectColor_2() { return &___indirectColor_2; }
	inline void set_indirectColor_2(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  value)
	{
		___indirectColor_2 = value;
	}

	inline static int32_t get_offset_of_orientation_3() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___orientation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_orientation_3() const { return ___orientation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_orientation_3() { return &___orientation_3; }
	inline void set_orientation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___orientation_3 = value;
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___position_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_4() const { return ___position_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_range_5() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___range_5)); }
	inline float get_range_5() const { return ___range_5; }
	inline float* get_address_of_range_5() { return &___range_5; }
	inline void set_range_5(float value)
	{
		___range_5 = value;
	}

	inline static int32_t get_offset_of_coneAngle_6() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___coneAngle_6)); }
	inline float get_coneAngle_6() const { return ___coneAngle_6; }
	inline float* get_address_of_coneAngle_6() { return &___coneAngle_6; }
	inline void set_coneAngle_6(float value)
	{
		___coneAngle_6 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_7() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___innerConeAngle_7)); }
	inline float get_innerConeAngle_7() const { return ___innerConeAngle_7; }
	inline float* get_address_of_innerConeAngle_7() { return &___innerConeAngle_7; }
	inline void set_innerConeAngle_7(float value)
	{
		___innerConeAngle_7 = value;
	}

	inline static int32_t get_offset_of_shape0_8() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___shape0_8)); }
	inline float get_shape0_8() const { return ___shape0_8; }
	inline float* get_address_of_shape0_8() { return &___shape0_8; }
	inline void set_shape0_8(float value)
	{
		___shape0_8 = value;
	}

	inline static int32_t get_offset_of_shape1_9() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___shape1_9)); }
	inline float get_shape1_9() const { return ___shape1_9; }
	inline float* get_address_of_shape1_9() { return &___shape1_9; }
	inline void set_shape1_9(float value)
	{
		___shape1_9 = value;
	}

	inline static int32_t get_offset_of_type_10() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___type_10)); }
	inline uint8_t get_type_10() const { return ___type_10; }
	inline uint8_t* get_address_of_type_10() { return &___type_10; }
	inline void set_type_10(uint8_t value)
	{
		___type_10 = value;
	}

	inline static int32_t get_offset_of_mode_11() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___mode_11)); }
	inline uint8_t get_mode_11() const { return ___mode_11; }
	inline uint8_t* get_address_of_mode_11() { return &___mode_11; }
	inline void set_mode_11(uint8_t value)
	{
		___mode_11 = value;
	}

	inline static int32_t get_offset_of_shadow_12() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___shadow_12)); }
	inline uint8_t get_shadow_12() const { return ___shadow_12; }
	inline uint8_t* get_address_of_shadow_12() { return &___shadow_12; }
	inline void set_shadow_12(uint8_t value)
	{
		___shadow_12 = value;
	}

	inline static int32_t get_offset_of_falloff_13() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___falloff_13)); }
	inline uint8_t get_falloff_13() const { return ___falloff_13; }
	inline uint8_t* get_address_of_falloff_13() { return &___falloff_13; }
	inline void set_falloff_13(uint8_t value)
	{
		___falloff_13 = value;
	}
};


// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8 
{
public:
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t * ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding_CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * ___m_CreateOutputMethod_3;

public:
	inline static int32_t get_offset_of_m_StreamName_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_StreamName_0)); }
	inline String_t* get_m_StreamName_0() const { return ___m_StreamName_0; }
	inline String_t** get_address_of_m_StreamName_0() { return &___m_StreamName_0; }
	inline void set_m_StreamName_0(String_t* value)
	{
		___m_StreamName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceObject_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_SourceObject_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_SourceObject_1() const { return ___m_SourceObject_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_SourceObject_1() { return &___m_SourceObject_1; }
	inline void set_m_SourceObject_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_SourceObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceBindingType_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_SourceBindingType_2)); }
	inline Type_t * get_m_SourceBindingType_2() const { return ___m_SourceBindingType_2; }
	inline Type_t ** get_address_of_m_SourceBindingType_2() { return &___m_SourceBindingType_2; }
	inline void set_m_SourceBindingType_2(Type_t * value)
	{
		___m_SourceBindingType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceBindingType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CreateOutputMethod_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_CreateOutputMethod_3)); }
	inline CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * get_m_CreateOutputMethod_3() const { return ___m_CreateOutputMethod_3; }
	inline CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 ** get_address_of_m_CreateOutputMethod_3() { return &___m_CreateOutputMethod_3; }
	inline void set_m_CreateOutputMethod_3(CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * value)
	{
		___m_CreateOutputMethod_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CreateOutputMethod_3), (void*)value);
	}
};

struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;

public:
	inline static int32_t get_offset_of_None_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields, ___None_4)); }
	inline PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* get_None_4() const { return ___None_4; }
	inline PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB** get_address_of_None_4() { return &___None_4; }
	inline void set_None_4(PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* value)
	{
		___None_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_4), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDuration_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields, ___DefaultDuration_5)); }
	inline double get_DefaultDuration_5() const { return ___DefaultDuration_5; }
	inline double* get_address_of_DefaultDuration_5() { return &___DefaultDuration_5; }
	inline void set_DefaultDuration_5(double value)
	{
		___DefaultDuration_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.XR.XRNodeState
struct  XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Position_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Velocity_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AngularVelocity_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Acceleration_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AngularAcceleration_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Converter`2<System.Object,System.Object>
struct  Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Object>
struct  Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.Management.XRLoader
struct  XRLoader_t2574091AF57F902BF504098AB113416E8D15186A  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct  XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * ___m_Loaders_8;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_Loaders_8)); }
	inline List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}
};

struct XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_StaticFields
{
public:
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::s_ActiveLoader
	XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * ___s_ActiveLoader_9;

public:
	inline static int32_t get_offset_of_s_ActiveLoader_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_StaticFields, ___s_ActiveLoader_9)); }
	inline XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * get_s_ActiveLoader_9() const { return ___s_ActiveLoader_9; }
	inline XRLoader_t2574091AF57F902BF504098AB113416E8D15186A ** get_address_of_s_ActiveLoader_9() { return &___s_ActiveLoader_9; }
	inline void set_s_ActiveLoader_9(XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * value)
	{
		___s_ActiveLoader_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActiveLoader_9), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoaderHelper
struct  XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3  : public XRLoader_t2574091AF57F902BF504098AB113416E8D15186A
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>[]
struct KeyValuePair_2U5BU5D_tAC201058159F8B6B433415A0AB937BD11FC8A36F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  m_Items[1];

public:
	inline KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.BeforeRenderHelper_OrderBlock[]
struct OrderBlockU5BU5D_t1C62FB945EC1F218FB6301A770FBF3C67B0AA101  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  m_Items[1];

public:
	inline OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback_1), (void*)NULL);
	}
	inline OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback_1), (void*)NULL);
	}
};
// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData[]
struct PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  m_Items[1];

public:
	inline PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___PoseNames_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Poses_1), (void*)NULL);
		#endif
	}
	inline PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___PoseNames_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Poses_1), (void*)NULL);
		#endif
	}
};
// UnityEngine.UnitySynchronizationContext_WorkRequest[]
struct WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  m_Items[1];

public:
	inline WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle_2), (void*)NULL);
		#endif
	}
	inline WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle_2), (void*)NULL);
		#endif
	}
};
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  m_Items[1];

public:
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);

// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Attribute System.Reflection.CustomAttributeExtensions::GetCustomAttribute(System.Reflection.Assembly,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * CustomAttributeExtensions_GetCustomAttribute_m4F400BBA3D1EBE458C4CCEC26DF2A5F926AE3F34 (Assembly_t * ___element0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentFastPath_mDEB49C6B56084E436C7FC3D555339FA16949937E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, Type_t * ___type0, intptr_t ___oneFurtherThanResultValue1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * Resources_Load_mF0FA033BF566CDDA6A0E69BB97283B44C40726E7 (String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0145FEACBF5643445A468A312880F27CA4205396 (Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 * __this, Type_t * ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 *, Type_t *, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7 (String_t* ___s0, const RuntimeMethod* method);
// System.Exception System.Linq.Error::MoreThanOneMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MoreThanOneMatch_m85C3617F782E9F2333FC1FDF42821BE069F24623 (const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// T System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Array_InternalArray__get_Item_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m646E9CD2F8B82E5F35FBDE2A0EFD98A0F195D680_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m646E9CD2F8B82E5F35FBDE2A0EFD98A0F195D680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_m646E9CD2F8B82E5F35FBDE2A0EFD98A0F195D680_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int16_t*)(int16_t*)(&V_0));
		int16_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int32>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__get_Item_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC0D56DB29145576351D3144C0174C3DB3DFF9C84_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC0D56DB29145576351D3144C0174C3DB3DFF9C84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mC0D56DB29145576351D3144C0174C3DB3DFF9C84_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int32Enum>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_InternalArray__get_Item_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mB47101014CAE26A07ACE2888ADF044342599F247_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mB47101014CAE26A07ACE2888ADF044342599F247_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mB47101014CAE26A07ACE2888ADF044342599F247_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int32_t*)(int32_t*)(&V_0));
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Int64>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Array_InternalArray__get_Item_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m69766EC28E50BA89284F2D32C8684A401A19B346_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m69766EC28E50BA89284F2D32C8684A401A19B346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_m69766EC28E50BA89284F2D32C8684A401A19B346_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int64_t*)(int64_t*)(&V_0));
		int64_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Array_InternalArray__get_Item_TisIntPtr_t_mDAAED5E34FC82EC1CE912628ED6EFA3FD73BF68D_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisIntPtr_t_mDAAED5E34FC82EC1CE912628ED6EFA3FD73BF68D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisIntPtr_t_mDAAED5E34FC82EC1CE912628ED6EFA3FD73BF68D_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (intptr_t*)(intptr_t*)(&V_0));
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_InternalArray__get_Item_TisRuntimeObject_m98D2A0CAA60FCDAD14B318032271D194A0FC463A_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRuntimeObject_m98D2A0CAA60FCDAD14B318032271D194A0FC463A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisRuntimeObject_m98D2A0CAA60FCDAD14B318032271D194A0FC463A_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RuntimeObject **)(RuntimeObject **)(&V_0));
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.ParameterizedStrings_FormatParam>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800  Array_InternalArray__get_Item_TisFormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_m47A9D1BA5A97752AF36397686537AB4612A836EB_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisFormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_m47A9D1BA5A97752AF36397686537AB4612A836EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisFormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800_m47A9D1BA5A97752AF36397686537AB4612A836EB_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800 *)(FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800 *)(&V_0));
		FormatParam_t1901DD0E7CD1B3A17B09040A6E2FCA5307328800  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.CustomAttributeNamedArgument>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_m2FD87C18D9E6848633DF705BFFAFEB78D9396EA4_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_m2FD87C18D9E6848633DF705BFFAFEB78D9396EA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_m2FD87C18D9E6848633DF705BFFAFEB78D9396EA4_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)(&V_0));
		CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.CustomAttributeTypedArgument>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_mB284F11FF6EAAF07725EE9EEECAAD865E149E9CD_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_mB284F11FF6EAAF07725EE9EEECAAD865E149E9CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_mB284F11FF6EAAF07725EE9EEECAAD865E149E9CD_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)(&V_0));
		CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Reflection.ParameterModifier>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E  Array_InternalArray__get_Item_TisParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_m83A26FF89E9009B96B3B82235BC9508BB8406D77_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_m83A26FF89E9009B96B3B82235BC9508BB8406D77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E_m83A26FF89E9009B96B3B82235BC9508BB8406D77_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E *)(ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E *)(&V_0));
		ParameterModifier_t7BEFF7C52C8D7CD73D787BDAE6A1A50196204E3E  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Resources.ResourceLocator>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C  Array_InternalArray__get_Item_TisResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_m6880A2B25322CD928A2218BAC463B0F9D7450BD2_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_m6880A2B25322CD928A2218BAC463B0F9D7450BD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C_m6880A2B25322CD928A2218BAC463B0F9D7450BD2_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C *)(ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C *)(&V_0));
		ResourceLocator_t1783916E271C27CB09DF57E7E5ED08ECA4B3275C  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.Ephemeron>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA  Array_InternalArray__get_Item_TisEphemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_m4277A55FF0F7CC43A28269EF99E761F3BA612EE3_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisEphemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_m4277A55FF0F7CC43A28269EF99E761F3BA612EE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisEphemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA_m4277A55FF0F7CC43A28269EF99E761F3BA612EE3_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA *)(Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA *)(&V_0));
		Ephemeron_t6F0B12401657FF132AB44052E5BCD06D358FF1BA  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Array_InternalArray__get_Item_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m288F7FA25642BAF460C919173FFBACFF200256FE_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m288F7FA25642BAF460C919173FFBACFF200256FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0x0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisSByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_m288F7FA25642BAF460C919173FFBACFF200256FE_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (int8_t*)(int8_t*)(&V_0));
		int8_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Single>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Array_InternalArray__get_Item_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m77CE54A431B9137F71AE4EB8DD6BD6896CAD51D5_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m77CE54A431B9137F71AE4EB8DD6BD6896CAD51D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m77CE54A431B9137F71AE4EB8DD6BD6896CAD51D5_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (float*)(float*)(&V_0));
		float L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.Threading.CancellationTokenRegistration>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  Array_InternalArray__get_Item_TisCancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_m0318D47BE2AB57E53839293C15DD335B8B0583AA_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisCancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_m0318D47BE2AB57E53839293C15DD335B8B0583AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisCancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2_m0318D47BE2AB57E53839293C15DD335B8B0583AA_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 *)(CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2 *)(&V_0));
		CancellationTokenRegistration_tCDB9825D1854DD0D7FF737C82B099FC468107BB2  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  Array_InternalArray__get_Item_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m6F26E3B1889F792C114EA852B45C022258DDF5D4_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m6F26E3B1889F792C114EA852B45C022258DDF5D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisTimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_m6F26E3B1889F792C114EA852B45C022258DDF5D4_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0));
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt16>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Array_InternalArray__get_Item_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m92C7FC890AD3637D775B949E40AC58993090D84D_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m92C7FC890AD3637D775B949E40AC58993090D84D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisUInt16_tAE45CEF73BF720100519F6867F32145D075F928E_m92C7FC890AD3637D775B949E40AC58993090D84D_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint16_t*)(uint16_t*)(&V_0));
		uint16_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt32>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Array_InternalArray__get_Item_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m92E8524E021B44BD9FBA8B7B532C1C1D1AE2591E_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m92E8524E021B44BD9FBA8B7B532C1C1D1AE2591E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m92E8524E021B44BD9FBA8B7B532C1C1D1AE2591E_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint32_t*)(uint32_t*)(&V_0));
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<System.UInt64>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Array_InternalArray__get_Item_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m67422E4BCD6185FCCC24C2E10B17354B5CA4881F_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m67422E4BCD6185FCCC24C2E10B17354B5CA4881F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m67422E4BCD6185FCCC24C2E10B17354B5CA4881F_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (uint64_t*)(uint64_t*)(&V_0));
		uint64_t L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.BeforeRenderHelper_OrderBlock>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  Array_InternalArray__get_Item_TisOrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_m3A94BC2B4F31DBA1005FB94913C3130C69A2E39F_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisOrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_m3A94BC2B4F31DBA1005FB94913C3130C69A2E39F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisOrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_m3A94BC2B4F31DBA1005FB94913C3130C69A2E39F_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727 *)(OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727 *)(&V_0));
		OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.ContactPoint>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515  Array_InternalArray__get_Item_TisContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515_m1A4B88B46CEC94307CF29224873D7CE4027C40C0_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515_m1A4B88B46CEC94307CF29224873D7CE4027C40C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515_m1A4B88B46CEC94307CF29224873D7CE4027C40C0_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 *)(ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 *)(&V_0));
		ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  Array_InternalArray__get_Item_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_m3B53EB9E61040DA92DCE1D4373F9ECFC85FE5651_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_m3B53EB9E61040DA92DCE1D4373F9ECFC85FE5651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_m3B53EB9E61040DA92DCE1D4373F9ECFC85FE5651_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 *)(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 *)(&V_0));
		LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Keyframe>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  Array_InternalArray__get_Item_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_mD6A0D9843EAA93E58C03D148C4944DA9AA85608A_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_mD6A0D9843EAA93E58C03D148C4944DA9AA85608A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_mD6A0D9843EAA93E58C03D148C4944DA9AA85608A_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(&V_0));
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.LowLevel.PlayerLoopSystem>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93  Array_InternalArray__get_Item_TisPlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_mADFAEA14DF51FA2CBF3AE91F680FC1DDA4766E36_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_mADFAEA14DF51FA2CBF3AE91F680FC1DDA4766E36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisPlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93_mADFAEA14DF51FA2CBF3AE91F680FC1DDA4766E36_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93 *)(PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93 *)(&V_0));
		PlayerLoopSystem_t4F3CE091F496538800DC1FF6E750BFA72FEB8C93  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Plane>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  Array_InternalArray__get_Item_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m3B2A6B15ACEDDD69DFC2A7B1F1549239040CC12D_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m3B2A6B15ACEDDD69DFC2A7B1F1549239040CC12D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m3B2A6B15ACEDDD69DFC2A7B1F1549239040CC12D_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_0));
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Playables.PlayableBinding>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  Array_InternalArray__get_Item_TisPlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_m362D4C945930128AB5451EC5F1413FB6543D01C9_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_m362D4C945930128AB5451EC5F1413FB6543D01C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisPlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_m362D4C945930128AB5451EC5F1413FB6543D01C9_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8 *)(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8 *)(&V_0));
		PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.RaycastHit>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  Array_InternalArray__get_Item_TisRaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3_mDCDC36064BB0FF4DC76546ED1CA3DDB6C303F4FE_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisRaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3_mDCDC36064BB0FF4DC76546ED1CA3DDB6C303F4FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisRaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3_mDCDC36064BB0FF4DC76546ED1CA3DDB6C303F4FE_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_0));
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.Rendering.BatchVisibility>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  Array_InternalArray__get_Item_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mBA598D1852E66122156731750BBF1D8EDFEBAC55_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mBA598D1852E66122156731750BBF1D8EDFEBAC55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mBA598D1852E66122156731750BBF1D8EDFEBAC55_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 *)(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 *)(&V_0));
		BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SendMouseEvents_HitInfo>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746  Array_InternalArray__get_Item_TisHitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_m02FDDCF30AEA5010D3F032AAD267FCB98051A142_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisHitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_m02FDDCF30AEA5010D3F032AAD267FCB98051A142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisHitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746_m02FDDCF30AEA5010D3F032AAD267FCB98051A142_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746 *)(HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746 *)(&V_0));
		HitInfo_t2B010E637D28B522E704FDA56FAE6DA9979D8746  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  Array_InternalArray__get_Item_TisPoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_mDBA27A85789E51BDF5ECD99FC5933335F7F2ED4B_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisPoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_mDBA27A85789E51BDF5ECD99FC5933335F7F2ED4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisPoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_mDBA27A85789E51BDF5ECD99FC5933335F7F2ED4B_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE *)(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE *)(&V_0));
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.UnitySynchronizationContext_WorkRequest>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  Array_InternalArray__get_Item_TisWorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_mE136BEFAFFA4D20AC5F03D08E9E761773B432A66_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisWorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_mE136BEFAFFA4D20AC5F03D08E9E761773B432A66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisWorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_mE136BEFAFFA4D20AC5F03D08E9E761773B432A66_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 *)(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 *)(&V_0));
		WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.XR.XRNodeState>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  Array_InternalArray__get_Item_TisXRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A_m8C5E586FAD0BC5D6B3A4209F6FAB3807603CB6CF_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisXRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A_m8C5E586FAD0BC5D6B3A4209F6FAB3807603CB6CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisXRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A_m8C5E586FAD0BC5D6B3A4209F6FAB3807603CB6CF_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_0));
		XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.jvalue>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37  Array_InternalArray__get_Item_Tisjvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_mDBCC0EDA1351D0C8CD9E092FCEE99C99E0E2F487_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_Tisjvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_mDBCC0EDA1351D0C8CD9E092FCEE99C99E0E2F487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_Tisjvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37_mDBCC0EDA1351D0C8CD9E092FCEE99C99E0E2F487_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37 *)(jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37 *)(&V_0));
		jvalue_t98310C8FA21DF12CBE79266684536EDE1B7F9C37  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::UnsafeLoad<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  Array_UnsafeLoad_TisKeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B_m8882092DDF50416A52C0344EA23E22A421741486_gshared (KeyValuePair_2U5BU5D_tAC201058159F8B6B433415A0AB937BD11FC8A36F* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tAC201058159F8B6B433415A0AB937BD11FC8A36F* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  L_3 = (KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B )(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Int32>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_UnsafeLoad_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mA280B8BD39968B72F8DC966D4912D8C4F892920F_gshared (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Int32Enum>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_UnsafeLoad_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mE7C3675ADBE9782510F7FC36BE298932CBDA1AB3_gshared (Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Object>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_UnsafeLoad_TisRuntimeObject_mF7D8C97071DB474A614395C952930E9E3E249586_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.BeforeRenderHelper_OrderBlock>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  Array_UnsafeLoad_TisOrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_mEED156545A2169401C6F00D1EDBE0DCBAFEEA27E_gshared (OrderBlockU5BU5D_t1C62FB945EC1F218FB6301A770FBF3C67B0AA101* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		OrderBlockU5BU5D_t1C62FB945EC1F218FB6301A770FBF3C67B0AA101* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  Array_UnsafeLoad_TisPoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_m822B04EACAE8EA7943A387D34E6B7279EE6576BD_gshared (PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.UnitySynchronizationContext_WorkRequest>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  Array_UnsafeLoad_TisWorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_mAB6878E92EDE4386DDE730A8BED98339AD1D2CB3_gshared (WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.XR.XRNodeState>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  Array_UnsafeLoad_TisXRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A_mF2AF38652F11D06362FCF8DF9882178D7367EA41_gshared (XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mA75245E8BF9FAB8A58686B2B26E4FC342453E774_gshared (Assembly_t * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mA75245E8BF9FAB8A58686B2B26E4FC342453E774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Assembly_t * L_0 = ___element0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * L_3 = CustomAttributeExtensions_GetCustomAttribute_m4F400BBA3D1EBE458C4CCEC26DF2A5F926AE3F34((Assembly_t *)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T System.Runtime.CompilerServices.JitHelpers::UnsafeCast<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JitHelpers_UnsafeCast_TisRuntimeObject_m73BCB2D74DD9491AC08870D92BE47CFF9731990C_gshared (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitialized_TisRuntimeObject_m7B0E3E50F3847BD7E9A7254C24D6DAA8994F6CC7_gshared (RuntimeObject ** ___target0, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___valueFactory1, const RuntimeMethod* method)
{
	{
		RuntimeObject ** L_0 = ___target0;
		RuntimeObject * L_1 = VolatileRead((RuntimeObject **)(RuntimeObject **)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject ** L_2 = ___target0;
		RuntimeObject * L_3 = (*(RuntimeObject **)L_2);
		return L_3;
	}

IL_0014:
	{
		RuntimeObject ** L_4 = ___target0;
		Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * L_5 = ___valueFactory1;
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (RuntimeObject **, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_4, (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_6;
	}
}
// T System.Threading.LazyInitializer::EnsureInitializedCore<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m4289829E8C0F3DA67A5B3E27721CF5D1C203CED2_gshared (RuntimeObject ** ___target0, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___valueFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m4289829E8C0F3DA67A5B3E27721CF5D1C203CED2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * L_0 = ___valueFactory1;
		NullCheck((Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9((String_t*)_stringLiteral64358BBCCF8C380C05E774933982A64691BCEB28, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m4289829E8C0F3DA67A5B3E27721CF5D1C203CED2_RuntimeMethod_var);
	}

IL_001f:
	{
		RuntimeObject ** L_5 = ___target0;
		RuntimeObject * L_6 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_7 = V_1;
		InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)(RuntimeObject **)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7);
		RuntimeObject ** L_8 = ___target0;
		RuntimeObject * L_9 = (*(RuntimeObject **)L_8);
		return L_9;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_mE1E5C9FEE7986D0DC142899647016794AD72FE41_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDF06AB711FBC60539DDB6B10F618FA665889118B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4035A16640EF0CD46AA8C5531ACB424DEE4EBBF0_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElement_TisRuntimeObject_mEA464E7502775F297FD24174B32518004C16A032_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  UnsafeUtility_ReadArrayElement_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_m066AC8133B3E249008AEBBE6A0E9850D87EC154E_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 );
		LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  L_3 = (*(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  UnsafeUtility_ReadArrayElement_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_mD81CD0DB631C7A002FB9464FD069992596794125_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED );
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_3 = (*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  UnsafeUtility_ReadArrayElement_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_m77A1347F6614ADCB969BC6ED40CBFA1A7BD3A2A8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 );
		BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  L_3 = (*(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T UnityEngine.AttributeHelperEngine::GetCustomAttributeOfType<System.Object>(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m7AEF0374A18EED15CB2B6318117FDC6364AC2F3B_gshared (Type_t * ___klass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m7AEF0374A18EED15CB2B6318117FDC6364AC2F3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		Type_t * L_2 = ___klass0;
		Type_t * L_3 = V_0;
		NullCheck((MemberInfo_t *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = VirtFuncInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, (MemberInfo_t *)L_2, (Type_t *)L_3, (bool)1);
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = V_1;
		NullCheck(L_6);
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_6)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_2 = (bool)G_B3_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003c;
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_4;
		V_3 = (RuntimeObject *)L_11;
		goto IL_003c;
	}

IL_003c:
	{
		RuntimeObject * L_12 = V_3;
		return L_12;
	}
}
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF ));
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		intptr_t* L_2 = (intptr_t*)(&V_0)->get_address_of_onePointerFurtherThanT_1();
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6_inline((&L_3), (void*)(void*)(((uintptr_t)L_2)), /*hidden argument*/NULL);
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this);
		Component_GetComponentFastPath_mDEB49C6B56084E436C7FC3D555339FA16949937E((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)__this, (Type_t *)L_1, (intptr_t)L_3, /*hidden argument*/NULL);
		CastHelper_1_t72B003D3B45B7A5BF4E96CDF11BC8BF1CB8467BF  L_4 = V_0;
		RuntimeObject * L_5 = (RuntimeObject *)L_4.get_t_0();
		V_1 = (RuntimeObject *)L_5;
		goto IL_0030;
	}

IL_0030:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m312D167000593C478994C1F4C93930C5DAED66D3_gshared (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Resources_Load_TisRuntimeObject_m312D167000593C478994C1F4C93930C5DAED66D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_3 = Resources_Load_mF0FA033BF566CDDA6A0E69BB97283B44C40726E7((String_t*)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m7A8F75139352BA04C2EEC1D72D430FAC94C753DE_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptableObject_CreateInstance_TisRuntimeObject_m7A8F75139352BA04C2EEC1D72D430FAC94C753DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * L_2 = ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D((Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.XR.Management.XRLoaderHelper::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_m8D18B6F86DF3BF0F0C2102EFAE7DF661C3A09931_gshared (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_m8D18B6F86DF3BF0F0C2102EFAE7DF661C3A09931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// Type subsystemType = typeof(T);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// m_SubsystemInstanceMap.TryGetValue(subsystemType, out subsystem);
		Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 * L_2 = (Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 *)__this->get_m_SubsystemInstanceMap_4();
		Type_t * L_3 = V_0;
		NullCheck((Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 *)L_2);
		Dictionary_2_TryGetValue_m0145FEACBF5643445A468A312880F27CA4205396((Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 *)L_2, (Type_t *)L_3, (RuntimeObject**)(RuntimeObject**)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0145FEACBF5643445A468A312880F27CA4205396_RuntimeMethod_var);
		// return subsystem as T;
		RuntimeObject* L_4 = V_1;
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T UnityEngine.XR.Management.XRManagerSettings::ActiveLoaderAs<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRManagerSettings_ActiveLoaderAs_TisRuntimeObject_mBC795755F293A7193C0E8800895EA19FCC4AF067_gshared (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method)
{
	{
		// return activeLoader as T;
		NullCheck((XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 *)__this);
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_0 = XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline((XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 *)__this, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}
}
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 * ___converter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_RuntimeMethod_var);
	}

IL_000e:
	{
		Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 * L_2 = ___converter1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteral2C3199988097E4BB3103E8C34B8DFE8796545D8F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_RuntimeMethod_var);
	}

IL_001c:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___array0;
		NullCheck(L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_5;
		V_1 = (int32_t)0;
		goto IL_0041;
	}

IL_0029:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = V_0;
		int32_t L_7 = V_1;
		Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 * L_8 = ___converter1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = ___array0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck((Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 *)L_8);
		RuntimeObject * L_13 = ((  RuntimeObject * (*) (Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 *)L_8, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject *)L_13);
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = ___array0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_0;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int64_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}

IL_000e:
	{
		Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral04444310B8C9D216A6BC1D1CC9542ECC75BC02DF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}

IL_001c:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		V_1 = (int64_t)(((int64_t)((int64_t)0)));
		RuntimeObject* L_4 = ___source0;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4);
		V_2 = (RuntimeObject*)L_5;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0030:
		{
			RuntimeObject* L_6 = V_2;
			NullCheck((RuntimeObject*)L_6);
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_6);
			V_3 = (RuntimeObject *)L_7;
			Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_8 = ___predicate1;
			RuntimeObject * L_9 = V_3;
			NullCheck((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8);
			bool L_10 = ((  bool (*) (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			RuntimeObject * L_11 = V_3;
			V_0 = (RuntimeObject *)L_11;
			int64_t L_12 = V_1;
			if (il2cpp_codegen_check_add_overflow((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1)))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
			V_1 = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1)))));
		}

IL_0047:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck((RuntimeObject*)L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
			if (L_14)
			{
				goto IL_0030;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			if (!L_15)
			{
				goto IL_005a;
			}
		}

IL_0054:
		{
			RuntimeObject* L_16 = V_2;
			NullCheck((RuntimeObject*)L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005b:
	{
		int64_t L_17 = V_1;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		int64_t L_18 = V_1;
		if ((((int64_t)L_18) == ((int64_t)(((int64_t)((int64_t)1))))))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0072;
	}

IL_0065:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_19 = V_4;
		return L_19;
	}

IL_0070:
	{
		RuntimeObject * L_20 = V_0;
		return L_20;
	}

IL_0072:
	{
		Exception_t * L_21 = Error_MoreThanOneMatch_m85C3617F782E9F2333FC1FDF42821BE069F24623(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m65245601C668347780A2F6D1A8D7EEC7D79AD673_gshared (RuntimeObject* ___dictionary0, RuntimeObject * ___key1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		RuntimeObject * L_1 = ___key1;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_3;
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_gshared (RuntimeObject* ___dictionary0, RuntimeObject * ___key1, RuntimeObject * ___defaultValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteralF18BFB74E613AFB11F36BDD80CF05CD5DFAD98D6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___dictionary0;
		RuntimeObject * L_3 = ___key1;
		NullCheck((RuntimeObject*)L_2);
		bool L_4 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2, (RuntimeObject *)L_3, (RuntimeObject **)(RuntimeObject **)(&V_0));
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_5 = ___defaultValue2;
		return L_5;
	}

IL_001b:
	{
		RuntimeObject * L_6 = V_0;
		return L_6;
	}
}
// T[] System.Array::Empty<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* Array_Empty_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB69B3E7C1276AE609F2B9FA977634893619F966D_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ((EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B9_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B10_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_000e:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		V_2 = (int32_t)0;
		goto IL_006b;
	}

IL_0028:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_5 = ___match1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___array0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5);
		bool L_10 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_11 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_1;
		NullCheck(L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B8_0 = (&V_1);
		if (!L_13)
		{
			G_B9_0 = (&V_1);
			goto IL_0047;
		}
	}
	{
		int32_t L_14 = V_0;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2));
		G_B10_1 = G_B8_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 4;
		G_B10_1 = G_B9_0;
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = ___array0;
		NullCheck(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_16 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525((int32_t)G_B10_0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))), /*hidden argument*/NULL);
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)G_B10_1, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0055:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = (int32_t)L_18;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___array0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject *)L_23);
	}

IL_0067:
	{
		int32_t L_24 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_25 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = ___array0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_27 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_29 = V_0;
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(&V_1), (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = V_1;
		return L_30;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CustomAttributeData_UnboxValues_TisRuntimeObject_mFB1257FB7BD27255281B2111A20203E3A93E7050_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_mC152FBD94252DA2417B7773AE16C51154C9F6A72_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_1 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)(CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E )((*(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)((CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_m846F81B95C445180214406E0D355EBA8EC9644D1_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_1 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)(CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 )((*(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)((CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_11 = V_0;
		return L_11;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m703A74A313FE9EA25911440A31960B0CCF2A3324_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_3 = V_1;
		V_0 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_3;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_4 = V_0;
		V_2 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m79812A22661959D2B4F290958FD9C61E69528D28_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_3 = V_1;
		V_0 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_3;
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_4 = V_0;
		V_2 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_mD7AFB293FDB633E3BAAE963C0F5DB9A4A25E9649_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_3 = V_1;
		V_0 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_3;
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_4 = V_0;
		V_2 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m9610FDE0388D2A14248C97656170DC5B83C8BA88_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_3 = V_1;
		V_0 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_3;
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_4 = V_0;
		V_2 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mB397E70D8182B23E8F1F1F3D18CC3EF2290AC0D6_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_3 = V_1;
		V_0 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_3;
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_4 = V_0;
		V_2 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_5 = V_2;
		return L_5;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void IntPtr__ctor_m6360250F4B87C6AE2F0389DA0DEE1983EED73FB6_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method)
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67GenericMethods2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRLoader activeLoader { get { return s_ActiveLoader; } private set { s_ActiveLoader = value; } }
		IL2CPP_RUNTIME_CLASS_INIT(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_il2cpp_TypeInfo_var);
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_0 = ((XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_StaticFields*)il2cpp_codegen_static_fields_for(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_il2cpp_TypeInfo_var))->get_s_ActiveLoader_9();
		return L_0;
	}
}