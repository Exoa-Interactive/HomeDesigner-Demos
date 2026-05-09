#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct VirtualActionInvoker8
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

struct Action_1_tFBB6A5F3047BBDC10892F8A76DA0278E5C757F3B;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451;
struct Action_1_t5707B4C42B9ECDF531FD923D30CFC3BECF7DC657;
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct Action_2_tC0DB9EE30EB253A31F6930D67F44D9951CD50B5E;
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct HashSet_1_t914AC507BF31A93BB101DCB4B68F328BB748A018;
struct LinkedListNode_1_tC744AAB096FAA661A440667EE04458AB4AC1D94C;
struct LinkedList_1_tFC6B3D337ABAB792D64E3235F07F050C0E9BBF9E;
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
struct List_1_t68E73CC7E253385EB0718FEA9379587C96F16888;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
struct List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E;
struct List_1_t829CF1EA4B5A052C398E8718E000F70C27348433;
struct List_1_t16BADE307AC355B9C9BAC0044BFD5D30AB0C2207;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TouchFingerU5BU5D_t2B88EB6F776F3500D528A67697FADFFCCEEFF4C5;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B;
struct CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0;
struct CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B;
struct CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9;
struct CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC;
struct CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1;
struct CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470;
struct CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A;
struct CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
struct Exception_t;
struct FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
struct InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F;
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D;
struct String_t;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct TouchFinger_t17EA4C05B9E9EA02DF7C30B63BF3945FCC2ABBFD;
struct TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UIToolkitInteroperabilityBridge_t8E98EE5D73E8CCAA894A1BE50049E2A06E592CDD;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t40857AEDAC1E200C7DD370958ADCAC6F04BE259D;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
struct OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12;
struct OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597;
struct OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1;
struct OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B;
struct OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6;
struct OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD;
struct LeanSelectEvent_t4B8F91DBC947E4F4676645A4E4792A44BEFB3EFB;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t11EC31306FF6FF82A2EC92C15F9E6C1546A08894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraLogger_t72DE2393AB4FC7F454115249A50E69AF3E783074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t952D62534B84D97EA0C7C0058F6542C96BC89755____38DD7BF91C0B890E47C36BCA58DE27BA5B9F4DE0E84CEF267A1342A73AFAF553_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t952D62534B84D97EA0C7C0058F6542C96BC89755____404FEF49E242F6FA8DF134E3CC31430666451656FB4C167CE4F4703CEA650B37_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral018ECE7A37C6D10F92ECDD742C94C44AAFABC4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral05B924F3208A0578DAC27A6C09F5DB0EB3B3A24C;
IL2CPP_EXTERN_C String_t* _stringLiteral15F9B66B8419767EFCA6AEB5979A00AEDC3593CF;
IL2CPP_EXTERN_C String_t* _stringLiteral17FD5CD0CB1540984E8C3779F3994D63A8FC027B;
IL2CPP_EXTERN_C String_t* _stringLiteral1B95DDE2FEF9D3813B36CE3014B2E949DCC001C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral251A33F7BAB93B40FB03CD75542109636073F109;
IL2CPP_EXTERN_C String_t* _stringLiteral2535E32A4BD54ABEFDB46B0F9692117F153A9384;
IL2CPP_EXTERN_C String_t* _stringLiteral3EA5DCC322D2959462ED137CC52CE609242F2813;
IL2CPP_EXTERN_C String_t* _stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E;
IL2CPP_EXTERN_C String_t* _stringLiteral47748B020DEE5E467001A7429388553FEF3828AE;
IL2CPP_EXTERN_C String_t* _stringLiteral4AFEE206DAF316C1853A17C5D3BAC3E1451A130E;
IL2CPP_EXTERN_C String_t* _stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05;
IL2CPP_EXTERN_C String_t* _stringLiteral4DE5460C64D98430680864537FDB01443555062D;
IL2CPP_EXTERN_C String_t* _stringLiteral5C6C3B8F0D7CA74B6FF17E981A670016724321F7;
IL2CPP_EXTERN_C String_t* _stringLiteral622E455B08C3124F3808D02DBD4C3E36646B8131;
IL2CPP_EXTERN_C String_t* _stringLiteral64DC2A9456F7CBEEC44E950591D68D8214D69B4E;
IL2CPP_EXTERN_C String_t* _stringLiteral654A6728A47E8893871ECFF52BB7107E2AC0261A;
IL2CPP_EXTERN_C String_t* _stringLiteral67BD05CAD2D1D2497DB6878B7E44FFD72EB66510;
IL2CPP_EXTERN_C String_t* _stringLiteral6E70B2D632B387D7316B6AFBA9B5361CAEB5C8B6;
IL2CPP_EXTERN_C String_t* _stringLiteral7A3CE8C9B8823B239E0DBEB6E7D992137CB9D8CA;
IL2CPP_EXTERN_C String_t* _stringLiteral7BCFEC50605C1BD30A913CF409789B75A5356CA4;
IL2CPP_EXTERN_C String_t* _stringLiteral8B4A7B4A5F19949D56265C02CA3603347958370F;
IL2CPP_EXTERN_C String_t* _stringLiteral8C056A58AC71C412E2FBC875BEDFA899AE9ADBFA;
IL2CPP_EXTERN_C String_t* _stringLiteral961C44D9C305DE729D6D9C55DF7537E2F986DACB;
IL2CPP_EXTERN_C String_t* _stringLiteral9B6EC87D0393C5990341A1AD64657C9EF59C7304;
IL2CPP_EXTERN_C String_t* _stringLiteral9BBF6D728F579C583A84EF64CCE83CDA72247751;
IL2CPP_EXTERN_C String_t* _stringLiteral9E5F00006D691DB000821EAB0397327E9D00AD98;
IL2CPP_EXTERN_C String_t* _stringLiteralABDF2DCA2922626BBCDD1C9A2711B5694D5D0ED3;
IL2CPP_EXTERN_C String_t* _stringLiteralB83E1A510F8DAB47223281C434CB405EC6E6D9B8;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A7EDEBF99915540EBE211C25A14FEFF82DDAA7;
IL2CPP_EXTERN_C String_t* _stringLiteralC33DBC71318EE92096D273FF62B8DE6BE1A53EF7;
IL2CPP_EXTERN_C String_t* _stringLiteralCF63C4C37D0451CFA4D55A009F53652D5669D045;
IL2CPP_EXTERN_C String_t* _stringLiteralD2780C81EB84FB6795F7205BE681DD178B81146E;
IL2CPP_EXTERN_C String_t* _stringLiteralDC6D88848E02ECF70C8487C88631935FD43BF1F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE314FB894502AFC1C3282918E3B738D1F4D05490;
IL2CPP_EXTERN_C String_t* _stringLiteralEF3B7246928BA670D964338513EEB7FDFADF55A4;
IL2CPP_EXTERN_C String_t* _stringLiteralF828B6356DADB1C6558DA690BB1949618673AF70;
IL2CPP_EXTERN_C const RuntimeMethod* CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraBase_ResetCamera_mFAE2BBF5E0B1CB07C9AFC494F65A72F8843C92A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraBase_SetResetValues_m55AC07FAB2B93D36E1CFD641633BF981293CCA21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraModeSwitcher_U3CLateUpdateU3Eb__28_0_mCBD2AF87519F44A41331A3464E82192C1DEE70E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0_m19547DF5F04016402B81E45CB43D16C08C78198A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_m7562F2B067C61C6F7F7EFF421FCAB66CDBB405EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1_mCD4418D5C439683746661FD46B3FEB3A946EB2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470_m101A27FAB458BD5B2F5EB0F189C124E33ECF1E79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5ECEB37CD56AE44DE04B948778915514D0F83B61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t9ED03B94ADDA83CE3A7CC058C46E66D5A54D2109 
{
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E  : public RuntimeObject
{
	TouchFingerU5BU5D_t2B88EB6F776F3500D528A67697FADFFCCEEFF4C5* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct U3CPrivateImplementationDetailsU3E_t952D62534B84D97EA0C7C0058F6542C96BC89755  : public RuntimeObject
{
};
struct CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B  : public RuntimeObject
{
};
struct CameraLogger_t72DE2393AB4FC7F454115249A50E69AF3E783074  : public RuntimeObject
{
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes;
	String_t* ___positiveSign;
	String_t* ___negativeSign;
	String_t* ___numberDecimalSeparator;
	String_t* ___numberGroupSeparator;
	String_t* ___currencyGroupSeparator;
	String_t* ___currencyDecimalSeparator;
	String_t* ___currencySymbol;
	String_t* ___ansiCurrencySymbol;
	String_t* ___nanSymbol;
	String_t* ___positiveInfinitySymbol;
	String_t* ___negativeInfinitySymbol;
	String_t* ___percentDecimalSeparator;
	String_t* ___percentGroupSeparator;
	String_t* ___percentSymbol;
	String_t* ___perMilleSymbol;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits;
	int32_t ___m_dataItem;
	int32_t ___numberDecimalDigits;
	int32_t ___currencyDecimalDigits;
	int32_t ___currencyPositivePattern;
	int32_t ___currencyNegativePattern;
	int32_t ___numberNegativePattern;
	int32_t ___percentPositivePattern;
	int32_t ___percentNegativePattern;
	int32_t ___percentDecimalDigits;
	int32_t ___digitSubstitution;
	bool ___isReadOnly;
	bool ___m_useUserOverride;
	bool ___m_isInvariant;
	bool ___validForParseAsNumber;
	bool ___validForParseAsCurrency;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t40857AEDAC1E200C7DD370958ADCAC6F04BE259D  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72 
{
	float ___Value;
	float ___Velocity;
	bool ___completed;
};
struct FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_marshaled_pinvoke
{
	float ___Value;
	float ___Velocity;
	int32_t ___completed;
};
struct FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_marshaled_com
{
	float ___Value;
	float ___Velocity;
	int32_t ___completed;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1191_t8C1BB1C4184CDA5C3CF67ECC0927A7D3B6D3DE98 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1191_t8C1BB1C4184CDA5C3CF67ECC0927A7D3B6D3DE98__padding[1191];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D424_t0E24655ED21B6C4F7F03A29B5FE76507C4643689 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D424_t0E24655ED21B6C4F7F03A29B5FE76507C4643689__padding[424];
	};
};
#pragma pack(pop, tp)
struct UIToolkitOverrideConfigOld_tE63BCF42BC8CC79144B2817BE309C5C19015FD88 
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem;
	bool ___sendEvents;
	bool ___createPanelGameObjectsOnStart;
};
struct UIToolkitOverrideConfigOld_tE63BCF42BC8CC79144B2817BE309C5C19015FD88_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem;
	int32_t ___sendEvents;
	int32_t ___createPanelGameObjectsOnStart;
};
struct UIToolkitOverrideConfigOld_tE63BCF42BC8CC79144B2817BE309C5C19015FD88_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem;
	int32_t ___sendEvents;
	int32_t ___createPanelGameObjectsOnStart;
};
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	bool ___m_HaveValue;
	int32_t ___m_DeviceCount;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray;
};
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue;
	int32_t ___m_DeviceCount;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray;
};
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue;
	int32_t ___m_DeviceCount;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray;
};
struct MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove;
};
struct Nullable_1_t33D5AB3CF72EDE570A226DE48EF7C3A10F25A7C4 
{
	bool ___hasValue;
	UIToolkitOverrideConfigOld_tE63BCF42BC8CC79144B2817BE309C5C19015FD88 ___value;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct InputActionType_t7E3615BDDF3C84F39712E5889559D3AD8E773108 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ValueVec;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___VelocityVec;
	bool ___completed;
};
struct QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_marshaled_pinvoke
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ValueVec;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___VelocityVec;
	int32_t ___completed;
};
struct QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_marshaled_com
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___ValueVec;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___VelocityVec;
	int32_t ___completed;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TouchFinger_t17EA4C05B9E9EA02DF7C30B63BF3945FCC2ABBFD  : public RuntimeObject
{
	int32_t ___Index;
	float ___Age;
	bool ___Set;
	bool ___LastSet;
	bool ___Tap;
	int32_t ___TapCount;
	bool ___Swipe;
	bool ___Old;
	bool ___Expired;
	float ___LastPressure;
	float ___Pressure;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___StartScreenPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LastScreenPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ScreenPosition;
	bool ___StartedOverGui;
	List_1_t16BADE307AC355B9C9BAC0044BFD5D30AB0C2207* ___Snapshots;
};
struct Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Value;
	float ___m_padding0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Velocity;
	float ___m_padding1;
	bool ___completed;
};
struct Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Value;
	float ___m_padding0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Velocity;
	float ___m_padding1;
	int32_t ___completed;
};
struct Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Value;
	float ___m_padding0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Velocity;
	float ___m_padding1;
	int32_t ___completed;
};
struct InputMapFingerDrag_t86791DA5B563F146C75298E7A343ACD9D534BDA3 
{
	int32_t ___value__;
};
struct InputMapFingerPinch_tE67BD4C864C1277C122C942C0A705F0637710BF1 
{
	int32_t ___value__;
};
struct InputMapScrollWheel_tF9AE7955E21E51231137DF8AC47D328E0C6CC934 
{
	int32_t ___value__;
};
struct Mode_tADF4E3BAF868F0B8B627ADF59A0C83BA7E26B3B4 
{
	int32_t ___value__;
};
struct Type_t094A11428C140505A5E9539469A745B3E5CC3613 
{
	int32_t ___value__;
};
struct Action_t11EC31306FF6FF82A2EC92C15F9E6C1546A08894 
{
	int32_t ___value__;
};
struct FilterType_t400E1DBED5755319633D8FE37579A686F032CD20 
{
	int32_t ___value__;
};
struct ActionFlags_t639BD2944E073F8DD263CE2CA581FC62C401AB1E 
{
	int32_t ___value__;
};
struct Flags_tC94B4BEC896F8152609F412172F9CFD6F6BDB523 
{
	int32_t ___value__;
};
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	int32_t ___value__;
};
struct ConversionType_t8F1075A46B2312C4A6A88DC964FC2A263B2205B9 
{
	int32_t ___value__;
};
struct ParameterMode_tF400849A4A7FA73440865FE2970AA849A883F94F 
{
	int32_t ___value__;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16  : public RuntimeObject
{
	int32_t ___Filter;
	bool ___IgnoreStartedOverGui;
	int32_t ___RequiredFingerCount;
	int32_t ___RequiredMouseButtons;
	TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41* ___RequiredSelectable;
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___fingers;
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___filteredFingers;
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562 
{
	int32_t ___Conversion;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___Object;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___Layers;
	float ___Distance;
};
struct ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_marshaled_pinvoke
{
	int32_t ___Conversion;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___Object;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___Layers;
	float ___Distance;
};
struct ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_marshaled_com
{
	int32_t ___Conversion;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Camera;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___Object;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___Layers;
	float ___Distance;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D  : public RuntimeObject
{
	int32_t ___type;
	float ___halfLife;
	float ___frequency;
	float ___angularFrequency;
	float ___ratio;
	float ___distanceFromTargetToComplete;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451  : public MulticastDelegate_t
{
};
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	bool ___hasValue;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value;
};
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	String_t* ___m_ActionId;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12  : public MulticastDelegate_t
{
};
struct OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597  : public MulticastDelegate_t
{
};
struct OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1  : public MulticastDelegate_t
{
};
struct OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B  : public MulticastDelegate_t
{
};
struct OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6  : public MulticastDelegate_t
{
};
struct OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD  : public MulticastDelegate_t
{
};
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	uint32_t ___m_NonSerializedVersion;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	String_t* ___m_Name;
	int32_t ___m_Type;
	String_t* ___m_ExpectedControlType;
	String_t* ___m_Id;
	String_t* ___m_Processors;
	String_t* ___m_Interactions;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings;
	int32_t ___m_Flags;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_BindingsStartIndex;
	int32_t ___m_BindingsCount;
	int32_t ___m_ControlStartIndex;
	int32_t ___m_ControlCount;
	int32_t ___m_ActionIndexInState;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed;
};
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps;
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes;
	bool ___m_IsProjectWide;
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_ParameterOverridesCount;
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides;
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices;
};
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction;
	int32_t ___m_EnabledActionsCount;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction;
	int32_t ___m_MapIndexInState;
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_Flags;
	int32_t ___m_ParameterOverridesCount;
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides;
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	bool ___defaultMode;
	bool ___standalone;
	ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562 ___HeightScreenDepth;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam;
	CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* ___camBounds;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initOffset;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___initRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___finalOffset;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___finalPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___finalRotation;
	float ___finalDistance;
	bool ___disableMoves;
	bool ___disableOneFingerDrag;
	float ___currentPitch;
	float ___currentYaw;
	float ___deltaYaw;
	float ___deltaPitch;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___twistRot;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPointCameraCenter;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPointFingersCenter;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPointFingersDelta;
	int32_t ___rightClickDrag;
	int32_t ___middleClickDrag;
	int32_t ___oneFingerDrag;
	int32_t ___twoFingerDrag;
	int32_t ___twoFingerPinch;
	int32_t ___scrollWheel;
	float ___groundHeight;
	Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* ___groundHeightAnim;
	FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72 ___groundHeightValue;
	bool ___allowPitchRotation;
	float ___PitchSensitivity;
	bool ___PitchClamp;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___PitchMinMax;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialRotation;
	bool ___allowYawRotation;
	float ___YawSensitivity;
	bool ___YawClamp;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___YawMinMax;
	float ___maxTranslationSpeed;
	bool ___firstUpdateDone;
	float ___focusRadiusMultiplier;
	Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* ___focusMove;
	FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72 ___focusMoveDistanceOrSize;
	Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767 ___focusMoveOffset;
	QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B ___focusMoveRotation;
	float ___focusLerp;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___focusTargetGo;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___focusTargetPosition;
	float ___focusTargetDistanceOrSize;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___focusTargetRotation;
	bool ___enableDistanceChange;
	bool ___enablePositionChange;
	bool ___enableRotationChange;
	bool ___enableFollowGameObject;
	bool ___isFocusing;
	bool ___allowYOffsetFromGround;
	float ___lastPrint;
};
struct CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ___type;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___bounderiesCollider;
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ___boxCollider;
	bool ___drawGizmos;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds;
	int32_t ___mode;
};
struct CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ___playerInput;
	bool ___enableShortcutKeys;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___resetCameraAction;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___switchPerspectiveAction;
};
struct CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* ___camOrtho;
	CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* ___camPersp;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam;
	float ___matrixLerp;
	bool ___orthoMode;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___orthoMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___perspectiveMatrix;
	Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* ___switchMove;
	FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72 ___switchMoveLerp;
};
struct InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSimulateFingers;
	float ___tapThreshold;
	float ___swipeThreshold;
	int32_t ___referenceDpi;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___guiLayers;
	bool ___useTouch;
	bool ___useHover;
	bool ___useMouse;
	bool ___useSimulator;
	bool ___disableMouseEmulation;
	bool ___recordFingers;
	float ___recordThreshold;
	float ___recordLimit;
};
struct TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	LinkedListNode_1_tC744AAB096FAA661A440667EE04458AB4AC1D94C* ___instancesNode;
	bool ___selfSelected;
	LeanSelectEvent_t4B8F91DBC947E4F4676645A4E4792A44BEFB3EFB* ___onSelected;
	LeanSelectEvent_t4B8F91DBC947E4F4676645A4E4792A44BEFB3EFB* ___onDeselected;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1  : public CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___sizeMinMax;
	float ___finalSize;
	float ___initSize;
	float ___initDistance;
	float ___fixedDistance;
};
struct CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470  : public CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minMaxDistance;
	float ___initDistance;
	float ___zoomSmoothness;
	float ___fov;
	float ___focusDistanceMultiplier;
};
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules;
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected;
	bool ___m_sendNavigationEvents;
	int32_t ___m_DragThreshold;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected;
	bool ___m_HasFocus;
	bool ___m_SelectionGuard;
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData;
	UIToolkitInteroperabilityBridge_t8E98EE5D73E8CCAA894A1BE50049E2A06E592CDD* ___m_UIToolkitInterop;
};
struct CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A  : public CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470
{
};
struct CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842  : public CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1
{
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E_StaticFields
{
	TouchFingerU5BU5D_t2B88EB6F776F3500D528A67697FADFFCCEEFF4C5* ___s_emptyArray;
};
struct U3CPrivateImplementationDetailsU3E_t952D62534B84D97EA0C7C0058F6542C96BC89755_StaticFields
{
	__StaticArrayInitTypeSizeU3D424_t0E24655ED21B6C4F7F03A29B5FE76507C4643689 ___38DD7BF91C0B890E47C36BCA58DE27BA5B9F4DE0E84CEF267A1342A73AFAF553;
	__StaticArrayInitTypeSizeU3D1191_t8C1BB1C4184CDA5C3CF67ECC0927A7D3B6D3DE98 ___404FEF49E242F6FA8DF134E3CC31430666451656FB4C167CE4F4703CEA650B37;
};
struct CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields
{
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* ___OnBeforeSwitchPerspective;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* ___OnAfterSwitchPerspective;
	OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* ___OnRequestButtonAction;
	OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* ___OnRequestObjectFocus;
	OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* ___OnRequestGroundHeightChange;
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* ___OnFocusStart;
	OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* ___OnFocusComplete;
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* ___OnRequestStopFocus;
};
struct CameraLogger_t72DE2393AB4FC7F454115249A50E69AF3E783074_StaticFields
{
	bool ___enabled;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_StaticFields
{
	int32_t ___Stride;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	bool ___s_AllowOutsideOnGUI;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_StaticFields
{
	int32_t ___Stride;
};
struct Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_StaticFields
{
	int32_t ___Stride;
};
struct ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___LastWorldNormal;
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___hits;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionEnableProfilerMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputActionDisableProfilerMarker;
};
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ResolveBindingsProfilerMarker;
	int32_t ___s_DeferBindingResolution;
	bool ___s_NeedToResolveBindings;
};
struct CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields
{
	CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* ___U3CInstanceU3Ek__BackingField;
	bool ___isFingerTap;
	bool ___isFingerUp;
	FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* ___OneFingerFilter;
	FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* ___TwoFingerFilter;
	ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562 ___ScreenDepth;
	float ___pinchScale;
	float ___pinchRatio;
	float ___twistDegrees;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneFingerScaledPixelDelta;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___twoFingersScaledPixelDelta;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastScreenPointTwoFingersCenter;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastScreenPointOneFingerCenter;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastScreenPointAnyFingerCountCenter;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPointTwoFingersCenter;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPointOneFingerCenter;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPointAnyFingerCountCenter;
};
struct CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_StaticFields
{
	CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* ___Instance;
};
struct InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_StaticFields
{
	List_1_t68E73CC7E253385EB0718FEA9379587C96F16888* ___Instances;
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___Fingers;
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___InactiveFingers;
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerDown;
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerUpdate;
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerUp;
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerOld;
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerTap;
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerSwipe;
	Action_1_tFBB6A5F3047BBDC10892F8A76DA0278E5C757F3B* ___OnGesture;
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerExpired;
	Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___OnFingerInactive;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___tempRaycastResults;
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___filteredFingers;
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___tempPointerEventData;
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___tempEventSystem;
	TouchFinger_t17EA4C05B9E9EA02DF7C30B63BF3945FCC2ABBFD* ___simulatedTapFinger;
	HashSet_1_t914AC507BF31A93BB101DCB4B68F328BB748A018* ___missingFingers;
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___tempFingers;
};
struct TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41_StaticFields
{
	LinkedList_1_tFC6B3D337ABAB792D64E3235F07F050C0E9BBF9E* ___Instances;
	Action_1_t5707B4C42B9ECDF531FD923D30CFC3BECF7DC657* ___OnAnyEnabled;
	Action_1_t5707B4C42B9ECDF531FD923D30CFC3BECF7DC657* ___OnAnyDisabled;
	Action_2_tC0DB9EE30EB253A31F6930D67F44D9951CD50B5E* ___OnAnySelected;
	Action_2_tC0DB9EE30EB253A31F6930D67F44D9951CD50B5E* ___OnAnyDeselected;
	List_1_t829CF1EA4B5A052C398E8718E000F70C27348433* ___tempSelectables;
};
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems;
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer;
	Nullable_1_t33D5AB3CF72EDE570A226DE48EF7C3A10F25A7C4 ___s_UIToolkitOverrideConfigOld;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6 (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8 (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
inline CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* Component_GetComponent_TisCameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0_m19547DF5F04016402B81E45CB43D16C08C78198A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
inline CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* Component_GetComponent_TisCameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_m7562F2B067C61C6F7F7EFF421FCAB66CDBB405EA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenDepth__ctor_m36E55629497D13AAB09A2D588A68079327CD4C88 (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* __this, int32_t ___0_newConversion, int32_t ___1_newLayers, float ___2_newDistance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8 (String_t* ___0_msg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLogger_LogWarning_m53D72F9D1C03D10300A7FB62DB1764CECCC7795B (String_t* ___0_msg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885 (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* __this, float ___0_initValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_SetGroundHeight_m503F2D8526D6CBB8707C39854FA4CBE5B63F9402 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraInputs_GetFingerCount_m2DEC462E581245A894A2403795EE25F41E46E1EB (int32_t ___0_max, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseTouchInput_GetMouseIsHeld_m32F0BFD66354E7A05A0273A1FD75D68F8B8D19B3 (int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseTouchInput_GetMouseWentUp_m295348A7C8B896581DEF557AA439D1AB77FB2E55 (int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBoundaries_ClampInBoundsXZ_m25A55A0F005F2B3A327CB7241EAF57E6CC66F462 (CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, bool* ___1_isInBoundaries, float ___2_groundHeight, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraBase_set_DisableOneFingerDrag_mAAF38F643026B6870D33D39D1710FD04683B8B95_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, float ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_GetRotationSensitivity_mD660472B1E1B4E4C2BB2F80A7545D148F1B48B12 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateDistance_m0A1074DB880952743FE1D7217B8314901ABB0529 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mA32906658AB04773CC739956F581984226F8C939 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, bool ___1_instant, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m1BA14CB6073988B3351658960BB4F81388DE4E81 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistanceOrSize, bool ___2_instant, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mEAF9558106D1E59897AC8FFC714774CA445D3492 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_targetRotation, bool ___2_instant, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m243A357249078A68DD6B19452B47AC39B1216FE9 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_targetRotation, bool ___2_instant, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m81F0AFD126E638F130BACC286FD162000291078F (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistanceOrSize, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_targetRotation, bool ___3_instant, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mCFFE460E3705938CF97DB8A9BCC9E9C2F030F1A5 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistanceOrSize, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_targetRotation, bool ___3_instant, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_Log_mE1797E8DD8940C1A5C1F44BE0E9FB57021BFCDA2 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, String_t* ___0_msg, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Spring_set_Completed_mB90A4729D9CBA2D393D695F079F9E18B3C3C15C2_inline (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatSpring_set_Completed_m983959D34D0F2940700CCC298A95DD9EC0E02F06_inline (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QuaternionSpring_set_Completed_m86854F4D665551E19054665FD1C1A826F2594E44_inline (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_inline (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FloatSpring_get_Completed_m46A63AA9BABB240EEC5FE745D4513C46E1860F44_inline (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QuaternionSpring_get_Completed_m53EFA3AF95D3BED1944C6F14C6D938CB976CF3A2_inline (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Spring_get_Completed_m03A950D73A3F16E959A17BD0F5A246358A657D23_inline (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_inline (OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_ClosestPoint_m5BEB0BAC00387C354CF3C4D013442384122F24FC_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VectorExtensions_SetZ_m889E89C05309B0ADFF113D2CEC7885C239C2FF84 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, float ___1_z, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) ;
inline CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* Component_GetComponent_TisCameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1_mCD4418D5C439683746661FD46B3FEB3A946EB2DA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
inline CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* Component_GetComponent_TisCameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470_m101A27FAB458BD5B2F5EB0F189C124E33ECF1E79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLogger_LogError_m57145827A6C3C7204BDFD5D912361EB688F3AD1B (String_t* ___0_msg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___0_orthoMode, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* CameraInputs_get_Instance_m71526D6BAFCE84BF0F4AB17BE10E0A11D23B900C_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_ChangePerspective_m5A0E25948B96834FD48C08DA79004BA211449024 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_TogglePerspective_mB50D422DD44FB9F7B266CEE87A41F6D1F889E103 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Springs_Update_m472F2B3193B80FBA83E28788CE3CF1EAB3FB00F9 (Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* __this, FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* ___0_spring, float ___1_target, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_onComplete, bool ___3_useUnscaledTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraModeSwitcher_MatrixLerp_mA8D5EF3229D5E82DFB61AC806DF33493707A0FBB (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_from, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_to, float ___2_time, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_StopFocus_m8F68B89D4C0E30FFC1B1EB0DCD332BF1054347DE (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalOffset_m744D39C0C85E0BB5E805CEC6343A183BD3C0DD5B_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraBase_set_FinalOffset_m45ED06D9881A3FD897E950BADD06EE9EDD3F7B7A_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraBase_get_FinalDistance_mBBF78FCE4AF333F49D367BC9EE3C402124C6D162_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_SetSizeByDistance_mBC7DE819F563B85E9F6790A86409CE45DF307CF7 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, float ___0_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOrthoBase_GetDistanceFromSize_mC2202567822B0357A00FAFAE7C7B3BC6A4C1DEC7 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_SetPositionByDistance_mF190D5F7B993844B1B8448587D28F4F3893E25A4 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, float ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_ResetCamera_m842DFB2047E6891B3E5C06D3D589D05FDA12DB96 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_DisableCameraMoves_m8C7F68356FDCCFB93FD4DDD52076C904DFC92C21 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___0_active, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnBeforeSwitch_mD0A1AFC870CEC662E5F1E01CBF2238F259FBEAA9 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___0_orthoOn, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_SetGroundHeightAnimated_m59681B8244476ACF2A87C9537FE703CF05FD6F71 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_newHeight, bool ___1_animate, float ___2_duration, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnAfterSwitch_mEB52881E43B9C9C91A86EC3BCA4F3812736B437C (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___0_orthoOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_Init_mC1A3D3A7A83BBC74EB67EFAA4C1B0C29B0505932 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50 (FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* __this, bool ___0_ignoreUpFingers, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073 (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPoint, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_gameObject, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_ignore, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_delta, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___0_action, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BaseTouchInput_GetMousePosition_m0977CDAAA83BF76091725A27ACB4C50840808D87 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80_inline (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ScreenDepth_ConvertDelta_m2557381CA96262140FFA39D459AEAD108C2B1A7A (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lastScreenPoint, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_gameObject, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_ignore, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_ApplyToCamera_m7AC906E16988891AD1480ED4BE0F41E7D4E88D53 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Ortho_mB42622C6600D70BF8208B879E48BCB03844EEFCF (float ___0_left, float ___1_right, float ___2_bottom, float ___3_top, float ___4_zNear, float ___5_zFar, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110 (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_initValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionSpring_Reset_m90F16DB331DC1D338F3A52F022E75F7BF1204EAF (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_initValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m2C61085EA794A82D45E00D816C3746A82F1CC2EF (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___0_changeOffsetPostion, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetOffsetPosition, bool ___2_changeDistance, float ___3_targetDistanceOrSize, bool ___4_changeRotation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_targetRotation, bool ___6_allowYOffsetFromGround, bool ___7_instant, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCameraOnGameObject_mFA2D413C7681C59960BABD4840B8E55D3C15D866 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, bool ___1_allowYOffsetFromGround, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GameObjectExtensions_GetBoundsRecursive_mD19CC05A986BD107373450158ACF4CE78F707B01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Springs_Update_mA3BEF1C7C44DF42EF0A4616590269BAE02B6ACBF (Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* __this, QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* ___0_spring, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_target, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_onComplete, bool ___3_useUnscaledTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Springs_Update_m78DDCFA3F1C358969A5549B0D7927D8065B36897 (Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* __this, Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* ___0_spring, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_onComplete, bool ___3_useUnscaledTime, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase__ctor_mEB80C1963F42961B1479561D58B03FB1FE337CD3 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_m8FEFC176B548CE1ACD25C2E01A7153AAC48CB894 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_camPos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldPoint, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_minMaxDistance, float ___3_multiplier, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_HandleFocus_m8CDD1B5FD048A2097E9150D650B677E552FC8FD9 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_Perspective_m08BFCC6D4F8C7D51CEFBB8F3425954125BF9A743 (float ___0_fov, float ___1_aspect, float ___2_zNear, float ___3_zFar, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_Init_mA6013685173136DDA8C4AD24CC3DA0450ED1C0BC (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_mF3B8F73A1F51A167E0FD7FF18870A6C249930B09 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_distance, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_minMaxDistance, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase__ctor_m62881D30A4D8F9F541C4036592B2AEAC0CA12EC6 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_Init_mC35BF62EA51F7D23B9710BA605117A720A32C2C9 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase__ctor_mEE179738DF12DE8BCF73EC11F20F0A06897E35E9 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_get_control_m1E363A7ABA4F2E8CF41C661A48D53D85D635D320 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_get_IsOverUI_mA35B492B68AC97BEC54A6636CA3E1C649DF6AE4C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseTouchInput_GetMouseWentDown_mD5B70606B4380CEB9C3755E17B447E2BDE09ADB6 (int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BaseTouchInput_GetMouseWheelAxis_mF511515A2688A74F3EB53FC3CEAAEC950BE4171F (const RuntimeMethod* method) ;
inline void Action_1__ctor_m14D287DE55FBAD276522DE3E4A38048C308489C8 (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTouch_remove_OnFingerTap_m4A0A034A45AF5EE14EB056688A45799CC8132FFC (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTouch_remove_OnFingerUp_m9267B7070BDDAF36B31BC9B439A53A19A515C8CE (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraInputs_set_Instance_mE10BB72E60ACCA88BABDA7E5B56AB8BB527F479B_inline (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputAction_get_actionMap_m43B509A85057642A7DD0B89E4F27044ABB5B5E93 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionMap_get_asset_mBE901C135AA146247F9A05D72116F8FF15063052_inline (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966* InputTouch_get_Instance_mF98A72985ED5C3B0D69164EDF150B1B16E4ACBFE (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputTouch_set_UseMouse_m181F6A79E52F1A5AFD0A6768EB29A30A92D40C30_inline (InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTouch_add_OnFingerTap_mE28ED09017617792EA25D4C96C8FBAF62EB134D4 (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTouch_add_OnFingerUp_m38024B5A702D266C57BDF2E5FD48F18A28957938 (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputGesture_GetPinchScale_m3B5C9CDB58128EDFC3B4793C913209878CD14D27 (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___0_fingers, float ___1_wheelSensitivity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputGesture_GetPinchRatio_mA711A31C55785168B582BB76B6AA1E6018673530 (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___0_fingers, float ___1_wheelSensitivity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputGesture_GetTwistDegrees_m3F813BD422EA2C954D5B935212A6D9B876DEF8E2 (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___0_fingers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputGesture_GetLastScreenCenter_m7E5FBA384403965EB6A6B4A2AF9D061061392017 (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___0_fingers, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputGesture_GetScreenCenter_mAD60BD11D7236D0C0D74A5E4E3F9824772CB9D35 (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* ___0_fingers, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputTouch_get_ScalingFactor_m3200F11A91C954EA2839EA6F622FC4A3D628E403 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* InputTouch_GetFingers_mC6BCBC45460BF8CCC3C786E2091EE08C934EAA0D (bool ___0_ignoreIfStartedOverGui, bool ___1_ignoreIfOverGui, int32_t ___2_requiredFingerCount, bool ___3_ignoreHoverFinger, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_m5ECEB37CD56AE44DE04B948778915514D0F83B61_inline (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FingerFilter__ctor_mE561A6F645A166DA1555B5C44F29CCADD362A771 (FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* __this, int32_t ___0_newFilter, bool ___1_newIgnoreStartedOverGui, int32_t ___2_newRequiredFingerCount, int32_t ___3_newRequiredMouseButtons, TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41* ___4_newRequiredSelectable, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_mC5BD020889B5A4FB6894CFB69A5D4C07B321B919 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_rotation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_mD0C4C0EFE1D70EC0EA4A92B11F1A4D5B0A134E49 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_euler, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m1DE89849FE2019B6AA0031306896F3B800849399_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mA8DA39B6324392BB93203A4D4CB85AF87231CB62_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_m9B592D577B3FDB892CA53ABF3457BC2EDE45DF8C_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bounds_Internal_Contains_m03EAA1D2CE49D2467C621523D403635D33F4D63A (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_point, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_Internal_ClosestPoint_m58E324628352B972177C4AEB608EFBD8391636D5 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_point, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_Lerp_mB9D9E19C29CA86767758B70DCFF9DB7C65821B39 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_AngleAxis_m1A896524F98EF69748915ED902CC9DCEF16245D4 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_axis, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mD75969908D135B8BE9C423D2C08B853E0E552C4A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t952D62534B84D97EA0C7C0058F6542C96BC89755____38DD7BF91C0B890E47C36BCA58DE27BA5B9F4DE0E84CEF267A1342A73AFAF553_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t952D62534B84D97EA0C7C0058F6542C96BC89755____404FEF49E242F6FA8DF134E3CC31430666451656FB4C167CE4F4703CEA650B37_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1191));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t952D62534B84D97EA0C7C0058F6542C96BC89755____404FEF49E242F6FA8DF134E3CC31430666451656FB4C167CE4F4703CEA650B37_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)424));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t952D62534B84D97EA0C7C0058F6542C96BC89755____38DD7BF91C0B890E47C36BCA58DE27BA5B9F4DE0E84CEF267A1342A73AFAF553_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)13);
		(&V_0)->___TotalTypes = ((int32_t)13);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 54316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m6B3C9CBC8D871CB847252E2298C795D9B990AB8D (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t40857AEDAC1E200C7DD370958ADCAC6F04BE259D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshal_pinvoke(const MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC& unmarshaled, MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshal_pinvoke_back(const MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshaled_pinvoke& marshaled, MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshal_pinvoke_cleanup(MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshal_com(const MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC& unmarshaled, MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshal_com_back(const MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshaled_com& marshaled, MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshal_com_cleanup(MonoScriptData_t9C7374A329B7FEE94DCB4915FAB6C1302B2C1ABC_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraEvents__ctor_m2AD99E3BAA45D77A6D76A279C1FC4FDFF4292C35 (CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_Multicast(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___0_newHeight, bool ___1_animate, float ___2_duration, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* currentDelegate = reinterpret_cast<OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, bool, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_newHeight, ___1_animate, ___2_duration, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_OpenInst(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___0_newHeight, bool ___1_animate, float ___2_duration, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, bool, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_newHeight, ___1_animate, ___2_duration, method);
}
void OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_OpenStatic(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___0_newHeight, bool ___1_animate, float ___2_duration, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, bool, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_newHeight, ___1_animate, ___2_duration, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___0_newHeight, bool ___1_animate, float ___2_duration, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float, int32_t, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_newHeight, static_cast<int32_t>(___1_animate), ___2_duration);

}
// Method Definition Index: 54318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C_Multicast;
}
// Method Definition Index: 54319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestGroundHeightChangeHandler_Invoke_m47B30E69EA6381F1ECD9630AC0DE33D20922F13C (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___0_newHeight, bool ___1_animate, float ___2_duration, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, bool, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_newHeight, ___1_animate, ___2_duration, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRequestGroundHeightChangeHandler_BeginInvoke_mF10A3686A5B580A918ACEA9B815EBB872C6B0A59 (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, float ___0_newHeight, bool ___1_animate, float ___2_duration, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = Box(il2cpp_defaults.single_class, &___0_newHeight);
	__d_args[1] = Box(il2cpp_defaults.boolean_class, &___1_animate);
	__d_args[2] = Box(il2cpp_defaults.single_class, &___2_duration);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 54321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestGroundHeightChangeHandler_EndInvoke_mBBC660CF9B0106592B3C7068D4BDD51564A7FC48 (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_Multicast(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___0_action, bool ___1_active, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* currentDelegate = reinterpret_cast<OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_action, ___1_active, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_OpenInst(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___0_action, bool ___1_active, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_action, ___1_active, method);
}
void OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_OpenStatic(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___0_action, bool ___1_active, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_action, ___1_active, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12 (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___0_action, bool ___1_active, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(___0_action, static_cast<int32_t>(___1_active));

}
// Method Definition Index: 54322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6 (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3_Multicast;
}
// Method Definition Index: 54323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraBoolEvent_Invoke_mF4EBA19B1F5F2CFC121B196DF86645F22524F7E3 (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___0_action, bool ___1_active, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_action, ___1_active, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54324
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCameraBoolEvent_BeginInvoke_m99A0D36854F3870CCC663F5DA6D8017F14AB687F (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, int32_t ___0_action, bool ___1_active, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t11EC31306FF6FF82A2EC92C15F9E6C1546A08894_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Action_t11EC31306FF6FF82A2EC92C15F9E6C1546A08894_il2cpp_TypeInfo_var, &___0_action);
	__d_args[1] = Box(il2cpp_defaults.boolean_class, &___1_active);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 54325
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraBoolEvent_EndInvoke_m8D448591713978AD0165B5B40B8E82C9909945D6 (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_Multicast(OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* currentDelegate = reinterpret_cast<OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_OpenInst(OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_obj, method);
}
void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_OpenStatic(OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_obj, method);
}
// Method Definition Index: 54326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraGameObjectEvent__ctor_m435C879225615EA0430A4558B382B8DA10F032D5 (OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_Multicast;
}
// Method Definition Index: 54327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014 (OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCameraGameObjectEvent_BeginInvoke_m5E7E183A572076320E175703F36D4C54E9CC4F21 (OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_obj;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// Method Definition Index: 54329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraGameObjectEvent_EndInvoke_mDFE1D60184014935A7B117827DEE23108528F7C1 (OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_Multicast(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, bool ___1_allowYOffsetFromGround, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* currentDelegate = reinterpret_cast<OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_obj, ___1_allowYOffsetFromGround, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_OpenInst(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, bool ___1_allowYOffsetFromGround, const RuntimeMethod* method)
{
	NullCheck(___0_obj);
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_obj, ___1_allowYOffsetFromGround, method);
}
void OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_OpenStatic(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, bool ___1_allowYOffsetFromGround, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_obj, ___1_allowYOffsetFromGround, method);
}
// Method Definition Index: 54330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52_Multicast;
}
// Method Definition Index: 54331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestObjectFocusHandler_Invoke_m85CFDEBDA51D1111A1CA0977906A02FD17934F52 (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, bool ___1_allowYOffsetFromGround, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, ___1_allowYOffsetFromGround, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRequestObjectFocusHandler_BeginInvoke_m3F181395570AD20EB3C00DB59A74602F8779A60E (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, bool ___1_allowYOffsetFromGround, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_obj;
	__d_args[1] = Box(il2cpp_defaults.boolean_class, &___1_allowYOffsetFromGround);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// Method Definition Index: 54333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestObjectFocusHandler_EndInvoke_m84DFB5AC9AA7F418EF167388A31F5648F8E2424E (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_Multicast(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___0_orthoMode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* currentDelegate = reinterpret_cast<OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_orthoMode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_OpenInst(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___0_orthoMode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_orthoMode, method);
}
void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_OpenStatic(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___0_orthoMode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_orthoMode, method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___0_orthoMode, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc(static_cast<int32_t>(___0_orthoMode));

}
// Method Definition Index: 54334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_Multicast;
}
// Method Definition Index: 54335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5 (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___0_orthoMode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_orthoMode, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSwitchPerspectiveHandler_BeginInvoke_mA31E7942E9F6DEB9E5035C2F0882AD054EDE8804 (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___0_orthoMode, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = Box(il2cpp_defaults.boolean_class, &___0_orthoMode);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// Method Definition Index: 54337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler_EndInvoke_m655FD7CEC36D5AE30F0C9739D07625B4594E57C6 (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_Multicast(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* currentDelegate = reinterpret_cast<OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_OpenInst(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(method);
}
void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_OpenStatic(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(method);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597 (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	il2cppPInvokeFunc();

}
// Method Definition Index: 54338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8 (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = __this->___method_ptr;
		__this->___method_code = (intptr_t)__this->___m_target;
	}
	__this->___extra_arg = (intptr_t)&OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_Multicast;
}
// Method Definition Index: 54339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2 (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCameraEventHandler_BeginInvoke_m329F999C735365769ECAB20C43FDD4B4795D836E (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// Method Definition Index: 54341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraEventHandler_EndInvoke_m4D44662952BCBDEADB73C7E1F9D442D06AC45E0E (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:163>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___finalRotation;
		return L_0;
	}
}
// Method Definition Index: 54343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:170>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___finalPosition;
		return L_0;
	}
}
// Method Definition Index: 54344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalOffset_m744D39C0C85E0BB5E805CEC6343A183BD3C0DD5B (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:179>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___finalOffset;
		return L_0;
	}
}
// Method Definition Index: 54345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_set_FinalOffset_m45ED06D9881A3FD897E950BADD06EE9EDD3F7B7A (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:180>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___finalOffset = L_0;
		return;
	}
}
// Method Definition Index: 54346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_get_FinalDistance_mBBF78FCE4AF333F49D367BC9EE3C402124C6D162 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:188>
		float L_0 = __this->___finalDistance;
		return L_0;
	}
}
// Method Definition Index: 54347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_get_DisableMoves_mBC7AEF1898ECF895C025910AE92D60676C35F5E8 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:196>
		bool L_0 = __this->___disableMoves;
		return L_0;
	}
}
// Method Definition Index: 54348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:197>
		bool L_0 = ___0_value;
		__this->___disableMoves = L_0;
		return;
	}
}
// Method Definition Index: 54349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_get_DisableOneFingerDrag_mA1EE7CDD1C4809B71B08DCF966BD261906588AC9 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:205>
		bool L_0 = __this->___disableOneFingerDrag;
		return L_0;
	}
}
// Method Definition Index: 54350
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_set_DisableOneFingerDrag_mAAF38F643026B6870D33D39D1710FD04683B8B95 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:206>
		bool L_0 = ___0_value;
		__this->___disableOneFingerDrag = L_0;
		return;
	}
}
// Method Definition Index: 54351
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraBase_get_PitchAndYaw_mABB8069B41C7ABFECF9222A5FDD934A20AA6928C (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:214>
		float L_0 = __this->___currentPitch;
		float L_1 = __this->___currentYaw;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 54352
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsRotating_m4E938FCBF6063BB34FBED052B7387DD61FF1BCF4 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:223>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:224>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:225>
		bool L_0 = __this->___disableMoves;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		bool L_1;
		L_1 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 1, NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		bool L_2;
		L_2 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 2, NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		bool L_3;
		L_3 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 1, NULL);
		return L_3;
	}

IL_0022:
	{
		return (bool)1;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// Method Definition Index: 54353
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_OnDestroy_mFF695E25D80F6C94F4C6B847E413B257B1B78E6B (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:237>
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_0 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_1 = (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)il2cpp_codegen_object_new(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E(L_1, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 52)), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective = ((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_2, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective), (void*)((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_2, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:238>
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_3 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_4 = (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)il2cpp_codegen_object_new(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E(L_4, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 53)), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective = ((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_5, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective), (void*)((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_5, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:239>
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_6 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_7 = (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)il2cpp_codegen_object_new(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6(L_7, __this, (intptr_t)((void*)CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC_RuntimeMethod_var), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_6, L_7, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction = ((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_8, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction), (void*)((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_8, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:240>
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_9 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_10 = (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)il2cpp_codegen_object_new(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC(L_10, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 72)), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_9, L_10, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus = ((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_11, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus), (void*)((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_11, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:241>
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_12 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_13 = (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)il2cpp_codegen_object_new(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D(L_13, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_12, L_13, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange = ((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_14, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange), (void*)((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_14, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:242>
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_15 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_16 = (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)il2cpp_codegen_object_new(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8(L_16, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 41)), NULL);
		Delegate_t* L_17;
		L_17 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_15, L_16, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus = ((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_17, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus), (void*)((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_17, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:243>
		return;
	}
}
// Method Definition Index: 54354
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_Start_m279BB2F1A49ADE4A914894A55A8EE2DB5809293A (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0_m19547DF5F04016402B81E45CB43D16C08C78198A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_m7562F2B067C61C6F7F7EFF421FCAB66CDBB405EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:250>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___cam = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam), (void*)L_0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:252>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___cam;
		NullCheck(L_1);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_1, (1.0f), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:254>
		CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* L_2;
		L_2 = Component_GetComponent_TisCameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0_m19547DF5F04016402B81E45CB43D16C08C78198A(__this, Component_GetComponent_TisCameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0_m19547DF5F04016402B81E45CB43D16C08C78198A_RuntimeMethod_var);
		__this->___camBounds = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camBounds), (void*)L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:255>
		CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* L_3;
		L_3 = Component_GetComponent_TisCameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_m7562F2B067C61C6F7F7EFF421FCAB66CDBB405EA(__this, Component_GetComponent_TisCameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_m7562F2B067C61C6F7F7EFF421FCAB66CDBB405EA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___standalone = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:256>
		VirtualActionInvoker0::Invoke(44, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:257>
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_5 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_6 = (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)il2cpp_codegen_object_new(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E(L_6, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 52)), NULL);
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective = ((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_7, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective), (void*)((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_7, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:258>
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_8 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_9 = (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)il2cpp_codegen_object_new(OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var);
		OnSwitchPerspectiveHandler__ctor_m9034DDAAB2DD261327488A971332C49FD6BDC69E(L_9, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 53)), NULL);
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_9, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective = ((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_10, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective), (void*)((OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD*)CastclassSealed((RuntimeObject*)L_10, OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:260>
		bool L_11 = __this->___standalone;
		if (!L_11)
		{
			goto IL_0110;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:262>
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_12 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_13 = (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)il2cpp_codegen_object_new(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6(L_13, __this, (intptr_t)((void*)CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC_RuntimeMethod_var), NULL);
		Delegate_t* L_14;
		L_14 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_12, L_13, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction = ((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_14, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction), (void*)((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_14, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:263>
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_15 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_16 = (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)il2cpp_codegen_object_new(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC(L_16, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 72)), NULL);
		Delegate_t* L_17;
		L_17 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_15, L_16, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus = ((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_17, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus), (void*)((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_17, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:264>
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_18 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_19 = (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)il2cpp_codegen_object_new(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D(L_19, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		Delegate_t* L_20;
		L_20 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_18, L_19, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange = ((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_20, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange), (void*)((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_20, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:265>
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_21 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_22 = (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)il2cpp_codegen_object_new(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8(L_22, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 41)), NULL);
		Delegate_t* L_23;
		L_23 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_21, L_22, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus = ((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_23, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus), (void*)((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_23, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var)));
	}

IL_0110:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:267>
		return;
	}
}
// Method Definition Index: 54355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_Init_mC1A3D3A7A83BBC74EB67EFAA4C1B0C29B0505932 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:274>
		VirtualActionInvoker0::Invoke(45, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:275>
		return;
	}
}
// Method Definition Index: 54356
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_CreateConverter_mD5AF7998BA287E7911A7F1C0C4CE042DD7267D7D (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:282>
		float L_0 = __this->___groundHeight;
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ScreenDepth__ctor_m36E55629497D13AAB09A2D588A68079327CD4C88((&L_1), 5, ((int32_t)-5), L_0, NULL);
		__this->___HeightScreenDepth = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___HeightScreenDepth))->___Camera), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___HeightScreenDepth))->___Object), (void*)NULL);
		#endif
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:283>
		return;
	}
}
// Method Definition Index: 54357
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_OnEnable_mF4B00BD2601CB324E5641623192C8B4316F82D53 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC33DBC71318EE92096D273FF62B8DE6BE1A53EF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:288>
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_0);
		bool L_2 = __this->___defaultMode;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.boolean_class, &L_3);
		bool L_5 = __this->___firstUpdateDone;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_defaults.boolean_class, &L_6);
		String_t* L_8;
		L_8 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralC33DBC71318EE92096D273FF62B8DE6BE1A53EF7, L_1, L_4, L_7, NULL);
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(L_8, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:289>
		return;
	}
}
// Method Definition Index: 54358
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_OnDisable_mA4DF8913153671013FC609A8B84D96F572FC6A40 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2780C81EB84FB6795F7205BE681DD178B81146E);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:293>
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_0);
		bool L_2 = __this->___defaultMode;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.boolean_class, &L_3);
		String_t* L_5;
		L_5 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralD2780C81EB84FB6795F7205BE681DD178B81146E, L_1, L_4, NULL);
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(L_5, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:294>
		return;
	}
}
// Method Definition Index: 54359
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_LateUpdate_m24DD821651D0F258189C34AF7A7700FA69594922 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BCFEC50605C1BD30A913CF409789B75A5356CA4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:302>
		bool L_0 = __this->___firstUpdateDone;
		if (L_0)
		{
			goto IL_0070;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:304>
		bool L_1 = __this->___defaultMode;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->___standalone;
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B4_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:305>
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		bool L_8 = __this->___defaultMode;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.boolean_class, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		bool L_12 = __this->___standalone;
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.boolean_class, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		bool L_16 = V_0;
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.boolean_class, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral7BCFEC50605C1BD30A913CF409789B75A5356CA4, L_15, NULL);
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(L_19, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:306>
		bool L_20 = V_0;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, L_20, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:307>
		__this->___firstUpdateDone = (bool)1;
	}

IL_0070:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:309>
		return;
	}
}
// Method Definition Index: 54360
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_ApplyToCamera_m7AC906E16988891AD1480ED4BE0F41E7D4E88D53 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:317>
		bool L_0 = __this->___standalone;
		if (!L_0)
		{
			goto IL_007a;
		}
	}
	try
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:321>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC_inline(__this, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_2, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:322>
		goto IL_0033;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		throw e;
	}

CATCH_001b:
	{
		Exception_t* L_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:323>
		V_0 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:323>
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_4);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral018ECE7A37C6D10F92ECDD742C94C44AAFABC4C5)), L_5, NULL);
		CameraLogger_LogWarning_m53D72F9D1C03D10300A7FB62DB1764CECCC7795B(L_6, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:323>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0033;
	}

IL_0033:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:325>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(__this, NULL);
		float L_8 = L_7.___x;
		bool L_9;
		L_9 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_007a;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(__this, NULL);
		float L_11 = L_10.___y;
		bool L_12;
		L_12 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_11, NULL);
		if (L_12)
		{
			goto IL_007a;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(__this, NULL);
		float L_14 = L_13.___z;
		bool L_15;
		L_15 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_14, NULL);
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:327>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(__this, NULL);
		NullCheck(L_16);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_16, L_17, NULL);
	}

IL_007a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:330>
		return;
	}
}
// Method Definition Index: 54361
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraBase_GetMatrix_m4F42B232460DE6972AA2E38EACBADA7C5E8B2701 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:338>
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = V_0;
		return L_0;
	}
}
// Method Definition Index: 54362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_SetGroundHeightAnimated_m59681B8244476ACF2A87C9537FE703CF05FD6F71 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_newHeight, bool ___1_animate, float ___2_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:355>
		bool L_0 = ___1_animate;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:357>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_1 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&__this->___groundHeightValue);
		float L_2 = __this->___groundHeight;
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_1, L_2, NULL);
		return;
	}

IL_0015:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:363>
		float L_3 = ___0_newHeight;
		CameraBase_SetGroundHeight_m503F2D8526D6CBB8707C39854FA4CBE5B63F9402(__this, L_3, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:365>
		return;
	}
}
// Method Definition Index: 54363
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_SetGroundHeight_m503F2D8526D6CBB8707C39854FA4CBE5B63F9402 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_y, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:374>
		float L_0 = ___0_y;
		__this->___groundHeight = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:375>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_1 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&__this->___HeightScreenDepth);
		float L_2 = __this->___groundHeight;
		L_1->___Distance = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:376>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___finalOffset);
		float L_4 = __this->___groundHeight;
		L_3->___y = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:377>
		return;
	}
}
// Method Definition Index: 54364
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:389>
		int32_t L_0 = __this->___scrollWheel;
		int32_t L_1 = ___0_action;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7(NULL);
		if ((((float)L_2) == ((float)(1.0f))))
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:390>
		return (bool)1;
	}

IL_0017:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:391>
		return (bool)0;
	}
}
// Method Definition Index: 54365
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:401>
		int32_t L_0 = __this->___twoFingerPinch;
		int32_t L_1 = ___0_action;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = CameraInputs_GetFingerCount_m2DEC462E581245A894A2403795EE25F41E46E1EB(2, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0014;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:402>
		return (bool)1;
	}

IL_0014:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:403>
		return (bool)0;
	}
}
// Method Definition Index: 54366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:413>
		int32_t L_0 = __this->___middleClickDrag;
		int32_t L_1 = ___0_action;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BaseTouchInput_GetMouseIsHeld_m32F0BFD66354E7A05A0273A1FD75D68F8B8D19B3(2, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:414>
		return (bool)1;
	}

IL_001a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:415>
		int32_t L_4 = __this->___rightClickDrag;
		int32_t L_5 = ___0_action;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = BaseTouchInput_GetMouseIsHeld_m32F0BFD66354E7A05A0273A1FD75D68F8B8D19B3(1, NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		if (L_7)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:416>
		return (bool)1;
	}

IL_0034:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:417>
		int32_t L_8 = __this->___twoFingerDrag;
		int32_t L_9 = ___0_action;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = CameraInputs_GetFingerCount_m2DEC462E581245A894A2403795EE25F41E46E1EB(2, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:418>
		return (bool)1;
	}

IL_0048:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:419>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:420>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:421>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:422>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:423>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:424>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:425>
		bool L_11 = __this->___disableOneFingerDrag;
		if (L_11)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_12 = __this->___oneFingerDrag;
		int32_t L_13 = ___0_action;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = CameraInputs_GetFingerCount_m2DEC462E581245A894A2403795EE25F41E46E1EB(2, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = BaseTouchInput_GetMouseIsHeld_m32F0BFD66354E7A05A0273A1FD75D68F8B8D19B3(1, NULL);
		if (L_15)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = BaseTouchInput_GetMouseIsHeld_m32F0BFD66354E7A05A0273A1FD75D68F8B8D19B3(2, NULL);
		if (L_16)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = BaseTouchInput_GetMouseWentUp_m295348A7C8B896581DEF557AA439D1AB77FB2E55(1, NULL);
		if (L_17)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = BaseTouchInput_GetMouseWentUp_m295348A7C8B896581DEF557AA439D1AB77FB2E55(2, NULL);
		if (L_18)
		{
			goto IL_0084;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:426>
		return (bool)1;
	}

IL_0084:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:427>
		return (bool)0;
	}
}
// Method Definition Index: 54367
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_ClampInCameraBoundaries_m28B2ED0307B4E4E533FEEED2162FE1E6F3A427AC (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:442>
		CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* L_0 = __this->___camBounds;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:443>
		CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* L_2 = __this->___camBounds;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_targetPosition;
		float L_4 = __this->___groundHeight;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = CameraBoundaries_ClampInBoundsXZ_m25A55A0F005F2B3A327CB7241EAF57E6CC66F462(L_2, L_3, (&V_0), L_4, NULL);
		return L_5;
	}

IL_0023:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:444>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_targetPosition;
		return L_6;
	}
}
// Method Definition Index: 54368
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_OnBeforeSwitchPerspective_m3CCA98A4DF2A8F6C30A9379132BF71D3BAD53203 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___0_orthoMode, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:457>
		return;
	}
}
// Method Definition Index: 54369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_OnAfterSwitchPerspective_m4CC987BF847382DA9C68406B6259E2BE448CF494 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___0_orthoMode, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:467>
		return;
	}
}
// Method Definition Index: 54370
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_OnRequestButtonAction_m690E53154B622295FFB1E673ACEB16C8B213F2EC (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, int32_t ___0_action, bool ___1_active, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:476>
		int32_t L_0 = ___0_action;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:477>
		VirtualActionInvoker0::Invoke(68, __this);
		return;
	}

IL_000b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:478>
		int32_t L_1 = ___0_action;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:479>
		bool L_2 = ___1_active;
		CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline(__this, L_2, NULL);
		return;
	}

IL_0017:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:480>
		int32_t L_3 = ___0_action;
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:481>
		bool L_4 = ___1_active;
		CameraBase_set_DisableOneFingerDrag_mAAF38F643026B6870D33D39D1710FD04683B8B95_inline(__this, L_4, NULL);
	}

IL_0022:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:482>
		return;
	}
}
// Method Definition Index: 54371
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_CalculateOffset_mA1EC74775942CF10E689E748952DB766E79DB7DE (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rot, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:495>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		float L_1 = L_0.___y;
		float L_2 = __this->___groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___1_rot), NULL);
		float L_4 = L_3.___x;
		float L_5;
		L_5 = tanf(((float)il2cpp_codegen_multiply((0.0174532924f), L_4)));
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_1, L_2))/L_5));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:496>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___1_rot), NULL);
		float L_7 = L_6.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_7, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_8, L_9, NULL);
		V_1 = L_10;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:497>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_pos;
		float L_12 = __this->___groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_16, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:498>
		return L_17;
	}
}
// Method Definition Index: 54372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_CalculateOffset_mBC613BAD4423B01E2126A4DA747D4DC6F3087BCB (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rot, float ___2_distance, float ___3_groundHeight, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:511>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		float L_3 = ___2_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_1, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_5, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:512>
		float L_7 = ___3_groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_6, L_7, NULL);
		return L_8;
	}
}
// Method Definition Index: 54373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_CalculatePosition_m31E4CAADB043BEEAFABD61422920CAD81B969AAF (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rot, float ___2_distance, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:524>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___1_rot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		float L_2 = ___2_distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_0, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 54374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateDistance_m0A1074DB880952743FE1D7217B8314901ABB0529 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rot, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:540>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		float L_1 = L_0.___y;
		float L_2 = __this->___groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___1_rot), NULL);
		float L_4 = L_3.___x;
		float L_5;
		L_5 = cosf(((float)il2cpp_codegen_multiply((0.0174532924f), ((float)il2cpp_codegen_subtract((90.0f), L_4)))));
		float L_6;
		L_6 = fabsf(((float)(((float)il2cpp_codegen_subtract(L_1, L_2))/L_5)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:541>
		return L_6;
	}
}
// Method Definition Index: 54375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_m8FEFC176B548CE1ACD25C2E01A7153AAC48CB894 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_camPos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldPoint, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_minMaxDistance, float ___3_multiplier, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:554>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_camPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_worldPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:555>
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_4 = ___3_multiplier;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___2_minMaxDistance;
		float L_6 = L_5.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___2_minMaxDistance;
		float L_8 = L_7.___y;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_3, L_4)), L_6, L_8, NULL);
		return L_9;
	}
}
// Method Definition Index: 54376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_m9945BBC225BBD2A60FAC7946AAC525DC275FE8DE (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_camPos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldPoint, float ___2_minMaxDistance, float ___3_multiplier, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:568>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_camPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_worldPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:569>
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_4 = ___3_multiplier;
		float L_5 = ___2_minMaxDistance;
		float L_6 = ___2_minMaxDistance;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5, L_6, NULL);
		return L_7;
	}
}
// Method Definition Index: 54377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_mF3B8F73A1F51A167E0FD7FF18870A6C249930B09 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_distance, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_minMaxDistance, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:580>
		float L_0 = ___0_distance;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_minMaxDistance;
		float L_2 = L_1.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_minMaxDistance;
		float L_4 = L_3.___y;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_2, L_4, NULL);
		return L_5;
	}
}
// Method Definition Index: 54378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_m823A47AEDCE2CBDC5DA760E5B347888EF81F0EE4 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_distance, float ___1_minMaxDistance, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:591>
		float L_0 = ___0_distance;
		float L_1 = ___1_minMaxDistance;
		float L_2 = ___1_minMaxDistance;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 54379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_CalculateClampedDistance_m878830CF98842AA57C9819A955D51CE9B1492BFD (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_distance, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:602>
		float L_0 = ___0_distance;
		return L_0;
	}
}
// Method Definition Index: 54380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_GetInitialRotation_m8C60D3F4EFACC86D2AADEE93F92F04E2F6A0303E (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:614>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___initRotation;
		return L_0;
	}
}
// Method Definition Index: 54381
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraBase_GetInitialRotationVec_m3BF9AC10B57558B732971DE1486D88A6618CD409 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:623>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___initRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 54382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_GetRotationSensitivity_mD660472B1E1B4E4C2BB2F80A7545D148F1B48B12 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:634>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___cam;
		NullCheck(L_0);
		bool L_1;
		L_1 = Camera_get_orthographic_m904DEFC76C54DA4E30C20A62A86D5D87B7D4DD8F(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:636>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___cam;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_2, NULL);
		return ((float)(L_3/(90.0f)));
	}

IL_001f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:639>
		return (1.0f);
	}
}
// Method Definition Index: 54383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_ClampRotation_mD46F067D677ECC77AF4CF867679F91E725C0BB93 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rot, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:644>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_rot;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = VirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(67, __this, L_0);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:645>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = VirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(62, __this, L_2);
		V_0 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:646>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(65, __this, L_4);
		return L_5;
	}
}
// Method Definition Index: 54384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_ClampPitchYaw_m429E0795D060284081674663721B75D921ABDA8D (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:653>
		bool L_0 = __this->___PitchClamp;
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:654>
		float L_1 = __this->___currentPitch;
		float L_2;
		L_2 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___PitchMinMax);
		float L_4 = L_3->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___PitchMinMax);
		float L_6 = L_5->___y;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, L_4, L_6, NULL);
		__this->___currentPitch = L_7;
	}

IL_0035:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:655>
		bool L_8 = __this->___YawClamp;
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:656>
		float L_9 = __this->___currentYaw;
		float L_10;
		L_10 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___YawMinMax);
		float L_12 = L_11->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___YawMinMax);
		float L_14 = L_13->___y;
		float L_15;
		L_15 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_10, L_12, L_14, NULL);
		__this->___currentYaw = L_15;
	}

IL_006a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:657>
		return;
	}
}
// Method Definition Index: 54385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraBase_ClampPitchYaw_m23B0B13E5CCF8A11D31A4DDEC0425045746F3292 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_pitchYaw, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:664>
		bool L_0 = __this->___PitchClamp;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:665>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_pitchYaw;
		float L_2 = L_1.___x;
		float L_3;
		L_3 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___PitchMinMax);
		float L_5 = L_4->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___PitchMinMax);
		float L_7 = L_6->___y;
		float L_8;
		L_8 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_3, L_5, L_7, NULL);
		(&___0_pitchYaw)->___x = L_8;
	}

IL_0036:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:666>
		bool L_9 = __this->___YawClamp;
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:667>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___0_pitchYaw;
		float L_11 = L_10.___y;
		float L_12;
		L_12 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___YawMinMax);
		float L_14 = L_13->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___YawMinMax);
		float L_16 = L_15->___y;
		float L_17;
		L_17 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_12, L_14, L_16, NULL);
		(&___0_pitchYaw)->___y = L_17;
	}

IL_006c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:668>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___0_pitchYaw;
		return L_18;
	}
}
// Method Definition Index: 54386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_delta, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:678>
		float L_0;
		L_0 = CameraBase_GetRotationSensitivity_mD660472B1E1B4E4C2BB2F80A7545D148F1B48B12(__this, NULL);
		V_0 = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:679>
		bool L_1 = __this->___allowYawRotation;
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:681>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_delta;
		float L_3 = L_2.___x;
		float L_4 = __this->___YawSensitivity;
		float L_5 = V_0;
		__this->___deltaYaw = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:682>
		float L_6 = __this->___currentYaw;
		float L_7 = __this->___deltaYaw;
		__this->___currentYaw = ((float)il2cpp_codegen_add(L_6, L_7));
	}

IL_0037:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:684>
		bool L_8 = __this->___allowPitchRotation;
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:686>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_delta;
		float L_10 = L_9.___y;
		float L_11 = __this->___PitchSensitivity;
		float L_12 = V_0;
		__this->___deltaPitch = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_10)), L_11)), L_12));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:687>
		float L_13 = __this->___currentPitch;
		float L_14 = __this->___deltaPitch;
		__this->___currentPitch = ((float)il2cpp_codegen_add(L_13, L_14));
	}

IL_0068:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:689>
		VirtualActionInvoker0::Invoke(61, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:690>
		return;
	}
}
// Method Definition Index: 54387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_ModularClamp_mC4CFDD2D0DB04DF328EC7C105C91EBEA39278007 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_val, float ___1_min, float ___2_max, float ___3_rangemin, float ___4_rangemax, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:703>
		float L_0 = ___4_rangemax;
		float L_1 = ___3_rangemin;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		V_0 = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:704>
		float L_3 = ___0_val;
		float L_4 = V_0;
		float L_5 = (fmodf(L_3, L_4));
		___0_val = L_5;
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:704>
		float L_6 = ___0_val;
		float L_7 = V_0;
		___0_val = ((float)il2cpp_codegen_add(L_6, L_7));
	}

IL_001d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:705>
		float L_8 = ___0_val;
		float L_9 = ___3_rangemin;
		float L_10 = ___4_rangemax;
		float L_11;
		L_11 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_9, L_10, NULL);
		float L_12 = ___1_min;
		float L_13 = ___2_max;
		float L_14;
		L_14 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(L_8, L_11)), L_12, L_13, NULL);
		return L_14;
	}
}
// Method Definition Index: 54388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_a, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:716>
		float L_0 = ___0_a;
		if ((!(((float)L_0) > ((float)(180.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:716>
		float L_1 = ___0_a;
		___0_a = ((float)il2cpp_codegen_subtract(L_1, (360.0f)));
	}

IL_0011:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:717>
		float L_2 = ___0_a;
		if ((!(((float)L_2) < ((float)(-180.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:717>
		float L_3 = ___0_a;
		___0_a = ((float)il2cpp_codegen_add(L_3, (360.0f)));
	}

IL_0022:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:718>
		float L_4 = ___0_a;
		return L_4;
	}
}
// Method Definition Index: 54389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_GetRotationFromPitchYaw_mDB8641926F8B0CDBB6DA2616630EAE73160D5FAE (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:742>
		float L_0 = __this->___currentPitch;
		float L_1;
		L_1 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_0, NULL);
		__this->___currentPitch = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:743>
		float L_2 = __this->___currentYaw;
		float L_3;
		L_3 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_2, NULL);
		__this->___currentYaw = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:744>
		float L_4 = __this->___currentPitch;
		float L_5 = __this->___currentYaw;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_4, L_5, (0.0f), NULL);
		return L_6;
	}
}
// Method Definition Index: 54390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_GetRotationFromPitchYaw_mEF2C5D1D779AF58154AF94DFFE39071DA94AB442 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_pitch, float ___1_yaw, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:759>
		float L_0 = ___0_pitch;
		float L_1;
		L_1 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_0, NULL);
		___0_pitch = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:760>
		float L_2 = ___1_yaw;
		float L_3;
		L_3 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_2, NULL);
		___1_yaw = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:762>
		float L_4 = ___0_pitch;
		float L_5 = ___1_yaw;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_4, L_5, (0.0f), NULL);
		return L_6;
	}
}
// Method Definition Index: 54391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_GetRotationFromPitchYaw_m1FBB12AE4D23A0A7EEFFA3873CDE5619F44B9F8B (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_pitchYawVec, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:772>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_pitchYawVec;
		float L_1 = L_0.___x;
		float L_2;
		L_2 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_1, NULL);
		(&___0_pitchYawVec)->___x = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:773>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_pitchYawVec;
		float L_4 = L_3.___y;
		float L_5;
		L_5 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_4, NULL);
		(&___0_pitchYawVec)->___y = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:775>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_pitchYawVec;
		float L_7 = L_6.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___0_pitchYawVec;
		float L_9 = L_8.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_7, L_9, (0.0f), NULL);
		return L_10;
	}
}
// Method Definition Index: 54392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraBase_GetRotationToPitchYaw_m9544A2FA915BAA0B7589C2CFAB5825CC305AC38A (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:784>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_0 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___finalRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_0, NULL);
		float L_2 = L_1.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_3 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&__this->___finalRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_3, NULL);
		float L_5 = L_4.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, NULL);
		return L_6;
	}
}
// Method Definition Index: 54393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraBase_GetRotationToPitchYaw_mC72E9A3D9A82F510D5C011A356B25DC9018804FB (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rot, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:794>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___0_rot), NULL);
		float L_1 = L_0.___x;
		float L_2;
		L_2 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___0_rot), NULL);
		float L_4 = L_3.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_2, L_4, NULL);
		return L_5;
	}
}
// Method Definition Index: 54394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_ResetCamera_mFAE2BBF5E0B1CB07C9AFC494F65A72F8843C92A7 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:806>
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EA5DCC322D2959462ED137CC52CE609242F2813)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CameraBase_ResetCamera_mFAE2BBF5E0B1CB07C9AFC494F65A72F8843C92A7_RuntimeMethod_var)));
	}
}
// Method Definition Index: 54395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_SetResetValues_m55AC07FAB2B93D36E1CFD641633BF981293CCA21 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, float ___2_distanceOrSize, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:817>
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF63C4C37D0451CFA4D55A009F53652D5669D045)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CameraBase_SetResetValues_m55AC07FAB2B93D36E1CFD641633BF981293CCA21_RuntimeMethod_var)));
	}
}
// Method Definition Index: 54396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_GetRotateAroundVector_m8864F6597A825A2674319837D870C592AB5A71E9 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:826>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		return L_0;
	}
}
// Method Definition Index: 54397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_m5DB65DFB848F581FCB787C27B7E6FB53E1582F95 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetOffset, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:840>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_0);
		__this->___finalOffset = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:841>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___finalRotation;
		float L_4 = __this->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_2, L_3, L_4);
		__this->___finalPosition = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:842>
		VirtualActionInvoker0::Invoke(49, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:843>
		return;
	}
}
// Method Definition Index: 54398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_mB4E6ED44A904A50D134BE9C190CE299F2AC3E75B (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_targetDistanceOrSize, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:854>
		float L_0 = ___0_targetDistanceOrSize;
		float L_1;
		L_1 = VirtualFuncInvoker1< float, float >::Invoke(57, __this, L_0);
		__this->___finalDistance = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:855>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___finalRotation;
		float L_4 = __this->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_2, L_3, L_4);
		__this->___finalPosition = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:857>
		VirtualActionInvoker0::Invoke(49, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:858>
		return;
	}
}
// Method Definition Index: 54399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_m4ACE2A2743FAD56DCA40E2EB8FCEFF6B83732B56 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetOffset, float ___1_targetDistanceOrSize, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:868>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_0);
		__this->___finalOffset = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:869>
		float L_2 = ___1_targetDistanceOrSize;
		float L_3;
		L_3 = VirtualFuncInvoker1< float, float >::Invoke(57, __this, L_2);
		__this->___finalDistance = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:870>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___finalRotation;
		float L_6 = __this->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_4, L_5, L_6);
		__this->___finalPosition = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:872>
		VirtualActionInvoker0::Invoke(49, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:873>
		return;
	}
}
// Method Definition Index: 54400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_m93DA767EBB0A2BB7CD0B1E863DFCCB7D4EFEC8B2 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetOffset, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_targetRotation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:885>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___1_targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(65, __this, L_0);
		__this->___finalRotation = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:886>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_targetOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_2);
		__this->___finalOffset = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:887>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___finalRotation;
		float L_6 = __this->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_4, L_5, L_6);
		__this->___finalPosition = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:888>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___finalPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = __this->___finalRotation;
		float L_10;
		L_10 = CameraBase_CalculateDistance_m0A1074DB880952743FE1D7217B8314901ABB0529(__this, L_8, L_9, NULL);
		__this->___finalDistance = L_10;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:890>
		VirtualActionInvoker0::Invoke(49, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:891>
		return;
	}
}
// Method Definition Index: 54401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_m0F904C4315895AA343490327ED9F00CA1D3F2B07 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetOffset, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_targetRotation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:900>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___1_targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(60, __this, L_0);
		__this->___finalRotation = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:901>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_targetOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_2);
		__this->___finalOffset = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:902>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = __this->___finalRotation;
		float L_6 = __this->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_4, L_5, L_6);
		__this->___finalPosition = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:903>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___finalPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = __this->___finalRotation;
		float L_10;
		L_10 = CameraBase_CalculateDistance_m0A1074DB880952743FE1D7217B8314901ABB0529(__this, L_8, L_9, NULL);
		__this->___finalDistance = L_10;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:905>
		VirtualActionInvoker0::Invoke(49, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:906>
		return;
	}
}
// Method Definition Index: 54402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_m9540C966582D39C64B2BE07BBF075DAC5803BE0C (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_targetRotation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:915>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(60, __this, L_0);
		__this->___finalRotation = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:916>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___finalRotation;
		float L_4 = __this->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_2, L_3, L_4);
		__this->___finalPosition = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:918>
		VirtualActionInvoker0::Invoke(49, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:919>
		return;
	}
}
// Method Definition Index: 54403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_mCD021DE0D76C35FA8DFCAD6E88E67A941B3F0CBE (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetOffset, float ___1_targetDistanceOrSize, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_targetRotation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:930>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___2_targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(65, __this, L_0);
		__this->___finalRotation = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:931>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = __this->___finalRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(60, __this, L_2);
		__this->___finalRotation = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:932>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_targetOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_4);
		__this->___finalOffset = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:933>
		float L_6 = ___1_targetDistanceOrSize;
		float L_7;
		L_7 = VirtualFuncInvoker1< float, float >::Invoke(57, __this, L_6);
		__this->___finalDistance = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:934>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = __this->___finalRotation;
		float L_10 = __this->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_8, L_9, L_10);
		__this->___finalPosition = L_11;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:936>
		VirtualActionInvoker0::Invoke(49, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:937>
		return;
	}
}
// Method Definition Index: 54404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraToInstant_mD3A24CE2345D8E6AA759BE83902572DE3E3CCEC3 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetOffset, float ___1_targetDistanceOrSize, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_targetRotation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:948>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___2_targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(60, __this, L_0);
		__this->___finalRotation = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:949>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_targetOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_2);
		__this->___finalOffset = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:950>
		float L_4 = ___1_targetDistanceOrSize;
		float L_5;
		L_5 = VirtualFuncInvoker1< float, float >::Invoke(57, __this, L_4);
		__this->___finalDistance = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:951>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = __this->___finalRotation;
		float L_8 = __this->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_6, L_7, L_8);
		__this->___finalPosition = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:953>
		VirtualActionInvoker0::Invoke(49, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:954>
		return;
	}
}
// Method Definition Index: 54405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_mC14FE119D2D881853C45455884BB8EF8E9622FEA (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:962>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		CameraBase_FocusCamera_mA32906658AB04773CC739956F581984226F8C939(__this, L_0, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:963>
		return;
	}
}
// Method Definition Index: 54406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_mA1885C242A99741AFDA85AB89F8A77F9B42B6A48 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_targetRotation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:971>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_targetRotation;
		VirtualActionInvoker8< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(71, __this, (bool)0, L_0, (bool)0, (0.0f), (bool)1, L_1, (bool)0, (bool)0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:972>
		return;
	}
}
// Method Definition Index: 54407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_mA5276FFA2AF0BB05115FC87954368D5671C8F0A2 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, float ___0_targetDistanceOrSize, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:980>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_1 = ___0_targetDistanceOrSize;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		VirtualActionInvoker8< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(71, __this, (bool)0, L_0, (bool)1, L_1, (bool)0, L_2, (bool)0, (bool)0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:981>
		return;
	}
}
// Method Definition Index: 54408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_mE64272740842026C76E42BEE2EBB172EE29A17F2 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistanceOrSize, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:990>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		float L_1 = ___1_targetDistanceOrSize;
		CameraBase_FocusCamera_m1BA14CB6073988B3351658960BB4F81388DE4E81(__this, L_0, L_1, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:991>
		return;
	}
}
// Method Definition Index: 54409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_m6E2505294D831FB2187BF5B667A3053FFA0AB74D (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_targetRotation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1000>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_targetRotation;
		CameraBase_FocusCamera_mEAF9558106D1E59897AC8FFC714774CA445D3492(__this, L_0, L_1, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1001>
		return;
	}
}
// Method Definition Index: 54410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_m76B48A798D0A0E1CC684F84F5CE0CF0F97008638 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_targetRotation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1010>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_targetRotation;
		CameraBase_FocusCamera_m243A357249078A68DD6B19452B47AC39B1216FE9(__this, L_0, L_1, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1011>
		return;
	}
}
// Method Definition Index: 54411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_mB83FC57A3431D8FC85CE70FC106EA5C13C1930E0 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistanceOrSize, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_targetRotation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1021>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		float L_1 = ___1_targetDistanceOrSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___2_targetRotation;
		CameraBase_FocusCamera_m81F0AFD126E638F130BACC286FD162000291078F(__this, L_0, L_1, L_2, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1022>
		return;
	}
}
// Method Definition Index: 54412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_MoveCameraTo_m479E0E3D204F7119BF3E2AB85451AE121E7120E4 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistanceOrSize, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_targetRotation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1032>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		float L_1 = ___1_targetDistanceOrSize;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_targetRotation;
		CameraBase_FocusCamera_mCFFE460E3705938CF97DB8A9BCC9E9C2F030F1A5(__this, L_0, L_1, L_2, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1033>
		return;
	}
}
// Method Definition Index: 54413
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mA32906658AB04773CC739956F581984226F8C939 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, bool ___1_instant, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1048>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_2 = ___1_instant;
		VirtualActionInvoker8< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(71, __this, (bool)1, L_0, (bool)0, (-1.0f), (bool)0, L_1, (bool)1, L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1049>
		return;
	}
}
// Method Definition Index: 54414
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m1BA14CB6073988B3351658960BB4F81388DE4E81 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistanceOrSize, bool ___2_instant, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1059>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		float L_1 = ___1_targetDistanceOrSize;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_3 = ___2_instant;
		VirtualActionInvoker8< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(71, __this, (bool)1, L_0, (bool)1, L_1, (bool)0, L_2, (bool)1, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1060>
		return;
	}
}
// Method Definition Index: 54415
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mEAF9558106D1E59897AC8FFC714774CA445D3492 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_targetRotation, bool ___2_instant, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1070>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(65, __this, L_1);
		bool L_3 = ___2_instant;
		VirtualActionInvoker8< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(71, __this, (bool)1, L_0, (bool)0, (-1.0f), (bool)1, L_2, (bool)1, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1071>
		return;
	}
}
// Method Definition Index: 54416
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m243A357249078A68DD6B19452B47AC39B1216FE9 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_targetRotation, bool ___2_instant, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1081>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_targetRotation;
		bool L_2 = ___2_instant;
		VirtualActionInvoker8< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(71, __this, (bool)1, L_0, (bool)0, (-1.0f), (bool)1, L_1, (bool)1, L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1082>
		return;
	}
}
// Method Definition Index: 54417
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m81F0AFD126E638F130BACC286FD162000291078F (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistanceOrSize, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_targetRotation, bool ___3_instant, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1093>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		float L_1 = ___1_targetDistanceOrSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___2_targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(65, __this, L_2);
		bool L_4 = ___3_instant;
		VirtualActionInvoker8< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(71, __this, (bool)1, L_0, (bool)1, L_1, (bool)1, L_3, (bool)1, L_4);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1094>
		return;
	}
}
// Method Definition Index: 54418
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_mCFFE460E3705938CF97DB8A9BCC9E9C2F030F1A5 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistanceOrSize, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_targetRotation, bool ___3_instant, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1105>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_targetPosition;
		float L_1 = ___1_targetDistanceOrSize;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___2_targetRotation;
		bool L_3 = ___3_instant;
		VirtualActionInvoker8< bool, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool, float, bool, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool, bool >::Invoke(71, __this, (bool)1, L_0, (bool)1, L_1, (bool)1, L_2, (bool)1, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1106>
		return;
	}
}
// Method Definition Index: 54419
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCamera_m2C61085EA794A82D45E00D816C3746A82F1CC2EF (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___0_changeOffsetPostion, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetOffsetPosition, bool ___2_changeDistance, float ___3_targetDistanceOrSize, bool ___4_changeRotation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_targetRotation, bool ___6_allowYOffsetFromGround, bool ___7_instant, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral251A33F7BAB93B40FB03CD75542109636073F109);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64DC2A9456F7CBEEC44E950591D68D8214D69B4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral654A6728A47E8893871ECFF52BB7107E2AC0261A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BD05CAD2D1D2497DB6878B7E44FFD72EB66510);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E70B2D632B387D7316B6AFBA9B5361CAEB5C8B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B4A7B4A5F19949D56265C02CA3603347958370F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E5F00006D691DB000821EAB0397327E9D00AD98);
		s_Il2CppMethodInitialized = true;
	}
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B8_0 = NULL;
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B7_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1125>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1126>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1127>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1128>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1129>
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral654A6728A47E8893871ECFF52BB7107E2AC0261A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3;
		L_3 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE_inline((&___1_targetOffsetPosition), NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral64DC2A9456F7CBEEC44E950591D68D8214D69B4E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_6;
		L_6 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___2_changeDistance), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8B4A7B4A5F19949D56265C02CA3603347958370F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9;
		L_9 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___3_targetDistanceOrSize), NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_8;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral6E70B2D632B387D7316B6AFBA9B5361CAEB5C8B6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12;
		L_12 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___4_changeRotation), NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral67BD05CAD2D1D2497DB6878B7E44FFD72EB66510);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		String_t* L_15;
		L_15 = Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4_inline((&___5_targetRotation), NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral251A33F7BAB93B40FB03CD75542109636073F109);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		String_t* L_18;
		L_18 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___6_allowYOffsetFromGround), NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_17;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral9E5F00006D691DB000821EAB0397327E9D00AD98);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		String_t* L_21;
		L_21 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___7_instant), NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_21);
		String_t* L_22;
		L_22 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_20, NULL);
		CameraBase_Log_mE1797E8DD8940C1A5C1F44BE0E9FB57021BFCDA2(__this, L_22, __this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1131>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___1_targetOffsetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_23);
		__this->___focusTargetPosition = L_24;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1132>
		float L_25 = ___3_targetDistanceOrSize;
		__this->___focusTargetDistanceOrSize = L_25;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1133>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___5_targetRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = VirtualFuncInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(60, __this, L_26);
		__this->___focusTargetRotation = L_27;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1135>
		__this->___isFocusing = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1136>
		__this->___enableFollowGameObject = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1137>
		bool L_28 = ___0_changeOffsetPostion;
		__this->___enablePositionChange = L_28;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1138>
		bool L_29 = ___2_changeDistance;
		__this->___enableDistanceChange = L_29;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1139>
		bool L_30 = ___4_changeRotation;
		__this->___enableRotationChange = L_30;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1140>
		bool L_31 = ___6_allowYOffsetFromGround;
		__this->___allowYOffsetFromGround = L_31;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1143>
		bool L_32 = __this->___enablePositionChange;
		if (L_32)
		{
			goto IL_0105;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1143>
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_33 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&__this->___focusMoveOffset);
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		Vector3Spring_set_Completed_mB90A4729D9CBA2D393D695F079F9E18B3C3C15C2_inline(L_33, (bool)1, NULL);
	}

IL_0105:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1144>
		bool L_34 = __this->___enableDistanceChange;
		if (L_34)
		{
			goto IL_0119;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1144>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_35 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&__this->___focusMoveDistanceOrSize);
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		FloatSpring_set_Completed_m983959D34D0F2940700CCC298A95DD9EC0E02F06_inline(L_35, (bool)1, NULL);
	}

IL_0119:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1145>
		bool L_36 = __this->___enableRotationChange;
		if (L_36)
		{
			goto IL_012d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1145>
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_37 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&__this->___focusMoveRotation);
		il2cpp_codegen_runtime_class_init_inline(QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		QuaternionSpring_set_Completed_m86854F4D665551E19054665FD1C1A826F2594E44_inline(L_37, (bool)1, NULL);
	}

IL_012d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1148>
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_38 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnFocusStart;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_39 = L_38;
		if (L_39)
		{
			G_B8_0 = L_39;
			goto IL_0137;
		}
		G_B7_0 = L_39;
	}
	{
		return;
	}

IL_0137:
	{
		NullCheck(G_B8_0);
		OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_inline(G_B8_0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1149>
		return;
	}
}
// Method Definition Index: 54420
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FocusCameraOnGameObject_mFA2D413C7681C59960BABD4840B8E55D3C15D866 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, bool ___1_allowYOffsetFromGround, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05B924F3208A0578DAC27A6C09F5DB0EB3B3A24C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral961C44D9C305DE729D6D9C55DF7537E2F986DACB);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* G_B2_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* G_B3_2 = NULL;
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B12_0 = NULL;
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B11_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1158>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1159>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_go;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = _stringLiteral05B924F3208A0578DAC27A6C09F5DB0EB3B3A24C;
			G_B2_2 = __this;
			goto IL_000e;
		}
		G_B1_0 = L_1;
		G_B1_1 = _stringLiteral05B924F3208A0578DAC27A6C09F5DB0EB3B3A24C;
		G_B1_2 = __this;
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B2_0);
		G_B3_0 = L_2;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_3;
		L_3 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___1_allowYOffsetFromGround), NULL);
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B3_1, G_B3_0, _stringLiteral961C44D9C305DE729D6D9C55DF7537E2F986DACB, L_3, NULL);
		NullCheck(G_B3_2);
		CameraBase_Log_mE1797E8DD8940C1A5C1F44BE0E9FB57021BFCDA2(G_B3_2, L_4, __this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1161>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___0_go;
		__this->___focusTargetGo = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___focusTargetGo), (void*)L_5);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1162>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___focusTargetGo;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___isFocusing = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1163>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___focusTargetGo;
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___enableFollowGameObject = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1164>
		__this->___enablePositionChange = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1165>
		__this->___enableDistanceChange = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1166>
		__this->___enableRotationChange = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1167>
		bool L_10 = ___1_allowYOffsetFromGround;
		__this->___allowYOffsetFromGround = L_10;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1170>
		bool L_11 = __this->___enablePositionChange;
		if (L_11)
		{
			goto IL_0085;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1170>
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_12 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&__this->___focusMoveOffset);
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		Vector3Spring_set_Completed_mB90A4729D9CBA2D393D695F079F9E18B3C3C15C2_inline(L_12, (bool)1, NULL);
	}

IL_0085:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1171>
		bool L_13 = __this->___enableDistanceChange;
		if (L_13)
		{
			goto IL_0099;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1171>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_14 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&__this->___focusMoveDistanceOrSize);
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		FloatSpring_set_Completed_m983959D34D0F2940700CCC298A95DD9EC0E02F06_inline(L_14, (bool)1, NULL);
	}

IL_0099:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1172>
		bool L_15 = __this->___enableRotationChange;
		if (L_15)
		{
			goto IL_00ad;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1172>
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_16 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&__this->___focusMoveRotation);
		il2cpp_codegen_runtime_class_init_inline(QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		QuaternionSpring_set_Completed_m86854F4D665551E19054665FD1C1A826F2594E44_inline(L_16, (bool)1, NULL);
	}

IL_00ad:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1174>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___0_go;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00c5;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1174>
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_19 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnFocusStart;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_20 = L_19;
		if (L_20)
		{
			G_B12_0 = L_20;
			goto IL_00c0;
		}
		G_B11_0 = L_20;
	}
	{
		return;
	}

IL_00c0:
	{
		NullCheck(G_B12_0);
		OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_inline(G_B12_0, NULL);
	}

IL_00c5:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1175>
		return;
	}
}
// Method Definition Index: 54421
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_FollowGameObject_m786C673CF3FA1AEB548AC9F96791BE3FFB6FF993 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, bool ___1_doFocus, bool ___2_allowYOffsetFromGround, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47748B020DEE5E467001A7429388553FEF3828AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral961C44D9C305DE729D6D9C55DF7537E2F986DACB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC6D88848E02ECF70C8487C88631935FD43BF1F5);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* G_B2_4 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* G_B1_4 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* G_B3_4 = NULL;
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B12_0 = NULL;
	OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* G_B11_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1205>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1206>
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral47748B020DEE5E467001A7429388553FEF3828AE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_go;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = 1;
			G_B2_2 = L_2;
			G_B2_3 = L_2;
			G_B2_4 = __this;
			goto IL_0019;
		}
		G_B1_0 = L_4;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		G_B1_4 = __this;
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		G_B3_4 = G_B1_4;
		goto IL_001e;
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B2_0);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
	}

IL_001e:
	{
		NullCheck(G_B3_2);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = G_B3_3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDC6D88848E02ECF70C8487C88631935FD43BF1F5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_8;
		L_8 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___1_doFocus), NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral961C44D9C305DE729D6D9C55DF7537E2F986DACB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11;
		L_11 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___2_allowYOffsetFromGround), NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_11);
		String_t* L_12;
		L_12 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_10, NULL);
		NullCheck(G_B3_4);
		CameraBase_Log_mE1797E8DD8940C1A5C1F44BE0E9FB57021BFCDA2(G_B3_4, L_12, __this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1208>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = ___0_go;
		__this->___focusTargetGo = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___focusTargetGo), (void*)L_13);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1209>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___focusTargetGo;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___isFocusing = L_15;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1210>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___focusTargetGo;
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		__this->___enableFollowGameObject = L_17;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1211>
		__this->___enablePositionChange = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1212>
		bool L_18 = ___1_doFocus;
		__this->___enableDistanceChange = L_18;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1213>
		__this->___enableRotationChange = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1214>
		bool L_19 = ___2_allowYOffsetFromGround;
		__this->___allowYOffsetFromGround = L_19;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1217>
		bool L_20 = __this->___enablePositionChange;
		if (L_20)
		{
			goto IL_00a9;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1217>
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_21 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&__this->___focusMoveOffset);
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		Vector3Spring_set_Completed_mB90A4729D9CBA2D393D695F079F9E18B3C3C15C2_inline(L_21, (bool)1, NULL);
	}

IL_00a9:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1218>
		bool L_22 = __this->___enableDistanceChange;
		if (L_22)
		{
			goto IL_00bd;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1218>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_23 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&__this->___focusMoveDistanceOrSize);
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		FloatSpring_set_Completed_m983959D34D0F2940700CCC298A95DD9EC0E02F06_inline(L_23, (bool)1, NULL);
	}

IL_00bd:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1219>
		bool L_24 = __this->___enableRotationChange;
		if (L_24)
		{
			goto IL_00d1;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1219>
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_25 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&__this->___focusMoveRotation);
		il2cpp_codegen_runtime_class_init_inline(QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		QuaternionSpring_set_Completed_m86854F4D665551E19054665FD1C1A826F2594E44_inline(L_25, (bool)1, NULL);
	}

IL_00d1:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1221>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = ___0_go;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00e9;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1221>
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_28 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnFocusStart;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_29 = L_28;
		if (L_29)
		{
			G_B12_0 = L_29;
			goto IL_00e4;
		}
		G_B11_0 = L_29;
	}
	{
		return;
	}

IL_00e4:
	{
		NullCheck(G_B12_0);
		OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_inline(G_B12_0, NULL);
	}

IL_00e9:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1222>
		return;
	}
}
// Method Definition Index: 54422
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1229>
		VirtualActionInvoker3< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, bool >::Invoke(73, __this, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (bool)0, (bool)0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1230>
		return;
	}
}
// Method Definition Index: 54423
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_OnFocusCompleted_mB3F136DF88AE2029A402EEBAA30E621D15469095 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AFEE206DAF316C1853A17C5D3BAC3E1451A130E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B6EC87D0393C5990341A1AD64657C9EF59C7304);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF828B6356DADB1C6558DA690BB1949618673AF70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* G_B12_0 = NULL;
	OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* G_B11_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1235>
		bool L_0 = __this->___enableDistanceChange;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_1 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&__this->___focusMoveDistanceOrSize);
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = FloatSpring_get_Completed_m46A63AA9BABB240EEC5FE745D4513C46E1860F44_inline(L_1, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1236>
		bool L_3 = __this->___enableRotationChange;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_4 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&__this->___focusMoveRotation);
		il2cpp_codegen_runtime_class_init_inline(QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = QuaternionSpring_get_Completed_m53EFA3AF95D3BED1944C6F14C6D938CB976CF3A2_inline(L_4, NULL);
		G_B6_0 = ((int32_t)(L_5));
		goto IL_002d;
	}

IL_002c:
	{
		G_B6_0 = 1;
	}

IL_002d:
	{
		V_1 = (bool)G_B6_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1237>
		bool L_6 = __this->___enablePositionChange;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_7 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&__this->___focusMoveOffset);
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Vector3Spring_get_Completed_m03A950D73A3F16E959A17BD0F5A246358A657D23_inline(L_7, NULL);
		G_B9_0 = ((int32_t)(L_8));
		goto IL_0044;
	}

IL_0043:
	{
		G_B9_0 = 1;
	}

IL_0044:
	{
		V_2 = (bool)G_B9_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1239>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1240>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1241>
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4AFEE206DAF316C1853A17C5D3BAC3E1451A130E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.boolean_class);
		String_t* L_12;
		L_12 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_2), NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_11;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9B6EC87D0393C5990341A1AD64657C9EF59C7304);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		String_t* L_15;
		L_15 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF828B6356DADB1C6558DA690BB1949618673AF70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		String_t* L_18;
		L_18 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_17, NULL);
		CameraBase_Log_mE1797E8DD8940C1A5C1F44BE0E9FB57021BFCDA2(__this, L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1244>
		bool L_20 = V_0;
		bool L_21 = V_1;
		bool L_22 = V_2;
		if (!((int32_t)(((int32_t)((int32_t)L_20&(int32_t)L_21))&(int32_t)L_22)))
		{
			goto IL_00af;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1246>
		CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1247>
		OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* L_23 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnFocusComplete;
		OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* L_24 = L_23;
		if (L_24)
		{
			G_B12_0 = L_24;
			goto IL_00a4;
		}
		G_B11_0 = L_24;
	}
	{
		return;
	}

IL_00a4:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___focusTargetGo;
		NullCheck(G_B12_0);
		OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_inline(G_B12_0, L_25, NULL);
	}

IL_00af:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1249>
		return;
	}
}
// Method Definition Index: 54424
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_DebugInputs_m445B6E804DE1E81D82F1096B61A2E8B44336E19F (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1290>
		return;
	}
}
// Method Definition Index: 54425
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase_Log_mE1797E8DD8940C1A5C1F44BE0E9FB57021BFCDA2 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, String_t* ___0_msg, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1294>
		String_t* L_0 = ___0_msg;
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(L_0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1295>
		return;
	}
}
// Method Definition Index: 54426
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBase__ctor_mEB80C1963F42961B1479561D58B03FB1FE337CD3 (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:59>
		__this->___oneFingerDrag = 1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:108>
		__this->___allowPitchRotation = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:113>
		__this->___PitchSensitivity = (0.25f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:118>
		__this->___PitchClamp = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:123>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (5.0f), (90.0f), NULL);
		__this->___PitchMinMax = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:124>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (35.0f), (0.0f), NULL);
		__this->___initialRotation = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:129>
		__this->___allowYawRotation = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:134>
		__this->___YawSensitivity = (0.25f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:144>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (5.0f), (90.0f), NULL);
		__this->___YawMinMax = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:150>
		__this->___maxTranslationSpeed = (3.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1039>
		__this->___focusRadiusMultiplier = (1.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:1183>
		__this->___focusLerp = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBoundaries_ClampInBoundsXZ_m25A55A0F005F2B3A327CB7241EAF57E6CC66F462 (CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, bool* ___1_isInBoundaries, float ___2_groundHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:28>
		bool* L_0 = ___1_isInBoundaries;
		*((int8_t*)L_0) = (int8_t)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:30>
		int32_t L_1 = __this->___type;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_2 = __this->___boxCollider;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:31>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_p;
		return L_4;
	}

IL_001b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:35>
		int32_t L_5 = __this->___type;
		if (L_5)
		{
			goto IL_00bd;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:37>
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_6 = __this->___boxCollider;
		NullCheck(L_6);
		bool L_7;
		L_7 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_6, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:39>
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_8 = __this->___boxCollider;
		NullCheck(L_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_8, NULL);
		__this->___bounds = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:40>
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_10 = __this->___boxCollider;
		NullCheck(L_10);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_10, (bool)0, NULL);
	}

IL_0050:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:42>
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_11 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_12 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline(L_12, NULL);
		float L_14 = ___2_groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_13, L_14, NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B_inline(L_11, L_15, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:43>
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_16 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_17 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_18, (0.0f), NULL);
		Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128_inline(L_16, L_19, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:46>
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_20 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___0_p;
		float L_22 = ___2_groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_21, L_22, NULL);
		bool L_24;
		L_24 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555_inline(L_20, L_23, NULL);
		if (!L_24)
		{
			goto IL_00a2;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:47>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___0_p;
		return L_25;
	}

IL_00a2:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:48>
		bool* L_26 = ___1_isInBoundaries;
		*((int8_t*)L_26) = (int8_t)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:49>
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_27 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___0_p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Bounds_ClosestPoint_m5BEB0BAC00387C354CF3C4D013442384122F24FC_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___0_p;
		float L_31 = L_30.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_29, L_31, NULL);
		return L_32;
	}

IL_00bd:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:51>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___0_p;
		return L_33;
	}
}
// Method Definition Index: 54428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBoundaries_ClampInBoundsXY_m2646BC5DC70AFA2A1A06F8C37361F5E200259368 (CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, bool* ___1_isInBoundaries, float ___2_groundHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:63>
		bool* L_0 = ___1_isInBoundaries;
		*((int8_t*)L_0) = (int8_t)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:65>
		int32_t L_1 = __this->___type;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_2 = __this->___boxCollider;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:66>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_p;
		return L_4;
	}

IL_001b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:69>
		int32_t L_5 = __this->___type;
		if (L_5)
		{
			goto IL_00bd;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:71>
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_6 = __this->___boxCollider;
		NullCheck(L_6);
		bool L_7;
		L_7 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_6, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:73>
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_8 = __this->___boxCollider;
		NullCheck(L_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_8, NULL);
		__this->___bounds = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:74>
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_10 = __this->___boxCollider;
		NullCheck(L_10);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_10, (bool)0, NULL);
	}

IL_0050:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:76>
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_11 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_12 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline(L_12, NULL);
		float L_14 = ___2_groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = VectorExtensions_SetZ_m889E89C05309B0ADFF113D2CEC7885C239C2FF84(L_13, L_14, NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B_inline(L_11, L_15, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:77>
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_16 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_17 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = VectorExtensions_SetZ_m889E89C05309B0ADFF113D2CEC7885C239C2FF84(L_18, (0.0f), NULL);
		Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128_inline(L_16, L_19, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:80>
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_20 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___0_p;
		float L_22 = ___2_groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = VectorExtensions_SetZ_m889E89C05309B0ADFF113D2CEC7885C239C2FF84(L_21, L_22, NULL);
		bool L_24;
		L_24 = Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555_inline(L_20, L_23, NULL);
		if (!L_24)
		{
			goto IL_00a2;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:81>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = ___0_p;
		return L_25;
	}

IL_00a2:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:82>
		bool* L_26 = ___1_isInBoundaries;
		*((int8_t*)L_26) = (int8_t)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:83>
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_27 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___0_p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Bounds_ClosestPoint_m5BEB0BAC00387C354CF3C4D013442384122F24FC_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___0_p;
		float L_31 = L_30.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = VectorExtensions_SetZ_m889E89C05309B0ADFF113D2CEC7885C239C2FF84(L_29, L_31, NULL);
		return L_32;
	}

IL_00bd:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:85>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ___0_p;
		return L_33;
	}
}
// Method Definition Index: 54429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBoundaries_OnDrawGizmos_m1513F415C90BC7F5775AB778BEBCD2C52FDA8C54 (CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:92>
		bool L_0 = __this->___drawGizmos;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:93>
		return;
	}

IL_0009:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:95>
		int32_t L_1 = __this->___type;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_2 = __this->___boxCollider;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:96>
		return;
	}

IL_0020:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:100>
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		V_0 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:101>
		(&V_0)->___a = (0.5f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:102>
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = V_0;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_5, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:104>
		int32_t L_6 = __this->___type;
		if (L_6)
		{
			goto IL_00b9;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = __this->___bounderiesCollider;
		if (!((BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23*)IsInstClass((RuntimeObject*)L_7, BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_il2cpp_TypeInfo_var)))
		{
			goto IL_00b9;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:106>
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_8 = __this->___boxCollider;
		NullCheck(L_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_8, NULL);
		V_1 = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:107>
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_10 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_11, (0.0f), NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B_inline((&V_1), L_12, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:108>
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_13 = (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)(&__this->___bounds);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_14, (0.0f), NULL);
		Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128_inline((&V_1), L_15, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:109>
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_16 = __this->___boxCollider;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_18;
		L_18 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_17, NULL);
		Gizmos_set_matrix_m100B4ACA7FBDFF65CE1BD0000E9E0D7566147A15(L_18, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:110>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline((&V_1), NULL);
		Gizmos_DrawCube_m4417EAEA479EF4AD52445810D840BA8FCBC6EF3F(L_19, L_20, NULL);
	}

IL_00b9:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBoundaries.cs:112>
		return;
	}
}
// Method Definition Index: 54430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraBoundaries__ctor_mF74842B250A8981EBF5E78D4B91AB78859FA0EC0 (CameraBoundaries_t712E65A8C10C7F88C8F4FC5F059AC7119630A0A0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8 (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraLogger_t72DE2393AB4FC7F454115249A50E69AF3E783074_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A3CE8C9B8823B239E0DBEB6E7D992137CB9D8CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraLogger.cs:16>
		bool L_0 = ((CameraLogger_t72DE2393AB4FC7F454115249A50E69AF3E783074_StaticFields*)il2cpp_codegen_static_fields_for(CameraLogger_t72DE2393AB4FC7F454115249A50E69AF3E783074_il2cpp_TypeInfo_var))->___enabled;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraLogger.cs:17>
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7A3CE8C9B8823B239E0DBEB6E7D992137CB9D8CA, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
	}

IL_0017:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraLogger.cs:18>
		return;
	}
}
// Method Definition Index: 54432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLogger_LogWarning_m53D72F9D1C03D10300A7FB62DB1764CECCC7795B (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraLogger_t72DE2393AB4FC7F454115249A50E69AF3E783074_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A3CE8C9B8823B239E0DBEB6E7D992137CB9D8CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraLogger.cs:22>
		bool L_0 = ((CameraLogger_t72DE2393AB4FC7F454115249A50E69AF3E783074_StaticFields*)il2cpp_codegen_static_fields_for(CameraLogger_t72DE2393AB4FC7F454115249A50E69AF3E783074_il2cpp_TypeInfo_var))->___enabled;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraLogger.cs:23>
		String_t* L_1 = ___0_msg;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7A3CE8C9B8823B239E0DBEB6E7D992137CB9D8CA, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_2, NULL);
	}

IL_0017:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraLogger.cs:24>
		return;
	}
}
// Method Definition Index: 54433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLogger_LogError_m57145827A6C3C7204BDFD5D912361EB688F3AD1B (String_t* ___0_msg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A3CE8C9B8823B239E0DBEB6E7D992137CB9D8CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraLogger.cs:28>
		String_t* L_0 = ___0_msg;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7A3CE8C9B8823B239E0DBEB6E7D992137CB9D8CA, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraLogger.cs:29>
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:30>
		bool L_0 = __this->___orthoMode;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:31>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_1 = __this->___camOrtho;
		return L_1;
	}

IL_000f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:32>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_2 = __this->___camPersp;
		return L_2;
	}
}
// Method Definition Index: 54435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraModeSwitcher_get_DisableMoves_mB9C0C394F973E4D94AFFB5F7ACD0A5ACD37A3475 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:43>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 54436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_set_DisableMoves_m9E74E9A00F1548FB7E24669EADC7749B0B6501BD (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:47>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0 = __this->___camOrtho;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline(L_0, L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:48>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_2 = __this->___camPersp;
		bool L_3 = ___0_value;
		NullCheck(L_2);
		CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline(L_2, L_3, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:49>
		return;
	}
}
// Method Definition Index: 54437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraModeSwitcher_get_FinalRotation_m71A34CEE940A5D25291AAC2B98E15F799DF6B9CB (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:55>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = InterfaceFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(2, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 54438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraModeSwitcher_get_FinalPosition_mBD300EDDD2D393D60DA2CE63F4BFD71634725799 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:60>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(3, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 54439
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraModeSwitcher_get_FinalOffset_mCD0069147E582D743B94B5DA08898551236783BA (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:67>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(4, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 54440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraModeSwitcher_get_FinalDistance_m1559CB41B99702E0A75D78C321C295A40DA17B55 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:73>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(6, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 54441
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraModeSwitcher_get_PitchAndYaw_mC203BD93C5DE6DE6495980095C4D0C32366E0075 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:78>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(7, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 54442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraModeSwitcher_IsRotating_m48A14D19602A7349A3D43D5BFED8926E96F1A3AF (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:83>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 54443
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnDestroy_mA419579758396C52056D2367E98D228DB56716BA (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:87>
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_0 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_1 = (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)il2cpp_codegen_object_new(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6(L_1, __this, (intptr_t)((void*)CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88_RuntimeMethod_var), NULL);
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction = ((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_2, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction), (void*)((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_2, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:88>
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_3 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_4 = (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)il2cpp_codegen_object_new(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC(L_4, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 40)), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus = ((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_5, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus), (void*)((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_5, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:89>
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_6 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_7 = (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)il2cpp_codegen_object_new(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D(L_7, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		Delegate_t* L_8;
		L_8 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_6, L_7, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange = ((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_8, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange), (void*)((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_8, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:90>
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_9 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_10 = (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)il2cpp_codegen_object_new(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8(L_10, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 41)), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_9, L_10, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus = ((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_11, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus), (void*)((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_11, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:91>
		return;
	}
}
// Method Definition Index: 54444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_Awake_m9AEA32108DA198B88F2BCA9985752B094FE22656 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1_mCD4418D5C439683746661FD46B3FEB3A946EB2DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470_m101A27FAB458BD5B2F5EB0F189C124E33ECF1E79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral622E455B08C3124F3808D02DBD4C3E36646B8131);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABDF2DCA2922626BBCDD1C9A2711B5694D5D0ED3);
		s_Il2CppMethodInitialized = true;
	}
	CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* G_B8_0 = NULL;
	CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* G_B9_1 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B11_0 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B10_0 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B14_0 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B13_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:97>
		((CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_StaticFields*)il2cpp_codegen_static_fields_for(CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_il2cpp_TypeInfo_var))->___Instance = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_StaticFields*)il2cpp_codegen_static_fields_for(CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC_il2cpp_TypeInfo_var))->___Instance), (void*)__this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:98>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0;
		L_0 = Component_GetComponent_TisCameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1_mCD4418D5C439683746661FD46B3FEB3A946EB2DA(__this, Component_GetComponent_TisCameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1_mCD4418D5C439683746661FD46B3FEB3A946EB2DA_RuntimeMethod_var);
		__this->___camOrtho = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camOrtho), (void*)L_0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:99>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_1;
		L_1 = Component_GetComponent_TisCameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470_m101A27FAB458BD5B2F5EB0F189C124E33ECF1E79(__this, Component_GetComponent_TisCameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470_m101A27FAB458BD5B2F5EB0F189C124E33ECF1E79_RuntimeMethod_var);
		__this->___camPersp = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camPersp), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:100>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___cam = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam), (void*)L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:102>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_3 = __this->___camOrtho;
		NullCheck(L_3);
		bool L_4 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_3)->___defaultMode;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_5 = __this->___camPersp;
		NullCheck(L_5);
		bool L_6 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_5)->___defaultMode;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:104>
		CameraLogger_LogError_m57145827A6C3C7204BDFD5D912361EB688F3AD1B(_stringLiteral622E455B08C3124F3808D02DBD4C3E36646B8131, NULL);
	}

IL_004e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:106>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_7 = __this->___camOrtho;
		NullCheck(L_7);
		bool L_8 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_7)->___defaultMode;
		if (L_8)
		{
			goto IL_007e;
		}
	}
	{
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_9 = __this->___camPersp;
		NullCheck(L_9);
		bool L_10 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_9)->___defaultMode;
		if (L_10)
		{
			goto IL_007e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:108>
		CameraLogger_LogError_m57145827A6C3C7204BDFD5D912361EB688F3AD1B(_stringLiteralABDF2DCA2922626BBCDD1C9A2711B5694D5D0ED3, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:109>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_11 = __this->___camOrtho;
		NullCheck(L_11);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_11)->___defaultMode = (bool)1;
	}

IL_007e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:112>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_12 = __this->___camOrtho;
		NullCheck(L_12);
		bool L_13 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)L_12)->___defaultMode;
		__this->___orthoMode = L_13;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:113>
		bool L_14 = __this->___orthoMode;
		if (L_14)
		{
			G_B8_0 = __this;
			goto IL_009b;
		}
		G_B7_0 = __this;
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		goto IL_009c;
	}

IL_009b:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_009c:
	{
		NullCheck(G_B9_1);
		G_B9_1->___matrixLerp = ((float)G_B9_0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:114>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_15 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&__this->___switchMoveLerp);
		float L_16 = __this->___matrixLerp;
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_15, L_16, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:116>
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_17 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			goto IL_00be;
		}
		G_B10_0 = L_18;
	}
	{
		goto IL_00c9;
	}

IL_00be:
	{
		bool L_19 = __this->___orthoMode;
		NullCheck(G_B11_0);
		OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline(G_B11_0, L_19, NULL);
	}

IL_00c9:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:117>
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_20 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_21 = L_20;
		if (L_21)
		{
			G_B14_0 = L_21;
			goto IL_00d4;
		}
		G_B13_0 = L_21;
	}
	{
		goto IL_00df;
	}

IL_00d4:
	{
		bool L_22 = __this->___orthoMode;
		NullCheck(G_B14_0);
		OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline(G_B14_0, L_22, NULL);
	}

IL_00df:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:118>
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_23 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction;
		OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12* L_24 = (OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)il2cpp_codegen_object_new(OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var);
		OnCameraBoolEvent__ctor_m47EA7F1876AF85509561A4B48422FC13420CCBC6(L_24, __this, (intptr_t)((void*)CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88_RuntimeMethod_var), NULL);
		Delegate_t* L_25;
		L_25 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_23, L_24, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction = ((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_25, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestButtonAction), (void*)((OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12*)CastclassSealed((RuntimeObject*)L_25, OnCameraBoolEvent_t44FAD330B7B68E7A30BBDDB14230C367CD6E8A12_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:119>
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_26 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus;
		OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6* L_27 = (OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)il2cpp_codegen_object_new(OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var);
		OnRequestObjectFocusHandler__ctor_mF500575D239DD76773A41DC6929E1BA98AF3FBDC(L_27, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 40)), NULL);
		Delegate_t* L_28;
		L_28 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_26, L_27, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus = ((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_28, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestObjectFocus), (void*)((OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6*)CastclassSealed((RuntimeObject*)L_28, OnRequestObjectFocusHandler_t6222C9AC8EFA0D6B26CC81AB219AD8A9AFCA6EF6_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:120>
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_29 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange;
		OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B* L_30 = (OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)il2cpp_codegen_object_new(OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var);
		OnRequestGroundHeightChangeHandler__ctor_m2B40287FF510218EFF45CF60526B106E9C47FD8D(L_30, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		Delegate_t* L_31;
		L_31 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_29, L_30, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange = ((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_31, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestGroundHeightChange), (void*)((OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B*)CastclassSealed((RuntimeObject*)L_31, OnRequestGroundHeightChangeHandler_tD938CC05EE1FD4851E369A857CAFDC06787CDC4B_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:121>
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_32 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus;
		OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* L_33 = (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)il2cpp_codegen_object_new(OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var);
		OnCameraEventHandler__ctor_m621E9A6CB5EFB9E6D95A423F9B44F7C67AB84AC8(L_33, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 41)), NULL);
		Delegate_t* L_34;
		L_34 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_32, L_33, NULL);
		((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus = ((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_34, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnRequestStopFocus), (void*)((OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597*)CastclassSealed((RuntimeObject*)L_34, OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597_il2cpp_TypeInfo_var)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:122>
		return;
	}
}
// Method Definition Index: 54445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_LateUpdate_m775450AC165AFCCD738052CB33F4CB914DF63F72 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraModeSwitcher_U3CLateUpdateU3Eb__28_0_mCBD2AF87519F44A41331A3464E82192C1DEE70E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2535E32A4BD54ABEFDB46B0F9692117F153A9384);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	bool G_B5_0 = false;
	bool G_B4_0 = false;
	int32_t G_B6_0 = 0;
	bool G_B6_1 = false;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:131>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0 = __this->___camOrtho;
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(50, L_0);
		__this->___orthoMatrix = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:132>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_2 = __this->___camPersp;
		NullCheck(L_2);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(50, L_2);
		__this->___perspectiveMatrix = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:134>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* L_4;
		L_4 = CameraInputs_get_Instance_m71526D6BAFCE84BF0F4AB17BE10E0A11D23B900C_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* L_6;
		L_6 = CameraInputs_get_Instance_m71526D6BAFCE84BF0F4AB17BE10E0A11D23B900C_inline(NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = CameraInputs_ChangePerspective_m5A0E25948B96834FD48C08DA79004BA211449024(L_6, NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:136>
		CameraModeSwitcher_TogglePerspective_mB50D422DD44FB9F7B266CEE87A41F6D1F889E103(__this, NULL);
	}

IL_0041:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:138>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_8 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&__this->___switchMoveLerp);
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = FloatSpring_get_Completed_m46A63AA9BABB240EEC5FE745D4513C46E1860F44_inline(L_8, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:139>
		bool L_10 = __this->___orthoMode;
		if (L_10)
		{
			G_B5_0 = L_9;
			goto IL_0057;
		}
		G_B4_0 = L_9;
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_0058;
	}

IL_0057:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0058:
	{
		V_0 = ((float)G_B6_0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:140>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:141>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:142>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:143>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:144>
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_11 = __this->___switchMove;
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_12 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&__this->___switchMoveLerp);
		float L_13 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_14, __this, (intptr_t)((void*)CameraModeSwitcher_U3CLateUpdateU3Eb__28_0_mCBD2AF87519F44A41331A3464E82192C1DEE70E7_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		float L_15;
		L_15 = Springs_Update_m472F2B3193B80FBA83E28788CE3CF1EAB3FB00F9(L_11, L_12, L_13, L_14, (bool)0, NULL);
		__this->___matrixLerp = L_15;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:145>
		if (G_B6_1)
		{
			goto IL_00b3;
		}
	}
	{
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_16 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&__this->___switchMoveLerp);
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = FloatSpring_get_Completed_m46A63AA9BABB240EEC5FE745D4513C46E1860F44_inline(L_16, NULL);
		if (!L_17)
		{
			goto IL_00b3;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:146>
		bool L_18 = __this->___orthoMode;
		bool L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_defaults.boolean_class, &L_19);
		float L_21 = __this->___matrixLerp;
		float L_22 = L_21;
		RuntimeObject* L_23 = Box(il2cpp_defaults.single_class, &L_22);
		String_t* L_24;
		L_24 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2535E32A4BD54ABEFDB46B0F9692117F153A9384, L_20, L_23, NULL);
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(L_24, NULL);
	}

IL_00b3:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:147>
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_25 = __this->___orthoMatrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26 = __this->___perspectiveMatrix;
		float L_27 = __this->___matrixLerp;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_28;
		L_28 = CameraModeSwitcher_MatrixLerp_mA8D5EF3229D5E82DFB61AC806DF33493707A0FBB(__this, L_25, L_26, L_27, NULL);
		V_1 = L_28;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:148>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_29 = __this->___cam;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_30 = V_1;
		NullCheck(L_29);
		Camera_set_projectionMatrix_m351820E6903139402FFFF40221B32D0C52B5A094(L_29, L_30, NULL);
	}
	try
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:153>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_31 = __this->___camOrtho;
		NullCheck(L_31);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(L_31, NULL);
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_33 = __this->___camPersp;
		NullCheck(L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline(L_33, NULL);
		float L_35 = __this->___matrixLerp;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D_inline(L_32, L_34, L_35, NULL);
		V_3 = L_36;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:154>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = V_3;
		NullCheck(L_37);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_37, L_38, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:155>
		goto IL_0122;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0108;
		}
		throw e;
	}

CATCH_0108:
	{
		Exception_t* L_39 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:156>
		V_4 = L_39;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:156>
		Exception_t* L_40 = V_4;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(5, L_40);
		String_t* L_42;
		L_42 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15F9B66B8419767EFCA6AEB5979A00AEDC3593CF)), L_41, NULL);
		CameraLogger_LogWarning_m53D72F9D1C03D10300A7FB62DB1764CECCC7795B(L_42, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:156>
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0122;
	}

IL_0122:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:158>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_43 = __this->___camOrtho;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC_inline(L_43, NULL);
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_45 = __this->___camPersp;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC_inline(L_45, NULL);
		float L_47 = __this->___matrixLerp;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_44, L_46, L_47, NULL);
		V_2 = L_48;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:159>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_2;
		float L_50 = L_49.___x;
		bool L_51;
		L_51 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_50, NULL);
		if (L_51)
		{
			goto IL_0177;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_2;
		float L_53 = L_52.___y;
		bool L_54;
		L_54 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_53, NULL);
		if (L_54)
		{
			goto IL_0177;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_2;
		float L_56 = L_55.___z;
		bool L_57;
		L_57 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_56, NULL);
		if (L_57)
		{
			goto IL_0177;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:161>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_2;
		NullCheck(L_58);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_58, L_59, NULL);
	}

IL_0177:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:163>
		return;
	}
}
// Method Definition Index: 54446
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_DisableCameraMoves_m8C7F68356FDCCFB93FD4DDD52076C904DFC92C21 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___0_active, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:171>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0 = __this->___camOrtho;
		bool L_1 = ___0_active;
		NullCheck(L_0);
		CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline(L_0, L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:172>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_2 = __this->___camPersp;
		bool L_3 = ___0_active;
		NullCheck(L_2);
		CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline(L_2, L_3, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:173>
		return;
	}
}
// Method Definition Index: 54447
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_ResetCamera_m842DFB2047E6891B3E5C06D3D589D05FDA12DB96 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:181>
		CameraModeSwitcher_StopFocus_m8F68B89D4C0E30FFC1B1EB0DCD332BF1054347DE(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:182>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(12, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:183>
		return;
	}
}
// Method Definition Index: 54448
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_SetResetValues_m1E26F125355EA24253FE302125EAE362E4EA49B4 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, float ___2_distance, float ___3_size, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:193>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0 = __this->___camOrtho;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_offset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rotation;
		float L_3 = ___3_size;
		NullCheck(L_0);
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(69, L_0, L_1, L_2, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:194>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_4 = __this->___camPersp;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_offset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rotation;
		float L_7 = ___2_distance;
		NullCheck(L_4);
		VirtualActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(69, L_4, L_5, L_6, L_7);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:195>
		return;
	}
}
// Method Definition Index: 54449
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnBeforeSwitch_mD0A1AFC870CEC662E5F1E01CBF2238F259FBEAA9 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___0_orthoOn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17FD5CD0CB1540984E8C3779F3994D63A8FC027B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DE5460C64D98430680864537FDB01443555062D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C056A58AC71C412E2FBC875BEDFA899AE9ADBFA);
		s_Il2CppMethodInitialized = true;
	}
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B5_0 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B4_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:206>
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = ___0_orthoOn;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.boolean_class, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_6 = __this->___camOrtho;
		NullCheck(L_6);
		bool L_7;
		L_7 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_6, NULL);
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.boolean_class, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_5;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_11 = __this->___camPersp;
		NullCheck(L_11);
		bool L_12;
		L_12 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_11, NULL);
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.boolean_class, &L_13);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_10;
		float L_16 = __this->___matrixLerp;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.single_class, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral8C056A58AC71C412E2FBC875BEDFA899AE9ADBFA, L_15, NULL);
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(L_19, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:207>
		bool L_20 = ___0_orthoOn;
		if (!L_20)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:209>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_21 = __this->___camOrtho;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_22 = __this->___camPersp;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = CameraBase_get_FinalOffset_m744D39C0C85E0BB5E805CEC6343A183BD3C0DD5B_inline(L_22, NULL);
		NullCheck(L_21);
		CameraBase_set_FinalOffset_m45ED06D9881A3FD897E950BADD06EE9EDD3F7B7A_inline(L_21, L_23, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:210>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_24 = __this->___camOrtho;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_25 = __this->___camPersp;
		NullCheck(L_25);
		float L_26;
		L_26 = CameraBase_get_FinalDistance_mBBF78FCE4AF333F49D367BC9EE3C402124C6D162_inline(L_25, NULL);
		NullCheck(L_24);
		CameraOrthoBase_SetSizeByDistance_mBC7DE819F563B85E9F6790A86409CE45DF307CF7(L_24, L_26, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:211>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_27 = __this->___camOrtho;
		NullCheck(L_27);
		VirtualActionInvoker0::Invoke(79, L_27);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:212>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_28 = __this->___camPersp;
		NullCheck(L_28);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_28, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:213>
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(_stringLiteral17FD5CD0CB1540984E8C3779F3994D63A8FC027B, NULL);
		goto IL_00e6;
	}

IL_00a4:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:217>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_29 = __this->___camPersp;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_30 = __this->___camOrtho;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = CameraBase_get_FinalOffset_m744D39C0C85E0BB5E805CEC6343A183BD3C0DD5B_inline(L_30, NULL);
		NullCheck(L_29);
		CameraBase_set_FinalOffset_m45ED06D9881A3FD897E950BADD06EE9EDD3F7B7A_inline(L_29, L_31, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:218>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_32 = __this->___camPersp;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_33 = __this->___camOrtho;
		NullCheck(L_33);
		float L_34;
		L_34 = CameraOrthoBase_GetDistanceFromSize_mC2202567822B0357A00FAFAE7C7B3BC6A4C1DEC7(L_33, NULL);
		NullCheck(L_32);
		CameraPerspBase_SetPositionByDistance_mF190D5F7B993844B1B8448587D28F4F3893E25A4(L_32, L_34, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:219>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_35 = __this->___camOrtho;
		NullCheck(L_35);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_35, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:220>
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(_stringLiteral4DE5460C64D98430680864537FDB01443555062D, NULL);
	}

IL_00e6:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:222>
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_36 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnBeforeSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_37 = L_36;
		if (L_37)
		{
			G_B5_0 = L_37;
			goto IL_00f0;
		}
		G_B4_0 = L_37;
	}
	{
		return;
	}

IL_00f0:
	{
		bool L_38 = __this->___orthoMode;
		NullCheck(G_B5_0);
		OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline(G_B5_0, L_38, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:223>
		return;
	}
}
// Method Definition Index: 54450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnAfterSwitch_mEB52881E43B9C9C91A86EC3BCA4F3812736B437C (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, bool ___0_orthoOn, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B95DDE2FEF9D3813B36CE3014B2E949DCC001C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE314FB894502AFC1C3282918E3B738D1F4D05490);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF3B7246928BA670D964338513EEB7FDFADF55A4);
		s_Il2CppMethodInitialized = true;
	}
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B5_0 = NULL;
	OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* G_B4_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:231>
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = ___0_orthoOn;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.boolean_class, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_6 = __this->___camOrtho;
		NullCheck(L_6);
		bool L_7;
		L_7 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_6, NULL);
		bool L_8 = L_7;
		RuntimeObject* L_9 = Box(il2cpp_defaults.boolean_class, &L_8);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_9);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_5;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_11 = __this->___camPersp;
		NullCheck(L_11);
		bool L_12;
		L_12 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_11, NULL);
		bool L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_defaults.boolean_class, &L_13);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_10;
		float L_16 = __this->___matrixLerp;
		float L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.single_class, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralEF3B7246928BA670D964338513EEB7FDFADF55A4, L_15, NULL);
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(L_19, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:232>
		bool L_20 = ___0_orthoOn;
		if (L_20)
		{
			goto IL_0079;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:234>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_21 = __this->___camPersp;
		NullCheck(L_21);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_21, (bool)1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:235>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = __this->___cam;
		NullCheck(L_22);
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_22, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:236>
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(_stringLiteralE314FB894502AFC1C3282918E3B738D1F4D05490, NULL);
		goto IL_009b;
	}

IL_0079:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:240>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_23 = __this->___camOrtho;
		NullCheck(L_23);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_23, (bool)1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:241>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->___cam;
		NullCheck(L_24);
		Camera_set_orthographic_m64915C0840A68E526830A69F1C40257206185020(L_24, (bool)1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:242>
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(_stringLiteral1B95DDE2FEF9D3813B36CE3014B2E949DCC001C1, NULL);
	}

IL_009b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:244>
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_25 = ((CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_StaticFields*)il2cpp_codegen_static_fields_for(CameraEvents_t4232B0199EB76BA81A53AB1E642D1353DE52134B_il2cpp_TypeInfo_var))->___OnAfterSwitchPerspective;
		OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* L_26 = L_25;
		if (L_26)
		{
			G_B5_0 = L_26;
			goto IL_00a5;
		}
		G_B4_0 = L_26;
	}
	{
		return;
	}

IL_00a5:
	{
		bool L_27 = __this->___orthoMode;
		NullCheck(G_B5_0);
		OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline(G_B5_0, L_27, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:245>
		return;
	}
}
// Method Definition Index: 54451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_OnRequestButtonAction_m3B7E8E668E4B83D4E5906E0F59871C40C001AD88 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, int32_t ___0_action, bool ___1_active, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:254>
		int32_t L_0 = ___0_action;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = __this->___orthoMode;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:255>
		CameraModeSwitcher_TogglePerspective_mB50D422DD44FB9F7B266CEE87A41F6D1F889E103(__this, NULL);
		return;
	}

IL_0013:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:256>
		int32_t L_2 = ___0_action;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:257>
		CameraModeSwitcher_TogglePerspective_mB50D422DD44FB9F7B266CEE87A41F6D1F889E103(__this, NULL);
		return;
	}

IL_001d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:258>
		int32_t L_3 = ___0_action;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:259>
		CameraModeSwitcher_ResetCamera_m842DFB2047E6891B3E5C06D3D589D05FDA12DB96(__this, NULL);
		return;
	}

IL_0028:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:260>
		int32_t L_4 = ___0_action;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:261>
		bool L_5 = ___1_active;
		CameraModeSwitcher_DisableCameraMoves_m8C7F68356FDCCFB93FD4DDD52076C904DFC92C21(__this, L_5, NULL);
		return;
	}

IL_0034:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:262>
		int32_t L_6 = ___0_action;
		if ((!(((uint32_t)L_6) == ((uint32_t)5))))
		{
			goto IL_0050;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:264>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_7 = __this->___camOrtho;
		bool L_8 = ___1_active;
		NullCheck(L_7);
		CameraBase_set_DisableOneFingerDrag_mAAF38F643026B6870D33D39D1710FD04683B8B95_inline(L_7, L_8, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:265>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_9 = __this->___camPersp;
		bool L_10 = ___1_active;
		NullCheck(L_9);
		CameraBase_set_DisableOneFingerDrag_mAAF38F643026B6870D33D39D1710FD04683B8B95_inline(L_9, L_10, NULL);
	}

IL_0050:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:267>
		return;
	}
}
// Method Definition Index: 54452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_TogglePerspective_mB50D422DD44FB9F7B266CEE87A41F6D1F889E103 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BBF6D728F579C583A84EF64CCE83CDA72247751);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:274>
		bool L_0 = __this->___orthoMode;
		V_0 = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:275>
		bool L_1 = __this->___orthoMode;
		__this->___orthoMode = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:276>
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		bool L_4 = V_0;
		bool L_5 = L_4;
		RuntimeObject* L_6 = Box(il2cpp_defaults.boolean_class, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		bool L_8 = __this->___orthoMode;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_defaults.boolean_class, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_12 = __this->___camOrtho;
		NullCheck(L_12);
		bool L_13;
		L_13 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_12, NULL);
		bool L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.boolean_class, &L_14);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_11;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_17 = __this->___camPersp;
		NullCheck(L_17);
		bool L_18;
		L_18 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_17, NULL);
		bool L_19 = L_18;
		RuntimeObject* L_20 = Box(il2cpp_defaults.boolean_class, &L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_16;
		float L_22 = __this->___matrixLerp;
		float L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_defaults.single_class, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_24);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_21;
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_26 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&__this->___switchMoveLerp);
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = FloatSpring_get_Completed_m46A63AA9BABB240EEC5FE745D4513C46E1860F44_inline(L_26, NULL);
		bool L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_defaults.boolean_class, &L_28);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_29);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_29);
		String_t* L_30;
		L_30 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral9BBF6D728F579C583A84EF64CCE83CDA72247751, L_25, NULL);
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(L_30, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:277>
		bool L_31 = __this->___orthoMode;
		CameraModeSwitcher_OnBeforeSwitch_mD0A1AFC870CEC662E5F1E01CBF2238F259FBEAA9(__this, L_31, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:278>
		return;
	}
}
// Method Definition Index: 54453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraModeSwitcher_MatrixLerp_mA8D5EF3229D5E82DFB61AC806DF33493707A0FBB (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_from, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_to, float ___2_time, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:291>
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:292>
		V_1 = 0;
		goto IL_002e;
	}

IL_000c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:293>
		int32_t L_0 = V_1;
		int32_t L_1 = V_1;
		float L_2;
		L_2 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A_inline((&___0_from), L_1, NULL);
		int32_t L_3 = V_1;
		float L_4;
		L_4 = Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A_inline((&___1_to), L_3, NULL);
		float L_5 = ___2_time;
		float L_6;
		L_6 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_2, L_4, L_5, NULL);
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0_inline((&V_0), L_0, L_6, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:292>
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:292>
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)16))))
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:294>
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 54454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_StopFocus_m8F68B89D4C0E30FFC1B1EB0DCD332BF1054347DE (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:304>
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_0 = __this->___camOrtho;
		NullCheck(L_0);
		CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715(L_0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:305>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_1 = __this->___camPersp;
		NullCheck(L_1);
		CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715(L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:306>
		return;
	}
}
// Method Definition Index: 54455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCameraOnGameObject_mE66C9E3904CF438FB2640705D1E0AEF030B0984B (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, bool ___1_allowYOffsetFromGround, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:318>
		CameraModeSwitcher_StopFocus_m8F68B89D4C0E30FFC1B1EB0DCD332BF1054347DE(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:319>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_go;
		bool L_2 = ___1_allowYOffsetFromGround;
		NullCheck(L_0);
		InterfaceActionInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool >::Invoke(36, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:320>
		return;
	}
}
// Method Definition Index: 54456
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_SetGroundHeightAnimated_mCADFB05B1121BE080E9620C494631465BBDEA72A (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, float ___0_newHeight, bool ___1_animate, float ___2_duration, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:335>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_0 = __this->___camPersp;
		float L_1 = ___0_newHeight;
		bool L_2 = ___1_animate;
		float L_3 = ___2_duration;
		NullCheck(L_0);
		CameraBase_SetGroundHeightAnimated_m59681B8244476ACF2A87C9537FE703CF05FD6F71(L_0, L_1, L_2, L_3, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:336>
		return;
	}
}
// Method Definition Index: 54457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraModeSwitcher_GetMatrix_mE15F398D5D5416650D022010F072247FD196AFDE (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:344>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		NullCheck(L_0);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = InterfaceFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(8, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Method Definition Index: 54458
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_SetGroundHeight_m4002DDC0E994C2215419CF8212D23F214DEE833E (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, float ___0_y, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:354>
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_0 = __this->___camPersp;
		float L_1 = ___0_y;
		NullCheck(L_0);
		CameraBase_SetGroundHeight_m503F2D8526D6CBB8707C39854FA4CBE5B63F9402(L_0, L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:355>
		return;
	}
}
// Method Definition Index: 54459
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_RotateFromVector_m66108A28C8D8B0A9F5708BF80FD9F70A52E5EBA6 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_delta, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:363>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_delta;
		NullCheck(L_0);
		InterfaceActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(11, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:364>
		return;
	}
}
// Method Definition Index: 54460
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_SetResetValues_mF94F9950FAB31B34C1DC6097AFC605A309A52E45 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, float ___2_distanceOrSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:374>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_offset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rotation;
		float L_3 = ___2_distanceOrSize;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(13, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:375>
		return;
	}
}
// Method Definition Index: 54461
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_mFFD01EF9629E58DF03D9B1FA85B7F25221F15068 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, float ___0_targetDistance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:383>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		float L_1 = ___0_targetDistance;
		NullCheck(L_0);
		InterfaceActionInvoker1< float >::Invoke(15, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:384>
		return;
	}
}
// Method Definition Index: 54462
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_m462E0D69988BE65674D5223963D0DAB8CBF4BFF9 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_targetRotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:392>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_targetRotation;
		NullCheck(L_0);
		InterfaceActionInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(16, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:393>
		return;
	}
}
// Method Definition Index: 54463
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_m1793D75C5A55BCAC3259F42972ED0A7B283C5D10 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:401>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		NullCheck(L_0);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(14, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:402>
		return;
	}
}
// Method Definition Index: 54464
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_mCB28C038AD559F5DDF351DA8E4C6ADCBA429E082 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:411>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		float L_2 = ___1_targetDistance;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(17, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:412>
		return;
	}
}
// Method Definition Index: 54465
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_mF7CBB48E20281195FE339A4DCA8326C0AA09CD36 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_targetRotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:421>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_targetRotation;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(18, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:422>
		return;
	}
}
// Method Definition Index: 54466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_mE0A17245149C8B158C5515C25B44858B226AE793 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_targetRotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:431>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_targetRotation;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(19, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:432>
		return;
	}
}
// Method Definition Index: 54467
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_m40F439D547F8D437067793D645A6FA541AFA5959 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistance, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_targetRotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:442>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		float L_2 = ___1_targetDistance;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___2_targetRotation;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(20, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:443>
		return;
	}
}
// Method Definition Index: 54468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraToInstant_mE2047024A7D61FC5E96DF175456C6CCF274399E2 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistance, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_targetRotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:453>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		float L_2 = ___1_targetDistance;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___2_targetRotation;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(21, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:454>
		return;
	}
}
// Method Definition Index: 54469
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_mBFD57CF910CCD64C8DB500AA3FF6B437795EE713 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:462>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		NullCheck(L_0);
		InterfaceActionInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(22, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:463>
		return;
	}
}
// Method Definition Index: 54470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_m8E22AD9AD7ADE2751E1A78D979AEDC3BFBD8F7D7 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_targetRotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:471>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___0_targetRotation;
		NullCheck(L_0);
		InterfaceActionInvoker1< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(23, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:472>
		return;
	}
}
// Method Definition Index: 54471
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_m921233BF86A6399C90088D906762435D017085D1 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, float ___0_targetDistanceOrSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:480>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		float L_1 = ___0_targetDistanceOrSize;
		NullCheck(L_0);
		InterfaceActionInvoker1< float >::Invoke(24, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:481>
		return;
	}
}
// Method Definition Index: 54472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_m201D0DE90CFB53ADC8F1A4836D85C0B3EF0A8A79 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:490>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		float L_2 = ___1_targetDistance;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float >::Invoke(25, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:491>
		return;
	}
}
// Method Definition Index: 54473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_mF95D4F128129DC93CCB305BD11ECBEE158F7A0A4 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_targetRotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:500>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_targetRotation;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(26, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:501>
		return;
	}
}
// Method Definition Index: 54474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_m4B1AA61F314CAA001F4616C30216E7527062B4F0 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_targetRotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:510>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_targetRotation;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(27, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:511>
		return;
	}
}
// Method Definition Index: 54475
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_m4690019115D552CD4DAD517E795118CBB3AD2E6D (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistance, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_targetRotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:521>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		float L_2 = ___1_targetDistance;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___2_targetRotation;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(28, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:522>
		return;
	}
}
// Method Definition Index: 54476
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_MoveCameraTo_m617EA4F397D92E7FD6137DF5151A44D1C76FCD92 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistance, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_targetRotation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:532>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		float L_2 = ___1_targetDistance;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___2_targetRotation;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(29, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:533>
		return;
	}
}
// Method Definition Index: 54477
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m3268FAEF5B952769C4241832F377547CF3597B31 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, bool ___1_instant, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:542>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		bool L_2 = ___1_instant;
		NullCheck(L_0);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, bool >::Invoke(30, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:543>
		return;
	}
}
// Method Definition Index: 54478
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m07E5F36E14BFF50BB00E8C13A87DB3BA208875AD (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistance, bool ___2_instant, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:553>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		float L_2 = ___1_targetDistance;
		bool L_3 = ___2_instant;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, bool >::Invoke(31, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:554>
		return;
	}
}
// Method Definition Index: 54479
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m01655E1E905A5A58CAC1E656B10B95FF9C85518F (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_targetRotation, bool ___2_instant, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:564>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_targetRotation;
		bool L_3 = ___2_instant;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool >::Invoke(32, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:565>
		return;
	}
}
// Method Definition Index: 54480
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m58FC09715A0E53CD394C4076A3B4D0CD7E015B97 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_targetRotation, bool ___2_instant, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:575>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_targetRotation;
		bool L_3 = ___2_instant;
		NullCheck(L_0);
		InterfaceActionInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, bool >::Invoke(33, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:576>
		return;
	}
}
// Method Definition Index: 54481
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m1E1F09EB6B829BD2AEECA31D47D8D938C6A6833D (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistance, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_targetRotation, bool ___3_instant, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:587>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		float L_2 = ___1_targetDistance;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___2_targetRotation;
		bool L_4 = ___3_instant;
		NullCheck(L_0);
		InterfaceActionInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, bool >::Invoke(34, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:588>
		return;
	}
}
// Method Definition Index: 54482
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_FocusCamera_m5915C7FBADBFA21144A0F79DA096877060875121 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPosition, float ___1_targetDistance, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_targetRotation, bool ___3_instant, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:599>
		RuntimeObject* L_0;
		L_0 = CameraModeSwitcher_get_CurrentCameraMode_m12D77BA29F679B9225404021D5E477D51327560F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_targetPosition;
		float L_2 = ___1_targetDistance;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___2_targetRotation;
		bool L_4 = ___3_instant;
		NullCheck(L_0);
		InterfaceActionInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, bool >::Invoke(35, ITouchCamera_t7BF0463E9DDA623989CBFE0D8214E0803D4643A3_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:600>
		return;
	}
}
// Method Definition Index: 54483
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher__ctor_m111E3F686BD8745B7252D7B01A832C4CA9D7384B (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:17>
		__this->___orthoMode = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// Method Definition Index: 54484
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraModeSwitcher_U3CLateUpdateU3Eb__28_0_mCBD2AF87519F44A41331A3464E82192C1DEE70E7 (CameraModeSwitcher_t12707D05E63E279FFB8158C0FE94CF4AA07E95DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C6C3B8F0D7CA74B6FF17E981A670016724321F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:142>
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		bool L_2 = __this->___orthoMode;
		bool L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_defaults.boolean_class, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		float L_6 = __this->___matrixLerp;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.single_class, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* L_10 = __this->___camOrtho;
		NullCheck(L_10);
		bool L_11;
		L_11 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_10, NULL);
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_defaults.boolean_class, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_9;
		CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* L_15 = __this->___camPersp;
		NullCheck(L_15);
		bool L_16;
		L_16 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_15, NULL);
		bool L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_defaults.boolean_class, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral5C6C3B8F0D7CA74B6FF17E981A670016724321F7, L_14, NULL);
		CameraLogger_Log_mB9838782AF2863127F6F7A2E08D561DF516DF8B8(L_19, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:143>
		bool L_20 = __this->___orthoMode;
		CameraModeSwitcher_OnAfterSwitch_mEB52881E43B9C9C91A86EC3BCA4F3812736B437C(__this, L_20, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraModeSwitcher.cs:144>
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOrthoBase_get_FinalSize_m7D2170AE05173E8729F880DC3AE150015B02BC22 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:32>
		float L_0 = __this->___finalSize;
		return L_0;
	}
}
// Method Definition Index: 54486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_Init_mC35BF62EA51F7D23B9710BA605117A720A32C2C9 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:41>
		CameraBase_Init_mC1A3D3A7A83BBC74EB67EFAA4C1B0C29B0505932(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:42>
		float L_0 = __this->___initSize;
		__this->___finalSize = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:43>
		return;
	}
}
// Method Definition Index: 54487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_Update_m0BAC7B37BCE712F1FCF1FDAF82C2FC9655830C3F (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* G_B22_0 = NULL;
	CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* G_B21_0 = NULL;
	float G_B23_0 = 0.0f;
	CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* G_B23_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:48>
		bool L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___disableMoves;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:49>
		return;
	}

IL_0009:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:51>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_1 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___TwoFingerFilter;
		NullCheck(L_1);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_2;
		L_2 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_1, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:52>
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_3 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___OneFingerFilter;
		NullCheck(L_3);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_4;
		L_4 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_3, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:53>
		V_0 = (1.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:55>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.5f), (0.5f), (0.0f), NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_5, L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_7, NULL);
		V_1 = L_8;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:57>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_9 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_9, L_10, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_11);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointCameraCenter = L_12;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:58>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta = L_13;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:59>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_14 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointAnyFingerCountCenter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_14, L_15, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_16);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter = L_17;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:60>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot = L_18;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:66>
		bool L_19;
		L_19 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 1, NULL);
		if (!L_19)
		{
			goto IL_00d8;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:68>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9(NULL);
		CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA(__this, L_20, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:69>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(63, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation = L_21;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:70>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		float L_24 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_22, L_23, L_24);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_25;
	}

IL_00d8:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:74>
		bool L_26;
		L_26 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 2, NULL);
		if (!L_26)
		{
			goto IL_00f8;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:76>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9(NULL);
		CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA(__this, L_27, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:77>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(63, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation = L_28;
	}

IL_00f8:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:81>
		bool L_29;
		L_29 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 0, NULL);
		if (L_29)
		{
			goto IL_010a;
		}
	}
	{
		bool L_30;
		L_30 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 2, NULL);
		if (!L_30)
		{
			goto IL_0110;
		}
	}

IL_010a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:83>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_31 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___pinchRatio;
		V_0 = L_31;
	}

IL_0110:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:87>
		bool L_32;
		L_32 = CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B(__this, 1, NULL);
		if (!L_32)
		{
			goto IL_0139;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:89>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_33;
		L_33 = CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7(NULL);
		V_0 = L_33;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:90>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_34 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_34, L_35, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_36);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter = L_37;
	}

IL_0139:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:94>
		bool L_38;
		L_38 = CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B(__this, 0, NULL);
		if (!L_38)
		{
			goto IL_0166;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:96>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_39;
		L_39 = CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7(NULL);
		V_0 = L_39;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:97>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_40 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth);
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = BaseTouchInput_GetMousePosition_m0977CDAAA83BF76091725A27ACB4C50840808D87(NULL);
		il2cpp_codegen_runtime_class_init_inline(ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_40, L_41, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_42);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter = L_43;
	}

IL_0166:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:102>
		float L_44 = __this->___finalSize;
		float L_45 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_47 = L_46->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_48 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_49 = L_48->___y;
		float L_50;
		L_50 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_44, L_45)), L_47, L_49, NULL);
		__this->___finalSize = L_50;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:104>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_51 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_52 = L_51->___y;
		float L_53 = __this->___finalSize;
		if ((!(((float)L_52) == ((float)L_53))))
		{
			goto IL_01aa;
		}
	}
	{
		float L_54 = V_0;
		if ((((float)L_54) > ((float)(1.0f))))
		{
			goto IL_01c5;
		}
	}

IL_01aa:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_55 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_56 = L_55->___x;
		float L_57 = __this->___finalSize;
		if ((!(((float)L_56) == ((float)L_57))))
		{
			goto IL_01cb;
		}
	}
	{
		float L_58 = V_0;
		if ((!(((float)L_58) < ((float)(1.0f)))))
		{
			goto IL_01cb;
		}
	}

IL_01c5:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:106>
		V_0 = (1.0f);
	}

IL_01cb:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:109>
		bool L_59;
		L_59 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 0, NULL);
		if (L_59)
		{
			goto IL_01dd;
		}
	}
	{
		bool L_60;
		L_60 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 1, NULL);
		if (!L_60)
		{
			goto IL_0202;
		}
	}

IL_01dd:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:111>
		bool L_61 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___allowYawRotation;
		if (L_61)
		{
			G_B22_0 = __this;
			goto IL_01ed;
		}
		G_B21_0 = __this;
	}
	{
		G_B23_0 = (0.0f);
		G_B23_1 = G_B21_0;
		goto IL_01f2;
	}

IL_01ed:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_62 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twistDegrees;
		G_B23_0 = L_62;
		G_B23_1 = G_B22_0;
	}

IL_01f2:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(70, __this);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		L_64 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80_inline(G_B23_0, L_63, NULL);
		NullCheck(G_B23_1);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)G_B23_1)->___twistRot = L_64;
	}

IL_0202:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:114>
		bool L_65 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing;
		if (L_65)
		{
			goto IL_0240;
		}
	}
	{
		bool L_66;
		L_66 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 0, NULL);
		if (!L_66)
		{
			goto IL_0240;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:116>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:117>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_67 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth);
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointAnyFingerCountCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointAnyFingerCountCenter;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70;
		L_70 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = ScreenDepth_ConvertDelta_m2557381CA96262140FFA39D459AEAD108C2B1A7A(L_67, L_68, L_69, L_70, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		float L_72 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___maxTranslationSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_71, L_72, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta = L_73;
	}

IL_0240:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:124>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_74, L_75, NULL);
		V_2 = L_76;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:125>
		float L_77;
		L_77 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_78 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply(L_77, L_78));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:126>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		float L_80 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_79, L_80, NULL);
		V_2 = L_81;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:128>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_82, L_83, NULL);
		V_4 = L_84;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:132>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_85, L_86, NULL);
		V_5 = L_87;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:134>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_88 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_89, L_90, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_88, L_91, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_92, L_93, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_94;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:135>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_95 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_96 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_97;
		L_97 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_95, L_96, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation = L_97;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:137>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99;
		L_99 = VirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(67, __this, L_98);
		V_6 = L_99;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:138>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100 = V_6;
		float L_101 = L_100.___x;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch = L_101;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:139>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_6;
		float L_103 = L_102.___y;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw = L_103;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:141>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_105 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = VirtualFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(54, __this, L_104, L_105);
		V_7 = L_106;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:142>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_107);
		V_8 = L_108;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:149>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_8;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset = L_109;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:157>
		bool L_110 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing;
		if (!L_110)
		{
			goto IL_0323;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:159>
		VirtualActionInvoker0::Invoke(80, __this);
	}

IL_0323:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:162>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_112 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		float L_113 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_111, L_112, L_113);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_114;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:171>
		VirtualActionInvoker0::Invoke(49, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:173>
		return;
	}
}
// Method Definition Index: 54488
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_SetSizeByDistance_mBC7DE819F563B85E9F6790A86409CE45DF307CF7 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, float ___0_d, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:183>
		float L_0 = ___0_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_2 = L_1->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_4 = L_3->___y;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_0, (0.400000006f))), L_2, L_4, NULL);
		__this->___finalSize = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:184>
		return;
	}
}
// Method Definition Index: 54489
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOrthoBase_CalculateClampedDistance_mDA4B9EDBB2A756F0DCC79A2827B608C48F494679 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, float ___0_distance, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:188>
		float L_0 = ___0_distance;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_2 = L_1->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_4 = L_3->___y;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_multiply(L_0, (0.400000006f))), L_2, L_4, NULL);
		__this->___finalSize = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:189>
		float L_6 = ___0_distance;
		return L_6;
	}
}
// Method Definition Index: 54490
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOrthoBase_GetDistanceFromSize_mC2202567822B0357A00FAFAE7C7B3BC6A4C1DEC7 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:198>
		float L_0 = __this->___finalSize;
		return ((float)(L_0/(0.400000006f)));
	}
}
// Method Definition Index: 54491
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_ApplyToCamera_m0C8F7B479E4F1118DD5A64E92DC7982FB72156E5 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:207>
		bool L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___standalone;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:208>
		return;
	}

IL_0009:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:210>
		CameraBase_ApplyToCamera_m7AC906E16988891AD1480ED4BE0F41E7D4E88D53(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:212>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		float L_2 = __this->___finalSize;
		NullCheck(L_1);
		Camera_set_orthographicSize_m76DD021032ACB3DDBD052B75EC66DCE3A7295A5C(L_1, L_2, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:213>
		return;
	}
}
// Method Definition Index: 54492
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraOrthoBase_GetMatrix_m45C6299B724F13EE810B791173C45DAA249A856D (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:221>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_0, NULL);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:222>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_2, NULL);
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:222>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		NullCheck(L_4);
		float L_5;
		L_5 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_4, NULL);
		V_2 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:223>
		float L_6 = __this->___finalSize;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_8 = L_7->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_9 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_10 = L_9->___y;
		float L_11;
		L_11 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, L_8, L_10, NULL);
		__this->___finalSize = L_11;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:224>
		float L_12 = __this->___finalSize;
		float L_13 = V_0;
		float L_14 = __this->___finalSize;
		float L_15 = V_0;
		float L_16 = __this->___finalSize;
		float L_17 = __this->___finalSize;
		float L_18 = V_1;
		float L_19 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_20;
		L_20 = Matrix4x4_Ortho_mB42622C6600D70BF8208B879E48BCB03844EEFCF(((float)il2cpp_codegen_multiply(((-L_12)), L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)), ((-L_16)), L_17, L_18, L_19, NULL);
		return L_20;
	}
}
// Method Definition Index: 54493
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_SetPositionByOffset_mB74F13F4D9C99A1B0E64EEAA43E951475C9B18D5 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:232>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		float L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_0, L_1, L_2);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:233>
		return;
	}
}
// Method Definition Index: 54494
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_SetResetValues_m196307F53D16B4B43CCA1DC0029B44ED7E4F2167 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, float ___2_size, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:243>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_offset;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:244>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_rotation;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:245>
		float L_2 = ___2_size;
		__this->___initSize = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:246>
		return;
	}
}
// Method Definition Index: 54495
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_FocusCamera_m4714B5043593E28130467E11EBC5025911EA03B3 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, bool ___0_changeOffsetPosition, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetOffsetPosition, bool ___2_changeDistance, float ___3_targetDistanceOrSize, bool ___4_changeRotation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_targetRotation, bool ___6_allowYOffsetFromGround, bool ___7_instant, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:270>
		bool L_0 = ___7_instant;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:272>
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_1 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_1, L_2, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:273>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_3 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize);
		float L_4 = __this->___finalSize;
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_3, L_4, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:274>
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_5 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		il2cpp_codegen_runtime_class_init_inline(QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		QuaternionSpring_Reset_m90F16DB331DC1D338F3A52F022E75F7BF1204EAF(L_5, L_6, NULL);
		goto IL_005f;
	}

IL_0039:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:278>
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_7 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_targetOffsetPosition;
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_7, L_8, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:279>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_9 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize);
		float L_10 = ___3_targetDistanceOrSize;
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_9, L_10, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:280>
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_11 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___5_targetRotation;
		il2cpp_codegen_runtime_class_init_inline(QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		QuaternionSpring_Reset_m90F16DB331DC1D338F3A52F022E75F7BF1204EAF(L_11, L_12, NULL);
	}

IL_005f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:283>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:284>
		bool L_13 = ___0_changeOffsetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_targetOffsetPosition;
		bool L_15 = ___2_changeDistance;
		float L_16 = ___3_targetDistanceOrSize;
		bool L_17 = ___4_changeRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___5_targetRotation;
		bool L_19 = ___6_allowYOffsetFromGround;
		bool L_20 = ___7_instant;
		CameraBase_FocusCamera_m2C61085EA794A82D45E00D816C3746A82F1CC2EF(__this, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:285>
		return;
	}
}
// Method Definition Index: 54496
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_FocusCameraOnGameObject_m77D39F3C7F3174683ED20EDB86E9A528BAF1773B (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, bool ___1_allowYOffsetFromGround, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:295>
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_0 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_0, L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:296>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_2 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize);
		float L_3 = __this->___finalSize;
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_2, L_3, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:298>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_go;
		bool L_5 = ___1_allowYOffsetFromGround;
		CameraBase_FocusCameraOnGameObject_mFA2D413C7681C59960BABD4840B8E55D3C15D866(__this, L_4, L_5, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:299>
		return;
	}
}
// Method Definition Index: 54497
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase_HandleFocus_mFDE0AC343B0ABF4F2E174A8B22F98348F85194EA (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:308>
		bool L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:309>
		return;
	}

IL_0009:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:311>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetGo;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_00e2;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:313>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetGo;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4;
		L_4 = GameObjectExtensions_GetBoundsRecursive_mD19CC05A986BD107373450158ACF4CE78F707B01(L_3, NULL);
		V_0 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:315>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_7;
		L_7 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_10;
		L_10 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:316>
		return;
	}

IL_004d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:319>
		bool L_11 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___allowYOffsetFromGround;
		if (!L_11)
		{
			goto IL_0083;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:321>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&V_0), NULL);
		float L_13 = L_12.___y;
		V_3 = L_13;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:322>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline((&V_0), NULL);
		float L_16 = L_15.___y;
		float L_17 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_14, ((float)il2cpp_codegen_add(L_16, L_17)), NULL);
		Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F_inline((&V_0), L_18, NULL);
	}

IL_0083:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:325>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&V_0), NULL);
		float L_20 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_19, L_20, NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B_inline((&V_0), L_21, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:327>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline((&V_0), NULL);
		V_1 = L_22;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:329>
		float L_23;
		L_23 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_24 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusRadiusMultiplier;
		V_2 = ((float)il2cpp_codegen_multiply(L_23, L_24));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:331>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&V_0), NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetPosition = L_25;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:332>
		float L_26 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_28 = L_27->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___sizeMinMax);
		float L_30 = L_29->___y;
		float L_31;
		L_31 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_26, L_28, L_30, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetDistanceOrSize = L_31;
	}

IL_00e2:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:335>
		bool L_32 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___enableDistanceChange;
		if (!L_32)
		{
			goto IL_0122;
		}
	}
	{
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_33 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize);
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = FloatSpring_get_Completed_m46A63AA9BABB240EEC5FE745D4513C46E1860F44_inline(L_33, NULL);
		if (L_34)
		{
			goto IL_0122;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:337>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:338>
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_35 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove;
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_36 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize);
		float L_37 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetDistanceOrSize;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_38 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_38, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 74)), NULL);
		NullCheck(L_35);
		float L_39;
		L_39 = Springs_Update_m472F2B3193B80FBA83E28788CE3CF1EAB3FB00F9(L_35, L_36, L_37, L_38, (bool)0, NULL);
		__this->___finalSize = L_39;
	}

IL_0122:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:340>
		bool L_40 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___enableRotationChange;
		if (!L_40)
		{
			goto IL_018e;
		}
	}
	{
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_41 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation);
		il2cpp_codegen_runtime_class_init_inline(QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = QuaternionSpring_get_Completed_m53EFA3AF95D3BED1944C6F14C6D938CB976CF3A2_inline(L_41, NULL);
		if (L_42)
		{
			goto IL_018e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:342>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:343>
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_43 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove;
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_44 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetRotation;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_46 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_46, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 74)), NULL);
		NullCheck(L_43);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Springs_Update_mA3BEF1C7C44DF42EF0A4616590269BAE02B6ACBF(L_43, L_44, L_45, L_46, (bool)0, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation = L_47;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:344>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_48 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_48, NULL);
		float L_50 = L_49.___x;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch = L_50;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:345>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_51 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_51, NULL);
		float L_53 = L_52.___y;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw = L_53;
	}

IL_018e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:347>
		bool L_54 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___enablePositionChange;
		if (!L_54)
		{
			goto IL_01d9;
		}
	}
	{
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_55 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveOffset);
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Vector3Spring_get_Completed_m03A950D73A3F16E959A17BD0F5A246358A657D23_inline(L_55, NULL);
		if (L_56)
		{
			goto IL_01d9;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:349>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:350>
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_57 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove;
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_58 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetPosition;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_60 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_60, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 74)), NULL);
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Springs_Update_m78DDCFA3F1C358969A5549B0D7927D8065B36897(L_57, L_58, L_59, L_60, (bool)0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = L_61;
		V_4 = L_62;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointCameraCenter = L_62;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = V_4;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset = L_63;
	}

IL_01d9:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:354>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		float L_66 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_64, L_65, L_66);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_67;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:356>
		return;
	}
}
// Method Definition Index: 54498
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrthoBase__ctor_mEE179738DF12DE8BCF73EC11F20F0A06897E35E9 (CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:14>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (1.0f), (12.0f), NULL);
		__this->___sizeMinMax = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:15>
		__this->___finalSize = (5.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:19>
		__this->___initSize = (6.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:20>
		__this->___initDistance = (10.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraOrthoBase.cs:23>
		__this->___fixedDistance = (30.0f);
		CameraBase__ctor_mEB80C1963F42961B1479561D58B03FB1FE337CD3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54499
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraPerspBase_get_Fov_m162CA7472DF481E20D45907D660F96F598470141 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:28>
		float L_0 = __this->___fov;
		return L_0;
	}
}
// Method Definition Index: 54500
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_Init_mA6013685173136DDA8C4AD24CC3DA0450ED1C0BC (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:37>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_0, NULL);
		__this->___fov = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:38>
		float L_2 = __this->___initDistance;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:39>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_4, L_5, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset = L_6;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:42>
		CameraBase_Init_mC1A3D3A7A83BBC74EB67EFAA4C1B0C29B0505932(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:43>
		return;
	}
}
// Method Definition Index: 54501
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_Update_mBF1C1416F3265464690CAF3F4F3EFAA99AA5B7C6 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* G_B22_0 = NULL;
	CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* G_B21_0 = NULL;
	float G_B23_0 = 0.0f;
	CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* G_B23_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:51>
		bool L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___disableMoves;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:52>
		return;
	}

IL_0009:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:54>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_1 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___TwoFingerFilter;
		NullCheck(L_1);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_2;
		L_2 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_1, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:55>
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_3 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___OneFingerFilter;
		NullCheck(L_3);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_4;
		L_4 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_3, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:57>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.5f), (0.5f), (0.0f), NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Camera_ViewportToScreenPoint_m014E001B50C96CDE5AE5055B597DAA8DE7113023(L_5, L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_7, NULL);
		V_0 = L_8;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:59>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_9 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_9, L_10, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_11);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointCameraCenter = L_12;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:60>
		V_1 = (1.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:62>
		V_2 = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:64>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta = L_13;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:65>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_14 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointAnyFingerCountCenter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_14, L_15, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_16);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter = L_17;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:66>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot = L_18;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:68>
		bool L_19;
		L_19 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 1, NULL);
		if (!L_19)
		{
			goto IL_00da;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:70>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9(NULL);
		CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA(__this, L_20, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:71>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(63, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation = L_21;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:72>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		float L_24 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_22, L_23, L_24);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_25;
	}

IL_00da:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:75>
		bool L_26;
		L_26 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 2, NULL);
		if (!L_26)
		{
			goto IL_00fc;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:77>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9(NULL);
		CameraBase_RotateFromVector_m3A383BB525A65E444B0CA3EEA3A69BE7BC97A4BA(__this, L_27, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:78>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(63, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation = L_28;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:80>
		V_2 = (bool)1;
	}

IL_00fc:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:83>
		bool L_29;
		L_29 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 0, NULL);
		if (L_29)
		{
			goto IL_010e;
		}
	}
	{
		bool L_30;
		L_30 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 2, NULL);
		if (!L_30)
		{
			goto IL_0114;
		}
	}

IL_010e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:85>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_31 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___pinchRatio;
		V_1 = L_31;
	}

IL_0114:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:89>
		bool L_32;
		L_32 = CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B(__this, 1, NULL);
		if (!L_32)
		{
			goto IL_013d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:91>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_33;
		L_33 = CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7(NULL);
		V_1 = L_33;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:92>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_34 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_34, L_35, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_36);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter = L_37;
	}

IL_013d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:96>
		bool L_38;
		L_38 = CameraBase_IsInputMatching_mF1647E0E0048D09F6B81748D113B472CAA4E934B(__this, 0, NULL);
		if (!L_38)
		{
			goto IL_016a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:98>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_39;
		L_39 = CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7(NULL);
		V_1 = L_39;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:99>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_40 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth);
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = BaseTouchInput_GetMousePosition_m0977CDAAA83BF76091725A27ACB4C50840808D87(NULL);
		il2cpp_codegen_runtime_class_init_inline(ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_40, L_41, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_42);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter = L_43;
	}

IL_016a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:105>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointCameraCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = __this->___minMaxDistance;
		float L_47 = V_1;
		float L_48;
		L_48 = CameraBase_CalculateClampedDistance_m8FEFC176B548CE1ACD25C2E01A7153AAC48CB894(__this, L_44, L_45, L_46, L_47, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance = L_48;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:107>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:108>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minMaxDistance);
		float L_50 = L_49->___y;
		float L_51 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		if ((!(((float)L_50) == ((float)L_51))))
		{
			goto IL_01a4;
		}
	}
	{
		float L_52 = V_1;
		if ((((float)L_52) > ((float)(1.0f))))
		{
			goto IL_01bf;
		}
	}

IL_01a4:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_53 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minMaxDistance);
		float L_54 = L_53->___x;
		float L_55 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		if ((!(((float)L_54) == ((float)L_55))))
		{
			goto IL_01df;
		}
	}
	{
		float L_56 = V_1;
		if ((!(((float)L_56) < ((float)(1.0f)))))
		{
			goto IL_01df;
		}
	}

IL_01bf:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:110>
		V_1 = (1.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:111>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_57 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = ScreenDepth_Convert_m880D9523F9515845D3BF8C5BC6EFF66918F87073(L_57, L_58, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_59);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter = L_60;
	}

IL_01df:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:113>
		bool L_61;
		L_61 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 0, NULL);
		if (L_61)
		{
			goto IL_01f1;
		}
	}
	{
		bool L_62;
		L_62 = CameraBase_IsInputMatching_m8A0C3EBFD106108CA8F164FA61ED810E2F088237(__this, 1, NULL);
		if (!L_62)
		{
			goto IL_0216;
		}
	}

IL_01f1:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:115>
		bool L_63 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___allowYawRotation;
		if (L_63)
		{
			G_B22_0 = __this;
			goto IL_0201;
		}
		G_B21_0 = __this;
	}
	{
		G_B23_0 = (0.0f);
		G_B23_1 = G_B21_0;
		goto IL_0206;
	}

IL_0201:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_64 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twistDegrees;
		G_B23_0 = L_64;
		G_B23_1 = G_B22_0;
	}

IL_0206:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = VirtualFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(70, __this);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_66;
		L_66 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80_inline(G_B23_0, L_65, NULL);
		NullCheck(G_B23_1);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)G_B23_1)->___twistRot = L_66;
	}

IL_0216:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:118>
		bool L_67 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing;
		if (L_67)
		{
			goto IL_0254;
		}
	}
	{
		bool L_68;
		L_68 = CameraBase_IsInputMatching_m3F4E90B0E6518B65E22BE189ADD3B8C6AD5E7453(__this, 0, NULL);
		if (!L_68)
		{
			goto IL_0254;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:120>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562* L_69 = (ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___HeightScreenDepth);
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointAnyFingerCountCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointAnyFingerCountCenter;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72;
		L_72 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = ScreenDepth_ConvertDelta_m2557381CA96262140FFA39D459AEAD108C2B1A7A(L_69, L_70, L_71, L_72, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		float L_74 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___maxTranslationSpeed;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_73, L_74, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta = L_75;
	}

IL_0254:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:123>
		bool L_76 = V_2;
		if (L_76)
		{
			goto IL_035a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:125>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_77, L_78, NULL);
		V_3 = L_79;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:126>
		float L_80;
		L_80 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		float L_81 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply(L_80, L_81));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:127>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		float L_83 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_82, L_83, NULL);
		V_3 = L_84;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:129>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_85, L_86, NULL);
		V_5 = L_87;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:130>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_88, L_89, NULL);
		V_6 = L_90;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:132>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_91 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointFingersCenter;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_92, L_93, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_91, L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_95, L_96, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_97;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:133>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_98 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___twistRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_99 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_100;
		L_100 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_98, L_99, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation = L_100;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:135>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_101 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_101, NULL);
		float L_103 = L_102.___x;
		float L_104;
		L_104 = CameraBase_NormalizeAngle_m9884625DC5FF8EB6497F16A2BC0309F6DE9B6BCF(__this, L_103, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch = L_104;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:136>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_105 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_105, NULL);
		float L_107 = L_106.___y;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw = L_107;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:138>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_109 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = VirtualFuncInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(54, __this, L_108, L_109);
		V_7 = L_110;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:139>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_111);
		V_8 = L_112;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:141>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_8;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset = L_113;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:144>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_116 = __this->___minMaxDistance;
		float L_117;
		L_117 = CameraBase_CalculateClampedDistance_m8FEFC176B548CE1ACD25C2E01A7153AAC48CB894(__this, L_114, L_115, L_116, (1.0f), NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance = L_117;
	}

IL_035a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:147>
		bool L_118 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing;
		if (!L_118)
		{
			goto IL_0368;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:149>
		CameraPerspBase_HandleFocus_m8CDD1B5FD048A2097E9150D650B677E552FC8FD9(__this, NULL);
	}

IL_0368:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:152>
		bool L_119 = V_2;
		if (L_119)
		{
			goto IL_03ad;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:154>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_121 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		float L_122 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123;
		L_123 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_120, L_121, L_122);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_123;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:156>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_125 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		float L_126 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_124, L_125, L_126);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_127;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:159>
		VirtualActionInvoker0::Invoke(49, __this);
	}

IL_03ad:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:161>
		return;
	}
}
// Method Definition Index: 54502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 CameraPerspBase_GetMatrix_m36F91A727025674955AC9F85E0DF7B0B6013052C (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:186>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_0, NULL);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:187>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_2, NULL);
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:187>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		NullCheck(L_4);
		float L_5;
		L_5 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_4, NULL);
		V_2 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:188>
		float L_6 = __this->___fov;
		float L_7 = V_0;
		float L_8 = V_1;
		float L_9 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10;
		L_10 = Matrix4x4_Perspective_m08BFCC6D4F8C7D51CEFBB8F3425954125BF9A743(L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// Method Definition Index: 54503
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraPerspBase_CalculateClampedDistance_m086D888DF3E6537F4EECF0CD1D66AA4523A1F387 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, float ___0_distance, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:192>
		float L_0 = ___0_distance;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minMaxDistance);
		float L_2 = L_1->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minMaxDistance);
		float L_4 = L_3->___y;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_2, L_4, NULL);
		return L_5;
	}
}
// Method Definition Index: 54504
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_SetPositionByDistance_mF190D5F7B993844B1B8448587D28F4F3893E25A4 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, float ___0_v, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:200>
		float L_0 = ___0_v;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minMaxDistance);
		float L_2 = L_1->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___minMaxDistance);
		float L_4 = L_3->___y;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_0, L_2, L_4, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:201>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		float L_8 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_6, L_7, L_8);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:202>
		return;
	}
}
// Method Definition Index: 54505
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_SetResetValues_m76C63038D5793D8AE2D71770192D58FA622E6AFF (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, float ___2_distanceOrSize, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:214>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_offset;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:215>
		float L_1 = ___2_distanceOrSize;
		__this->___initDistance = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:216>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rotation;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:217>
		return;
	}
}
// Method Definition Index: 54506
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_FocusCamera_mC8E074E155A0DA99C54B7ACB0E39D021781AD6A3 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, bool ___0_changeOffsetPostion, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_targetOffsetPosition, bool ___2_changeDistance, float ___3_targetDistanceOrSize, bool ___4_changeRotation, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___5_targetRotation, bool ___6_allowYOffsetFromGround, bool ___7_instant, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:240>
		bool L_0 = ___7_instant;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:242>
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_1 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_1, L_2, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:243>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_3 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize);
		float L_4 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_3, L_4, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:244>
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_5 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		il2cpp_codegen_runtime_class_init_inline(QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		QuaternionSpring_Reset_m90F16DB331DC1D338F3A52F022E75F7BF1204EAF(L_5, L_6, NULL);
		goto IL_005f;
	}

IL_0039:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:248>
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_7 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_targetOffsetPosition;
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_7, L_8, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:249>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_9 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize);
		float L_10 = ___3_targetDistanceOrSize;
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_9, L_10, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:250>
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_11 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___5_targetRotation;
		il2cpp_codegen_runtime_class_init_inline(QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		QuaternionSpring_Reset_m90F16DB331DC1D338F3A52F022E75F7BF1204EAF(L_11, L_12, NULL);
	}

IL_005f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:253>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:254>
		bool L_13 = ___0_changeOffsetPostion;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_targetOffsetPosition;
		bool L_15 = ___2_changeDistance;
		float L_16 = ___3_targetDistanceOrSize;
		bool L_17 = ___4_changeRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___5_targetRotation;
		bool L_19 = ___6_allowYOffsetFromGround;
		bool L_20 = ___7_instant;
		CameraBase_FocusCamera_m2C61085EA794A82D45E00D816C3746A82F1CC2EF(__this, L_13, L_14, L_15, L_16, L_17, L_18, L_19, L_20, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:256>
		return;
	}
}
// Method Definition Index: 54507
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_FocusCameraOnGameObject_mDB882AB8B21D86923FD156A22DD1A64BAE7FE95C (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, bool ___1_allowYOffsetFromGround, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:266>
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_0 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		Vector3Spring_Reset_m3154EDA320E2A5A5174005745FC37E1B19A7B110(L_0, L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:267>
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_2 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize);
		float L_3 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		FloatSpring_Reset_m37C193E1483A465ADD2101A073922DE647358885(L_2, L_3, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:269>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_go;
		bool L_5 = ___1_allowYOffsetFromGround;
		CameraBase_FocusCameraOnGameObject_mFA2D413C7681C59960BABD4840B8E55D3C15D866(__this, L_4, L_5, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:270>
		return;
	}
}
// Method Definition Index: 54508
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase_HandleFocus_m8CDD1B5FD048A2097E9150D650B677E552FC8FD9 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:278>
		bool L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___isFocusing;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:279>
		return;
	}

IL_0009:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:281>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetGo;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_014f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:283>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetGo;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_4;
		L_4 = GameObjectExtensions_GetBoundsRecursive_mD19CC05A986BD107373450158ACF4CE78F707B01(L_3, NULL);
		V_0 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:285>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_7;
		L_7 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_10;
		L_10 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:286>
		return;
	}

IL_004d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:289>
		bool L_11 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___allowYOffsetFromGround;
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:291>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&V_0), NULL);
		float L_13 = L_12.___y;
		V_6 = L_13;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:292>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline((&V_0), NULL);
		float L_16 = L_15.___y;
		float L_17 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_14, ((float)il2cpp_codegen_add(L_16, L_17)), NULL);
		Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F_inline((&V_0), L_18, NULL);
	}

IL_0085:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:295>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&V_0), NULL);
		float L_20 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_19, L_20, NULL);
		Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B_inline((&V_0), L_21, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:296>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline((&V_0), NULL);
		V_1 = L_22;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:298>
		float L_23;
		L_23 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		float L_24 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusRadiusMultiplier;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:300>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		NullCheck(L_25);
		float L_26;
		L_26 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_25, NULL);
		V_2 = L_26;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:301>
		float L_27 = __this->___fov;
		float L_28;
		L_28 = tanf(((float)(((float)il2cpp_codegen_multiply(L_27, (0.0174532924f)))/(2.0f))));
		float L_29 = V_2;
		float L_30;
		L_30 = atanf(((float)il2cpp_codegen_multiply(L_28, L_29)));
		V_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_30)), (57.2957802f)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:303>
		float L_31 = __this->___fov;
		float L_32 = V_3;
		float L_33;
		L_33 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_31, L_32, NULL);
		V_4 = L_33;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:304>
		float L_34 = V_4;
		float L_35;
		L_35 = sinf(((float)(((float)il2cpp_codegen_multiply(L_34, (0.0174532924f)))/(2.0f))));
		V_5 = ((float)(((float)il2cpp_codegen_multiply(L_23, L_24))/L_35));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:306>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&V_0), NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetPosition = L_36;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:307>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = VirtualFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(51, __this, L_37);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetPosition = L_38;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:309>
		float L_39 = V_5;
		float L_40 = __this->___focusDistanceMultiplier;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetDistanceOrSize = ((float)il2cpp_codegen_multiply(L_39, L_40));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:310>
		float L_41 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetDistanceOrSize;
		float L_42;
		L_42 = VirtualFuncInvoker1< float, float >::Invoke(57, __this, L_41);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetDistanceOrSize = L_42;
	}

IL_014f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:314>
		bool L_43 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___enableDistanceChange;
		if (!L_43)
		{
			goto IL_018f;
		}
	}
	{
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_44 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize);
		il2cpp_codegen_runtime_class_init_inline(FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = FloatSpring_get_Completed_m46A63AA9BABB240EEC5FE745D4513C46E1860F44_inline(L_44, NULL);
		if (L_45)
		{
			goto IL_018f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:316>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:317>
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_46 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove;
		FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* L_47 = (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveDistanceOrSize);
		float L_48 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetDistanceOrSize;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_49 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_49, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 74)), NULL);
		NullCheck(L_46);
		float L_50;
		L_50 = Springs_Update_m472F2B3193B80FBA83E28788CE3CF1EAB3FB00F9(L_46, L_47, L_48, L_49, (bool)0, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance = L_50;
	}

IL_018f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:322>
		bool L_51 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___enableRotationChange;
		if (!L_51)
		{
			goto IL_01fb;
		}
	}
	{
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_52 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation);
		il2cpp_codegen_runtime_class_init_inline(QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = QuaternionSpring_get_Completed_m53EFA3AF95D3BED1944C6F14C6D938CB976CF3A2_inline(L_52, NULL);
		if (L_53)
		{
			goto IL_01fb;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:324>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:325>
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_54 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove;
		QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* L_55 = (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveRotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetRotation;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_57 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_57, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 74)), NULL);
		NullCheck(L_54);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58;
		L_58 = Springs_Update_mA3BEF1C7C44DF42EF0A4616590269BAE02B6ACBF(L_54, L_55, L_56, L_57, (bool)0, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation = L_58;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:326>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_59 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_59, NULL);
		float L_61 = L_60.___x;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch = L_61;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:327>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_62 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_62, NULL);
		float L_64 = L_63.___y;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw = L_64;
	}

IL_01fb:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:329>
		bool L_65 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___enablePositionChange;
		if (!L_65)
		{
			goto IL_0246;
		}
	}
	{
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_66 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveOffset);
		il2cpp_codegen_runtime_class_init_inline(Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767_il2cpp_TypeInfo_var);
		bool L_67;
		L_67 = Vector3Spring_get_Completed_m03A950D73A3F16E959A17BD0F5A246358A657D23_inline(L_66, NULL);
		if (L_67)
		{
			goto IL_0246;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:331>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:332>
		Springs_t6F64552F04126E3A001B57EC6F1BDE8D18D0C13D* L_68 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMove;
		Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* L_69 = (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusMoveOffset);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___focusTargetPosition;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_71 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_71, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 74)), NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Springs_Update_m78DDCFA3F1C358969A5549B0D7927D8065B36897(L_68, L_69, L_70, L_71, (bool)0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = L_72;
		V_7 = L_73;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___worldPointCameraCenter = L_73;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_7;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset = L_74;
	}

IL_0246:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:337>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_76 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		float L_77 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_75, L_76, L_77);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_78;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:339>
		return;
	}
}
// Method Definition Index: 54509
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspBase__ctor_m62881D30A4D8F9F541C4036592B2AEAC0CA12EC6 (CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:13>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (3.0f), (30.0f), NULL);
		__this->___minMaxDistance = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:14>
		__this->___initDistance = (10.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:19>
		__this->___fov = (55.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspBase.cs:221>
		__this->___focusDistanceMultiplier = (1.0f);
		CameraBase__ctor_mEB80C1963F42961B1479561D58B03FB1FE337CD3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspective_Init_m5C8CF0F65BD0D7CF736EF9169829B18F98EAB7D3 (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:16>
		CameraPerspBase_Init_mA6013685173136DDA8C4AD24CC3DA0450ED1C0BC(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:19>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_0 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:20>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(58, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:21>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		float L_9;
		L_9 = CameraBase_CalculateDistance_m0A1074DB880952743FE1D7217B8314901ABB0529(__this, L_6, L_8, NULL);
		((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___initDistance = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:22>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		float L_14 = ((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___initDistance;
		float L_15 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = VirtualFuncInvoker4< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float, float >::Invoke(55, __this, L_11, L_13, L_14, L_15);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset = L_16;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:24>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_17 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation);
		float L_18 = L_17->___x;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch = L_18;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:25>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_19 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation);
		float L_20 = L_19->___y;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw = L_20;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:27>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset = L_21;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:28>
		float L_22 = ((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___initDistance;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___minMaxDistance;
		float L_24;
		L_24 = CameraBase_CalculateClampedDistance_mF3B8F73A1F51A167E0FD7FF18870A6C249930B09(__this, L_22, L_23, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance = L_24;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:29>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(63, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation = L_25;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:30>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		float L_28 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_26, L_27, L_28);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_29;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:33>
		return;
	}
}
// Method Definition Index: 54511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraPerspective_GetInitialRotation_m5EC870A12B1E6E8460F75D634ECF5701F08DDE9F (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:42>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation);
		float L_1 = L_0->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation);
		float L_3 = L_2->___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_1, L_3, (0.0f), NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:43>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation;
		return L_5;
	}
}
// Method Definition Index: 54512
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspective_SetResetValues_m06CEF371DB68E86DF49B7E5B484DE3E3DCA8A87A (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, float ___2_distance, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:54>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_offset;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:55>
		float L_1 = ___2_distance;
		((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___initDistance = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:56>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___1_rotation), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_2, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:57>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(58, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:59>
		return;
	}
}
// Method Definition Index: 54513
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspective_ResetCamera_mC1D88C662A3D08CB17504656E7EFD8F19C99BFFF (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:66>
		CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:67>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset;
		float L_1 = ((CameraPerspBase_t33A7FB6BDC273E57240F9A3CE11BECB2DD655470*)__this)->___initDistance;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		CameraBase_FocusCamera_m81F0AFD126E638F130BACC286FD162000291078F(__this, L_0, L_1, L_4, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:68>
		return;
	}
}
// Method Definition Index: 54514
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspective_OnBeforeSwitchPerspective_m32AFB89EE21F0C108156D72582B02F9C29DC39F7 (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, bool ___0_orthoMode, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:78>
		bool L_0 = ___0_orthoMode;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:80>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation);
		float L_2 = L_1->___x;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:81>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation);
		float L_4 = L_3->___y;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:82>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(63, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:83>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation;
		float L_8 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = VirtualFuncInvoker3< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, float >::Invoke(56, __this, L_6, L_7, L_8);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_9;
	}

IL_004f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraPerspective.cs:85>
		return;
	}
}
// Method Definition Index: 54515
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPerspective__ctor_m0D7A2DB6B98731933D17A744EE2759FEA7580359 (CameraPerspective_t5692775750EF38D9C3FBB6CADC75C81EC1022E5A* __this, const RuntimeMethod* method) 
{
	{
		CameraPerspBase__ctor_m62881D30A4D8F9F541C4036592B2AEAC0CA12EC6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54516
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTopDownOrtho_Init_mC1B473F96DE9863106614689E008EF6C44FB5A34 (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:17>
		CameraOrthoBase_Init_mC35BF62EA51F7D23B9710BA605117A720A32C2C9(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:18>
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___cam;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_0, NULL);
		float L_2 = L_1;
		V_0 = L_2;
		((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___finalSize = L_2;
		float L_3 = V_0;
		((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___initSize = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:19>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		V_1 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		float L_8 = L_7.___y;
		L_4->___y = L_8;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:20>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___groundHeight;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_10, L_11, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset = L_12;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:21>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		float L_17;
		L_17 = CameraBase_CalculateDistance_m0A1074DB880952743FE1D7217B8314901ABB0529(__this, L_14, L_16, NULL);
		((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___initDistance = L_17;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:23>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset = L_18;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:24>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = ((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___fixedDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_20, L_21, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_22;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:25>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(58, __this);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalRotation = L_23;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:26>
		float L_24 = ((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___initDistance;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalDistance = L_24;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:28>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation);
		float L_26 = L_25->___x;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch = L_26;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:29>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation);
		float L_28 = L_27->___y;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw = L_28;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:31>
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___allowPitchRotation = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:32>
		return;
	}
}
// Method Definition Index: 54517
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTopDownOrtho_SetResetValues_m7ED168578A159A08DB60C77778EB38628503110F (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, float ___2_size, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:51>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_offset;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:53>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___1_rotation), NULL);
		float L_2 = L_1.___x;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentPitch = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:54>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&___1_rotation), NULL);
		float L_4 = L_3.___y;
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___currentYaw = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:56>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = VirtualFuncInvoker0< Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(58, __this);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:57>
		float L_6 = ___2_size;
		((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___initSize = L_6;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:58>
		return;
	}
}
// Method Definition Index: 54518
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTopDownOrtho_ResetCamera_mC47C90CD22D91E1D589474408BC624A666870F38 (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:66>
		CameraBase_StopFocus_mB0C5912B7B4388308B8E7335ACCBE70AF4C20715(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:67>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initOffset;
		float L_1 = ((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___initSize;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		CameraBase_FocusCamera_m81F0AFD126E638F130BACC286FD162000291078F(__this, L_0, L_1, L_4, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:68>
		return;
	}
}
// Method Definition Index: 54519
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraTopDownOrtho_GetInitialRotation_mD2D04782C0346C21658909A02AA0DF82CB5BBADC (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:79>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initialRotation);
		float L_1 = L_0->___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((90.0f), L_1, (0.0f), NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:80>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___initRotation;
		return L_3;
	}
}
// Method Definition Index: 54520
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTopDownOrtho_SetPositionByOffset_mC1254947AB560F7CBD3C947ED507B41BA972B9E7 (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:90>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalOffset;
		float L_1 = ((CameraOrthoBase_t1309AAD8B667C1305B4BBB618927523A6180BAB1*)__this)->___fixedDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = VectorExtensions_SetY_m37A8D81E5DF2AC5B72F86B29C157EE1AF7858753(L_0, L_1, NULL);
		((CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B*)__this)->___finalPosition = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraTopDownOrtho.cs:91>
		return;
	}
}
// Method Definition Index: 54521
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTopDownOrtho__ctor_m48EFE176F904A84E3E6FB6E5C3A9CB1E966911A8 (CameraTopDownOrtho_tBD2F9301184C0255AC7EA2F9D66A23F5B7223842* __this, const RuntimeMethod* method) 
{
	{
		CameraOrthoBase__ctor_mEE179738DF12DE8BCF73EC11F20F0A06897E35E9(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 54566
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* CameraInputs_get_Instance_m71526D6BAFCE84BF0F4AB17BE10E0A11D23B900C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:15>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* L_0 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 54567
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_set_Instance_mE10BB72E60ACCA88BABDA7E5B56AB8BB527F479B (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:15>
		CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 54568
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_get_ControlKey_m4D5859694F4EE06CF29E2F543AE86B376094B7FB (const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:16>
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0;
		L_0 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1;
		L_1 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Event_get_control_m1E363A7ABA4F2E8CF41C661A48D53D85D635D320(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_3;
		L_3 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)4))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// Method Definition Index: 54569
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_get_IsOverUI_mA35B492B68AC97BEC54A6636CA3E1C649DF6AE4C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:17>
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_2;
		L_2 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_2, NULL);
		return L_3;
	}

IL_0018:
	{
		return (bool)0;
	}
}
// Method Definition Index: 54570
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_ResetCamera_m66027D246CBDFF10D40FE84DA0222BFADD49444D (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:48>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:49>
		bool L_0 = __this->___enableShortcutKeys;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___resetCameraAction;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_3 = __this->___resetCameraAction;
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_5 = __this->___resetCameraAction;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F(L_6, NULL);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = CameraInputs_get_IsOverUI_mA35B492B68AC97BEC54A6636CA3E1C649DF6AE4C(NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_003e:
	{
		return (bool)0;
	}
}
// Method Definition Index: 54571
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_IsTap_m2537EC776A5CBBC6A2D59AE3CC1772BE6DC9DCAE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:58>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:59>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:60>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:61>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:62>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		bool L_0 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerTap;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BaseTouchInput_GetMouseWentDown_mD5B70606B4380CEB9C3755E17B447E2BDE09ADB6(1, NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BaseTouchInput_GetMouseWentUp_m295348A7C8B896581DEF557AA439D1AB77FB2E55(1, NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BaseTouchInput_GetMouseIsHeld_m32F0BFD66354E7A05A0273A1FD75D68F8B8D19B3(2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BaseTouchInput_GetMouseWentUp_m295348A7C8B896581DEF557AA439D1AB77FB2E55(2, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 54572
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_IsUp_m2A0696F06D2500E9AB2CFFBBFF5B4029C718EABB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:70>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:71>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:72>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:73>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:74>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		bool L_0 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerUp;
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = BaseTouchInput_GetMouseIsHeld_m32F0BFD66354E7A05A0273A1FD75D68F8B8D19B3(1, NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BaseTouchInput_GetMouseWentUp_m295348A7C8B896581DEF557AA439D1AB77FB2E55(1, NULL);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BaseTouchInput_GetMouseIsHeld_m32F0BFD66354E7A05A0273A1FD75D68F8B8D19B3(2, NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BaseTouchInput_GetMouseWentUp_m295348A7C8B896581DEF557AA439D1AB77FB2E55(2, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// Method Definition Index: 54573
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraInputs_GetScroll_mA83B03A6B438B78766AA88177C071DB5BF93E3A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:83>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CameraInputs_get_IsOverUI_mA35B492B68AC97BEC54A6636CA3E1C649DF6AE4C(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:83>
		return (1.0f);
	}

IL_000d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:85>
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = BaseTouchInput_GetMouseWheelAxis_mF511515A2688A74F3EB53FC3CEAAEC950BE4171F(NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// Method Definition Index: 54574
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_ChangePerspective_m5A0E25948B96834FD48C08DA79004BA211449024 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:96>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:97>
		bool L_0 = __this->___enableShortcutKeys;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___switchPerspectiveAction;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_3 = __this->___switchPerspectiveAction;
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_5 = __this->___switchPerspectiveAction;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_5, NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = InputAction_WasPressedThisFrame_m9D3F0284EB46EEB7F720DCC96BBDF027C9B6A75F(L_6, NULL);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = CameraInputs_get_IsOverUI_mA35B492B68AC97BEC54A6636CA3E1C649DF6AE4C(NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_003e:
	{
		return (bool)0;
	}
}
// Method Definition Index: 54575
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_ReleaseDrag_mC0FC90CD647676CE171C0D113518EC8E1B4B04FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:107>
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BaseTouchInput_GetMouseWentUp_m295348A7C8B896581DEF557AA439D1AB77FB2E55(0, NULL);
		return L_0;
	}
}
// Method Definition Index: 54576
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInputs_OptionPress_mD23DE6CF8BB9650C5B5E879CFCA7B0E81610B47B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:116>
		il2cpp_codegen_runtime_class_init_inline(BaseTouchInput_t2206B4BB4F2F09922D06B80A05951BE6E61F626B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BaseTouchInput_GetMouseWentDown_mD5B70606B4380CEB9C3755E17B447E2BDE09ADB6(1, NULL);
		return L_0;
	}
}
// Method Definition Index: 54577
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_OnDestroy_mAC535A3508F5910F826AAA4E4A5FDAC8AD69D134 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:124>
		Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* L_0 = (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451*)il2cpp_codegen_object_new(Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		Action_1__ctor_m14D287DE55FBAD276522DE3E4A38048C308489C8(L_0, __this, (intptr_t)((void*)CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		InputTouch_remove_OnFingerTap_m4A0A034A45AF5EE14EB056688A45799CC8132FFC(L_0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:125>
		Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* L_1 = (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451*)il2cpp_codegen_object_new(Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		Action_1__ctor_m14D287DE55FBAD276522DE3E4A38048C308489C8(L_1, __this, (intptr_t)((void*)CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952_RuntimeMethod_var), NULL);
		InputTouch_remove_OnFingerUp_m9267B7070BDDAF36B31BC9B439A53A19A515C8CE(L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:126>
		return;
	}
}
// Method Definition Index: 54578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_Awake_mD18D38D7284654A51A0E84A35B443B29DC5A8324 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:132>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		CameraInputs_set_Instance_mE10BB72E60ACCA88BABDA7E5B56AB8BB527F479B_inline(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:133>
		return;
	}
}
// Method Definition Index: 54579
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_OnEnable_mF0DE9B7BFE3474337F3754951EF4B591289C0D62 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* G_B4_0 = NULL;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* G_B3_0 = NULL;
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* G_B5_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:136>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:137>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___resetCameraAction;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___resetCameraAction;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___resetCameraAction;
		NullCheck(L_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_4, NULL);
		NullCheck(L_5);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_6;
		L_6 = InputAction_get_actionMap_m43B509A85057642A7DD0B89E4F27044ABB5B5E93(L_5, NULL);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_7 = L_6;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0032;
		}
		G_B3_0 = L_7;
	}
	{
		G_B5_0 = ((InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D*)(NULL));
		goto IL_0037;
	}

IL_0032:
	{
		NullCheck(G_B4_0);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_8;
		L_8 = InputActionMap_get_asset_mBE901C135AA146247F9A05D72116F8FF15063052_inline(G_B4_0, NULL);
		G_B5_0 = L_8;
	}

IL_0037:
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(G_B5_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:138>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_10 = __this->___resetCameraAction;
		NullCheck(L_10);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_11;
		L_11 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_10, NULL);
		NullCheck(L_11);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_12;
		L_12 = InputAction_get_actionMap_m43B509A85057642A7DD0B89E4F27044ABB5B5E93(L_11, NULL);
		NullCheck(L_12);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_13;
		L_13 = InputActionMap_get_asset_mBE901C135AA146247F9A05D72116F8FF15063052_inline(L_12, NULL);
		NullCheck(L_13);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_13, NULL);
	}

IL_0059:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:139>
		return;
	}
}
// Method Definition Index: 54580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_OnDisable_m75D5FE7685E54BFBADFF60D6F9DFCE1D529A55A0 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* G_B4_0 = NULL;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* G_B3_0 = NULL;
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* G_B5_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:142>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:143>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___resetCameraAction;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0059;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___resetCameraAction;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___resetCameraAction;
		NullCheck(L_4);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_4, NULL);
		NullCheck(L_5);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_6;
		L_6 = InputAction_get_actionMap_m43B509A85057642A7DD0B89E4F27044ABB5B5E93(L_5, NULL);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_7 = L_6;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_0032;
		}
		G_B3_0 = L_7;
	}
	{
		G_B5_0 = ((InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D*)(NULL));
		goto IL_0037;
	}

IL_0032:
	{
		NullCheck(G_B4_0);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_8;
		L_8 = InputActionMap_get_asset_mBE901C135AA146247F9A05D72116F8FF15063052_inline(G_B4_0, NULL);
		G_B5_0 = L_8;
	}

IL_0037:
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(G_B5_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:144>
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_10 = __this->___resetCameraAction;
		NullCheck(L_10);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_11;
		L_11 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_10, NULL);
		NullCheck(L_11);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_12;
		L_12 = InputAction_get_actionMap_m43B509A85057642A7DD0B89E4F27044ABB5B5E93(L_11, NULL);
		NullCheck(L_12);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_13;
		L_13 = InputActionMap_get_asset_mBE901C135AA146247F9A05D72116F8FF15063052_inline(L_12, NULL);
		NullCheck(L_13);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_13, NULL);
	}

IL_0059:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:145>
		return;
	}
}
// Method Definition Index: 54581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_Start_mF903E2A735BEF5137AD375F319521338F3DC6F62 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:151>
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966* L_0;
		L_0 = InputTouch_get_Instance_mF98A72985ED5C3B0D69164EDF150B1B16E4ACBFE(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:153>
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966* L_2;
		L_2 = InputTouch_get_Instance_mF98A72985ED5C3B0D69164EDF150B1B16E4ACBFE(NULL);
		il2cpp_codegen_runtime_class_init_inline(Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		NullCheck(L_2);
		InputTouch_set_UseMouse_m181F6A79E52F1A5AFD0A6768EB29A30A92D40C30_inline(L_2, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_001f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:155>
		Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* L_4 = (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451*)il2cpp_codegen_object_new(Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		Action_1__ctor_m14D287DE55FBAD276522DE3E4A38048C308489C8(L_4, __this, (intptr_t)((void*)CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		InputTouch_add_OnFingerTap_mE28ED09017617792EA25D4C96C8FBAF62EB134D4(L_4, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:156>
		Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451* L_5 = (Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451*)il2cpp_codegen_object_new(Action_1_tB7B823A4F6651C2D217790D54B98828E6B172451_il2cpp_TypeInfo_var);
		Action_1__ctor_m14D287DE55FBAD276522DE3E4A38048C308489C8(L_5, __this, (intptr_t)((void*)CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952_RuntimeMethod_var), NULL);
		InputTouch_add_OnFingerUp_m38024B5A702D266C57BDF2E5FD48F18A28957938(L_5, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:158>
		return;
	}
}
// Method Definition Index: 54582
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_Update_m7C902B1DD4F885A462CBEC35099FA9BDB0723140 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:165>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_0 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___TwoFingerFilter;
		NullCheck(L_0);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_1;
		L_1 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_0, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:166>
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_2 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___OneFingerFilter;
		NullCheck(L_2);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_3;
		L_3 = FingerFilter_UpdateAndGetFingers_m74692EEBE200EBDD749B35177EF9DC49C02BEE50(L_2, (bool)0, NULL);
		V_0 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:169>
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_4 = L_1;
		float L_5;
		L_5 = InputGesture_GetPinchScale_m3B5C9CDB58128EDFC3B4793C913209878CD14D27(L_4, (0.0f), NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___pinchScale = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:170>
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_6 = L_4;
		float L_7;
		L_7 = InputGesture_GetPinchRatio_mA711A31C55785168B582BB76B6AA1E6018673530(L_6, (0.0f), NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___pinchRatio = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:171>
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_8 = L_6;
		float L_9;
		L_9 = InputGesture_GetTwistDegrees_m3F813BD422EA2C954D5B935212A6D9B876DEF8E2(L_8, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twistDegrees = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:172>
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_10 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = InputGesture_GetLastScreenCenter_m7E5FBA384403965EB6A6B4A2AF9D061061392017(L_10, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointTwoFingersCenter = L_11;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:173>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = InputGesture_GetScreenCenter_mAD60BD11D7236D0C0D74A5E4E3F9824772CB9D35(L_10, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointTwoFingersCenter = L_12;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:174>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointTwoFingersCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointTwoFingersCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_13, L_14, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twoFingersScaledPixelDelta = L_15;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:175>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twoFingersScaledPixelDelta;
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		float L_17;
		L_17 = InputTouch_get_ScalingFactor_m3200F11A91C954EA2839EA6F622FC4A3D628E403(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_16, L_17, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twoFingersScaledPixelDelta = L_18;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:178>
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_19 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = InputGesture_GetLastScreenCenter_m7E5FBA384403965EB6A6B4A2AF9D061061392017(L_19, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointOneFingerCenter = L_20;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:179>
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_21 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = InputGesture_GetScreenCenter_mAD60BD11D7236D0C0D74A5E4E3F9824772CB9D35(L_21, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointOneFingerCenter = L_22;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:180>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointOneFingerCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointOneFingerCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_23, L_24, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___oneFingerScaledPixelDelta = L_25;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:181>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___oneFingerScaledPixelDelta;
		float L_27;
		L_27 = InputTouch_get_ScalingFactor_m3200F11A91C954EA2839EA6F622FC4A3D628E403(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_26, L_27, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___oneFingerScaledPixelDelta = L_28;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:184>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointTwoFingersCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_31;
		L_31 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_29, L_30, NULL);
		if (L_31)
		{
			goto IL_00d5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointTwoFingersCenter;
		G_B3_0 = L_32;
		goto IL_00da;
	}

IL_00d5:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointOneFingerCenter;
		G_B3_0 = L_33;
	}

IL_00da:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___screenPointAnyFingerCountCenter = G_B3_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:185>
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointTwoFingersCenter;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		bool L_36;
		L_36 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_34, L_35, NULL);
		if (L_36)
		{
			goto IL_00f7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointTwoFingersCenter;
		G_B6_0 = L_37;
		goto IL_00fc;
	}

IL_00f7:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointOneFingerCenter;
		G_B6_0 = L_38;
	}

IL_00fc:
	{
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___lastScreenPointAnyFingerCountCenter = G_B6_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:187>
		return;
	}
}
// Method Definition Index: 54583
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraInputs_GetFingerCount_m2DEC462E581245A894A2403795EE25F41E46E1EB (int32_t ___0_max, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5ECEB37CD56AE44DE04B948778915514D0F83B61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:196>
		il2cpp_codegen_runtime_class_init_inline(InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966_il2cpp_TypeInfo_var);
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_0;
		L_0 = InputTouch_GetFingers_mC6BCBC45460BF8CCC3C786E2091EE08C934EAA0D((bool)0, (bool)1, 0, (bool)1, NULL);
		V_0 = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:197>
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_2 = ___0_max;
		List_1_t0ACB02354B1DEDCF72031D8547787CC90DAD7F6E* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m5ECEB37CD56AE44DE04B948778915514D0F83B61_inline(L_3, List_1_get_Count_m5ECEB37CD56AE44DE04B948778915514D0F83B61_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(L_2, L_4, NULL);
		return L_5;
	}
}
// Method Definition Index: 54584
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CameraInputs_GetAnyPixelScaledDelta_m5954F5A5A8EC8AFB3461059EF106DD3D9FC03ED9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:206>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___oneFingerScaledPixelDelta), NULL);
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:207>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___oneFingerScaledPixelDelta;
		return L_1;
	}

IL_0017:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:208>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___twoFingersScaledPixelDelta;
		return L_2;
	}
}
// Method Definition Index: 54585
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_OnFingerUp_m2836E1C60FCADB358FA31507B6C27CD647E3E952 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, TouchFinger_t17EA4C05B9E9EA02DF7C30B63BF3945FCC2ABBFD* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:217>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerUp = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:218>
		return;
	}
}
// Method Definition Index: 54586
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_OnFingerTap_mD4753CCD6F5A3EEC834AA90706AA3272C123B288 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, TouchFinger_t17EA4C05B9E9EA02DF7C30B63BF3945FCC2ABBFD* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:226>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerTap = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:227>
		return;
	}
}
// Method Definition Index: 54587
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs_LateUpdate_mD425A5EA47B685E9DEA0E1E1A3357DFAF7C7A9D4 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:234>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerTap = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:235>
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___isFingerUp = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:236>
		return;
	}
}
// Method Definition Index: 54588
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs__ctor_m95260E6A10D27BA58D23C939382AF2E2D3DDB8B2 (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:38>
		__this->___enableShortcutKeys = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// Method Definition Index: 54589
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputs__cctor_mA6370B602F2C609ED9D576E6817998E988A5B75B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:21>
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_0 = (FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16*)il2cpp_codegen_object_new(FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16_il2cpp_TypeInfo_var);
		FingerFilter__ctor_mE561A6F645A166DA1555B5C44F29CCADD362A771(L_0, 0, (bool)1, 1, 0, (TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41*)NULL, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___OneFingerFilter = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___OneFingerFilter), (void*)L_0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:22>
		FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16* L_1 = (FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16*)il2cpp_codegen_object_new(FingerFilter_tF8BCD9F961A5E12469D729B6235E5C4C30FF7E16_il2cpp_TypeInfo_var);
		FingerFilter__ctor_mE561A6F645A166DA1555B5C44F29CCADD362A771(L_1, 0, (bool)1, 2, 0, (TouchSelectable_tEE3CC8D97FF75EBD439E06D664D22AE538F56D41*)NULL, NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___TwoFingerFilter = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___TwoFingerFilter), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:23>
		ScreenDepth_t30C2DEE11357DF22A66AFE347B4B2B9228010562 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ScreenDepth__ctor_m36E55629497D13AAB09A2D588A68079327CD4C88((&L_2), 5, ((int32_t)-5), (0.0f), NULL);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___ScreenDepth = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___ScreenDepth))->___Camera), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___ScreenDepth))->___Object), (void*)NULL);
		#endif
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:26>
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___pinchRatio = (1.0f);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 35828
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		return;
	}
}
// Method Definition Index: 54343
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalPosition_mA8539DB33670DD1E6BA3B495EC1C9420815845AC_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:170>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___finalPosition;
		return L_0;
	}
}
// Method Definition Index: 54342
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CameraBase_get_FinalRotation_m4A4DA4397C3684790002AA780B8B5175612182B8_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:163>
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___finalRotation;
		return L_0;
	}
}
// Method Definition Index: 2357
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_f;
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
// Method Definition Index: 54348
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraBase_set_DisableMoves_mBE3AF2CD60B14FE15B4B3C39D1C75EEBFAD7D7F8_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:197>
		bool L_0 = ___0_value;
		__this->___disableMoves = L_0;
		return;
	}
}
// Method Definition Index: 54350
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraBase_set_DisableOneFingerDrag_mAAF38F643026B6870D33D39D1710FD04683B8B95_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:206>
		bool L_0 = ___0_value;
		__this->___disableOneFingerDrag = L_0;
		return;
	}
}
// Method Definition Index: 35756
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Quaternion_Internal_ToEulerRad_mC5BD020889B5A4FB6894CFB69A5D4C07B321B919(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_1, NULL);
		return L_2;
	}
}
// Method Definition Index: 35757
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		float L_0 = ___0_x;
		(&V_0)->___x = ((float)il2cpp_codegen_multiply(L_0, (0.0174532924f)));
		float L_1 = ___1_y;
		(&V_0)->___y = ((float)il2cpp_codegen_multiply(L_1, (0.0174532924f)));
		float L_2 = ___2_z;
		(&V_0)->___z = ((float)il2cpp_codegen_multiply(L_2, (0.0174532924f)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Internal_FromEulerRad_mD0C4C0EFE1D70EC0EA4A92B11F1A4D5B0A134E49((&V_0), NULL);
		return L_3;
	}
}
// Method Definition Index: 35713
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector;
		return L_0;
	}
}
// Method Definition Index: 35695
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_Normalize_m1DE89849FE2019B6AA0031306896F3B800849399_inline(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 35722
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		(&V_0)->___x = ((float)il2cpp_codegen_multiply(L_1, L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		(&V_0)->___y = ((float)il2cpp_codegen_multiply(L_4, L_5));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		(&V_0)->___z = ((float)il2cpp_codegen_multiply(L_7, L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 35719
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		(&V_0)->___x = ((float)il2cpp_codegen_add(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		(&V_0)->___y = ((float)il2cpp_codegen_add(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		(&V_0)->___z = ((float)il2cpp_codegen_add(L_9, L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
// Method Definition Index: 35714
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector;
		return L_0;
	}
}
// Method Definition Index: 35720
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		(&V_0)->___x = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		(&V_0)->___y = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		(&V_0)->___z = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
// Method Definition Index: 35705
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		float L_4 = __this->___z;
		float L_5 = __this->___z;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		return ((float)L_6);
	}
}
// Method Definition Index: 35805
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
// Method Definition Index: 35861
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x;
		(&V_0)->___x = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y;
		(&V_0)->___y = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 35790
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 35715
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector;
		return L_0;
	}
}
// Method Definition Index: 35711
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		return L_0;
	}
}
// Method Definition Index: 35747
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion;
		return L_0;
	}
}
// Method Definition Index: 35727
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Vector3_ToString_mA8DA39B6324392BB93203A4D4CB85AF87231CB62_inline(__this, (String_t*)NULL, (RuntimeObject*)NULL, NULL);
		return L_0;
	}
}
// Method Definition Index: 35766
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_mC5BD5DEF60FCA4A38924462A5C4440ECFCF934C4_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Quaternion_ToString_m9B592D577B3FDB892CA53ABF3457BC2EDE45DF8C_inline(__this, (String_t*)NULL, (RuntimeObject*)NULL, NULL);
		return L_0;
	}
}
// Method Definition Index: 56578
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3Spring_set_Completed_mB90A4729D9CBA2D393D695F079F9E18B3C3C15C2_inline (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Maths/SpringMaths.cs:431>
		bool L_0 = ___0_value;
		__this->___completed = L_0;
		return;
	}
}
// Method Definition Index: 56560
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FloatSpring_set_Completed_m983959D34D0F2940700CCC298A95DD9EC0E02F06_inline (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Maths/SpringMaths.cs:242>
		bool L_0 = ___0_value;
		__this->___completed = L_0;
		return;
	}
}
// Method Definition Index: 56596
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QuaternionSpring_set_Completed_m86854F4D665551E19054665FD1C1A826F2594E44_inline (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Maths/SpringMaths.cs:615>
		bool L_0 = ___0_value;
		__this->___completed = L_0;
		return;
	}
}
// Method Definition Index: 54339
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCameraEventHandler_Invoke_m1AE1028C16AD1541CB581E5906EB85EACA787DD2_inline (OnCameraEventHandler_t24D2536BA856A9579CBC7714BAF068119617E597* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 56559
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FloatSpring_get_Completed_m46A63AA9BABB240EEC5FE745D4513C46E1860F44_inline (FloatSpring_tB3243C070FCEAF57996B7B17F48F12EE04A85B72* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Maths/SpringMaths.cs:242>
		bool L_0 = __this->___completed;
		return L_0;
	}
}
// Method Definition Index: 56595
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QuaternionSpring_get_Completed_m53EFA3AF95D3BED1944C6F14C6D938CB976CF3A2_inline (QuaternionSpring_t8E837712CEBF8190F2A0A3D360C154D1B518151B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Maths/SpringMaths.cs:615>
		bool L_0 = __this->___completed;
		return L_0;
	}
}
// Method Definition Index: 56577
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Spring_get_Completed_m03A950D73A3F16E959A17BD0F5A246358A657D23_inline (Vector3Spring_t8AE73E0029DABE2A4897E80EBB3745CD88A20767* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Maths/SpringMaths.cs:431>
		bool L_0 = __this->___completed;
		return L_0;
	}
}
// Method Definition Index: 54327
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnCameraGameObjectEvent_Invoke_m873F3E1B79BCD112E7B654F0D1CAFAFA7236A014_inline (OnCameraGameObjectEvent_t54E27284138C39FD80C92164F59351384D16BAC1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 34549
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Center;
		return L_0;
	}
}
// Method Definition Index: 34550
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bounds_set_center_m891869DD5B1BEEE2D17907BBFB7EB79AAE44884B_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_Center = L_0;
		return;
	}
}
// Method Definition Index: 34551
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_Extents);
		float L_1 = L_0->___x;
		(&V_0)->___x = ((float)il2cpp_codegen_multiply(L_1, (2.0f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_Extents);
		float L_3 = L_2->___y;
		(&V_0)->___y = ((float)il2cpp_codegen_multiply(L_3, (2.0f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_Extents);
		float L_5 = L_4->___z;
		(&V_0)->___z = ((float)il2cpp_codegen_multiply(L_5, (2.0f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 34552
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bounds_set_size_m950CFB68CDD1BF409E770509A38B958E1AE68128_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_Extents);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		float L_2 = L_1.___x;
		L_0->___x = ((float)il2cpp_codegen_multiply(L_2, (0.5f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_Extents);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = L_4.___y;
		L_3->___y = ((float)il2cpp_codegen_multiply(L_5, (0.5f)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___m_Extents);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_value;
		float L_8 = L_7.___z;
		L_6->___z = ((float)il2cpp_codegen_multiply(L_8, (0.5f)));
		return;
	}
}
// Method Definition Index: 34568
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Contains_m584E9DE0CF9D90C3C4F928BA8F5AD328393F3555_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Bounds_Internal_Contains_m03EAA1D2CE49D2467C621523D403635D33F4D63A(__this, (&___0_point), NULL);
		return L_0;
	}
}
// Method Definition Index: 34571
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_ClosestPoint_m5BEB0BAC00387C354CF3C4D013442384122F24FC_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_Internal_ClosestPoint_m58E324628352B972177C4AEB608EFBD8391636D5(__this, (&___0_point), NULL);
		return L_0;
	}
}
// Method Definition Index: 35597
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), NULL);
		return L_0;
	}
}
// Method Definition Index: 54335
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSwitchPerspectiveHandler_Invoke_mE87449776A764265B4AFF01E7C3EA5DC22700CD5_inline (OnSwitchPerspectiveHandler_t7F9D2C343D3AB38F7CB3672E938D82F7CBAFAFCD* __this, bool ___0_orthoMode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_orthoMode, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 54566
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* CameraInputs_get_Instance_m71526D6BAFCE84BF0F4AB17BE10E0A11D23B900C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:15>
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* L_0 = ((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 35738
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_t;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Internal_Lerp_mB9D9E19C29CA86767758B70DCFF9DB7C65821B39((&___0_a), (&___1_b), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 35677
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x;
		float L_8 = ___2_t;
		(&V_0)->___x = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y;
		float L_15 = ___2_t;
		(&V_0)->___y = ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z;
		float L_22 = ___2_t;
		(&V_0)->___z = ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		V_1 = L_23;
		goto IL_0064;
	}

IL_0064:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		return L_24;
	}
}
// Method Definition Index: 54344
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraBase_get_FinalOffset_m744D39C0C85E0BB5E805CEC6343A183BD3C0DD5B_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:179>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___finalOffset;
		return L_0;
	}
}
// Method Definition Index: 54345
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraBase_set_FinalOffset_m45ED06D9881A3FD897E950BADD06EE9EDD3F7B7A_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:180>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___finalOffset = L_0;
		return;
	}
}
// Method Definition Index: 54346
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CameraBase_get_FinalDistance_mBBF78FCE4AF333F49D367BC9EE3C402124C6D162_inline (CameraBase_tD636288CF2C6B4D6769DFC3DD5976494AA78B03B* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Camera/CameraBase.cs:188>
		float L_0 = __this->___finalDistance;
		return L_0;
	}
}
// Method Definition Index: 35650
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0050;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_0068;
			}
			case 3:
			{
				goto IL_0074;
			}
			case 4:
			{
				goto IL_007d;
			}
			case 5:
			{
				goto IL_0086;
			}
			case 6:
			{
				goto IL_008f;
			}
			case 7:
			{
				goto IL_0098;
			}
			case 8:
			{
				goto IL_00a1;
			}
			case 9:
			{
				goto IL_00aa;
			}
			case 10:
			{
				goto IL_00b3;
			}
			case 11:
			{
				goto IL_00bc;
			}
			case 12:
			{
				goto IL_00c5;
			}
			case 13:
			{
				goto IL_00ce;
			}
			case 14:
			{
				goto IL_00d7;
			}
			case 15:
			{
				goto IL_00e0;
			}
		}
	}
	{
		goto IL_00e9;
	}

IL_0050:
	{
		float L_3 = __this->___m00;
		V_2 = L_3;
		goto IL_00f4;
	}

IL_005c:
	{
		float L_4 = __this->___m10;
		V_2 = L_4;
		goto IL_00f4;
	}

IL_0068:
	{
		float L_5 = __this->___m20;
		V_2 = L_5;
		goto IL_00f4;
	}

IL_0074:
	{
		float L_6 = __this->___m30;
		V_2 = L_6;
		goto IL_00f4;
	}

IL_007d:
	{
		float L_7 = __this->___m01;
		V_2 = L_7;
		goto IL_00f4;
	}

IL_0086:
	{
		float L_8 = __this->___m11;
		V_2 = L_8;
		goto IL_00f4;
	}

IL_008f:
	{
		float L_9 = __this->___m21;
		V_2 = L_9;
		goto IL_00f4;
	}

IL_0098:
	{
		float L_10 = __this->___m31;
		V_2 = L_10;
		goto IL_00f4;
	}

IL_00a1:
	{
		float L_11 = __this->___m02;
		V_2 = L_11;
		goto IL_00f4;
	}

IL_00aa:
	{
		float L_12 = __this->___m12;
		V_2 = L_12;
		goto IL_00f4;
	}

IL_00b3:
	{
		float L_13 = __this->___m22;
		V_2 = L_13;
		goto IL_00f4;
	}

IL_00bc:
	{
		float L_14 = __this->___m32;
		V_2 = L_14;
		goto IL_00f4;
	}

IL_00c5:
	{
		float L_15 = __this->___m03;
		V_2 = L_15;
		goto IL_00f4;
	}

IL_00ce:
	{
		float L_16 = __this->___m13;
		V_2 = L_16;
		goto IL_00f4;
	}

IL_00d7:
	{
		float L_17 = __this->___m23;
		V_2 = L_17;
		goto IL_00f4;
	}

IL_00e0:
	{
		float L_18 = __this->___m33;
		V_2 = L_18;
		goto IL_00f4;
	}

IL_00e9:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_19 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB83E1A510F8DAB47223281C434CB405EC6E6D9B8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix4x4_get_Item_m771C2EE3A3BFFBAC9F2AD07FFCAAF6146C1BE92A_RuntimeMethod_var)));
	}

IL_00f4:
	{
		float L_20 = V_2;
		return L_20;
	}
}
// Method Definition Index: 35808
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 35651
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0050;
			}
			case 1:
			{
				goto IL_005c;
			}
			case 2:
			{
				goto IL_0068;
			}
			case 3:
			{
				goto IL_0074;
			}
			case 4:
			{
				goto IL_007d;
			}
			case 5:
			{
				goto IL_0086;
			}
			case 6:
			{
				goto IL_008f;
			}
			case 7:
			{
				goto IL_0098;
			}
			case 8:
			{
				goto IL_00a1;
			}
			case 9:
			{
				goto IL_00aa;
			}
			case 10:
			{
				goto IL_00b3;
			}
			case 11:
			{
				goto IL_00bc;
			}
			case 12:
			{
				goto IL_00c5;
			}
			case 13:
			{
				goto IL_00ce;
			}
			case 14:
			{
				goto IL_00d7;
			}
			case 15:
			{
				goto IL_00e0;
			}
		}
	}
	{
		goto IL_00e9;
	}

IL_0050:
	{
		float L_3 = ___1_value;
		__this->___m00 = L_3;
		goto IL_00f4;
	}

IL_005c:
	{
		float L_4 = ___1_value;
		__this->___m10 = L_4;
		goto IL_00f4;
	}

IL_0068:
	{
		float L_5 = ___1_value;
		__this->___m20 = L_5;
		goto IL_00f4;
	}

IL_0074:
	{
		float L_6 = ___1_value;
		__this->___m30 = L_6;
		goto IL_00f4;
	}

IL_007d:
	{
		float L_7 = ___1_value;
		__this->___m01 = L_7;
		goto IL_00f4;
	}

IL_0086:
	{
		float L_8 = ___1_value;
		__this->___m11 = L_8;
		goto IL_00f4;
	}

IL_008f:
	{
		float L_9 = ___1_value;
		__this->___m21 = L_9;
		goto IL_00f4;
	}

IL_0098:
	{
		float L_10 = ___1_value;
		__this->___m31 = L_10;
		goto IL_00f4;
	}

IL_00a1:
	{
		float L_11 = ___1_value;
		__this->___m02 = L_11;
		goto IL_00f4;
	}

IL_00aa:
	{
		float L_12 = ___1_value;
		__this->___m12 = L_12;
		goto IL_00f4;
	}

IL_00b3:
	{
		float L_13 = ___1_value;
		__this->___m22 = L_13;
		goto IL_00f4;
	}

IL_00bc:
	{
		float L_14 = ___1_value;
		__this->___m32 = L_14;
		goto IL_00f4;
	}

IL_00c5:
	{
		float L_15 = ___1_value;
		__this->___m03 = L_15;
		goto IL_00f4;
	}

IL_00ce:
	{
		float L_16 = ___1_value;
		__this->___m13 = L_16;
		goto IL_00f4;
	}

IL_00d7:
	{
		float L_17 = ___1_value;
		__this->___m23 = L_17;
		goto IL_00f4;
	}

IL_00e0:
	{
		float L_18 = ___1_value;
		__this->___m33 = L_18;
		goto IL_00f4;
	}

IL_00e9:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_19 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB83E1A510F8DAB47223281C434CB405EC6E6D9B8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0_RuntimeMethod_var)));
	}

IL_00f4:
	{
		return;
	}
}
// Method Definition Index: 35681
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
// Method Definition Index: 35743
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80_inline (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_angle;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Internal_AngleAxis_m1A896524F98EF69748915ED902CC9DCEF16245D4(L_0, (&___1_axis), NULL);
		return L_1;
	}
}
// Method Definition Index: 35703
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_vector), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___1_maxLength;
		float L_3 = ___1_maxLength;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		float L_8 = L_7.___x;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___y;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_vector;
		float L_14 = L_13.___z;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___1_maxLength;
		(&V_6)->___x = ((float)il2cpp_codegen_multiply(L_16, L_17));
		float L_18 = V_4;
		float L_19 = ___1_maxLength;
		(&V_6)->___y = ((float)il2cpp_codegen_multiply(L_18, L_19));
		float L_20 = V_5;
		float L_21 = ___1_maxLength;
		(&V_6)->___z = ((float)il2cpp_codegen_multiply(L_20, L_21));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_6;
		V_7 = L_22;
		goto IL_0065;
	}

IL_0060:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_vector;
		V_7 = L_23;
		goto IL_0065;
	}

IL_0065:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_7;
		return L_24;
	}
}
// Method Definition Index: 35748
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y;
		(&V_0)->___x = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z;
		(&V_0)->___y = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31))));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x;
		(&V_0)->___z = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47))));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z;
		(&V_0)->___w = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63))));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64 = V_0;
		return L_64;
	}
}
// Method Definition Index: 35725
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
// Method Definition Index: 34553
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Extents;
		return L_0;
	}
}
// Method Definition Index: 34554
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Bounds_set_extents_m09496358547B86A93EFE7BE6371E7A6FE937C46F_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_Extents = L_0;
		return;
	}
}
// Method Definition Index: 54567
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CameraInputs_set_Instance_mE10BB72E60ACCA88BABDA7E5B56AB8BB527F479B_inline (CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/TouchCameraLite/Scripts/Input/CameraInputs.cs:15>
		CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var);
		((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_StaticFields*)il2cpp_codegen_static_fields_for(CameraInputs_t9AE57AF76BAFAD3029DA7C591277EDA82678E5B9_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 24096
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionMap_get_asset_mBE901C135AA146247F9A05D72116F8FF15063052_inline (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.unity.inputsystem@57d0e36f6123/InputSystem/Actions/InputActionMap.cs:90>
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___m_Asset;
		return L_0;
	}
}
// Method Definition Index: 52972
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputTouch_set_UseMouse_m181F6A79E52F1A5AFD0A6768EB29A30A92D40C30_inline (InputTouch_tCF1B1D358FDFE129A580E552CBDD3CBD71E05966* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Inputs/Touch/InputTouch.cs:148>
		bool L_0 = ___0_value;
		__this->___useMouse = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Inputs/Touch/InputTouch.cs:148>
		return;
	}
}
// Method Definition Index: 35852
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x;
		(&V_0)->___x = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y;
		(&V_0)->___y = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 35856
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		(&V_0)->___x = ((float)il2cpp_codegen_multiply(L_1, L_2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		(&V_0)->___y = ((float)il2cpp_codegen_multiply(L_4, L_5));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 35863
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector;
		return L_0;
	}
}
// Method Definition Index: 35859
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// Method Definition Index: 35791
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 35844
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		return ((float)L_4);
	}
}
// Method Definition Index: 10811
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 1005
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
// Method Definition Index: 35693
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m1DE89849FE2019B6AA0031306896F3B800849399_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((((float)L_2) > ((float)(9.99999975E-06f))))
		{
			goto IL_0017;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		G_B3_0 = L_3;
		goto IL_004d;
	}

IL_0017:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___0_value;
		float L_5 = L_4->___x;
		float L_6 = V_0;
		(&V_1)->___x = ((float)(L_5/L_6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		float L_8 = L_7->___y;
		float L_9 = V_0;
		(&V_1)->___y = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ___0_value;
		float L_11 = L_10->___z;
		float L_12 = V_0;
		(&V_1)->___z = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		G_B3_0 = L_13;
	}

IL_004d:
	{
		V_2 = G_B3_0;
		goto IL_0050;
	}

IL_0050:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 35729
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mA8DA39B6324392BB93203A4D4CB85AF87231CB62_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		___0_format = _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
	}

IL_0012:
	{
		RuntimeObject* L_3 = ___1_formatProvider;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		NullCheck(L_5);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_6;
		L_6 = VirtualFuncInvoker0< NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* >::Invoke(14, L_5);
		___1_formatProvider = L_6;
	}

IL_0026:
	{
		float* L_7 = (float*)(&__this->___x);
		String_t* L_8 = ___0_format;
		RuntimeObject* L_9 = ___1_formatProvider;
		String_t* L_10;
		L_10 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_7, L_8, L_9, NULL);
		float* L_11 = (float*)(&__this->___y);
		String_t* L_12 = ___0_format;
		RuntimeObject* L_13 = ___1_formatProvider;
		String_t* L_14;
		L_14 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_11, L_12, L_13, NULL);
		float* L_15 = (float*)(&__this->___z);
		String_t* L_16 = ___0_format;
		RuntimeObject* L_17 = ___1_formatProvider;
		String_t* L_18;
		L_18 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_15, L_16, L_17, NULL);
		String_t* L_19;
		L_19 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral3F3FD3EFA55E39E450A9A4CE66CD7B259403D44E, L_10, L_14, L_18, NULL);
		V_2 = L_19;
		goto IL_005a;
	}

IL_005a:
	{
		String_t* L_20 = V_2;
		return L_20;
	}
}
// Method Definition Index: 35767
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_m9B592D577B3FDB892CA53ABF3457BC2EDE45DF8C_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0A7EDEBF99915540EBE211C25A14FEFF82DDAA7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___0_format;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		___0_format = _stringLiteralC0A7EDEBF99915540EBE211C25A14FEFF82DDAA7;
	}

IL_0012:
	{
		RuntimeObject* L_3 = ___1_formatProvider;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		NullCheck(L_5);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_6;
		L_6 = VirtualFuncInvoker0< NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* >::Invoke(14, L_5);
		___1_formatProvider = L_6;
	}

IL_0026:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		float* L_9 = (float*)(&__this->___x);
		String_t* L_10 = ___0_format;
		RuntimeObject* L_11 = ___1_formatProvider;
		String_t* L_12;
		L_12 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_9, L_10, L_11, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_8;
		float* L_14 = (float*)(&__this->___y);
		String_t* L_15 = ___0_format;
		RuntimeObject* L_16 = ___1_formatProvider;
		String_t* L_17;
		L_17 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_14, L_15, L_16, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_13;
		float* L_19 = (float*)(&__this->___z);
		String_t* L_20 = ___0_format;
		RuntimeObject* L_21 = ___1_formatProvider;
		String_t* L_22;
		L_22 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_19, L_20, L_21, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_18;
		float* L_24 = (float*)(&__this->___w);
		String_t* L_25 = ___0_format;
		RuntimeObject* L_26 = ___1_formatProvider;
		String_t* L_27;
		L_27 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE(L_24, L_25, L_26, NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_27);
		String_t* L_28;
		L_28 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral4DA40F86FA6B66D1B6831F82ADF65BBE193ABB05, L_23, NULL);
		V_2 = L_28;
		goto IL_0079;
	}

IL_0079:
	{
		String_t* L_29 = V_2;
		return L_29;
	}
}
// Method Definition Index: 35566
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r = L_0;
		float L_1 = ___1_g;
		__this->___g = L_1;
		float L_2 = ___2_b;
		__this->___b = L_2;
		float L_3 = ___3_a;
		__this->___a = L_3;
		return;
	}
}
// Method Definition Index: 35807
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
// Method Definition Index: 35706
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		float L_4 = __this->___z;
		float L_5 = __this->___z;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
	}
}
