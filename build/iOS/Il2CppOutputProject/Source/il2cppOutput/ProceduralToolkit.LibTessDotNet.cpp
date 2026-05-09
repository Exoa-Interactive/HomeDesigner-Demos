#include "pch-cpp.hpp"





template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

struct DefaultTypePool_1_tF8EBCF95A3939B0FCE9443A92BB84DD32E1F2427;
struct DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C;
struct DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259;
struct DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50;
struct DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8;
struct Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748;
struct Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531;
struct IDictionary_2_t05C8F7344C70F09B4EFE1C7256EAC02C3C6F33C1;
struct IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70;
struct LessOrEqual_t3A046E9D03F584A315E6C379447C15C2C6070FDC;
struct LessOrEqual_t5AC957501A13742C8127C186ED6D3E25C4511E21;
struct LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58;
struct LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A;
struct Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB;
struct Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D;
struct PriorityHeap_1_t48EE98C403DC2D565A4B87F712D45DE002291378;
struct PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B;
struct PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927;
struct Queue_1_tF247858B74B2C07FEC512445DD013EF835B22544;
struct Queue_1_t0FE1500268B7A68B45F4E57E129828946D2E2D3F;
struct Queue_1_t46E028264B756CDDF2EEB436E57928C23828A57B;
struct Queue_1_t6792D20CC531CD0320B063361E572307E6D8FD20;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9;
struct DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E;
struct MethodInfo_t;
struct NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t26277507DDB49D5017CF8B89C353D04B013289CA;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861;
struct Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C;
struct Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C;
struct ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_____e_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6FD9E4D101F23A5FD24E2DC7D77AB5328A51D1E9____20619DBB400659760BE005F67950A638594177411B8932C2457D24C07FB772CD_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6FD9E4D101F23A5FD24E2DC7D77AB5328A51D1E9____4704548709F68991535C9CA0E81ACF28742549E504B2FC7491CAA7563B9B03B7_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C;
IL2CPP_EXTERN_C String_t* _stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8;
IL2CPP_EXTERN_C String_t* _stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64;
IL2CPP_EXTERN_C String_t* _stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_m32B825C98A727514E308645291C68E9B9B2DCC38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mA9B4229D4130BB3A93DC00FDD1EACB8613C20875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mBBB3042C878BF14A1B1E40C00AF81B70BC1FE2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mD03F64BC7CC0961FCFA1E67BB773F5D2A83526A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Find_mCE0635096C8A53E62D2707E6DC456AF8DF71E546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_InsertBefore_m822D7F54E121B16021BE08AF8E4D2690AD3504C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Insert_m29022799FFB4BEEF05D4770B5A08FB8E24C513C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Min_mCBD3210CFC0610214960F6CCA2DAFBCC5D67C739_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Remove_mC72DA98BB406B3B98B6DB7DE074B1BFD249B61A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1__ctor_m209CE83302FE6BA9AD4F9EF945793855B467D91A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m444454360B73DDB25475979F272457046AB00972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mD2ECB3B3B6ECD3CDC5EDB87734D1E5E6ADEED6D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m230FE9743ED76CE16996600D2AD1BD86FCCD41FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m81F3DA97290F2261C02FBA96153CEE2AF4FB706A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m192B164DF44E7DBD72203C4BBC0143F7B95B0E7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_m5201AE90CD0391C6658129210F44D64BFC1106C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mABCA8B3096288CE3D1AE740ED40CFB1648B96878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m534BA732E5B78CF9F9B1AA11E37153125F93DE0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m1415C029D364C624A0EB24110DEAE23585476F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Init_m928EC1FF5C339947B1206C972EE70D3B77829BC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Minimum_m4CC75BE2CF318C831BDC9DD6E9B8532F2C4CC771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Remove_m9CCA243EB1BDAA5719F1FA989071EC11BE26C6F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1__ctor_m2C29270DF8FD8F531E158284E3B90778CF6A064F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_EdgeLeq_mBBA2BC792106918134934914DBF531DD74AB3D2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_InitPriorityQ_m8C57A253EBE886758D4DAA88EC928696890D5B9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t8DA2982E17923D362760FE11B581E64105342296 
{
};
struct DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C  : public RuntimeObject
{
	Queue_1_tF247858B74B2C07FEC512445DD013EF835B22544* ____pool;
};
struct DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259  : public RuntimeObject
{
	Queue_1_t0FE1500268B7A68B45F4E57E129828946D2E2D3F* ____pool;
};
struct DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50  : public RuntimeObject
{
	Queue_1_t46E028264B756CDDF2EEB436E57928C23828A57B* ____pool;
};
struct DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8  : public RuntimeObject
{
	Queue_1_t6792D20CC531CD0320B063361E572307E6D8FD20* ____pool;
};
struct Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531  : public RuntimeObject
{
	LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A* ____leq;
	Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ____head;
};
struct Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB  : public RuntimeObject
{
	RuntimeObject* ____key;
	Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* ____prev;
	Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* ____next;
};
struct Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D  : public RuntimeObject
{
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ____key;
	Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ____prev;
	Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ____next;
};
struct PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927  : public RuntimeObject
{
	LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58* ____leq;
	PriorityHeap_1_t48EE98C403DC2D565A4B87F712D45DE002291378* ____heap;
	VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* ____keys;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____order;
	int32_t ____size;
	int32_t ____max;
	bool ____initialized;
};
struct U3CPrivateImplementationDetailsU3E_t6FD9E4D101F23A5FD24E2DC7D77AB5328A51D1E9  : public RuntimeObject
{
};
struct Geom_tAB10B7089C877A6000B26AFCCD326E52743FF8C7  : public RuntimeObject
{
};
struct IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7  : public RuntimeObject
{
};
struct Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E  : public RuntimeObject
{
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ____vHead;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ____fHead;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eHead;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eHeadSym;
};
struct MeshUtils_tAA33E2AF88D2FFC1F6816B0259520AD0D76DE80A  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t26277507DDB49D5017CF8B89C353D04B013289CA  : public RuntimeObject
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
struct Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C  : public RuntimeObject
{
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ____prev;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ____next;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____anEdge;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ____trail;
	int32_t ____n;
	bool ____marked;
	bool ____inside;
};
struct ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE  : public RuntimeObject
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eUp;
	Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ____nodeUp;
	int32_t ____windingNumber;
	bool ____inside;
	bool ____sentinel;
	bool ____dirty;
	bool ____fixUpperEdge;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E  : public IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7
{
	RuntimeObject* ____register;
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
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF  : public IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7
{
};
struct PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 
{
	int32_t ____handle;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 
{
	float ___X;
	float ___Y;
	float ___Z;
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
struct __StaticArrayInitTypeSizeU3D1192_t033EDA58A8D946A4028EF7F7C39890AFD88B7E28 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1192_t033EDA58A8D946A4028EF7F7C39890AFD88B7E28__padding[1192];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D663_t324E41190E2717F66AA25A5BC22813BD3593400F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D663_t324E41190E2717F66AA25A5BC22813BD3593400F__padding[663];
	};
};
#pragma pack(pop, tp)
struct EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____e;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eSym;
};
struct EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_pinvoke
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____e;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eSym;
};
struct EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_com
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____e;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____eSym;
};
struct MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct ContourOrientation_t12AE15FDB033CAE24AD5CF337B825382A57CD6CE 
{
	int32_t ___value__;
};
struct ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___Position;
	RuntimeObject* ___Data;
};
struct ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_pinvoke
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___Position;
	Il2CppIUnknown* ___Data;
};
struct ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_com
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___Position;
	Il2CppIUnknown* ___Data;
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
struct ElementType_tCE2D58F3CFB547E78CE9946E52785FAA1C46E6F6 
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
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct WindingRule_t801530D03AD9F667FFF037E02065DC8ED3CAC7D0 
{
	int32_t ___value__;
};
struct Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861  : public RuntimeObject
{
	EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E ____pair;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____next;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____Sym;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____Onext;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____Lnext;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ____Org;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ____Lface;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ____activeRegion;
	int32_t ____winding;
};
struct Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C  : public RuntimeObject
{
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ____prev;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ____next;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ____anEdge;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ____coords;
	float ____s;
	float ____t;
	PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 ____pqHandle;
	int32_t ____n;
	RuntimeObject* ____data;
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
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677  : public RuntimeObject
{
	IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ____pool;
	Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* ____mesh;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ____normal;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ____sUnit;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ____tUnit;
	float ____bminX;
	float ____bminY;
	float ____bmaxX;
	float ____bmaxY;
	int32_t ____windingRule;
	Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* ____dict;
	PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* ____pq;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ____event;
	CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* ____combineCallback;
	ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* ____vertices;
	int32_t ____vertexCount;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____elements;
	int32_t ____elementCount;
	float ___SUnitX;
	float ___SUnitY;
	float ___SentinelCoord;
	bool ___NoEmptyPolygons;
	bool ___UsePooling;
};
struct LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58  : public MulticastDelegate_t
{
};
struct LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A  : public MulticastDelegate_t
{
};
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};
struct CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9  : public MulticastDelegate_t
{
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct U3CPrivateImplementationDetailsU3E_t6FD9E4D101F23A5FD24E2DC7D77AB5328A51D1E9_StaticFields
{
	__StaticArrayInitTypeSizeU3D663_t324E41190E2717F66AA25A5BC22813BD3593400F ___20619DBB400659760BE005F67950A638594177411B8932C2457D24C07FB772CD;
	__StaticArrayInitTypeSizeU3D1192_t033EDA58A8D946A4028EF7F7C39890AFD88B7E28 ___4704548709F68991535C9CA0E81ACF28742549E504B2FC7491CAA7563B9B03B7;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_StaticFields
{
	int32_t ___Invalid;
};
struct Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_StaticFields
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___Zero;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
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
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B  : public RuntimeArray
{
	ALIGN_FIELD (8) ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 m_Items[1];

	inline ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data), (void*)NULL);
	}
	inline ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Data), (void*)NULL);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
struct VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46  : public RuntimeArray
{
	ALIGN_FIELD (8) Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* m_Items[1];

	inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypePool_1__ctor_mE65098BF4939ED6AFC4EA1D3C49DBCBA50D595DC_gshared (DefaultTypePool_1_tF8EBCF95A3939B0FCE9443A92BB84DD32E1F2427* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1_Remove_mADE66A181C30A7D76E41A158B59E42071A690A67_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* Dict_1_InsertBefore_m159D54C38BE44E595D44A97D90D4881802A11FD3_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* ___0_node, RuntimeObject* ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Remove_m764AD03A4DAEF58900CB92D6E4CF4C8994487266_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 PriorityQueue_1_Insert_m8815D815BA459FA421D4AAC9EF0BA3EEA21C09B2_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* Dict_1_Find_mD5647439A46530CF6F934DBAA872EC67BC4A6EF7_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Node_get_Key_mE91C7EABEFDECA9C2C21D7214FBF02A903D24F7B_gshared_inline (Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* Dict_1_Insert_m9674D115D025FBD4440C781AAF5F69C8B04E102E_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_mE082BA53D5A6EEF208612B738F5AFA4D4097ADD3_gshared (LessOrEqual_t3A046E9D03F584A315E6C379447C15C2C6070FDC* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1__ctor_mE8EDBDD11C7C90ACA3660350DEA390BCADF329B3_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, LessOrEqual_t3A046E9D03F584A315E6C379447C15C2C6070FDC* ___0_leq, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* Dict_1_Min_m95F553429EA3146FA83B7B6150743BC59420BE41_gshared (Dict_1_t5547FD959098C700E2C44BC9EED3300E43CC2748* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_m528B5E5BB498D26109079AECCBB1F2763C07FB31_gshared (LessOrEqual_t5AC957501A13742C8127C186ED6D3E25C4511E21* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1__ctor_mDB50D4B9714A8556BD7A7D269A47401351E7908E_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, int32_t ___0_initialSize, LessOrEqual_t5AC957501A13742C8127C186ED6D3E25C4511E21* ___1_leq, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Init_mB0A6425655CF05A00ACDCA2D81F94246E95AE0DD_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_Minimum_mA6204E6799B0E5DA0D94E9C154B506A1D0D7EC00_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_ExtractMin_m4FD80D91FC46D53A0E54BD423163C0081E8351DC_gshared (PriorityQueue_1_t6767542A1402065CDE35483C34B42934E0BD337B* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_lhs, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** ___0_a, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83 (float ___0_a, float ___1_x, float ___2_b, float ___3_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_lhs, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mB2AFE716F0C40F292670A74EE48F8DFB1BCD7757 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m0343BBEAEF0D9D54D331616914C9BDC4EB6288D9 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E EdgePair_Create_m059469082BEEB92DE39F2274113174F89279ED21 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* MeshUtils_MakeEdge_mBB05A5079458A48E840BA60BDC9EC4B93806EF3F (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eNext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrig, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_vNext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrig, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___2_fNext, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_vDel, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_newOrg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___1_fDel, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___2_newLFace, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_a, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_m31AFA9B818CC459D34025AA709B59C49AB9A5652 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eDel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_AddEdgeVertex_mC3ECCF182D8F521EBC26110F3001B903A55211C0 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_m56F56B99812B22C677B6254CE6188FB788473604 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m66117D5A92950759B7A650E6A58360D9F0CD348D (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_mE9A55B46F4B3710BB0353CC660D9B3DF67464E68 (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_mADBA3109ED58984900698E5695A58871E213BB13 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_w, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eDel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m95957C0DEE2BAC8062A90688A1B160025012F183 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_m2B01652796410E8DE45F96DABE603BA7E979BF1D (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, const RuntimeMethod* method) ;
inline void DefaultTypePool_1__ctor_mD03F64BC7CC0961FCFA1E67BB773F5D2A83526A4 (DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE65098BF4939ED6AFC4EA1D3C49DBCBA50D595DC_gshared)(__this, method);
}
inline void DefaultTypePool_1__ctor_mBBB3042C878BF14A1B1E40C00AF81B70BC1FE2B3 (DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE65098BF4939ED6AFC4EA1D3C49DBCBA50D595DC_gshared)(__this, method);
}
inline void DefaultTypePool_1__ctor_mA9B4229D4130BB3A93DC00FDD1EACB8613C20875 (DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE65098BF4939ED6AFC4EA1D3C49DBCBA50D595DC_gshared)(__this, method);
}
inline void DefaultTypePool_1__ctor_m32B825C98A727514E308645291C68E9B9B2DCC38 (DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE65098BF4939ED6AFC4EA1D3C49DBCBA50D595DC_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_mE85827066651A20AC715EC1B494E9100FF116A63 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_mD440D7010D6492800C229F3613D616C41744C7D8 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_m90A9EA836BB393070623B1B663F691AE8B5245A4 (EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
inline void Dict_1_Remove_mC72DA98BB406B3B98B6DB7DE074B1BFD249B61A1 (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ___0_node, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D*, const RuntimeMethod*))Dict_1_Remove_mADE66A181C30A7D76E41A158B59E42071A690A67_gshared)(__this, ___0_node, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrg, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___2_eDst, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m3EA63F4044BF98BF031DE0C32DCD5B5245E737F6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_newEdge, const RuntimeMethod* method) ;
inline Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* Dict_1_InsertBefore_m822D7F54E121B16021BE08AF8E4D2690AD3504C6 (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* ___0_node, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___1_key, const RuntimeMethod* method)
{
	return ((  Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D*, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*, const RuntimeMethod*))Dict_1_InsertBefore_m159D54C38BE44E595D44A97D90D4881802A11FD3_gshared)(__this, ___0_node, ___1_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F (int32_t ___0_rule, int32_t ___1_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_mC657C062219C9699052E48218EFD8403DA333CC8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrg, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___2_eDst, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_AddRegionBelow_m4822FD2001C9390D9D624BBD9DBF536129B007A6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regAbove, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eNewUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m0302CDD5240E389F817356B3E03C41C5923F5D45 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m7F138F904EDF9A9D1117F39F2758EE60DFF774AB (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_eDst, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eSrc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_mA315F2B4FE93010C135F6B43C5C8B51F1E00F7DF (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_m4C9F165E0E9541A3969AF246ED75B89A6776A1FC (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_m40385649C376CCD9E579DA4055A928053DF25045 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_isect, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_org, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_dst, float* ___3_w0, float* ___4_w1, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_inline (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_lhs, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrg, const RuntimeMethod* method) ;
inline void PriorityQueue_1_Remove_m9CCA243EB1BDAA5719F1FA989071EC11BE26C6F6 (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 ___0_handle, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314, const RuntimeMethod*))PriorityQueue_1_Remove_m764AD03A4DAEF58900CB92D6E4CF4C8994487266_gshared)(__this, ___0_handle, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m48D936585FF30D86343C6195C1D665F40B99CF67 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_e1, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_e2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___0_val1, float ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_m4D225F1D0B04094B17E891B09BF88B31E4C17224 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_o1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_d1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_o2, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___3_d2, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___4_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_TopLeftRegion_m035D36093FF04567CCCE4B3F19EEEAEF5D2F53AD (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regFirst, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___1_regLast, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eFirst, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___2_eLast, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___3_eTopLeft, bool ___4_cleanUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_TopRightRegion_m36BDED50C55A6ABF5E1106897FB04E1B4BB6D007 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) ;
inline PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1 (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_value, const RuntimeMethod* method)
{
	return ((  PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*, const RuntimeMethod*))PriorityQueue_1_Insert_m8815D815BA459FA421D4AAC9EF0BA3EEA21C09B2_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_mC7C5CC61E4012E373A4661A298DA00C2A9B10FBA (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_isect, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_orgUp, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_dstUp, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___3_orgLo, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___4_dstLo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_mA422AF26ED6CD7EBB1E540E2CBF125182C61771A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_m21DAC799361D2DDF3274FFB677D6ECE09DAE2F78 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_vEvent, const RuntimeMethod* method) ;
inline Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* Dict_1_Find_mCE0635096C8A53E62D2707E6DC456AF8DF71E546 (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_key, const RuntimeMethod* method)
{
	return ((  Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*, const RuntimeMethod*))Dict_1_Find_mD5647439A46530CF6F934DBAA872EC67BC4A6EF7_gshared)(__this, ___0_key, method);
}
inline ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_inline (Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* __this, const RuntimeMethod* method)
{
	return ((  ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* (*) (Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D*, const RuntimeMethod*))Node_get_Key_mE91C7EABEFDECA9C2C21D7214FBF02A903D24F7B_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_vEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Dnext_m61B1425BB7BBFA4D996A431C104F8417603F206C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m164A5309BBEAAA26966D2AE1E0CF8FAC99FA9376 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m688BD9B47D51640C1CE3F56EBB131201FF6174D4 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_vEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m7CF37EC43C24079CE8FEA77404E8A08BB22992D2 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eBottomLeft, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_MakeEdge_m3D0A00C5539506BD80B3A810DC16DBCAA9BB061C (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) ;
inline Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* Dict_1_Insert_m29022799FFB4BEEF05D4770B5A08FB8E24C513C8 (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_key, const RuntimeMethod* method)
{
	return ((  Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*, const RuntimeMethod*))Dict_1_Insert_m9674D115D025FBD4440C781AAF5F69C8B04E102E_gshared)(__this, ___0_key, method);
}
inline void LessOrEqual__ctor_mBBAC12C0C1638916E114F128CD3F87B86508D94A (LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_mE082BA53D5A6EEF208612B738F5AFA4D4097ADD3_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Dict_1__ctor_m209CE83302FE6BA9AD4F9EF945793855B467D91A (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A* ___0_leq, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A*, const RuntimeMethod*))Dict_1__ctor_mE8EDBDD11C7C90ACA3660350DEA390BCADF329B3_gshared)(__this, ___0_leq, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m63322194D5191E681E1C7CC2722FDEE53079D4C4 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, float ___0_smin, float ___1_smax, float ___2_t, const RuntimeMethod* method) ;
inline Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* Dict_1_Min_mCBD3210CFC0610214960F6CCA2DAFBCC5D67C739 (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* __this, const RuntimeMethod* method)
{
	return ((  Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* (*) (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*, const RuntimeMethod*))Dict_1_Min_m95F553429EA3146FA83B7B6150743BC59420BE41_gshared)(__this, method);
}
inline void LessOrEqual__ctor_mC062AD51CEBEC2C0372E1AD778700E992E3015CE (LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_m528B5E5BB498D26109079AECCBB1F2763C07FB31_gshared)(__this, ___0_object, ___1_method, method);
}
inline void PriorityQueue_1__ctor_m2C29270DF8FD8F531E158284E3B90778CF6A064F (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, int32_t ___0_initialSize, LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58* ___1_leq, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, int32_t, LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58*, const RuntimeMethod*))PriorityQueue_1__ctor_mDB50D4B9714A8556BD7A7D269A47401351E7908E_gshared)(__this, ___0_initialSize, ___1_leq, method);
}
inline void PriorityQueue_1_Init_m928EC1FF5C339947B1206C972EE70D3B77829BC1 (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, const RuntimeMethod*))PriorityQueue_1_Init_mB0A6425655CF05A00ACDCA2D81F94246E95AE0DD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_mEA740DA6799454F92769FF3D9A7377920D2657FA (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m8C57A253EBE886758D4DAA88EC928696890D5B9D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m5972E77884DC6365F09F899F32056E1959590544 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_m60439FCFF58F6194C3C997FD0918BD7EEBC6FE8E (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* PriorityQueue_1_Minimum_m4CC75BE2CF318C831BDC9DD6E9B8532F2C4CC771 (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, const RuntimeMethod*))PriorityQueue_1_Minimum_mA6204E6799B0E5DA0D94E9C154B506A1D0D7EC00_gshared)(__this, method);
}
inline Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4 (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* (*) (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*, const RuntimeMethod*))PriorityQueue_1_ExtractMin_m4FD80D91FC46D53A0E54BD423163C0081E8351DC_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m760B02FF396436E30372443619D044DA95FCC05D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m000B1D23F66BAA98C855F506E6AD7EE087BE2DE8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m1418BADB8C4AB3BD573CDBC48DB0F5AB1637C575 (DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB97C95E8EFABD8EA0CAB9B9AB0A353B728ECB28D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_mE6458D67CCDD6BC8DE755C638E600AA573298FCE (NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mCDE4E6D261C482B3B58AB0EA0FA08DBA1860B110 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___0_lhs, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___1_rhs, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___2_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_m3A93BE72D5B052A5908805AEF993AC6F296ED4CB (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_m31485BAB025AE006EFCC80939E541426A7D34E1C (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___0_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m56FA56AE9B5B9AC36E12FF1A40FCDA51EFF04139 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m8A17094DCC720DDB670B30AAB562FC37ABD307A6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___0_norm, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_mC49EABB6FB4C33967B4005AAF9F999317CAB6341 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___0_u, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___1_v, float* ___2_dot, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_mC98D6D1A4D24FC080952E17734F178CB20E35041 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_m661D83069B722B9BF6031E6A9E5F3AA05F8CC06C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m20C08A2EA78E8ED7B91CD6CD677F0F52E7A5F50A (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_mAFDE0D12109933FBACE160C2FCFAF118FEA1458C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___0_face, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_ZapFace_m5EA809DDA7500239AB92BEBF71D6F25F90FF326D (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___1_fZap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m5A5B25E0A8953C1CE73FC5C215C93A5B550DDFE3 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, int32_t ___1_maxVertsPerFace, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_m5E5A22A378DB4BFA1F77FF6C42FEEDDD4734F39C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_edge, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_m27D31BFFBB09EE11725A33423A976EEEF4FD911A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, RuntimeObject* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m805061A3ABFFED5CEEB369534F14C83195ADEB6C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, RuntimeObject* ___0_vertices, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_mE898E1815D7491F44FA1AF3C242E3CDBDA49455F (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mA51153C7B94F34C4161B6060D67385A801DDACE8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m8A41F77B75A390E8D960C52A6564CF48288AE90A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, int32_t ___0_value, bool ___1_keepOnlyBoundary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mAC4117DACBE4B60A5173D688C6919981B2C18B6D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_m8E950D86EC60346E478BD58B08B486430D5D4461 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_m86408071771F039677956D25E8E3A62EF95482C5 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, int32_t ___0_elementType, int32_t ___1_polySize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mEFCCBED4649918C6C12249A56FE50E626112B614 (ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___0_position, RuntimeObject* ___1_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m03B1E67F4BB4464247EA630A997CB7A895A363C8 (ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* __this, const RuntimeMethod* method) ;
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
// Method Definition Index: 55296
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mDBBF76EC5089C84710F45B940835767181B5CBE4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6FD9E4D101F23A5FD24E2DC7D77AB5328A51D1E9____20619DBB400659760BE005F67950A638594177411B8932C2457D24C07FB772CD_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6FD9E4D101F23A5FD24E2DC7D77AB5328A51D1E9____4704548709F68991535C9CA0E81ACF28742549E504B2FC7491CAA7563B9B03B7_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)663));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6FD9E4D101F23A5FD24E2DC7D77AB5328A51D1E9____20619DBB400659760BE005F67950A638594177411B8932C2457D24C07FB772CD_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1192));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6FD9E4D101F23A5FD24E2DC7D77AB5328A51D1E9____4704548709F68991535C9CA0E81ACF28742549E504B2FC7491CAA7563B9B03B7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 8;
		(&V_0)->___TotalTypes = ((int32_t)25);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 55297
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_m13C4DFAE7D7FB4CEB0C6AE1D1499EC709757DA78 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_t26277507DDB49D5017CF8B89C353D04B013289CA* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshal_pinvoke(const MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D& unmarshaled, MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshal_pinvoke_back(const MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshaled_pinvoke& marshaled, MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D& unmarshaled)
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
IL2CPP_EXTERN_C void MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshal_pinvoke_cleanup(MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshal_com(const MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D& unmarshaled, MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshal_com_back(const MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshaled_com& marshaled, MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D& unmarshaled)
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
IL2CPP_EXTERN_C void MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshal_com_cleanup(MonoScriptData_t8B8FA2584CAAC78F0F8C383837F0D8B5C2DEF80D_marshaled_com& marshaled)
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
// Method Definition Index: 55312
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F (int32_t ___0_rule, int32_t ___1_n, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_rule;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_002d;
			}
			case 4:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:52>
		int32_t L_1 = ___1_n;
		return (bool)((((int32_t)((int32_t)(L_1&1))) == ((int32_t)1))? 1 : 0);
	}

IL_0023:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:54>
		int32_t L_2 = ___1_n;
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0028:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:56>
		int32_t L_3 = ___1_n;
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}

IL_002d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:58>
		int32_t L_4 = ___1_n;
		return (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:60>
		int32_t L_5 = ___1_n;
		if ((((int32_t)L_5) >= ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6 = ___1_n;
		return (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_003f:
	{
		return (bool)1;
	}

IL_0041:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:62>
		Exception_t* L_7 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F_RuntimeMethod_var)));
	}
}
// Method Definition Index: 55313
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_mADBA3109ED58984900698E5695A58871E213BB13 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_w, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:67>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___0_u;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___1_v;
		NullCheck(L_2);
		float L_3 = L_2->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___2_w;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = ___2_w;
		NullCheck(L_8);
		float L_9 = L_8->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___0_u;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___2_w;
		NullCheck(L_12);
		float L_13 = L_12->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = ___0_u;
		NullCheck(L_14);
		float L_15 = L_14->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = ___1_v;
		NullCheck(L_16);
		float L_17 = L_16->____t;
		return (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, ((float)il2cpp_codegen_subtract(L_3, L_5)))), ((float)il2cpp_codegen_multiply(L_7, ((float)il2cpp_codegen_subtract(L_9, L_11)))))), ((float)il2cpp_codegen_multiply(L_13, ((float)il2cpp_codegen_subtract(L_15, L_17))))))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 55314
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_lhs, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_rhs, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:71>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___0_lhs;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___1_rhs;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___0_lhs;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___1_rhs;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		return (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// Method Definition Index: 55315
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_lhs, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_rhs, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:75>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___0_lhs;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___1_rhs;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___0_lhs;
		NullCheck(L_4);
		float L_5 = L_4->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___1_rhs;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = ___0_lhs;
		NullCheck(L_8);
		float L_9 = L_8->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___1_rhs;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		return (bool)((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		return (bool)1;
	}
}
// Method Definition Index: 55316
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:93>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___1_v;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___0_u;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:94>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___2_w;
		NullCheck(L_4);
		float L_5 = L_4->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:96>
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:98>
		float L_10 = V_0;
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_004c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:100>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___1_v;
		NullCheck(L_12);
		float L_13 = L_12->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = ___0_u;
		NullCheck(L_14);
		float L_15 = L_14->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = ___0_u;
		NullCheck(L_16);
		float L_17 = L_16->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = ___2_w;
		NullCheck(L_18);
		float L_19 = L_18->____t;
		float L_20 = V_0;
		float L_21 = V_0;
		float L_22 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_13, L_15)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)(L_20/((float)il2cpp_codegen_add(L_21, L_22))))))));
	}

IL_004c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:104>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = ___1_v;
		NullCheck(L_23);
		float L_24 = L_23->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = ___2_w;
		NullCheck(L_25);
		float L_26 = L_25->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = ___2_w;
		NullCheck(L_27);
		float L_28 = L_27->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = ___0_u;
		NullCheck(L_29);
		float L_30 = L_29->____t;
		float L_31 = V_1;
		float L_32 = V_0;
		float L_33 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_24, L_26)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_28, L_30)), ((float)(L_31/((float)il2cpp_codegen_add(L_32, L_33))))))));
	}

IL_006e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:108>
		return (0.0f);
	}
}
// Method Definition Index: 55317
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:120>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___1_v;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___0_u;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:121>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___2_w;
		NullCheck(L_4);
		float L_5 = L_4->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____s;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:123>
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:125>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___1_v;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___2_w;
		NullCheck(L_12);
		float L_13 = L_12->____t;
		float L_14 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = ___1_v;
		NullCheck(L_15);
		float L_16 = L_15->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = ___0_u;
		NullCheck(L_17);
		float L_18 = L_17->____t;
		float L_19 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_11, L_13)), L_14)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_16, L_18)), L_19))));
	}

IL_0046:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:128>
		return (0.0f);
	}
}
// Method Definition Index: 55318
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_lhs, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_rhs, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:133>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___0_lhs;
		NullCheck(L_0);
		float L_1 = L_0->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___1_rhs;
		NullCheck(L_2);
		float L_3 = L_2->____t;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___0_lhs;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___1_rhs;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = ___0_lhs;
		NullCheck(L_8);
		float L_9 = L_8->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___1_rhs;
		NullCheck(L_10);
		float L_11 = L_10->____s;
		return (bool)((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		return (bool)1;
	}
}
// Method Definition Index: 55319
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_mB2AFE716F0C40F292670A74EE48F8DFB1BCD7757 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:140>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___1_v;
		NullCheck(L_0);
		float L_1 = L_0->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___0_u;
		NullCheck(L_2);
		float L_3 = L_2->____t;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:141>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___2_w;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:143>
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:145>
		float L_10 = V_0;
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_004c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:147>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___1_v;
		NullCheck(L_12);
		float L_13 = L_12->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = ___0_u;
		NullCheck(L_14);
		float L_15 = L_14->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = ___0_u;
		NullCheck(L_16);
		float L_17 = L_16->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = ___2_w;
		NullCheck(L_18);
		float L_19 = L_18->____s;
		float L_20 = V_0;
		float L_21 = V_0;
		float L_22 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_13, L_15)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)(L_20/((float)il2cpp_codegen_add(L_21, L_22))))))));
	}

IL_004c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:151>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = ___1_v;
		NullCheck(L_23);
		float L_24 = L_23->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = ___2_w;
		NullCheck(L_25);
		float L_26 = L_25->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = ___2_w;
		NullCheck(L_27);
		float L_28 = L_27->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = ___0_u;
		NullCheck(L_29);
		float L_30 = L_29->____s;
		float L_31 = V_1;
		float L_32 = V_0;
		float L_33 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_24, L_26)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_28, L_30)), ((float)(L_31/((float)il2cpp_codegen_add(L_32, L_33))))))));
	}

IL_006e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:155>
		return (0.0f);
	}
}
// Method Definition Index: 55320
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m0343BBEAEF0D9D54D331616914C9BDC4EB6288D9 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_w, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:162>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___1_v;
		NullCheck(L_0);
		float L_1 = L_0->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___0_u;
		NullCheck(L_2);
		float L_3 = L_2->____t;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:163>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___2_w;
		NullCheck(L_4);
		float L_5 = L_4->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___1_v;
		NullCheck(L_6);
		float L_7 = L_6->____t;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:165>
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:167>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___1_v;
		NullCheck(L_10);
		float L_11 = L_10->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___2_w;
		NullCheck(L_12);
		float L_13 = L_12->____s;
		float L_14 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = ___1_v;
		NullCheck(L_15);
		float L_16 = L_15->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = ___0_u;
		NullCheck(L_17);
		float L_18 = L_17->____s;
		float L_19 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_11, L_13)), L_14)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_16, L_18)), L_19))));
	}

IL_0046:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:170>
		return (0.0f);
	}
}
// Method Definition Index: 55321
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_m661D83069B722B9BF6031E6A9E5F3AA05F8CC06C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_e, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:175>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___0_e;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1;
		L_1 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_0, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___0_e;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = L_2->____Org;
		bool L_4;
		L_4 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_1, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 55322
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m20C08A2EA78E8ED7B91CD6CD677F0F52E7A5F50A (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_e, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:180>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___0_e;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = L_0->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___0_e;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3;
		L_3 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_2, NULL);
		bool L_4;
		L_4 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_1, L_3, NULL);
		return L_4;
	}
}
// Method Definition Index: 55323
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_m4C9F165E0E9541A3969AF246ED75B89A6776A1FC (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_u, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:185>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___0_u;
		NullCheck(L_0);
		float L_1 = L_0->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___1_v;
		NullCheck(L_2);
		float L_3 = L_2->____s;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = ___0_u;
		NullCheck(L_5);
		float L_6 = L_5->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = ___1_v;
		NullCheck(L_7);
		float L_8 = L_7->____t;
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_6, L_8)));
		return ((float)il2cpp_codegen_add(L_4, L_9));
	}
}
// Method Definition Index: 55324
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m7F138F904EDF9A9D1117F39F2758EE60DFF774AB (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_eDst, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eSrc, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:190>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___0_eDst;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____winding;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = ___1_eSrc;
		NullCheck(L_3);
		int32_t L_4 = L_3->____winding;
		NullCheck(L_1);
		L_1->____winding = ((int32_t)il2cpp_codegen_add(L_2, L_4));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:191>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = ___0_eDst;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____winding;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___1_eSrc;
		NullCheck(L_9);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = L_9->____Sym;
		NullCheck(L_10);
		int32_t L_11 = L_10->____winding;
		NullCheck(L_7);
		L_7->____winding = ((int32_t)il2cpp_codegen_add(L_8, L_11));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:192>
		return;
	}
}
// Method Definition Index: 55325
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83 (float ___0_a, float ___1_x, float ___2_b, float ___3_y, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:196>
		float L_0 = ___0_a;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:198>
		___0_a = (0.0f);
	}

IL_000f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:200>
		float L_1 = ___2_b;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:202>
		___2_b = (0.0f);
	}

IL_001e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:204>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:205>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:206>
		float L_2 = ___0_a;
		float L_3 = ___2_b;
		if ((((float)L_2) <= ((float)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		float L_4 = ___3_y;
		float L_5 = ___1_x;
		float L_6 = ___3_y;
		float L_7 = ___2_b;
		float L_8 = ___0_a;
		float L_9 = ___2_b;
		return ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_6)), ((float)(L_7/((float)il2cpp_codegen_add(L_8, L_9))))))));
	}

IL_002e:
	{
		float L_10 = ___2_b;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		float L_11 = ___1_x;
		float L_12 = ___3_y;
		float L_13 = ___1_x;
		float L_14 = ___0_a;
		float L_15 = ___0_a;
		float L_16 = ___2_b;
		return ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_13)), ((float)(L_14/((float)il2cpp_codegen_add(L_15, L_16))))))));
	}

IL_0042:
	{
		float L_17 = ___1_x;
		float L_18 = ___3_y;
		return ((float)(((float)il2cpp_codegen_add(L_17, L_18))/(2.0f)));
	}
}
// Method Definition Index: 55326
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** ___0_a, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** ___1_b, const RuntimeMethod* method) 
{
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:211>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** L_0 = ___0_a;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = *((Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C**)L_0);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:212>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** L_2 = ___0_a;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** L_3 = ___1_b;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = *((Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C**)L_3);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:213>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C** L_5 = ___1_b;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = V_0;
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:214>
		return;
	}
}
// Method Definition Index: 55327
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_m4D225F1D0B04094B17E891B09BF88B31E4C17224 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_o1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_d1, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_o2, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___3_d2, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___4_v, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:230>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___0_o1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = ___1_d1;
		bool L_2;
		L_2 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:230>
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___0_o1), (&___1_d1), NULL);
	}

IL_0012:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:231>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = ___2_o2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___3_d2;
		bool L_5;
		L_5 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:231>
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___2_o2), (&___3_d2), NULL);
	}

IL_0024:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:232>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___0_o1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = ___2_o2;
		bool L_8;
		L_8 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:232>
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___0_o1), (&___2_o2), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:232>
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___1_d1), (&___3_d2), NULL);
	}

IL_003f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:234>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = ___2_o2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___1_d1;
		bool L_11;
		L_11 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_0067;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:237>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = ___4_v;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13 = ___2_o2;
		NullCheck(L_13);
		float L_14 = L_13->____s;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = ___1_d1;
		NullCheck(L_15);
		float L_16 = L_15->____s;
		NullCheck(L_12);
		L_12->____s = ((float)(((float)il2cpp_codegen_add(L_14, L_16))/(2.0f)));
		goto IL_00eb;
	}

IL_0067:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:239>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = ___1_d1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = ___3_d2;
		bool L_19;
		L_19 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_00ae;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:242>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_20 = ___0_o1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = ___2_o2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = ___1_d1;
		float L_23;
		L_23 = Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616(L_20, L_21, L_22, NULL);
		V_0 = L_23;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:243>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_24 = ___2_o2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = ___1_d1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = ___3_d2;
		float L_27;
		L_27 = Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616(L_24, L_25, L_26, NULL);
		V_1 = L_27;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:244>
		float L_28 = V_0;
		float L_29 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_28, L_29))) < ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:246>
		float L_30 = V_0;
		V_0 = ((-L_30));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:247>
		float L_31 = V_1;
		V_1 = ((-L_31));
	}

IL_0092:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:249>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_32 = ___4_v;
		float L_33 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_34 = ___2_o2;
		NullCheck(L_34);
		float L_35 = L_34->____s;
		float L_36 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = ___1_d1;
		NullCheck(L_37);
		float L_38 = L_37->____s;
		float L_39;
		L_39 = Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83(L_33, L_35, L_36, L_38, NULL);
		NullCheck(L_32);
		L_32->____s = L_39;
		goto IL_00eb;
	}

IL_00ae:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:254>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_40 = ___0_o1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_41 = ___2_o2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = ___1_d1;
		float L_43;
		L_43 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_40, L_41, L_42, NULL);
		V_2 = L_43;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:255>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_44 = ___0_o1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_45 = ___3_d2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_46 = ___1_d1;
		float L_47;
		L_47 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_44, L_45, L_46, NULL);
		V_3 = ((-L_47));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:256>
		float L_48 = V_2;
		float L_49 = V_3;
		if ((!(((float)((float)il2cpp_codegen_add(L_48, L_49))) < ((float)(0.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:258>
		float L_50 = V_2;
		V_2 = ((-L_50));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:259>
		float L_51 = V_3;
		V_3 = ((-L_51));
	}

IL_00d1:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:261>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = ___4_v;
		float L_53 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_54 = ___2_o2;
		NullCheck(L_54);
		float L_55 = L_54->____s;
		float L_56 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_57 = ___3_d2;
		NullCheck(L_57);
		float L_58 = L_57->____s;
		float L_59;
		L_59 = Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83(L_53, L_55, L_56, L_58, NULL);
		NullCheck(L_52);
		L_52->____s = L_59;
	}

IL_00eb:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:266>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_60 = ___0_o1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_61 = ___1_d1;
		bool L_62;
		L_62 = Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449(L_60, L_61, NULL);
		if (L_62)
		{
			goto IL_00fd;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:266>
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___0_o1), (&___1_d1), NULL);
	}

IL_00fd:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:267>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_63 = ___2_o2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_64 = ___3_d2;
		bool L_65;
		L_65 = Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449(L_63, L_64, NULL);
		if (L_65)
		{
			goto IL_010f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:267>
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___2_o2), (&___3_d2), NULL);
	}

IL_010f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:268>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_66 = ___0_o1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_67 = ___2_o2;
		bool L_68;
		L_68 = Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449(L_66, L_67, NULL);
		if (L_68)
		{
			goto IL_012a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:268>
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___0_o1), (&___2_o2), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:268>
		Geom_Swap_m4E2FB95CA172AF9879C4A0A4D66A9BA820026733((&___1_d1), (&___3_d2), NULL);
	}

IL_012a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:270>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_69 = ___2_o2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_70 = ___1_d1;
		bool L_71;
		L_71 = Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449(L_69, L_70, NULL);
		if (L_71)
		{
			goto IL_014e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:273>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_72 = ___4_v;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_73 = ___2_o2;
		NullCheck(L_73);
		float L_74 = L_73->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_75 = ___1_d1;
		NullCheck(L_75);
		float L_76 = L_75->____t;
		NullCheck(L_72);
		L_72->____t = ((float)(((float)il2cpp_codegen_add(L_74, L_76))/(2.0f)));
		return;
	}

IL_014e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:275>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_77 = ___1_d1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_78 = ___3_d2;
		bool L_79;
		L_79 = Geom_TransLeq_mE90D362FE826B972431483C87C6B8E85890BB449(L_77, L_78, NULL);
		if (!L_79)
		{
			goto IL_019e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:278>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_80 = ___0_o1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_81 = ___2_o2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_82 = ___1_d1;
		float L_83;
		L_83 = Geom_TransEval_mB2AFE716F0C40F292670A74EE48F8DFB1BCD7757(L_80, L_81, L_82, NULL);
		V_4 = L_83;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:279>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_84 = ___2_o2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_85 = ___1_d1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_86 = ___3_d2;
		float L_87;
		L_87 = Geom_TransEval_mB2AFE716F0C40F292670A74EE48F8DFB1BCD7757(L_84, L_85, L_86, NULL);
		V_5 = L_87;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:280>
		float L_88 = V_4;
		float L_89 = V_5;
		if ((!(((float)((float)il2cpp_codegen_add(L_88, L_89))) < ((float)(0.0f)))))
		{
			goto IL_0181;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:282>
		float L_90 = V_4;
		V_4 = ((-L_90));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:283>
		float L_91 = V_5;
		V_5 = ((-L_91));
	}

IL_0181:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:285>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_92 = ___4_v;
		float L_93 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_94 = ___2_o2;
		NullCheck(L_94);
		float L_95 = L_94->____t;
		float L_96 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_97 = ___1_d1;
		NullCheck(L_97);
		float L_98 = L_97->____t;
		float L_99;
		L_99 = Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83(L_93, L_95, L_96, L_98, NULL);
		NullCheck(L_92);
		L_92->____t = L_99;
		return;
	}

IL_019e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:290>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_100 = ___0_o1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_101 = ___2_o2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_102 = ___1_d1;
		float L_103;
		L_103 = Geom_TransSign_m0343BBEAEF0D9D54D331616914C9BDC4EB6288D9(L_100, L_101, L_102, NULL);
		V_6 = L_103;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:291>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_104 = ___0_o1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_105 = ___3_d2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_106 = ___1_d1;
		float L_107;
		L_107 = Geom_TransSign_m0343BBEAEF0D9D54D331616914C9BDC4EB6288D9(L_104, L_105, L_106, NULL);
		V_7 = ((-L_107));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:292>
		float L_108 = V_6;
		float L_109 = V_7;
		if ((!(((float)((float)il2cpp_codegen_add(L_108, L_109))) < ((float)(0.0f)))))
		{
			goto IL_01c9;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:294>
		float L_110 = V_6;
		V_6 = ((-L_110));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:295>
		float L_111 = V_7;
		V_7 = ((-L_111));
	}

IL_01c9:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:297>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_112 = ___4_v;
		float L_113 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_114 = ___2_o2;
		NullCheck(L_114);
		float L_115 = L_114->____t;
		float L_116 = V_7;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_117 = ___3_d2;
		NullCheck(L_117);
		float L_118 = L_117->____t;
		float L_119;
		L_119 = Geom_Interpolate_m6F643CC7525B0EF39D5210EA506E79B9E057CE83(L_113, L_115, L_116, L_118, NULL);
		NullCheck(L_112);
		L_112->____t = L_119;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Geom.cs:299>
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
// Method Definition Index: 55328
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Init_m410FB0CDEB2503A7E64E429E740365DF83D7C8A9 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mD2ECB3B3B6ECD3CDC5EDB87734D1E5E6ADEED6D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E V_1;
	memset((&V_1), 0, sizeof(V_1));
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_4 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_5 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_6 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:52>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___0_pool;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var, L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = L_1;
		V_4 = L_2;
		__this->____vHead = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead), (void*)L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = V_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:53>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_4 = ___0_pool;
		NullCheck(L_4);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5;
		L_5 = GenericVirtualFuncInvoker0< Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* >::Invoke(IPool_Get_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mD2ECB3B3B6ECD3CDC5EDB87734D1E5E6ADEED6D1_RuntimeMethod_var, L_4);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6 = L_5;
		V_5 = L_6;
		__this->____fHead = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead), (void*)L_6);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_5;
		V_0 = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:55>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_8 = ___0_pool;
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_9;
		L_9 = EdgePair_Create_m059469082BEEB92DE39F2274113174F89279ED21(L_8, NULL);
		V_1 = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:56>
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_10 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = L_10.____e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = L_11;
		V_6 = L_12;
		__this->____eHead = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead), (void*)L_12);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_6;
		V_2 = L_13;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:57>
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_14 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = L_14.____eSym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15;
		V_6 = L_16;
		__this->____eHeadSym = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym), (void*)L_16);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_6;
		V_3 = L_17;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:59>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = L_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_19 = L_18;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_20 = L_19;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = L_20;
		V_4 = L_21;
		NullCheck(L_20);
		L_20->____prev = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____prev), (void*)L_21);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = V_4;
		NullCheck(L_19);
		L_19->____next = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____next), (void*)L_22);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:60>
		NullCheck(L_18);
		L_18->____anEdge = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____anEdge), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:62>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_23 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_24 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_25 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_26 = L_25;
		V_5 = L_26;
		NullCheck(L_24);
		L_24->____prev = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____prev), (void*)L_26);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_27 = V_5;
		NullCheck(L_23);
		L_23->____next = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->____next), (void*)L_27);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:63>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_28 = V_0;
		NullCheck(L_28);
		L_28->____anEdge = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____anEdge), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:64>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_29 = V_0;
		NullCheck(L_29);
		L_29->____trail = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->____trail), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:65>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_30 = V_0;
		NullCheck(L_30);
		L_30->____marked = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:66>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_31 = V_0;
		NullCheck(L_31);
		L_31->____inside = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:68>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_2;
		NullCheck(L_32);
		L_32->____next = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____next), (void*)L_33);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:69>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_3;
		NullCheck(L_34);
		L_34->____Sym = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->____Sym), (void*)L_35);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:70>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_2;
		NullCheck(L_36);
		L_36->____Onext = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____Onext), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:71>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = V_2;
		NullCheck(L_37);
		L_37->____Lnext = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____Lnext), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:72>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_2;
		NullCheck(L_38);
		L_38->____Org = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->____Org), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:73>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_2;
		NullCheck(L_39);
		L_39->____Lface = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->____Lface), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:74>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_2;
		NullCheck(L_40);
		L_40->____winding = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:75>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_2;
		NullCheck(L_41);
		L_41->____activeRegion = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_41->____activeRegion), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:77>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_43 = V_3;
		NullCheck(L_42);
		L_42->____next = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->____next), (void*)L_43);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:78>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_2;
		NullCheck(L_44);
		L_44->____Sym = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->____Sym), (void*)L_45);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:79>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = V_3;
		NullCheck(L_46);
		L_46->____Onext = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->____Onext), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:80>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_47 = V_3;
		NullCheck(L_47);
		L_47->____Lnext = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____Lnext), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:81>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_3;
		NullCheck(L_48);
		L_48->____Org = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->____Org), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:82>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_3;
		NullCheck(L_49);
		L_49->____Lface = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->____Lface), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:83>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_3;
		NullCheck(L_50);
		L_50->____winding = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:84>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51 = V_3;
		NullCheck(L_51);
		L_51->____activeRegion = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_51->____activeRegion), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:85>
		return;
	}
}
// Method Definition Index: 55329
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Reset_m428F69B56C8255FD7B048D2EC3D4948EB641460D (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_2 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_3 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_4 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_5 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_6 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:89>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = __this->____fHead;
		V_0 = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:89>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = __this->____fHead;
		V_1 = L_1;
		goto IL_0020;
	}

IL_0010:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:91>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = V_0;
		NullCheck(L_2);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = L_2->____next;
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:92>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_4 = ___0_pool;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_0;
		NullCheck(L_4);
		GenericVirtualActionInvoker1< Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* >::Invoke(IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var, L_4, L_5);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:89>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6 = V_1;
		V_0 = L_6;
	}

IL_0020:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:89>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_0;
		NullCheck(L_7);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_8 = L_7->____next;
		if (L_8)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:94>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = __this->____vHead;
		V_2 = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:94>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = __this->____vHead;
		V_3 = L_10;
		goto IL_0048;
	}

IL_0038:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:96>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = V_2;
		NullCheck(L_11);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = L_11->____next;
		V_3 = L_12;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:97>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_13 = ___0_pool;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = V_2;
		NullCheck(L_13);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_13, L_14);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:94>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = V_3;
		V_2 = L_15;
	}

IL_0048:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:94>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = V_2;
		NullCheck(L_16);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = L_16->____next;
		if (L_17)
		{
			goto IL_0038;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:99>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = __this->____eHead;
		V_4 = L_18;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:99>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = __this->____eHead;
		V_5 = L_19;
		goto IL_0084;
	}

IL_0062:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:101>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_4;
		NullCheck(L_20);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = L_20->____next;
		V_5 = L_21;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:102>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_22 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_4;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = L_23->____Sym;
		NullCheck(L_22);
		GenericVirtualActionInvoker1< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var, L_22, L_24);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:103>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_25 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_4;
		NullCheck(L_25);
		GenericVirtualActionInvoker1< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var, L_25, L_26);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:99>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_5;
		V_4 = L_27;
	}

IL_0084:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:99>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = V_4;
		NullCheck(L_28);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = L_28->____next;
		if (L_29)
		{
			goto IL_0062;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:106>
		__this->____vHead = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:107>
		__this->____fHead = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:108>
		V_6 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		__this->____eHeadSym = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_6;
		__this->____eHead = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead), (void*)L_30);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:109>
		return;
	}
}
// Method Definition Index: 55330
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_MakeEdge_m3D0A00C5539506BD80B3A810DC16DBCAA9BB061C (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:117>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = __this->____eHead;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2;
		L_2 = MeshUtils_MakeEdge_mBB05A5079458A48E840BA60BDC9EC4B93806EF3F(L_0, L_1, NULL);
		V_0 = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:119>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_3 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = __this->____vHead;
		MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7(L_3, L_4, L_5, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:120>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_6 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_0;
		NullCheck(L_7);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = L_7->____Sym;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = __this->____vHead;
		MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7(L_6, L_8, L_9, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:121>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_10 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_12 = __this->____fHead;
		MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260(L_10, L_11, L_12, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:123>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		return L_13;
	}
}
// Method Definition Index: 55331
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrg, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___2_eDst, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:152>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___1_eOrg;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___2_eDst;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_0) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_1))))
		{
			goto IL_0005;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:154>
		return;
	}

IL_0005:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:157>
		V_0 = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:158>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___2_eDst;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = L_2->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = ___1_eOrg;
		NullCheck(L_4);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = L_4->____Org;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_3) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:161>
		V_0 = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:162>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_6 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = ___2_eDst;
		NullCheck(L_7);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = L_7->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___1_eOrg;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = L_9->____Org;
		MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB(L_6, L_8, L_10, NULL);
	}

IL_0029:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:164>
		V_1 = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:165>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = ___2_eDst;
		NullCheck(L_11);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_12 = L_11->____Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = ___1_eOrg;
		NullCheck(L_13);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_14 = L_13->____Lface;
		if ((((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_12) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_14)))
		{
			goto IL_004d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:168>
		V_1 = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:169>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_15 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = ___2_eDst;
		NullCheck(L_16);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_17 = L_16->____Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = ___1_eOrg;
		NullCheck(L_18);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_19 = L_18->____Lface;
		MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6(L_15, L_17, L_19, NULL);
	}

IL_004d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:173>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = ___2_eDst;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = ___1_eOrg;
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_20, L_21, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:175>
		bool L_22 = V_0;
		if (L_22)
		{
			goto IL_0070;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:179>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_23 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = ___2_eDst;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = ___1_eOrg;
		NullCheck(L_25);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = L_25->____Org;
		MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7(L_23, L_24, L_26, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:180>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = ___1_eOrg;
		NullCheck(L_27);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28 = L_27->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = ___1_eOrg;
		NullCheck(L_28);
		L_28->____anEdge = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____anEdge), (void*)L_29);
	}

IL_0070:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:182>
		bool L_30 = V_1;
		if (L_30)
		{
			goto IL_008c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:186>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_31 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = ___2_eDst;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = ___1_eOrg;
		NullCheck(L_33);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_34 = L_33->____Lface;
		MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260(L_31, L_32, L_34, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:187>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = ___1_eOrg;
		NullCheck(L_35);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_36 = L_35->____Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = ___1_eOrg;
		NullCheck(L_36);
		L_36->____anEdge = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____anEdge), (void*)L_37);
	}

IL_008c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:189>
		return;
	}
}
// Method Definition Index: 55332
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eDel, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	bool V_1 = false;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:200>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___1_eDel;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Sym;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:205>
		V_1 = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:206>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___1_eDel;
		NullCheck(L_2);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = L_2->____Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = ___1_eDel;
		NullCheck(L_4);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5;
		L_5 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_4, NULL);
		if ((((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_3) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:209>
		V_1 = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:210>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_6 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = ___1_eDel;
		NullCheck(L_7);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_8 = L_7->____Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___1_eDel;
		NullCheck(L_9);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10;
		L_10 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_9, NULL);
		MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6(L_6, L_8, L_10, NULL);
	}

IL_002b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:213>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = ___1_eDel;
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = L_11->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = ___1_eDel;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_12) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_13))))
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:215>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_14 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = ___1_eDel;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = L_15->____Org;
		MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB(L_14, L_16, (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL, NULL);
		goto IL_0081;
	}

IL_0043:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:220>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = ___1_eDel;
		NullCheck(L_17);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18;
		L_18 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_17, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = ___1_eDel;
		NullCheck(L_19);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20;
		L_20 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_19, NULL);
		NullCheck(L_18);
		L_18->____anEdge = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____anEdge), (void*)L_20);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:221>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = ___1_eDel;
		NullCheck(L_21);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = L_21->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = ___1_eDel;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = L_23->____Onext;
		NullCheck(L_22);
		L_22->____anEdge = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____anEdge), (void*)L_24);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:223>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = ___1_eDel;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = ___1_eDel;
		NullCheck(L_26);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27;
		L_27 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_26, NULL);
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_25, L_27, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:225>
		bool L_28 = V_1;
		if (L_28)
		{
			goto IL_0081;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:228>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_29 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = ___1_eDel;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = ___1_eDel;
		NullCheck(L_31);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_32 = L_31->____Lface;
		MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260(L_29, L_30, L_32, NULL);
	}

IL_0081:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:235>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_0;
		NullCheck(L_33);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = L_33->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_34) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_35))))
		{
			goto IL_00a6;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:237>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_36 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = V_0;
		NullCheck(L_37);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_38 = L_37->____Org;
		MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB(L_36, L_38, (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:238>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_39 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_0;
		NullCheck(L_40);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_41 = L_40->____Lface;
		MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6(L_39, L_41, (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL, NULL);
		goto IL_00d4;
	}

IL_00a6:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:243>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = ___1_eDel;
		NullCheck(L_42);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_43 = L_42->____Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = V_0;
		NullCheck(L_44);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45;
		L_45 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_44, NULL);
		NullCheck(L_43);
		L_43->____anEdge = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_43->____anEdge), (void*)L_45);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:244>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = V_0;
		NullCheck(L_46);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_47 = L_46->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_0;
		NullCheck(L_48);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = L_48->____Onext;
		NullCheck(L_47);
		L_47->____anEdge = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____anEdge), (void*)L_49);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:245>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51 = V_0;
		NullCheck(L_51);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52;
		L_52 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_51, NULL);
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_50, L_52, NULL);
	}

IL_00d4:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:249>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_53 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54 = ___1_eDel;
		MeshUtils_KillEdge_m31AFA9B818CC459D34025AA709B59C49AB9A5652(L_53, L_54, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:250>
		return;
	}
}
// Method Definition Index: 55333
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_AddEdgeVertex_mC3ECCF182D8F521EBC26110F3001B903A55211C0 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrg, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_2 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:258>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___1_eOrg;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2;
		L_2 = MeshUtils_MakeEdge_mBB05A5079458A48E840BA60BDC9EC4B93806EF3F(L_0, L_1, NULL);
		V_0 = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:259>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_0;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____Sym;
		V_1 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:262>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = ___1_eOrg;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____Lnext;
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_5, L_7, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:265>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___1_eOrg;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10;
		L_10 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_9, NULL);
		NullCheck(L_8);
		L_8->____Org = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Org), (void*)L_10);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:266>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_11 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = L_13->____Org;
		MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7(L_11, L_12, L_14, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:267>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = ___1_eOrg;
		NullCheck(L_17);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = L_17->____Lface;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_19 = L_18;
		V_2 = L_19;
		NullCheck(L_16);
		L_16->____Lface = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____Lface), (void*)L_19);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_20 = V_2;
		NullCheck(L_15);
		L_15->____Lface = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Lface), (void*)L_20);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:269>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_0;
		return L_21;
	}
}
// Method Definition Index: 55334
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrg, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:279>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___1_eOrg;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2;
		L_2 = Mesh_AddEdgeVertex_mC3ECCF182D8F521EBC26110F3001B903A55211C0(__this, L_0, L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:280>
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Sym;
		V_0 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:283>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = ___1_eOrg;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = ___1_eOrg;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____Sym;
		NullCheck(L_7);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8;
		L_8 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_7, NULL);
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_5, L_8, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:284>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___1_eOrg;
		NullCheck(L_9);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = L_9->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_10, L_11, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:287>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = ___1_eOrg;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = L_13->____Org;
		NullCheck(L_12);
		Edge_set__Dst_m56F56B99812B22C677B6254CE6188FB788473604(L_12, L_14, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:288>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16;
		L_16 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_15, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_0;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = L_17->____Sym;
		NullCheck(L_16);
		L_16->____anEdge = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____anEdge), (void*)L_18);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:289>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = ___1_eOrg;
		NullCheck(L_20);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_21;
		L_21 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_20, NULL);
		NullCheck(L_19);
		Edge_set__Rface_m66117D5A92950759B7A650E6A58360D9F0CD348D(L_19, L_21, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:290>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = ___1_eOrg;
		NullCheck(L_23);
		int32_t L_24 = L_23->____winding;
		NullCheck(L_22);
		L_22->____winding = L_24;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:291>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_0;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = ___1_eOrg;
		NullCheck(L_27);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = L_27->____Sym;
		NullCheck(L_28);
		int32_t L_29 = L_28->____winding;
		NullCheck(L_26);
		L_26->____winding = L_29;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:293>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_0;
		return L_30;
	}
}
// Method Definition Index: 55335
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrg, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___2_eDst, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	bool V_2 = false;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_3 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:308>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___1_eOrg;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2;
		L_2 = MeshUtils_MakeEdge_mBB05A5079458A48E840BA60BDC9EC4B93806EF3F(L_0, L_1, NULL);
		V_0 = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:309>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_0;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____Sym;
		V_1 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:311>
		V_2 = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:312>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = ___2_eDst;
		NullCheck(L_5);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6 = L_5->____Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = ___1_eOrg;
		NullCheck(L_7);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_8 = L_7->____Lface;
		if ((((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_6) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_8)))
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:315>
		V_2 = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:316>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_9 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = ___2_eDst;
		NullCheck(L_10);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = L_10->____Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = ___1_eOrg;
		NullCheck(L_12);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = L_12->____Lface;
		MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6(L_9, L_11, L_13, NULL);
	}

IL_0033:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:320>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = ___1_eOrg;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15->____Lnext;
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_14, L_16, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:321>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = ___2_eDst;
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_17, L_18, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:324>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = ___1_eOrg;
		NullCheck(L_20);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21;
		L_21 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_20, NULL);
		NullCheck(L_19);
		L_19->____Org = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____Org), (void*)L_21);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:325>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = ___2_eDst;
		NullCheck(L_23);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_24 = L_23->____Org;
		NullCheck(L_22);
		L_22->____Org = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____Org), (void*)L_24);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:326>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = ___1_eOrg;
		NullCheck(L_27);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_28 = L_27->____Lface;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_29 = L_28;
		V_3 = L_29;
		NullCheck(L_26);
		L_26->____Lface = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____Lface), (void*)L_29);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_30 = V_3;
		NullCheck(L_25);
		L_25->____Lface = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->____Lface), (void*)L_30);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:329>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = ___1_eOrg;
		NullCheck(L_31);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_32 = L_31->____Lface;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_1;
		NullCheck(L_32);
		L_32->____anEdge = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____anEdge), (void*)L_33);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:331>
		bool L_34 = V_2;
		if (L_34)
		{
			goto IL_008f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:333>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_35 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = ___1_eOrg;
		NullCheck(L_37);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_38 = L_37->____Lface;
		MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260(L_35, L_36, L_38, NULL);
	}

IL_008f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:336>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_0;
		return L_39;
	}
}
// Method Definition Index: 55336
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_ZapFace_m5EA809DDA7500239AB92BEBF71D6F25F90FF326D (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___1_fZap, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_4 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_5 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:349>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = ___1_fZap;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____anEdge;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:352>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Lnext;
		V_1 = L_3;
	}

IL_000e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:355>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_1;
		V_2 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:356>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_2;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Lnext;
		V_1 = L_6;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:358>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_2;
		NullCheck(L_7);
		L_7->____Lface = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____Lface), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:359>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_2;
		NullCheck(L_8);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9;
		L_9 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_8, NULL);
		if (L_9)
		{
			goto IL_009e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:363>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_2;
		NullCheck(L_10);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = L_10->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_11) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_12))))
		{
			goto IL_003e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:365>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_13 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = V_2;
		NullCheck(L_14);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = L_14->____Org;
		MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB(L_13, L_15, (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL, NULL);
		goto IL_005b;
	}

IL_003e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:370>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_2;
		NullCheck(L_16);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = L_16->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_2;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____Onext;
		NullCheck(L_17);
		L_17->____anEdge = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->____anEdge), (void*)L_19);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:371>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_2;
		NullCheck(L_21);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22;
		L_22 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_21, NULL);
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_20, L_22, NULL);
	}

IL_005b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:373>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_2;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = L_23->____Sym;
		V_3 = L_24;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:374>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_3;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_3;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_26) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_27))))
		{
			goto IL_007a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:376>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_28 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_3;
		NullCheck(L_29);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_30 = L_29->____Org;
		MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB(L_28, L_30, (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL, NULL);
		goto IL_0097;
	}

IL_007a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:381>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_3;
		NullCheck(L_31);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_32 = L_31->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_3;
		NullCheck(L_33);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = L_33->____Onext;
		NullCheck(L_32);
		L_32->____anEdge = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____anEdge), (void*)L_34);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:382>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_3;
		NullCheck(L_36);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37;
		L_37 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_36, NULL);
		MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF(L_35, L_37, NULL);
	}

IL_0097:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:384>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_38 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_2;
		MeshUtils_KillEdge_m31AFA9B818CC459D34025AA709B59C49AB9A5652(L_38, L_39, NULL);
	}

IL_009e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:386>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_40) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_41))))
		{
			goto IL_000e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:389>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_42 = ___1_fZap;
		NullCheck(L_42);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_43 = L_42->____prev;
		V_4 = L_43;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:390>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_44 = ___1_fZap;
		NullCheck(L_44);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_45 = L_44->____next;
		V_5 = L_45;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:391>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_46 = V_5;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_47 = V_4;
		NullCheck(L_46);
		L_46->____prev = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->____prev), (void*)L_47);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:392>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_48 = V_4;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_49 = V_5;
		NullCheck(L_48);
		L_48->____next = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->____next), (void*)L_49);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:394>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_50 = ___0_pool;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_51 = ___1_fZap;
		NullCheck(L_50);
		GenericVirtualActionInvoker1< Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* >::Invoke(IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var, L_50, L_51);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:395>
		return;
	}
}
// Method Definition Index: 55337
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m5A5B25E0A8953C1CE73FC5C215C93A5B550DDFE3 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, int32_t ___1_maxVertsPerFace, const RuntimeMethod* method) 
{
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_4 = NULL;
	int32_t V_5 = 0;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:399>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = __this->____fHead;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____next;
		V_0 = L_1;
		goto IL_00fe;
	}

IL_0011:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:402>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->____inside;
		if (!L_3)
		{
			goto IL_00f7;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:407>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____anEdge;
		V_1 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:408>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org;
		V_2 = L_7;
	}

IL_002a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:412>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_1;
		NullCheck(L_8);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = L_8->____Lnext;
		V_3 = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:413>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		NullCheck(L_10);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = L_10->____Sym;
		V_4 = L_11;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:415>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_4;
		if (!L_12)
		{
			goto IL_00df;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_4;
		NullCheck(L_13);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_14 = L_13->____Lface;
		if (!L_14)
		{
			goto IL_00df;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_4;
		NullCheck(L_15);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_16 = L_15->____Lface;
		NullCheck(L_16);
		bool L_17 = L_16->____inside;
		if (!L_17)
		{
			goto IL_00df;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:419>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Face_get_VertsCount_mE9A55B46F4B3710BB0353CC660D9B3DF67464E68(L_18, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:420>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_4;
		NullCheck(L_20);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_21 = L_20->____Lface;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Face_get_VertsCount_mE9A55B46F4B3710BB0353CC660D9B3DF67464E68(L_21, NULL);
		V_5 = L_22;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:421>
		int32_t L_23 = V_5;
		int32_t L_24 = ___1_maxVertsPerFace;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_19, L_23)), 2))) > ((int32_t)L_24)))
		{
			goto IL_00df;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:424>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:425>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_1;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26;
		L_26 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_25, NULL);
		NullCheck(L_26);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = L_26->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = V_1;
		NullCheck(L_28);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = L_28->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_4;
		NullCheck(L_30);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = L_30->____Lnext;
		NullCheck(L_31);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = L_31->____Lnext;
		NullCheck(L_32);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_33 = L_32->____Org;
		bool L_34;
		L_34 = Geom_VertCCW_mADBA3109ED58984900698E5695A58871E213BB13(L_27, L_29, L_33, NULL);
		if (!L_34)
		{
			goto IL_00df;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_4;
		NullCheck(L_35);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36;
		L_36 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_35, NULL);
		NullCheck(L_36);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = L_36->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_4;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39 = L_38->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_1;
		NullCheck(L_40);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = L_40->____Lnext;
		NullCheck(L_41);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = L_41->____Lnext;
		NullCheck(L_42);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_43 = L_42->____Org;
		bool L_44;
		L_44 = Geom_VertCCW_mADBA3109ED58984900698E5695A58871E213BB13(L_37, L_39, L_43, NULL);
		if (!L_44)
		{
			goto IL_00df;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:427>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_4;
		NullCheck(L_45);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = L_45->____Lnext;
		V_3 = L_46;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:428>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_47 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_4;
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(__this, L_47, L_48, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:429>
		V_1 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
	}

IL_00df:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:434>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_1;
		if (!L_49)
		{
			goto IL_00f0;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_1;
		NullCheck(L_50);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51 = L_50->____Lnext;
		NullCheck(L_51);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = L_51->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_53 = V_2;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_52) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_53)))
		{
			goto IL_00f7;
		}
	}

IL_00f0:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:438>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54 = V_3;
		V_1 = L_54;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:410>
		goto IL_002a;
	}

IL_00f7:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:399>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_55 = V_0;
		NullCheck(L_55);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_56 = L_55->____next;
		V_0 = L_56;
	}

IL_00fe:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:399>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_57 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_58 = __this->____fHead;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_57) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_58))))
		{
			goto IL_0011;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:441>
		return;
	}
}
// Method Definition Index: 55338
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Check_m59551409C0B4244341B170413BFF3A7208631A81 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_2 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_3 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_4 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_5 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:448>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = __this->____fHead;
		V_1 = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:449>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = __this->____fHead;
		V_1 = L_1;
		goto IL_0029;
	}

IL_0010:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:451>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = V_2;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____anEdge;
		V_0 = L_3;
	}

IL_0017:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:458>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____Lnext;
		V_0 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:459>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_2;
		NullCheck(L_7);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = L_7->____anEdge;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_6) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_8))))
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:449>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = V_2;
		V_1 = L_9;
	}

IL_0029:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:449>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10 = V_1;
		NullCheck(L_10);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = L_10->____next;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_12 = L_11;
		V_2 = L_12;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = __this->____fHead;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_12) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_13))))
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:463>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = __this->____vHead;
		V_3 = L_14;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:464>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = __this->____vHead;
		V_3 = L_15;
		goto IL_0065;
	}

IL_0049:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:467>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = V_4;
		NullCheck(L_16);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = L_16->____anEdge;
		V_0 = L_17;
	}

IL_0051:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:475>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_0;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____Onext;
		V_0 = L_19;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:476>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = V_4;
		NullCheck(L_21);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = L_21->____anEdge;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_20) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_22))))
		{
			goto IL_0051;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:464>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = V_4;
		V_3 = L_23;
	}

IL_0065:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:464>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_24 = V_3;
		NullCheck(L_24);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = L_24->____next;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = L_25;
		V_4 = L_26;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = __this->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_26) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_27))))
		{
			goto IL_0049;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:480>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = __this->____eHead;
		V_5 = L_28;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:481>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = __this->____eHead;
		V_5 = L_29;
		goto IL_008b;
	}

IL_0088:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:481>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_0;
		V_5 = L_30;
	}

IL_008b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:481>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_5;
		NullCheck(L_31);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = L_31->____next;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = L_32;
		V_0 = L_33;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = __this->____eHead;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_33) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_34))))
		{
			goto IL_0088;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Mesh.cs:496>
		return;
	}
}
// Method Definition Index: 55339
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m10BC8228F4F4F2AC5A311C49566077864EE32E81 (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 55340
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:56>
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:56>
		float L_1 = __this->___X;
		return L_1;
	}

IL_000a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:57>
		int32_t L_2 = ___0_index;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:57>
		float L_3 = __this->___Y;
		return L_3;
	}

IL_0015:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:58>
		int32_t L_4 = ___0_index;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:58>
		float L_5 = __this->___Z;
		return L_5;
	}

IL_0020:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:59>
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  float Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*>(__this + _offset);
	float _returnValue;
	_returnValue = Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// Method Definition Index: 55341
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:63>
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:63>
		float L_1 = ___1_value;
		__this->___X = L_1;
		return;
	}

IL_000b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:64>
		int32_t L_2 = ___0_index;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:64>
		float L_3 = ___1_value;
		__this->___Y = L_3;
		return;
	}

IL_0017:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:65>
		int32_t L_4 = ___0_index;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:65>
		float L_5 = ___1_value;
		__this->___Z = L_5;
		return;
	}

IL_0023:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:66>
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, float ___1_value, const RuntimeMethod* method)
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*>(__this + _offset);
	Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(_thisAdjusted, ___0_index, ___1_value, method);
}
// Method Definition Index: 55342
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m95957C0DEE2BAC8062A90688A1B160025012F183 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:72>
		float L_0 = ___0_x;
		__this->___X = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:73>
		float L_1 = ___1_y;
		__this->___Y = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:74>
		float L_2 = ___2_z;
		__this->___Z = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:75>
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3__ctor_m95957C0DEE2BAC8062A90688A1B160025012F183_AdjustorThunk (RuntimeObject* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method)
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*>(__this + _offset);
	Vec3__ctor_m95957C0DEE2BAC8062A90688A1B160025012F183(_thisAdjusted, ___0_x, ___1_y, ___2_z, method);
}
// Method Definition Index: 55343
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mCDE4E6D261C482B3B58AB0EA0FA08DBA1860B110 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___0_lhs, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___1_rhs, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___2_result, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:79>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_0 = ___2_result;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_1 = ___0_lhs;
		float L_2 = L_1->___X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_3 = ___1_rhs;
		float L_4 = L_3->___X;
		L_0->___X = ((float)il2cpp_codegen_subtract(L_2, L_4));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:80>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_5 = ___2_result;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_6 = ___0_lhs;
		float L_7 = L_6->___Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_8 = ___1_rhs;
		float L_9 = L_8->___Y;
		L_5->___Y = ((float)il2cpp_codegen_subtract(L_7, L_9));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:81>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_10 = ___2_result;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_11 = ___0_lhs;
		float L_12 = L_11->___Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_13 = ___1_rhs;
		float L_14 = L_13->___Z;
		L_10->___Z = ((float)il2cpp_codegen_subtract(L_12, L_14));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:82>
		return;
	}
}
// Method Definition Index: 55344
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m56FA56AE9B5B9AC36E12FF1A40FCDA51EFF04139 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___0_v, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:86>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_0 = ___0_v;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_1 = ___0_v;
		float L_2 = L_1->___X;
		L_0->___X = ((-L_2));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:87>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_3 = ___0_v;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_4 = ___0_v;
		float L_5 = L_4->___Y;
		L_3->___Y = ((-L_5));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:88>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_6 = ___0_v;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_7 = ___0_v;
		float L_8 = L_7->___Z;
		L_6->___Z = ((-L_8));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:89>
		return;
	}
}
// Method Definition Index: 55345
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_mC49EABB6FB4C33967B4005AAF9F999317CAB6341 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___0_u, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___1_v, float* ___2_dot, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:93>
		float* L_0 = ___2_dot;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_1 = ___0_u;
		float L_2 = L_1->___X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_3 = ___1_v;
		float L_4 = L_3->___X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_5 = ___0_u;
		float L_6 = L_5->___Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_7 = ___1_v;
		float L_8 = L_7->___Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_9 = ___0_u;
		float L_10 = L_9->___Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_11 = ___1_v;
		float L_12 = L_11->___Z;
		*((float*)L_0) = (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_4)), ((float)il2cpp_codegen_multiply(L_6, L_8)))), ((float)il2cpp_codegen_multiply(L_10, L_12))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:94>
		return;
	}
}
// Method Definition Index: 55346
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Normalize_m70C07321DBE959820C8D1103274500B31C54D591 (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:98>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_0 = ___0_v;
		float L_1 = L_0->___X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_2 = ___0_v;
		float L_3 = L_2->___X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_4 = ___0_v;
		float L_5 = L_4->___Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_6 = ___0_v;
		float L_7 = L_6->___Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_8 = ___0_v;
		float L_9 = L_8->___Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_10 = ___0_v;
		float L_11 = L_10->___Z;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:100>
		float L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = sqrt(((double)L_12));
		V_0 = ((float)((1.0f)/((float)L_13)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:101>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_14 = ___0_v;
		float* L_15 = (float*)(&L_14->___X);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18 = V_0;
		*((float*)L_16) = (float)((float)il2cpp_codegen_multiply(L_17, L_18));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:102>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_19 = ___0_v;
		float* L_20 = (float*)(&L_19->___Y);
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		float L_23 = V_0;
		*((float*)L_21) = (float)((float)il2cpp_codegen_multiply(L_22, L_23));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:103>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_24 = ___0_v;
		float* L_25 = (float*)(&L_24->___Z);
		float* L_26 = L_25;
		float L_27 = *((float*)L_26);
		float L_28 = V_0;
		*((float*)L_26) = (float)((float)il2cpp_codegen_multiply(L_27, L_28));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:104>
		return;
	}
}
// Method Definition Index: 55347
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_m3A93BE72D5B052A5908805AEF993AC6F296ED4CB (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float G_B4_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:108>
		V_0 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:109>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_0 = ___0_v;
		float L_1 = L_0->___Y;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = fabsf(L_1);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_3 = ___0_v;
		float L_4 = L_3->___X;
		float L_5;
		L_5 = fabsf(L_4);
		if ((!(((float)L_2) > ((float)L_5))))
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:109>
		V_0 = 1;
	}

IL_001c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:110>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_6 = ___0_v;
		float L_7 = L_6->___Z;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = fabsf(L_7);
		int32_t L_9 = V_0;
		if (!L_9)
		{
			G_B4_0 = L_8;
			goto IL_0032;
		}
		G_B3_0 = L_8;
	}
	{
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_10 = ___0_v;
		float L_11 = L_10->___Y;
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_0032:
	{
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_12 = ___0_v;
		float L_13 = L_12->___X;
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_14;
		L_14 = fabsf(G_B5_0);
		if ((!(((float)G_B5_1) > ((float)L_14))))
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:110>
		V_0 = 2;
	}

IL_0041:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:111>
		int32_t L_15 = V_0;
		return L_15;
	}
}
// Method Definition Index: 55348
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_m2B01652796410E8DE45F96DABE603BA7E979BF1D (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:116>
		float L_0 = __this->___X;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_defaults.single_class, &L_1);
		float L_3 = __this->___Y;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_defaults.single_class, &L_4);
		float L_6 = __this->___Z;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(il2cpp_defaults.single_class, &L_7);
		String_t* L_9;
		L_9 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* Vec3_ToString_m2B01652796410E8DE45F96DABE603BA7E979BF1D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vec3_ToString_m2B01652796410E8DE45F96DABE603BA7E979BF1D(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 55349
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__cctor_mAD93378468566C5D245F685F1AA441DE96C663EB (const RuntimeMethod* method) 
{
	{
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
// Method Definition Index: 55355
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_mE85827066651A20AC715EC1B494E9100FF116A63 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_m32B825C98A727514E308645291C68E9B9B2DCC38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mA9B4229D4130BB3A93DC00FDD1EACB8613C20875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mBBB3042C878BF14A1B1E40C00AF81B70BC1FE2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mD03F64BC7CC0961FCFA1E67BB773F5D2A83526A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m81F3DA97290F2261C02FBA96153CEE2AF4FB706A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m192B164DF44E7DBD72203C4BBC0143F7B95B0E7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_m5201AE90CD0391C6658129210F44D64BFC1106C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mABCA8B3096288CE3D1AE740ED40CFB1648B96878_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:162>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:164>
		DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50* L_0 = (DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50*)il2cpp_codegen_object_new(DefaultTypePool_1_t790B1CF053761EDB0C7844EAD674941E87E3FB50_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_mD03F64BC7CC0961FCFA1E67BB773F5D2A83526A4(L_0, DefaultTypePool_1__ctor_mD03F64BC7CC0961FCFA1E67BB773F5D2A83526A4_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mABCA8B3096288CE3D1AE740ED40CFB1648B96878_RuntimeMethod_var, __this, L_0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:165>
		DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259* L_1 = (DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259*)il2cpp_codegen_object_new(DefaultTypePool_1_t7D310645347F1A9E15E29218FD5D93D38A3E7259_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_mBBB3042C878BF14A1B1E40C00AF81B70BC1FE2B3(L_1, DefaultTypePool_1__ctor_mBBB3042C878BF14A1B1E40C00AF81B70BC1FE2B3_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_m5201AE90CD0391C6658129210F44D64BFC1106C7_RuntimeMethod_var, __this, L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:166>
		DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C* L_2 = (DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C*)il2cpp_codegen_object_new(DefaultTypePool_1_t9E98332773D4C1C321B2ADC75783DEC9AD1C7C8C_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_mA9B4229D4130BB3A93DC00FDD1EACB8613C20875(L_2, DefaultTypePool_1__ctor_mA9B4229D4130BB3A93DC00FDD1EACB8613C20875_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m192B164DF44E7DBD72203C4BBC0143F7B95B0E7B_RuntimeMethod_var, __this, L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:167>
		DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8* L_3 = (DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8*)il2cpp_codegen_object_new(DefaultTypePool_1_t1C5F81C917EE9AEEF0B2E73812C569BE9BB98AF8_il2cpp_TypeInfo_var);
		DefaultTypePool_1__ctor_m32B825C98A727514E308645291C68E9B9B2DCC38(L_3, DefaultTypePool_1__ctor_m32B825C98A727514E308645291C68E9B9B2DCC38_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m81F3DA97290F2261C02FBA96153CEE2AF4FB706A_RuntimeMethod_var, __this, L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:168>
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
// Method Definition Index: 55362
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_mE6458D67CCDD6BC8DE755C638E600AA573298FCE (NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_mE85827066651A20AC715EC1B494E9100FF116A63(__this, NULL);
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
// Method Definition Index: 55366
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m1418BADB8C4AB3BD573CDBC48DB0F5AB1637C575 (DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_mE85827066651A20AC715EC1B494E9100FF116A63(__this, NULL);
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
// Method Definition Index: 55369
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m05CCDF853BBCBE94DF4D755CD0B09ADEC68FBCAF (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_a, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_b, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:383>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___0_a;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Onext;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:384>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___1_b;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Onext;
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:386>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = ___1_b;
		NullCheck(L_5);
		L_5->____Lnext = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____Lnext), (void*)L_6);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:387>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		NullCheck(L_7);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = L_7->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___0_a;
		NullCheck(L_8);
		L_8->____Lnext = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Lnext), (void*)L_9);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:388>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = ___0_a;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_1;
		NullCheck(L_10);
		L_10->____Onext = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____Onext), (void*)L_11);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:389>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = ___1_b;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_12);
		L_12->____Onext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____Onext), (void*)L_13);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:390>
		return;
	}
}
// Method Definition Index: 55370
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m17E59E781621823BEA800BD0577EE40DEA27EAA7 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrig, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_vNext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:401>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___0_pool;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var, L_0);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:404>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___2_vNext;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = L_2->____prev;
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:405>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev), (void*)L_5);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:406>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next), (void*)L_7);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:407>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = ___2_vNext;
		NullCheck(L_8);
		L_8->____next = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next), (void*)L_9);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:408>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = ___2_vNext;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev), (void*)L_11);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:410>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = ___1_eOrig;
		NullCheck(L_12);
		L_12->____anEdge = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge), (void*)L_13);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:414>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = ___1_eOrig;
		V_2 = L_14;
	}

IL_0033:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:416>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = V_0;
		NullCheck(L_15);
		L_15->____Org = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Org), (void*)L_16);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:417>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_2;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = L_17->____Onext;
		V_2 = L_18;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:418>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = ___1_eOrig;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_19) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_20))))
		{
			goto IL_0033;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:419>
		return;
	}
}
// Method Definition Index: 55371
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_mA76D9CF224AFDADFD5F22535DBFB89B8E9CAB260 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eOrig, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___2_fNext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mD2ECB3B3B6ECD3CDC5EDB87734D1E5E6ADEED6D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:430>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___0_pool;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1;
		L_1 = GenericVirtualFuncInvoker0< Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* >::Invoke(IPool_Get_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mD2ECB3B3B6ECD3CDC5EDB87734D1E5E6ADEED6D1_RuntimeMethod_var, L_0);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:433>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = ___2_fNext;
		NullCheck(L_2);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = L_2->____prev;
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:434>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev), (void*)L_5);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:435>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6 = V_1;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next), (void*)L_7);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:436>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_8 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = ___2_fNext;
		NullCheck(L_8);
		L_8->____next = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next), (void*)L_9);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:437>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10 = ___2_fNext;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev), (void*)L_11);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:439>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_12 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = ___1_eOrig;
		NullCheck(L_12);
		L_12->____anEdge = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge), (void*)L_13);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:440>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_14 = V_0;
		NullCheck(L_14);
		L_14->____trail = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->____trail), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:441>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_15 = V_0;
		NullCheck(L_15);
		L_15->____marked = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:445>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_16 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_17 = ___2_fNext;
		NullCheck(L_17);
		bool L_18 = L_17->____inside;
		NullCheck(L_16);
		L_16->____inside = L_18;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:448>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = ___1_eOrig;
		V_2 = L_19;
	}

IL_004d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:450>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_21 = V_0;
		NullCheck(L_20);
		L_20->____Lface = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Lface), (void*)L_21);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:451>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_2;
		NullCheck(L_22);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = L_22->____Lnext;
		V_2 = L_23;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:452>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = ___1_eOrig;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_24) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_25))))
		{
			goto IL_004d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:453>
		return;
	}
}
// Method Definition Index: 55372
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* MeshUtils_MakeEdge_mBB05A5079458A48E840BA60BDC9EC4B93806EF3F (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eNext, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:464>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___0_pool;
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_1;
		L_1 = EdgePair_Create_m059469082BEEB92DE39F2274113174F89279ED21(L_0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:465>
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_2 = L_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2.____e;
		V_0 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:466>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_2.____eSym;
		V_1 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:469>
		Edge_EnsureFirst_mD440D7010D6492800C229F3613D616C41744C7D8((&___1_eNext), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:473>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = ___1_eNext;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Sym;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____next;
		V_2 = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:474>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_2;
		NullCheck(L_8);
		L_8->____next = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next), (void*)L_9);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:475>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_2;
		NullCheck(L_10);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = L_10->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_0;
		NullCheck(L_11);
		L_11->____next = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->____next), (void*)L_12);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:476>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = ___1_eNext;
		NullCheck(L_13);
		L_13->____next = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____next), (void*)L_14);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:477>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = ___1_eNext;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_1;
		NullCheck(L_16);
		L_16->____next = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____next), (void*)L_17);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:479>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_1;
		NullCheck(L_18);
		L_18->____Sym = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____Sym), (void*)L_19);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:480>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_0;
		NullCheck(L_20);
		L_20->____Onext = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Onext), (void*)L_21);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:481>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_1;
		NullCheck(L_22);
		L_22->____Lnext = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____Lnext), (void*)L_23);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:482>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = V_0;
		NullCheck(L_24);
		L_24->____Org = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____Org), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:483>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_0;
		NullCheck(L_25);
		L_25->____Lface = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->____Lface), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:484>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_0;
		NullCheck(L_26);
		L_26->____winding = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:485>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_0;
		NullCheck(L_27);
		L_27->____activeRegion = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->____activeRegion), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:487>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_0;
		NullCheck(L_28);
		L_28->____Sym = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____Sym), (void*)L_29);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:488>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_1;
		NullCheck(L_30);
		L_30->____Onext = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->____Onext), (void*)L_31);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:489>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_0;
		NullCheck(L_32);
		L_32->____Lnext = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____Lnext), (void*)L_33);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:490>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = V_1;
		NullCheck(L_34);
		L_34->____Org = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->____Org), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:491>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_1;
		NullCheck(L_35);
		L_35->____Lface = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->____Lface), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:492>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_1;
		NullCheck(L_36);
		L_36->____winding = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:493>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = V_1;
		NullCheck(L_37);
		L_37->____activeRegion = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____activeRegion), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:495>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_0;
		return L_38;
	}
}
// Method Definition Index: 55373
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_m31AFA9B818CC459D34025AA709B59C49AB9A5652 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eDel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:505>
		Edge_EnsureFirst_mD440D7010D6492800C229F3613D616C41744C7D8((&___1_eDel), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:508>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___1_eDel;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____next;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:509>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___1_eDel;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Sym;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____next;
		V_1 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:510>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_0;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		NullCheck(L_6);
		L_6->____next = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next), (void*)L_7);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:511>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_1;
		NullCheck(L_8);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = L_8->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_0;
		NullCheck(L_9);
		L_9->____next = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____next), (void*)L_10);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:513>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_11 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = ___1_eDel;
		NullCheck(L_12);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = L_12->____Sym;
		NullCheck(L_11);
		GenericVirtualActionInvoker1< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var, L_11, L_13);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:514>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_14 = ___0_pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = ___1_eDel;
		NullCheck(L_14);
		GenericVirtualActionInvoker1< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Return_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m4582A4C060DDED9AFE860C0A737DA9B5DB01EB45_RuntimeMethod_var, L_14, L_15);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:515>
		return;
	}
}
// Method Definition Index: 55374
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_m617D482948269C1B7AAC25C24336618EC23579DB (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_vDel, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_newOrg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_2 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_3 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:523>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___1_vDel;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____anEdge;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:526>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		V_1 = L_2;
	}

IL_0009:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:528>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___2_newOrg;
		NullCheck(L_3);
		L_3->____Org = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Org), (void*)L_4);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:529>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_1;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Onext;
		V_1 = L_6;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:530>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_7) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_8))))
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:533>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = ___1_vDel;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = L_9->____prev;
		V_2 = L_10;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:534>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = ___1_vDel;
		NullCheck(L_11);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = L_11->____next;
		V_3 = L_12;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:535>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = V_2;
		NullCheck(L_13);
		L_13->____prev = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____prev), (void*)L_14);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:536>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = V_3;
		NullCheck(L_15);
		L_15->____next = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____next), (void*)L_16);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:538>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_17 = ___0_pool;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = ___1_vDel;
		NullCheck(L_17);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_17, L_18);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:539>
		return;
	}
}
// Method Definition Index: 55375
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m29D69977655B5304E3FF978814C1B4AFE273B6F6 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___1_fDel, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___2_newLFace, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_2 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_3 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:547>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = ___1_fDel;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____anEdge;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:550>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		V_1 = L_2;
	}

IL_0009:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:552>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_1;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = ___2_newLFace;
		NullCheck(L_3);
		L_3->____Lface = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Lface), (void*)L_4);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:553>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_1;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Lnext;
		V_1 = L_6;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:554>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_7) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_8))))
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:557>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = ___1_fDel;
		NullCheck(L_9);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10 = L_9->____prev;
		V_2 = L_10;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:558>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = ___1_fDel;
		NullCheck(L_11);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_12 = L_11->____next;
		V_3 = L_12;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:559>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = V_3;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_14 = V_2;
		NullCheck(L_13);
		L_13->____prev = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____prev), (void*)L_14);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:560>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_15 = V_2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_16 = V_3;
		NullCheck(L_15);
		L_15->____next = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____next), (void*)L_16);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:562>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_17 = ___0_pool;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = ___1_fDel;
		NullCheck(L_17);
		GenericVirtualActionInvoker1< Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* >::Invoke(IPool_Return_TisFace_t290638C5E0E34941801183E7C6C5013E30EC1A7C_mF36F434320E86F6704669F488C42C88B8DE9F74D_RuntimeMethod_var, L_17, L_18);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:563>
		return;
	}
}
// Method Definition Index: 55376
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_m31485BAB025AE006EFCC80939E541426A7D34E1C (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:570>
		V_0 = (0.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:571>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = ___0_f;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____anEdge;
		V_1 = L_1;
	}

IL_000d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:574>
		float L_2 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_1;
		NullCheck(L_3);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = L_3->____Org;
		NullCheck(L_4);
		float L_5 = L_4->____s;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7;
		L_7 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_6, NULL);
		NullCheck(L_7);
		float L_8 = L_7->____s;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_1;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = L_9->____Org;
		NullCheck(L_10);
		float L_11 = L_10->____t;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_1;
		NullCheck(L_12);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13;
		L_13 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_12, NULL);
		NullCheck(L_13);
		float L_14 = L_13->____t;
		V_0 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_8)), ((float)il2cpp_codegen_add(L_11, L_14))))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:575>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_1;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15->____Lnext;
		V_1 = L_16;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:576>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_1;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = ___0_f;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____anEdge;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_17) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_19))))
		{
			goto IL_000d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:577>
		float L_20 = V_0;
		return L_20;
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
// Method Definition Index: 55377
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Init_mE70A11963363F3B42EB1EEE907B60F30CB46F279 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:258>
		return;
	}
}
// Method Definition Index: 55378
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Reset_mEDBAA5D8B4BFB81FF6593D7CF2BB144EB637F83F (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:262>
		V_0 = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		__this->____next = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = V_0;
		__this->____prev = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev), (void*)L_0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:263>
		__this->____anEdge = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:264>
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_1 = ((Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var))->___Zero;
		__this->____coords = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:265>
		__this->____s = (0.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:266>
		__this->____t = (0.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:267>
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314* L_2 = (PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314*)(&__this->____pqHandle);
		il2cpp_codegen_initobj(L_2, sizeof(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:268>
		__this->____n = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:269>
		__this->____data = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data), (void*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:270>
		return;
	}
}
// Method Definition Index: 55379
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m08096456202DEB797890B68BFE58DA8E0E0A4476 (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 55380
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_mE9A55B46F4B3710BB0353CC660D9B3DF67464E68 (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:286>
		V_0 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:287>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____anEdge;
		V_1 = L_0;
	}

IL_0009:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:289>
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:290>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_1;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Lnext;
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:291>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = __this->____anEdge;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_4) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_5))))
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:292>
		int32_t L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 55381
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Init_m577D0D45840EE415108F9B4A373E1DBCF217D15B (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:298>
		return;
	}
}
// Method Definition Index: 55382
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Reset_m3A777E67CB7E0A99177B8178897FC1E80BF63DB7 (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:302>
		V_0 = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		__this->____next = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = V_0;
		__this->____prev = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev), (void*)L_0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:303>
		__this->____anEdge = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:304>
		__this->____trail = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trail), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:305>
		__this->____n = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:306>
		__this->____marked = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:307>
		__this->____inside = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:308>
		return;
	}
}
// Method Definition Index: 55383
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face__ctor_mC04054356080E10C076D2B1CF780986ADA28723B (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_pinvoke(const EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E& unmarshaled, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_____e_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_____e_FieldInfo_var, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_pinvoke_back(const EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_pinvoke& marshaled, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_____e_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_____e_FieldInfo_var, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_pinvoke_cleanup(EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_com(const EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E& unmarshaled, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_____e_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_____e_FieldInfo_var, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_com_back(const EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_com& marshaled, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_____e_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ____eException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_____e_FieldInfo_var, EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(____eException, NULL);
}
IL2CPP_EXTERN_C void EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshal_com_cleanup(EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E_marshaled_com& marshaled)
{
}
// Method Definition Index: 55384
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E EdgePair_Create_m059469082BEEB92DE39F2274113174F89279ED21 (IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m444454360B73DDB25475979F272457046AB00972_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:317>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = ___0_pool;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1;
		L_1 = GenericVirtualFuncInvoker0< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Get_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m444454360B73DDB25475979F272457046AB00972_RuntimeMethod_var, L_0);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:318>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_2 = ___0_pool;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3;
		L_3 = GenericVirtualFuncInvoker0< Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* >::Invoke(IPool_Get_TisEdge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861_m444454360B73DDB25475979F272457046AB00972_RuntimeMethod_var, L_2);
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:320>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		NullCheck(L_4);
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* L_5 = (EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E*)(&L_4->____pair);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_0;
		L_5->____e = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____e), (void*)L_6);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:321>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_0;
		NullCheck(L_7);
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* L_8 = (EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E*)(&L_7->____pair);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_1;
		L_8->____eSym = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____eSym), (void*)L_9);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:322>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		NullCheck(L_11);
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_12 = L_11->____pair;
		NullCheck(L_10);
		L_10->____pair = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair))->____e), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair))->____eSym), (void*)NULL);
		#endif
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:323>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_13);
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E L_14 = L_13->____pair;
		return L_14;
	}
}
// Method Definition Index: 55385
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_m90A9EA836BB393070623B1B663F691AE8B5245A4 (EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:328>
		V_0 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		__this->____eSym = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eSym), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = V_0;
		__this->____e = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____e), (void*)L_0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:329>
		return;
	}
}
IL2CPP_EXTERN_C  void EdgePair_Reset_m90A9EA836BB393070623B1B663F691AE8B5245A4_AdjustorThunk (RuntimeObject* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method)
{
	EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E*>(__this + _offset);
	EdgePair_Reset_m90A9EA836BB393070623B1B663F691AE8B5245A4(_thisAdjusted, ___0_pool, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 55386
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:341>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____Lface;
		return L_1;
	}
}
// Method Definition Index: 55387
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m66117D5A92950759B7A650E6A58360D9F0CD348D (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:341>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Lface = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Lface), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:341>
		return;
	}
}
// Method Definition Index: 55388
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:342>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = L_0->____Org;
		return L_1;
	}
}
// Method Definition Index: 55389
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_m56F56B99812B22C677B6254CE6188FB788473604 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:342>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Org = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Org), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:342>
		return;
	}
}
// Method Definition Index: 55390
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:344>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Lnext;
		return L_1;
	}
}
// Method Definition Index: 55391
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Oprev_m72B4098058398F9D8DD6F588521EAC01C33FB866 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:344>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Lnext = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Lnext), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:344>
		return;
	}
}
// Method Definition Index: 55392
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:345>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Onext;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Sym;
		return L_1;
	}
}
// Method Definition Index: 55393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Lprev_mE996F9975839C57232219D19FF690E93FC7ADC39 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:345>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Sym = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:345>
		return;
	}
}
// Method Definition Index: 55394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Dprev_m0CF28DF8CA6D34E534B0B2B0A612C8C5723B64A8 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:346>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Lnext;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Sym;
		return L_1;
	}
}
// Method Definition Index: 55395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dprev_m6FB1041E70B1D78A9AD7C44C34995B7A75F84F3C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:346>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Sym = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:346>
		return;
	}
}
// Method Definition Index: 55396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:347>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Onext;
		return L_1;
	}
}
// Method Definition Index: 55397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rprev_mACD8E1CB42B1F218A3826D1CEDDD6222584232F8 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:347>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = __this->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Onext = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Onext), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:347>
		return;
	}
}
// Method Definition Index: 55398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Dnext_m61B1425BB7BBFA4D996A431C104F8417603F206C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:348>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0;
		L_0 = Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E(__this, NULL);
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Sym;
		return L_1;
	}
}
// Method Definition Index: 55399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dnext_mF9DB1B0695356B61BC5060CC1940D8BB824B03DD (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:348>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0;
		L_0 = Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E(__this, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Sym = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:348>
		return;
	}
}
// Method Definition Index: 55400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Edge_get__Rnext_m234F4768F10009489832FFFE258CDB29F9C0E98D (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:349>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0;
		L_0 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(__this, NULL);
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Sym;
		return L_1;
	}
}
// Method Definition Index: 55401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rnext_mF0B1A7BC1AD3E88F0C8D345796B8613BFE8CFD23 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:349>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0;
		L_0 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(__this, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = ___0_value;
		NullCheck(L_0);
		L_0->____Sym = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:349>
		return;
	}
}
// Method Definition Index: 55402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_mD440D7010D6492800C229F3613D616C41744C7D8 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** ___0_e, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:353>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** L_0 = ___0_e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = *((Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861**)L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** L_2 = ___0_e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = *((Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861**)L_2);
		NullCheck(L_3);
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* L_4 = (EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E*)(&L_3->____pair);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eSym;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_1) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_5))))
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:355>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** L_6 = ___0_e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861** L_7 = ___0_e;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = *((Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861**)L_7);
		NullCheck(L_8);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = L_8->____Sym;
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_9);
	}

IL_0019:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:357>
		return;
	}
}
// Method Definition Index: 55403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Init_m89426428963412E7E6C46CB50DD7BFBAE674B12C (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:361>
		return;
	}
}
// Method Definition Index: 55404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Reset_m505962A66889E07658E348F1F2DA3D065E6C51A4 (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:365>
		EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E* L_0 = (EdgePair_t320BDCAD41BC5EA54CD6BFC7E56D28CB16AA839E*)(&__this->____pair);
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_1 = ___0_pool;
		EdgePair_Reset_m90A9EA836BB393070623B1B663F691AE8B5245A4(L_0, L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:366>
		V_0 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		__this->____Lnext = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lnext), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2;
		V_0 = L_3;
		__this->____Onext = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Onext), (void*)L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4;
		V_0 = L_5;
		__this->____Sym = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Sym), (void*)L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_0;
		__this->____next = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next), (void*)L_6);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:367>
		__this->____Org = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Org), (void*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:368>
		__this->____Lface = (Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lface), (void*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:369>
		__this->____activeRegion = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeRegion), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:370>
		__this->____winding = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/MeshUtils.cs:371>
		return;
	}
}
// Method Definition Index: 55405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m878C37DCF956A74199816FC5FFC344B88058FF5E (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 55406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PQHandle__cctor_m88BB98E7C8BD4284E2ED771A8A96930FE7BA508A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/PriorityHeap.cs:45>
		((PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var))->___Invalid = ((int32_t)268435455);
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
// Method Definition Index: 55430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:72>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_reg;
		NullCheck(L_0);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_1 = L_0->____nodeUp;
		NullCheck(L_1);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_2 = L_1->____prev;
		NullCheck(L_2);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = L_2->____key;
		return L_3;
	}
}
// Method Definition Index: 55431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:77>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_reg;
		NullCheck(L_0);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_1 = L_0->____nodeUp;
		NullCheck(L_1);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_2 = L_1->____next;
		NullCheck(L_2);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = L_2->____key;
		return L_3;
	}
}
// Method Definition Index: 55432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_EdgeLeq_mBBA2BC792106918134934914DBF531DD74AB3D2C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg1, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___1_reg2, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	float V_2 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:93>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_reg1;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eUp;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:94>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___1_reg2;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp;
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:96>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		NullCheck(L_4);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5;
		L_5 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_4, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_5) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_6))))
		{
			goto IL_00a6;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:98>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		NullCheck(L_7);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8;
		L_8 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_7, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_8) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_9))))
		{
			goto IL_0084;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:102>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_0;
		NullCheck(L_10);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = L_10->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_1;
		NullCheck(L_12);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13 = L_12->____Org;
		bool L_14;
		L_14 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0062;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:104>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_1;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16;
		L_16 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_15, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_0;
		NullCheck(L_17);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = L_17->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_1;
		NullCheck(L_19);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_20 = L_19->____Org;
		float L_21;
		L_21 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_16, L_18, L_20, NULL);
		return (bool)((((int32_t)((!(((float)L_21) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0062:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:106>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_0;
		NullCheck(L_22);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23;
		L_23 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_22, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = V_1;
		NullCheck(L_24);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = L_24->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_0;
		NullCheck(L_26);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = L_26->____Org;
		float L_28;
		L_28 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_23, L_25, L_27, NULL);
		return (bool)((((int32_t)((!(((float)L_28) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0084:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:108>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_1;
		NullCheck(L_29);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_30;
		L_30 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_29, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_31 = __this->____event;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_1;
		NullCheck(L_32);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_33 = L_32->____Org;
		float L_34;
		L_34 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_30, L_31, L_33, NULL);
		return (bool)((((int32_t)((!(((float)L_34) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00a6:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:110>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_1;
		NullCheck(L_35);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_36;
		L_36 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_35, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_36) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_37))))
		{
			goto IL_00d6;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:112>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_0;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39;
		L_39 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_38, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_40 = __this->____event;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_0;
		NullCheck(L_41);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = L_41->____Org;
		float L_43;
		L_43 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_39, L_40, L_42, NULL);
		return (bool)((((int32_t)((!(((float)L_43) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00d6:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:116>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = V_0;
		NullCheck(L_44);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_45;
		L_45 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_44, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_46 = __this->____event;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_47 = V_0;
		NullCheck(L_47);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_48 = L_47->____Org;
		float L_49;
		L_49 = Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616(L_45, L_46, L_48, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:117>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_1;
		NullCheck(L_50);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51;
		L_51 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_50, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = __this->____event;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_53 = V_1;
		NullCheck(L_53);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_54 = L_53->____Org;
		float L_55;
		L_55 = Geom_EdgeEval_mC60540690575D4ABFE8642B1E974ABCBE1B69616(L_51, L_52, L_54, NULL);
		V_2 = L_55;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:118>
		float L_56 = V_2;
		return (bool)((((int32_t)((!(((float)L_49) >= ((float)L_56)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 55433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Remove_mC72DA98BB406B3B98B6DB7DE074B1BFD249B61A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m534BA732E5B78CF9F9B1AA11E37153125F93DE0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:123>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_reg;
		NullCheck(L_0);
		bool L_1 = L_0->____fixUpperEdge;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:130>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___0_reg;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp;
		NullCheck(L_3);
		L_3->____activeRegion = (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____activeRegion), (void*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:131>
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_4 = __this->____dict;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = ___0_reg;
		NullCheck(L_5);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_6 = L_5->____nodeUp;
		NullCheck(L_4);
		Dict_1_Remove_mC72DA98BB406B3B98B6DB7DE074B1BFD249B61A1(L_4, L_6, Dict_1_Remove_mC72DA98BB406B3B98B6DB7DE074B1BFD249B61A1_RuntimeMethod_var);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:132>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_7 = __this->____pool;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_8 = ___0_reg;
		NullCheck(L_7);
		GenericVirtualActionInvoker1< ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* >::Invoke(IPool_Return_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m534BA732E5B78CF9F9B1AA11E37153125F93DE0B_RuntimeMethod_var, L_7, L_8);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:133>
		return;
	}
}
// Method Definition Index: 55434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m3EA63F4044BF98BF031DE0C32DCD5B5245E737F6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_newEdge, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:141>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_1 = __this->____pool;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___0_reg;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp;
		NullCheck(L_0);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_0, L_1, L_3, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:142>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = ___0_reg;
		NullCheck(L_4);
		L_4->____fixUpperEdge = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:143>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = ___0_reg;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = ___1_newEdge;
		NullCheck(L_5);
		L_5->____eUp = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____eUp), (void*)L_6);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:144>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = ___1_newEdge;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_8 = ___0_reg;
		NullCheck(L_7);
		L_7->____activeRegion = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____activeRegion), (void*)L_8);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:145>
		return;
	}
}
// Method Definition Index: 55435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_TopLeftRegion_m035D36093FF04567CCCE4B3F19EEEAEF5D2F53AD (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) 
{
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:149>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_reg;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eUp;
		NullCheck(L_1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = L_1->____Org;
		V_0 = L_2;
	}

IL_000c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:153>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = ___0_reg;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4;
		L_4 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_3, NULL);
		___0_reg = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:154>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = ___0_reg;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____eUp;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_7) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:158>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_9 = ___0_reg;
		NullCheck(L_9);
		bool L_10 = L_9->____fixUpperEdge;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:160>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_11 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_12 = __this->____pool;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_13 = ___0_reg;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14;
		L_14 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_13, NULL);
		NullCheck(L_14);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = L_14->____eUp;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15->____Sym;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_17 = ___0_reg;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = L_17->____eUp;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____Lnext;
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20;
		L_20 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_11, L_12, L_16, L_19, NULL);
		V_1 = L_20;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:161>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_21 = ___0_reg;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_1;
		Tess_FixUpperEdge_m3EA63F4044BF98BF031DE0C32DCD5B5245E737F6(__this, L_21, L_22, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:162>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_23 = ___0_reg;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_24;
		L_24 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_23, NULL);
		___0_reg = L_24;
	}

IL_006a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:165>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_25 = ___0_reg;
		return L_25;
	}
}
// Method Definition Index: 55436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_TopRightRegion_m36BDED50C55A6ABF5E1106897FB04E1B4BB6D007 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) 
{
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:170>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_reg;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eUp;
		NullCheck(L_1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2;
		L_2 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_1, NULL);
		V_0 = L_2;
	}

IL_000c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:174>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = ___0_reg;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4;
		L_4 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_3, NULL);
		___0_reg = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:175>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = ___0_reg;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____eUp;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7;
		L_7 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_6, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_7) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:177>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_9 = ___0_reg;
		return L_9;
	}
}
// Method Definition Index: 55437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* Tess_AddRegionBelow_m4822FD2001C9390D9D624BBD9DBF536129B007A6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regAbove, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eNewUp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_InsertBefore_m822D7F54E121B16021BE08AF8E4D2690AD3504C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:188>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = __this->____pool;
		NullCheck(L_0);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* >::Invoke(IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var, L_0);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:190>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = ___1_eNewUp;
		NullCheck(L_2);
		L_2->____eUp = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp), (void*)L_3);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:191>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = V_0;
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_5 = __this->____dict;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_6 = ___0_regAbove;
		NullCheck(L_6);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_7 = L_6->____nodeUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_8 = V_0;
		NullCheck(L_5);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_9;
		L_9 = Dict_1_InsertBefore_m822D7F54E121B16021BE08AF8E4D2690AD3504C6(L_5, L_7, L_8, Dict_1_InsertBefore_m822D7F54E121B16021BE08AF8E4D2690AD3504C6_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->____nodeUp = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____nodeUp), (void*)L_9);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:192>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_10 = V_0;
		NullCheck(L_10);
		L_10->____fixUpperEdge = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:193>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_11 = V_0;
		NullCheck(L_11);
		L_11->____sentinel = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:194>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = V_0;
		NullCheck(L_12);
		L_12->____dirty = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:196>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = ___1_eNewUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14 = V_0;
		NullCheck(L_13);
		L_13->____activeRegion = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____activeRegion), (void*)L_14);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:198>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_15 = V_0;
		return L_15;
	}
}
// Method Definition Index: 55438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m164A5309BBEAAA26966D2AE1E0CF8FAC99FA9376 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:203>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_reg;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1 = ___0_reg;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2;
		L_2 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->____windingNumber;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = ___0_reg;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eUp;
		NullCheck(L_5);
		int32_t L_6 = L_5->____winding;
		NullCheck(L_0);
		L_0->____windingNumber = ((int32_t)il2cpp_codegen_add(L_3, L_6));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:204>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_7 = ___0_reg;
		int32_t L_8 = __this->____windingRule;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_9 = ___0_reg;
		NullCheck(L_9);
		int32_t L_10 = L_9->____windingNumber;
		bool L_11;
		L_11 = Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F(L_8, L_10, NULL);
		NullCheck(L_7);
		L_7->____inside = L_11;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:205>
		return;
	}
}
// Method Definition Index: 55439
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_mC657C062219C9699052E48218EFD8403DA333CC8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_reg, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:216>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_reg;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eUp;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:217>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		NullCheck(L_2);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = L_2->____Lface;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:219>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = L_3;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = ___0_reg;
		NullCheck(L_5);
		bool L_6 = L_5->____inside;
		NullCheck(L_4);
		L_4->____inside = L_6;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:220>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_0;
		NullCheck(L_4);
		L_4->____anEdge = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____anEdge), (void*)L_7);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:221>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_8 = ___0_reg;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_8, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:222>
		return;
	}
}
// Method Definition Index: 55440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regFirst, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___1_regLast, const RuntimeMethod* method) 
{
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:238>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_regFirst;
		V_0 = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:239>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1 = ___0_regFirst;
		NullCheck(L_1);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = L_1->____eUp;
		V_1 = L_2;
		goto IL_00ad;
	}

IL_000e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:243>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = V_0;
		NullCheck(L_3);
		L_3->____fixUpperEdge = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:244>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = V_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5;
		L_5 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_4, NULL);
		V_2 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:245>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_6 = V_2;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____eUp;
		V_3 = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:246>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_3;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = L_8->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = L_10->____Org;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_9) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_11)))
		{
			goto IL_0069;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:248>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = V_2;
		NullCheck(L_12);
		bool L_13 = L_12->____fixUpperEdge;
		if (L_13)
		{
			goto IL_0043;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:255>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14 = V_0;
		Tess_FinishRegion_mC657C062219C9699052E48218EFD8403DA333CC8(__this, L_14, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:256>
		goto IL_00b4;
	}

IL_0043:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:260>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_15 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_16 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_1;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18;
		L_18 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_17, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_3;
		NullCheck(L_19);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = L_19->____Sym;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21;
		L_21 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_15, L_16, L_18, L_20, NULL);
		V_3 = L_21;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:261>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_22 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_3;
		Tess_FixUpperEdge_m3EA63F4044BF98BF031DE0C32DCD5B5245E737F6(__this, L_22, L_23, NULL);
	}

IL_0069:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:265>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = V_1;
		NullCheck(L_24);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = L_24->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_3;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_25) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_26)))
		{
			goto IL_009d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:267>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_27 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_28 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_3;
		NullCheck(L_29);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30;
		L_30 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_29, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_3;
		NullCheck(L_27);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_27, L_28, L_30, L_31, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:268>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_32 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_33 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_3;
		NullCheck(L_32);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_32, L_33, L_34, L_35, NULL);
	}

IL_009d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:270>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_36 = V_0;
		Tess_FinishRegion_mC657C062219C9699052E48218EFD8403DA333CC8(__this, L_36, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:271>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_37 = V_2;
		NullCheck(L_37);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = L_37->____eUp;
		V_1 = L_38;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:272>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_39 = V_2;
		V_0 = L_39;
	}

IL_00ad:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:241>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_40 = V_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_41 = ___1_regLast;
		if ((!(((RuntimeObject*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)L_40) == ((RuntimeObject*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)L_41))))
		{
			goto IL_000e;
		}
	}

IL_00b4:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:275>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = V_1;
		return L_42;
	}
}
// Method Definition Index: 55441
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eFirst, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___2_eLast, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___3_eTopLeft, bool ___4_cleanUp, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_2 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_3 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_4 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:290>
		V_0 = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:292>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___1_eFirst;
		V_1 = L_0;
	}

IL_0004:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:295>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1 = ___0_regUp;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_1;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____Sym;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4;
		L_4 = Tess_AddRegionBelow_m4822FD2001C9390D9D624BBD9DBF536129B007A6(__this, L_1, L_3, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:296>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_1;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____Onext;
		V_1 = L_6;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:297>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = ___2_eLast;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_7) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_8))))
		{
			goto IL_0004;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:302>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = ___3_eTopLeft;
		if (L_9)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:304>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_10 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_11;
		L_11 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_10, NULL);
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = L_11->____eUp;
		NullCheck(L_12);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13;
		L_13 = Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E(L_12, NULL);
		___3_eTopLeft = L_13;
	}

IL_0034:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:307>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14 = ___0_regUp;
		V_2 = L_14;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:308>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = ___3_eTopLeft;
		V_4 = L_15;
	}

IL_003a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:311>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_16 = V_2;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_17;
		L_17 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_16, NULL);
		V_3 = L_17;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:312>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_18 = V_3;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____eUp;
		NullCheck(L_19);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = L_19->____Sym;
		V_1 = L_20;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:313>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_1;
		NullCheck(L_21);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = L_21->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_4;
		NullCheck(L_23);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_24 = L_23->____Org;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_22) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_24))))
		{
			goto IL_0106;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:315>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_1;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_4;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_26) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_27)))
		{
			goto IL_009b;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:318>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_28 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_29 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_1;
		NullCheck(L_30);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31;
		L_31 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_30, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_1;
		NullCheck(L_28);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_28, L_29, L_31, L_32, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:319>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_33 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_34 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_4;
		NullCheck(L_35);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36;
		L_36 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_35, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = V_1;
		NullCheck(L_33);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_33, L_34, L_36, L_37, NULL);
	}

IL_009b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:322>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_38 = V_3;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40 = L_39->____windingNumber;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = L_41->____winding;
		NullCheck(L_38);
		L_38->____windingNumber = ((int32_t)il2cpp_codegen_subtract(L_40, L_42));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:323>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_43 = V_3;
		int32_t L_44 = __this->____windingRule;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = L_45->____windingNumber;
		bool L_47;
		L_47 = Geom_IsWindingInside_m1BD1592456D9D1D2CC47AEDC16EBC137625A3A6F(L_44, L_46, NULL);
		NullCheck(L_43);
		L_43->____inside = L_47;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:327>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_48 = V_2;
		NullCheck(L_48);
		L_48->____dirty = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:328>
		bool L_49 = V_0;
		if (L_49)
		{
			goto IL_00fa;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_50 = V_2;
		bool L_51;
		L_51 = Tess_CheckForRightSplice_m0302CDD5240E389F817356B3E03C41C5923F5D45(__this, L_50, NULL);
		if (!L_51)
		{
			goto IL_00fa;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:330>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_53 = V_4;
		Geom_AddWinding_m7F138F904EDF9A9D1117F39F2758EE60DFF774AB(L_52, L_53, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:331>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_54 = V_2;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_54, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:332>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_55 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_56 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_57 = V_4;
		NullCheck(L_55);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_55, L_56, L_57, NULL);
	}

IL_00fa:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:334>
		V_0 = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:335>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_58 = V_3;
		V_2 = L_58;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:336>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_59 = V_1;
		V_4 = L_59;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:309>
		goto IL_003a;
	}

IL_0106:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:338>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_60 = V_2;
		NullCheck(L_60);
		L_60->____dirty = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:341>
		bool L_61 = ___4_cleanUp;
		if (!L_61)
		{
			goto IL_0118;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:344>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_62 = V_2;
		Tess_WalkDirtyRegions_mA315F2B4FE93010C135F6B43C5C8B51F1E00F7DF(__this, L_62, NULL);
	}

IL_0118:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:346>
		return;
	}
}
// Method Definition Index: 55442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m48D936585FF30D86343C6195C1D665F40B99CF67 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_e1, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_e2, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:354>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_1 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___0_e1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = ___1_e2;
		NullCheck(L_0);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_0, L_1, L_2, L_3, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:355>
		return;
	}
}
// Method Definition Index: 55443
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_m40385649C376CCD9E579DA4055A928053DF25045 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_isect, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_org, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_dst, float* ___3_w0, float* ___4_w1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:366>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___1_org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = ___0_isect;
		float L_2;
		L_2 = Geom_VertL1dist_m4C9F165E0E9541A3969AF246ED75B89A6776A1FC(L_0, L_1, NULL);
		V_0 = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:367>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = ___2_dst;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___0_isect;
		float L_5;
		L_5 = Geom_VertL1dist_m4C9F165E0E9541A3969AF246ED75B89A6776A1FC(L_3, L_4, NULL);
		V_1 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:369>
		float* L_6 = ___3_w0;
		float L_7 = V_1;
		float L_8 = V_0;
		float L_9 = V_1;
		*((float*)L_6) = (float)((float)(((float)(L_7/((float)il2cpp_codegen_add(L_8, L_9))))/(2.0f)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:370>
		float* L_10 = ___4_w1;
		float L_11 = V_0;
		float L_12 = V_0;
		float L_13 = V_1;
		*((float*)L_10) = (float)((float)(((float)(L_11/((float)il2cpp_codegen_add(L_12, L_13))))/(2.0f)));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:372>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = ___0_isect;
		NullCheck(L_14);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_15 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_14->____coords);
		float* L_16 = (float*)(&L_15->___X);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		float* L_19 = ___3_w0;
		float L_20 = *((float*)L_19);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = ___1_org;
		NullCheck(L_21);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_22 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_21->____coords);
		float L_23 = L_22->___X;
		float* L_24 = ___4_w1;
		float L_25 = *((float*)L_24);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = ___2_dst;
		NullCheck(L_26);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_27 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_26->____coords);
		float L_28 = L_27->___X;
		*((float*)L_17) = (float)((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_20, L_23)), ((float)il2cpp_codegen_multiply(L_25, L_28))))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:373>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = ___0_isect;
		NullCheck(L_29);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_30 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_29->____coords);
		float* L_31 = (float*)(&L_30->___Y);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		float* L_34 = ___3_w0;
		float L_35 = *((float*)L_34);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_36 = ___1_org;
		NullCheck(L_36);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_37 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_36->____coords);
		float L_38 = L_37->___Y;
		float* L_39 = ___4_w1;
		float L_40 = *((float*)L_39);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_41 = ___2_dst;
		NullCheck(L_41);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_42 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_41->____coords);
		float L_43 = L_42->___Y;
		*((float*)L_32) = (float)((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_35, L_38)), ((float)il2cpp_codegen_multiply(L_40, L_43))))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:374>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_44 = ___0_isect;
		NullCheck(L_44);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_45 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_44->____coords);
		float* L_46 = (float*)(&L_45->___Z);
		float* L_47 = L_46;
		float L_48 = *((float*)L_47);
		float* L_49 = ___3_w0;
		float L_50 = *((float*)L_49);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51 = ___1_org;
		NullCheck(L_51);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_52 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_51->____coords);
		float L_53 = L_52->___Z;
		float* L_54 = ___4_w1;
		float L_55 = *((float*)L_54);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_56 = ___2_dst;
		NullCheck(L_56);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_57 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_56->____coords);
		float L_58 = L_57->___Z;
		*((float*)L_47) = (float)((float)il2cpp_codegen_add(L_48, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_50, L_53)), ((float)il2cpp_codegen_multiply(L_55, L_58))))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:375>
		return;
	}
}
// Method Definition Index: 55444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_mC7C5CC61E4012E373A4661A298DA00C2A9B10FBA (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_isect, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_orgUp, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___2_dstUp, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___3_orgLo, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___4_dstLo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:384>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___0_isect;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_1 = ((Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var))->___Zero;
		NullCheck(L_0);
		L_0->____coords = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:386>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = ___0_isect;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = ___1_orgUp;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___2_dstUp;
		Tess_VertexWeights_m40385649C376CCD9E579DA4055A928053DF25045(__this, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:387>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = ___0_isect;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___3_orgLo;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = ___4_dstLo;
		Tess_VertexWeights_m40385649C376CCD9E579DA4055A928053DF25045(__this, L_5, L_6, L_7, (&V_2), (&V_3), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:389>
		CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* L_8 = __this->____combineCallback;
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:391>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:392>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:393>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:394>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:395>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = ___0_isect;
		CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* L_10 = __this->____combineCallback;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = ___0_isect;
		NullCheck(L_11);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_12 = L_11->____coords;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = ___1_orgUp;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->____data;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = ___2_dstUp;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->____data;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = ___3_orgLo;
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->____data;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_22);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_20;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_24 = ___4_dstLo;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->____data;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_25);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = L_26;
		float L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_28);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = L_27;
		float L_30 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_30);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = L_29;
		float L_32 = V_2;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_32);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = L_31;
		float L_34 = V_3;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_34);
		NullCheck(L_10);
		RuntimeObject* L_35;
		L_35 = CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_inline(L_10, L_12, L_23, L_33, NULL);
		NullCheck(L_9);
		L_9->____data = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____data), (void*)L_35);
	}

IL_0088:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:397>
		return;
	}
}
// Method Definition Index: 55445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m0302CDD5240E389F817356B3E03C41C5923F5D45 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Remove_m9CCA243EB1BDAA5719F1FA989071EC11BE26C6F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	bool V_3 = false;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:426>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_0, NULL);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:427>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___0_regUp;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp;
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:428>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eUp;
		V_2 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:430>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = L_8->____Org;
		bool L_10;
		L_10 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_00da;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:432>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_2;
		NullCheck(L_11);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12;
		L_12 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_11, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_1;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = L_13->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_2;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = L_15->____Org;
		float L_17;
		L_17 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_12, L_14, L_16, NULL);
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:434>
		return (bool)0;
	}

IL_004c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:438>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_1;
		NullCheck(L_18);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_19 = L_18->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_2;
		NullCheck(L_20);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = L_20->____Org;
		bool L_22;
		L_22 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_19, L_21, NULL);
		if (L_22)
		{
			goto IL_00a4;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:441>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_23 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_24 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_2;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Sym;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27;
		L_27 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_23, L_24, L_26, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:442>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_28 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_29 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_2;
		NullCheck(L_31);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32;
		L_32 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_31, NULL);
		NullCheck(L_28);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_28, L_29, L_30, L_32, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:443>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_33 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_34 = V_0;
		int32_t L_35 = 1;
		V_3 = (bool)L_35;
		NullCheck(L_34);
		L_34->____dirty = (bool)L_35;
		bool L_36 = V_3;
		NullCheck(L_33);
		L_33->____dirty = L_36;
		goto IL_0140;
	}

IL_00a4:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:445>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_37 = V_1;
		NullCheck(L_37);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_38 = L_37->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_2;
		NullCheck(L_39);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_40 = L_39->____Org;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_38) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_40)))
		{
			goto IL_0140;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:448>
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_41 = __this->____pq;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = V_1;
		NullCheck(L_42);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_43 = L_42->____Org;
		NullCheck(L_43);
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 L_44 = L_43->____pqHandle;
		NullCheck(L_41);
		PriorityQueue_1_Remove_m9CCA243EB1BDAA5719F1FA989071EC11BE26C6F6(L_41, L_44, PriorityQueue_1_Remove_m9CCA243EB1BDAA5719F1FA989071EC11BE26C6F6_RuntimeMethod_var);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:449>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_2;
		NullCheck(L_45);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46;
		L_46 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_45, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_47 = V_1;
		Tess_SpliceMergeVertices_m48D936585FF30D86343C6195C1D665F40B99CF67(__this, L_46, L_47, NULL);
		goto IL_0140;
	}

IL_00da:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:454>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_1;
		NullCheck(L_48);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_49;
		L_49 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_48, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_2;
		NullCheck(L_50);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51 = L_50->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52 = V_1;
		NullCheck(L_52);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_53 = L_52->____Org;
		float L_54;
		L_54 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_49, L_51, L_53, NULL);
		if ((!(((float)L_54) < ((float)(0.0f)))))
		{
			goto IL_00fa;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:456>
		return (bool)0;
	}

IL_00fa:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:460>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_55 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_56;
		L_56 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_55, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_57 = ___0_regUp;
		int32_t L_58 = 1;
		V_3 = (bool)L_58;
		NullCheck(L_57);
		L_57->____dirty = (bool)L_58;
		bool L_59 = V_3;
		NullCheck(L_56);
		L_56->____dirty = L_59;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:461>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_60 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_61 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_62 = V_1;
		NullCheck(L_62);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_63 = L_62->____Sym;
		NullCheck(L_60);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_64;
		L_64 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_60, L_61, L_63, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:462>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_65 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_66 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_67 = V_2;
		NullCheck(L_67);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_68;
		L_68 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_67, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_69 = V_1;
		NullCheck(L_65);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_65, L_66, L_68, L_69, NULL);
	}

IL_0140:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:464>
		return (bool)1;
	}
}
// Method Definition Index: 55446
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_mA422AF26ED6CD7EBB1E540E2CBF125182C61771A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, const RuntimeMethod* method) 
{
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	bool V_4 = false;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:487>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_0, NULL);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:488>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___0_regUp;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp;
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:489>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eUp;
		V_2 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:493>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7;
		L_7 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_6, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9;
		L_9 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_8, NULL);
		bool L_10;
		L_10 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_009f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:495>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_1;
		NullCheck(L_11);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12;
		L_12 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_11, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_2;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14;
		L_14 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_13, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_1;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = L_15->____Org;
		float L_17;
		L_17 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_12, L_14, L_16, NULL);
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:497>
		return (bool)0;
	}

IL_0049:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:501>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_18 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_19;
		L_19 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_18, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_20 = ___0_regUp;
		int32_t L_21 = 1;
		V_4 = (bool)L_21;
		NullCheck(L_20);
		L_20->____dirty = (bool)L_21;
		bool L_22 = V_4;
		NullCheck(L_19);
		L_19->____dirty = L_22;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:502>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_23 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_24 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_1;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26;
		L_26 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_23, L_24, L_25, NULL);
		V_3 = L_26;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:503>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_27 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_28 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_2;
		NullCheck(L_29);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = L_29->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_3;
		NullCheck(L_27);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_27, L_28, L_30, L_31, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:504>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_3;
		NullCheck(L_32);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_33 = L_32->____Lface;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_34 = ___0_regUp;
		NullCheck(L_34);
		bool L_35 = L_34->____inside;
		NullCheck(L_33);
		L_33->____inside = L_35;
		goto IL_0110;
	}

IL_009f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:508>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_2;
		NullCheck(L_36);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37;
		L_37 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_36, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39;
		L_39 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_38, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_2;
		NullCheck(L_40);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_41 = L_40->____Org;
		float L_42;
		L_42 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_37, L_39, L_41, NULL);
		if ((!(((float)L_42) > ((float)(0.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:510>
		return (bool)0;
	}

IL_00bf:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:514>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_43 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_44 = V_0;
		int32_t L_45 = 1;
		V_4 = (bool)L_45;
		NullCheck(L_44);
		L_44->____dirty = (bool)L_45;
		bool L_46 = V_4;
		NullCheck(L_43);
		L_43->____dirty = L_46;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:515>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_47 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_48 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_2;
		NullCheck(L_47);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50;
		L_50 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_47, L_48, L_49, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:516>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_51 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_52 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_53 = V_1;
		NullCheck(L_53);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54 = L_53->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_55 = V_2;
		NullCheck(L_55);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_56 = L_55->____Sym;
		NullCheck(L_51);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_51, L_52, L_54, L_56, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:517>
		NullCheck(L_50);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_57;
		L_57 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_50, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_58 = ___0_regUp;
		NullCheck(L_58);
		bool L_59 = L_58->____inside;
		NullCheck(L_57);
		L_57->____inside = L_59;
	}

IL_0110:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:519>
		return (bool)1;
	}
}
// Method Definition Index: 55447
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_3 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_4 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_5 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_6 = NULL;
	float V_7 = 0.0f;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_8 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_9 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_10 = NULL;
	bool V_11 = false;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* G_B14_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:533>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_0, NULL);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:534>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___0_regUp;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____eUp;
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:535>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = V_0;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eUp;
		V_2 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:536>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org;
		V_3 = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:537>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = L_8->____Org;
		V_4 = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:538>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11;
		L_11 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_10, NULL);
		V_5 = L_11;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:539>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_2;
		NullCheck(L_12);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13;
		L_13 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_12, NULL);
		V_6 = L_13;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:547>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = V_4;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_14) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_15))))
		{
			goto IL_003c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:550>
		return (bool)0;
	}

IL_003c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:553>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = V_3;
		NullCheck(L_16);
		float L_17 = L_16->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = V_5;
		NullCheck(L_18);
		float L_19 = L_18->____t;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_20;
		L_20 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(L_17, L_19, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:554>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = V_4;
		NullCheck(L_21);
		float L_22 = L_21->____t;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = V_6;
		NullCheck(L_23);
		float L_24 = L_23->____t;
		float L_25;
		L_25 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA(L_22, L_24, NULL);
		V_7 = L_25;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:555>
		float L_26 = V_7;
		if ((!(((float)L_20) > ((float)L_26))))
		{
			goto IL_0069;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:558>
		return (bool)0;
	}

IL_0069:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:561>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28 = V_4;
		bool L_29;
		L_29 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_0086;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:563>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_30 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_31 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_32 = V_4;
		float L_33;
		L_33 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_30, L_31, L_32, NULL);
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:565>
		return (bool)0;
	}

IL_0086:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:570>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_34 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_35 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_36 = V_3;
		float L_37;
		L_37 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_34, L_35, L_36, NULL);
		if ((!(((float)L_37) < ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:572>
		return (bool)0;
	}

IL_0099:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:578>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_38 = __this->____pool;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39;
		L_39 = GenericVirtualFuncInvoker0< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Get_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_m8D972FBB5FA6E2E931E320112DE7457BA33F5043_RuntimeMethod_var, L_38);
		V_8 = L_39;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:579>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_40 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_41 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_43 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_44 = V_8;
		Geom_EdgeIntersect_m4D225F1D0B04094B17E891B09BF88B31E4C17224(L_40, L_41, L_42, L_43, L_44, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:586>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_45 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_46 = __this->____event;
		bool L_47;
		L_47 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_45, L_46, NULL);
		if (!L_47)
		{
			goto IL_00e7;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:593>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_48 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_49 = __this->____event;
		NullCheck(L_49);
		float L_50 = L_49->____s;
		NullCheck(L_48);
		L_48->____s = L_50;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:594>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = __this->____event;
		NullCheck(L_52);
		float L_53 = L_52->____t;
		NullCheck(L_51);
		L_51->____t = L_53;
	}

IL_00e7:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:601>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_54 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_55 = V_4;
		bool L_56;
		L_56 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_54, L_55, NULL);
		if (L_56)
		{
			goto IL_00f5;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_57 = V_4;
		G_B14_0 = L_57;
		goto IL_00f6;
	}

IL_00f5:
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_58 = V_3;
		G_B14_0 = L_58;
	}

IL_00f6:
	{
		V_9 = G_B14_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:602>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_59 = V_9;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_60 = V_8;
		bool L_61;
		L_61 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_011f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:604>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_63 = V_9;
		NullCheck(L_63);
		float L_64 = L_63->____s;
		NullCheck(L_62);
		L_62->____s = L_64;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:605>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_65 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_66 = V_9;
		NullCheck(L_66);
		float L_67 = L_66->____t;
		NullCheck(L_65);
		L_65->____t = L_67;
	}

IL_011f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:608>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_68 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_69 = V_3;
		bool L_70;
		L_70 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_68, L_69, NULL);
		if (L_70)
		{
			goto IL_0134;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_71 = V_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_72 = V_4;
		bool L_73;
		L_73 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_71, L_72, NULL);
		if (!L_73)
		{
			goto IL_014b;
		}
	}

IL_0134:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:611>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_74 = ___0_regUp;
		bool L_75;
		L_75 = Tess_CheckForRightSplice_m0302CDD5240E389F817356B3E03C41C5923F5D45(__this, L_74, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:612>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_76 = __this->____pool;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_77 = V_8;
		NullCheck(L_76);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_76, L_77);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:613>
		return (bool)0;
	}

IL_014b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:616>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:617>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:618>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:619>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_78 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_79 = __this->____event;
		bool L_80;
		L_80 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_78, L_79, NULL);
		if (L_80)
		{
			goto IL_0170;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_81 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_82 = __this->____event;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_83 = V_8;
		float L_84;
		L_84 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_81, L_82, L_83, NULL);
		if ((((float)L_84) >= ((float)(0.0f))))
		{
			goto IL_019b;
		}
	}

IL_0170:
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_85 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_86 = __this->____event;
		bool L_87;
		L_87 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_85, L_86, NULL);
		if (L_87)
		{
			goto IL_03a0;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_88 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_89 = __this->____event;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_90 = V_8;
		float L_91;
		L_91 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_88, L_89, L_90, NULL);
		if ((!(((float)L_91) <= ((float)(0.0f)))))
		{
			goto IL_03a0;
		}
	}

IL_019b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:624>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_92 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_93 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_92) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_93))))
		{
			goto IL_0219;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:627>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_94 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_95 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_96 = V_1;
		NullCheck(L_96);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_97 = L_96->____Sym;
		NullCheck(L_94);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_98;
		L_98 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_94, L_95, L_97, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:628>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_99 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_100 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_101 = V_2;
		NullCheck(L_101);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_102 = L_101->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_103 = V_1;
		NullCheck(L_99);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_99, L_100, L_102, L_103, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:629>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_104 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_105;
		L_105 = Tess_TopLeftRegion_m035D36093FF04567CCCE4B3F19EEEAEF5D2F53AD(__this, L_104, NULL);
		___0_regUp = L_105;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:630>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_106 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_107;
		L_107 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_106, NULL);
		NullCheck(L_107);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_108 = L_107->____eUp;
		V_1 = L_108;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:631>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_109 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_110;
		L_110 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_109, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_111 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_112;
		L_112 = Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62(__this, L_110, L_111, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:632>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_113 = ___0_regUp;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_114 = V_1;
		NullCheck(L_114);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_115;
		L_115 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_114, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_116 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_117 = V_1;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_113, L_115, L_116, L_117, (bool)1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:633>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_118 = __this->____pool;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_119 = V_8;
		NullCheck(L_118);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_118, L_119);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:634>
		return (bool)1;
	}

IL_0219:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:636>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_120 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_121 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_120) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_121))))
		{
			goto IL_02b3;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:638>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_122 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_123 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_124 = V_2;
		NullCheck(L_124);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_125 = L_124->____Sym;
		NullCheck(L_122);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_126;
		L_126 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_122, L_123, L_125, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:639>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_127 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_128 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_129 = V_1;
		NullCheck(L_129);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_130 = L_129->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_131 = V_2;
		NullCheck(L_131);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_132;
		L_132 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_131, NULL);
		NullCheck(L_127);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_127, L_128, L_130, L_132, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:640>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_133 = ___0_regUp;
		V_0 = L_133;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:641>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_134 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_135;
		L_135 = Tess_TopRightRegion_m36BDED50C55A6ABF5E1106897FB04E1B4BB6D007(__this, L_134, NULL);
		___0_regUp = L_135;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:642>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_136 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_137;
		L_137 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_136, NULL);
		NullCheck(L_137);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_138 = L_137->____eUp;
		NullCheck(L_138);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_139;
		L_139 = Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E(L_138, NULL);
		V_10 = L_139;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:643>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_140 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_141 = V_2;
		NullCheck(L_141);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_142;
		L_142 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_141, NULL);
		NullCheck(L_140);
		L_140->____eUp = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&L_140->____eUp), (void*)L_142);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:644>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_143 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_144;
		L_144 = Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62(__this, L_143, (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL, NULL);
		V_2 = L_144;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:645>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_145 = ___0_regUp;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_146 = V_2;
		NullCheck(L_146);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_147 = L_146->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_148 = V_1;
		NullCheck(L_148);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_149;
		L_149 = Edge_get__Rprev_mE10ABFB3E1AF2B59D30890FC884350308F055A3E(L_148, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_150 = V_10;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_145, L_147, L_149, L_150, (bool)1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:646>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_151 = __this->____pool;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_152 = V_8;
		NullCheck(L_151);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_151, L_152);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:647>
		return (bool)1;
	}

IL_02b3:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:652>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_153 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_154 = __this->____event;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_155 = V_8;
		float L_156;
		L_156 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_153, L_154, L_155, NULL);
		if ((!(((float)L_156) >= ((float)(0.0f)))))
		{
			goto IL_0325;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:654>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_157 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_158;
		L_158 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_157, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_159 = ___0_regUp;
		int32_t L_160 = 1;
		V_11 = (bool)L_160;
		NullCheck(L_159);
		L_159->____dirty = (bool)L_160;
		bool L_161 = V_11;
		NullCheck(L_158);
		L_158->____dirty = L_161;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:655>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_162 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_163 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_164 = V_1;
		NullCheck(L_164);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_165 = L_164->____Sym;
		NullCheck(L_162);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_166;
		L_166 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_162, L_163, L_165, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:656>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_167 = V_1;
		NullCheck(L_167);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_168 = L_167->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_169 = __this->____event;
		NullCheck(L_169);
		float L_170 = L_169->____s;
		NullCheck(L_168);
		L_168->____s = L_170;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:657>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_171 = V_1;
		NullCheck(L_171);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_172 = L_171->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_173 = __this->____event;
		NullCheck(L_173);
		float L_174 = L_173->____t;
		NullCheck(L_172);
		L_172->____t = L_174;
	}

IL_0325:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:659>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_175 = V_6;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_176 = __this->____event;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_177 = V_8;
		float L_178;
		L_178 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_175, L_176, L_177, NULL);
		if ((!(((float)L_178) <= ((float)(0.0f)))))
		{
			goto IL_0391;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:661>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_179 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_180 = V_0;
		int32_t L_181 = 1;
		V_11 = (bool)L_181;
		NullCheck(L_180);
		L_180->____dirty = (bool)L_181;
		bool L_182 = V_11;
		NullCheck(L_179);
		L_179->____dirty = L_182;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:662>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_183 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_184 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_185 = V_2;
		NullCheck(L_185);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_186 = L_185->____Sym;
		NullCheck(L_183);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_187;
		L_187 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_183, L_184, L_186, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:663>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_188 = V_2;
		NullCheck(L_188);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_189 = L_188->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_190 = __this->____event;
		NullCheck(L_190);
		float L_191 = L_190->____s;
		NullCheck(L_189);
		L_189->____s = L_191;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:664>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_192 = V_2;
		NullCheck(L_192);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_193 = L_192->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_194 = __this->____event;
		NullCheck(L_194);
		float L_195 = L_194->____t;
		NullCheck(L_193);
		L_193->____t = L_195;
	}

IL_0391:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:667>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_196 = __this->____pool;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_197 = V_8;
		NullCheck(L_196);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_196, L_197);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:668>
		return (bool)0;
	}

IL_03a0:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:678>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_198 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_199 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_200 = V_1;
		NullCheck(L_200);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_201 = L_200->____Sym;
		NullCheck(L_198);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_202;
		L_202 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_198, L_199, L_201, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:679>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_203 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_204 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_205 = V_2;
		NullCheck(L_205);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_206 = L_205->____Sym;
		NullCheck(L_203);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_207;
		L_207 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_203, L_204, L_206, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:680>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_208 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_209 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_210 = V_2;
		NullCheck(L_210);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_211;
		L_211 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_210, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_212 = V_1;
		NullCheck(L_208);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_208, L_209, L_211, L_212, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:681>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_213 = V_1;
		NullCheck(L_213);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_214 = L_213->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_215 = V_8;
		NullCheck(L_215);
		float L_216 = L_215->____s;
		NullCheck(L_214);
		L_214->____s = L_216;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:682>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_217 = V_1;
		NullCheck(L_217);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_218 = L_217->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_219 = V_8;
		NullCheck(L_219);
		float L_220 = L_219->____t;
		NullCheck(L_218);
		L_218->____t = L_220;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:683>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_221 = __this->____pool;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_222 = V_8;
		NullCheck(L_221);
		GenericVirtualActionInvoker1< Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* >::Invoke(IPool_Return_TisVertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C_mEE3EA0EBCD2A0AD3183216644CF13058B339747A_RuntimeMethod_var, L_221, L_222);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:684>
		V_8 = (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)NULL;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:685>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_223 = V_1;
		NullCheck(L_223);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_224 = L_223->____Org;
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_225 = __this->____pq;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_226 = V_1;
		NullCheck(L_226);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_227 = L_226->____Org;
		NullCheck(L_225);
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 L_228;
		L_228 = PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1(L_225, L_227, PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1_RuntimeMethod_var);
		NullCheck(L_224);
		L_224->____pqHandle = L_228;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:686>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_229 = V_1;
		NullCheck(L_229);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_230 = L_229->____Org;
		NullCheck(L_230);
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314* L_231 = (PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314*)(&L_230->____pqHandle);
		int32_t L_232 = L_231->____handle;
		il2cpp_codegen_runtime_class_init_inline(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var);
		int32_t L_233 = ((PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var))->___Invalid;
		if ((!(((uint32_t)L_232) == ((uint32_t)L_233))))
		{
			goto IL_045a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:688>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_234 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_234, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_234, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6_RuntimeMethod_var)));
	}

IL_045a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:690>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_235 = V_1;
		NullCheck(L_235);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_236 = L_235->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_237 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_238 = V_5;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_239 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_240 = V_6;
		Tess_GetIntersectData_mC7C5CC61E4012E373A4661A298DA00C2A9B10FBA(__this, L_236, L_237, L_238, L_239, L_240, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:691>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_241 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_242;
		L_242 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_241, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_243 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_244 = V_0;
		int32_t L_245 = 1;
		V_11 = (bool)L_245;
		NullCheck(L_244);
		L_244->____dirty = (bool)L_245;
		bool L_246 = V_11;
		bool L_247 = L_246;
		V_11 = L_247;
		NullCheck(L_243);
		L_243->____dirty = L_247;
		bool L_248 = V_11;
		NullCheck(L_242);
		L_242->____dirty = L_248;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:692>
		return (bool)0;
	}
}
// Method Definition Index: 55448
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_mA315F2B4FE93010C135F6B43C5C8B51F1E00F7DF (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, const RuntimeMethod* method) 
{
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:705>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_000a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:713>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = V_0;
		___0_regUp = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:714>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3 = V_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4;
		L_4 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_3, NULL);
		V_0 = L_4;
	}

IL_0015:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:711>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____dirty;
		if (L_6)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:716>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_7 = ___0_regUp;
		NullCheck(L_7);
		bool L_8 = L_7->____dirty;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:718>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_9 = ___0_regUp;
		V_0 = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:719>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_10 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_11;
		L_11 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_10, NULL);
		___0_regUp = L_11;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:720>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = ___0_regUp;
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_13 = ___0_regUp;
		NullCheck(L_13);
		bool L_14 = L_13->____dirty;
		if (L_14)
		{
			goto IL_003c;
		}
	}

IL_003b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:723>
		return;
	}

IL_003c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:726>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_15 = ___0_regUp;
		NullCheck(L_15);
		L_15->____dirty = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:727>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_16 = ___0_regUp;
		NullCheck(L_16);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = L_16->____eUp;
		V_1 = L_17;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:728>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_18 = V_0;
		NullCheck(L_18);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = L_18->____eUp;
		V_2 = L_19;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:730>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_1;
		NullCheck(L_20);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21;
		L_21 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_20, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_2;
		NullCheck(L_22);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23;
		L_23 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_22, NULL);
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_21) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_23)))
		{
			goto IL_00cb;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:733>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_24 = ___0_regUp;
		bool L_25;
		L_25 = Tess_CheckForLeftSplice_mA422AF26ED6CD7EBB1E540E2CBF125182C61771A(__this, L_24, NULL);
		if (!L_25)
		{
			goto IL_00cb;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:739>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->____fixUpperEdge;
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:741>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_28 = V_0;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_28, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:742>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_29 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_30 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_2;
		NullCheck(L_29);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_29, L_30, L_31, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:743>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_32 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_33;
		L_33 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_32, NULL);
		V_0 = L_33;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:744>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_34 = V_0;
		NullCheck(L_34);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = L_34->____eUp;
		V_2 = L_35;
		goto IL_00cb;
	}

IL_009a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:746>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_36 = ___0_regUp;
		NullCheck(L_36);
		bool L_37 = L_36->____fixUpperEdge;
		if (!L_37)
		{
			goto IL_00cb;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:748>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_38 = ___0_regUp;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_38, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:749>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_39 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_40 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_1;
		NullCheck(L_39);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_39, L_40, L_41, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:750>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_42 = V_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_43;
		L_43 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_42, NULL);
		___0_regUp = L_43;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:751>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_44 = ___0_regUp;
		NullCheck(L_44);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = L_44->____eUp;
		V_1 = L_45;
	}

IL_00cb:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:755>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = V_1;
		NullCheck(L_46);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_47 = L_46->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_2;
		NullCheck(L_48);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_49 = L_48->____Org;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_47) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_49)))
		{
			goto IL_0125;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:757>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:758>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:759>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_1;
		NullCheck(L_50);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51;
		L_51 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_50, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52 = V_2;
		NullCheck(L_52);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_53;
		L_53 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_52, NULL);
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_51) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_53)))
		{
			goto IL_011d;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_54 = ___0_regUp;
		NullCheck(L_54);
		bool L_55 = L_54->____fixUpperEdge;
		if (L_55)
		{
			goto IL_011d;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_56 = V_0;
		NullCheck(L_56);
		bool L_57 = L_56->____fixUpperEdge;
		if (L_57)
		{
			goto IL_011d;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_58 = V_1;
		NullCheck(L_58);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_59;
		L_59 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_58, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_60 = __this->____event;
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_59) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_60)))
		{
			goto IL_0113;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_61 = V_2;
		NullCheck(L_61);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62;
		L_62 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_61, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_63 = __this->____event;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_62) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_63))))
		{
			goto IL_011d;
		}
	}

IL_0113:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:768>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_64 = ___0_regUp;
		bool L_65;
		L_65 = Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6(__this, L_64, NULL);
		if (!L_65)
		{
			goto IL_0125;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:771>
		return;
	}

IL_011d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:778>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_66 = ___0_regUp;
		bool L_67;
		L_67 = Tess_CheckForRightSplice_m0302CDD5240E389F817356B3E03C41C5923F5D45(__this, L_66, NULL);
	}

IL_0125:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:781>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_68 = V_1;
		NullCheck(L_68);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_69 = L_68->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_70 = V_2;
		NullCheck(L_70);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_71 = L_70->____Org;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_69) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_71))))
		{
			goto IL_0015;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_72 = V_1;
		NullCheck(L_72);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_73;
		L_73 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_72, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_74 = V_2;
		NullCheck(L_74);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_75;
		L_75 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_74, NULL);
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_73) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_75))))
		{
			goto IL_0015;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:784>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_76 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_77 = V_1;
		Geom_AddWinding_m7F138F904EDF9A9D1117F39F2758EE60DFF774AB(L_76, L_77, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:785>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_78 = ___0_regUp;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_78, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:786>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_79 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_80 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_81 = V_1;
		NullCheck(L_79);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_79, L_80, L_81, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:787>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_82 = V_0;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_83;
		L_83 = Tess_RegionAbove_m9221E406AAAEA0A3DCA4B28A4AD35895A7341239(__this, L_82, NULL);
		___0_regUp = L_83;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:708>
		goto IL_0015;
	}
}
// Method Definition Index: 55449
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m7CF37EC43C24079CE8FEA77404E8A08BB22992D2 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___1_eBottomLeft, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	bool V_4 = false;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_5 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:825>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___1_eBottomLeft;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____Onext;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:826>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_3;
		L_3 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_2, NULL);
		V_1 = L_3;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:827>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_4 = ___0_regUp;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____eUp;
		V_2 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:828>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_6 = V_1;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____eUp;
		V_3 = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:829>
		V_4 = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:831>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9;
		L_9 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_8, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_3;
		NullCheck(L_10);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11;
		L_11 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_10, NULL);
		if ((((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_9) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_11)))
		{
			goto IL_0036;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:833>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = ___0_regUp;
		bool L_13;
		L_13 = Tess_CheckForIntersect_m1C93DEE62A2BAD84B5B1FED32E7EA73A495D71F6(__this, L_12, NULL);
	}

IL_0036:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:838>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = V_2;
		NullCheck(L_14);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = L_14->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = __this->____event;
		bool L_17;
		L_17 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:840>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_18 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_19 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_0;
		NullCheck(L_20);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21;
		L_21 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_20, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_2;
		NullCheck(L_18);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_18, L_19, L_21, L_22, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:841>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_23 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_24;
		L_24 = Tess_TopLeftRegion_m035D36093FF04567CCCE4B3F19EEEAEF5D2F53AD(__this, L_23, NULL);
		___0_regUp = L_24;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:842>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_25 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_26;
		L_26 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_25, NULL);
		NullCheck(L_26);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = L_26->____eUp;
		V_0 = L_27;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:843>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_28 = ___0_regUp;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_29;
		L_29 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_28, NULL);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_30 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31;
		L_31 = Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62(__this, L_29, L_30, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:844>
		V_4 = (bool)1;
	}

IL_0089:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:846>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_3;
		NullCheck(L_32);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_33 = L_32->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_34 = __this->____event;
		bool L_35;
		L_35 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_00c1;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:848>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_36 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_37 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = ___1_eBottomLeft;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_3;
		NullCheck(L_39);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40;
		L_40 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_39, NULL);
		NullCheck(L_36);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_36, L_37, L_38, L_40, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:849>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_41 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42;
		L_42 = Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62(__this, L_41, (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL, NULL);
		___1_eBottomLeft = L_42;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:850>
		V_4 = (bool)1;
	}

IL_00c1:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:852>
		bool L_43 = V_4;
		if (!L_43)
		{
			goto IL_00d6;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:854>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_44 = ___0_regUp;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = ___1_eBottomLeft;
		NullCheck(L_45);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = L_45->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_47 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_0;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_44, L_46, L_47, L_48, (bool)1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:855>
		return;
	}

IL_00d6:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:861>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_3;
		NullCheck(L_49);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_50 = L_49->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51 = V_2;
		NullCheck(L_51);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = L_51->____Org;
		bool L_53;
		L_53 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_00f3;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:863>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54 = V_3;
		NullCheck(L_54);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_55;
		L_55 = Edge_get__Oprev_mA8168A5138A43F572D6BF2E1B57C1701E15C3733(L_54, NULL);
		V_5 = L_55;
		goto IL_00f6;
	}

IL_00f3:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:867>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_56 = V_2;
		V_5 = L_56;
	}

IL_00f6:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:869>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_57 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_58 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_59 = ___1_eBottomLeft;
		NullCheck(L_59);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_60;
		L_60 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_59, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_61 = V_5;
		NullCheck(L_57);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_62;
		L_62 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_57, L_58, L_60, L_61, NULL);
		V_5 = L_62;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:873>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_63 = ___0_regUp;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_64 = V_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_65 = V_5;
		NullCheck(L_65);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_66 = L_65->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_67 = V_5;
		NullCheck(L_67);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_68 = L_67->____Onext;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_63, L_64, L_66, L_68, (bool)0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:874>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_69 = V_5;
		NullCheck(L_69);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_70 = L_69->____Sym;
		NullCheck(L_70);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_71 = L_70->____activeRegion;
		NullCheck(L_71);
		L_71->____fixUpperEdge = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:875>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_72 = ___0_regUp;
		Tess_WalkDirtyRegions_mA315F2B4FE93010C135F6B43C5C8B51F1E00F7DF(__this, L_72, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:876>
		return;
	}
}
// Method Definition Index: 55450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* ___0_regUp, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___1_vEvent, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:885>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = ___0_regUp;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eUp;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:886>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = L_2->____Org;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = ___1_vEvent;
		bool L_5;
		L_5 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:892>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0_RuntimeMethod_var)));
	}

IL_0020:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:895>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_0;
		NullCheck(L_7);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8;
		L_8 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_7, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = ___1_vEvent;
		bool L_10;
		L_10 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_008c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:898>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_11 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_12 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_13);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = L_13->____Sym;
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15;
		L_15 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_11, L_12, L_14, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:899>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_16 = ___0_regUp;
		NullCheck(L_16);
		bool L_17 = L_16->____fixUpperEdge;
		if (!L_17)
		{
			goto IL_006c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:902>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_18 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_19 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_0;
		NullCheck(L_20);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = L_20->____Onext;
		NullCheck(L_18);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_18, L_19, L_21, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:903>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_22 = ___0_regUp;
		NullCheck(L_22);
		L_22->____fixUpperEdge = (bool)0;
	}

IL_006c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:905>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_23 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_24 = __this->____pool;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = ___1_vEvent;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____anEdge;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_0;
		NullCheck(L_23);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_23, L_24, L_26, L_27, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:906>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28 = ___1_vEvent;
		Tess_SweepEvent_m21DAC799361D2DDF3274FFB677D6ECE09DAE2F78(__this, L_28, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:907>
		return;
	}

IL_008c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:911>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_29 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0_RuntimeMethod_var)));
	}
}
// Method Definition Index: 55451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m688BD9B47D51640C1CE3F56EBB131201FF6174D4 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_vEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Find_mCE0635096C8A53E62D2707E6DC456AF8DF71E546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m534BA732E5B78CF9F9B1AA11E37153125F93DE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_1 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_4 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_5 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_6 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* G_B7_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:931>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_0 = __this->____pool;
		NullCheck(L_0);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* >::Invoke(IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var, L_0);
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:934>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = ___0_vEvent;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____anEdge;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____Sym;
		NullCheck(L_2);
		L_2->____eUp = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp), (void*)L_5);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:935>
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_6 = __this->____dict;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_7 = V_0;
		NullCheck(L_6);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_8;
		L_8 = Dict_1_Find_mCE0635096C8A53E62D2707E6DC456AF8DF71E546(L_6, L_7, Dict_1_Find_mCE0635096C8A53E62D2707E6DC456AF8DF71E546_RuntimeMethod_var);
		NullCheck(L_8);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_9;
		L_9 = Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_inline(L_8, Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_RuntimeMethod_var);
		V_1 = L_9;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:936>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_10 = __this->____pool;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_11 = V_0;
		NullCheck(L_10);
		GenericVirtualActionInvoker1< ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* >::Invoke(IPool_Return_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_m534BA732E5B78CF9F9B1AA11E37153125F93DE0B_RuntimeMethod_var, L_10, L_11);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:937>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = V_1;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_13;
		L_13 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_12, NULL);
		V_2 = L_13;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:938>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14 = V_2;
		if (L_14)
		{
			goto IL_0047;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:941>
		return;
	}

IL_0047:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:943>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_15 = V_1;
		NullCheck(L_15);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = L_15->____eUp;
		V_3 = L_16;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:944>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_17 = V_2;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = L_17->____eUp;
		V_4 = L_18;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:947>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19 = V_3;
		NullCheck(L_19);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_20;
		L_20 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_19, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = ___0_vEvent;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_3;
		NullCheck(L_22);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = L_22->____Org;
		float L_24;
		L_24 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_20, L_21, L_23, NULL);
		if ((!(((float)L_24) == ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:949>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_25 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = ___0_vEvent;
		Tess_ConnectLeftDegenerate_m7BEC97EB6014B672676EFFAB31432B519921BED0(__this, L_25, L_26, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:950>
		return;
	}

IL_0078:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:955>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_4;
		NullCheck(L_27);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28;
		L_28 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_27, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_3;
		NullCheck(L_29);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_30;
		L_30 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_29, NULL);
		bool L_31;
		L_31 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_008f;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_32 = V_2;
		G_B7_0 = L_32;
		goto IL_0090;
	}

IL_008f:
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_33 = V_1;
		G_B7_0 = L_33;
	}

IL_0090:
	{
		V_5 = G_B7_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:957>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_34 = V_1;
		NullCheck(L_34);
		bool L_35 = L_34->____inside;
		if (L_35)
		{
			goto IL_00a3;
		}
	}
	{
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_36 = V_5;
		NullCheck(L_36);
		bool L_37 = L_36->____fixUpperEdge;
		if (!L_37)
		{
			goto IL_011f;
		}
	}

IL_00a3:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:960>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_38 = V_5;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_39 = V_1;
		if ((!(((RuntimeObject*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)L_38) == ((RuntimeObject*)(ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)L_39))))
		{
			goto IL_00ce;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:962>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_40 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_41 = __this->____pool;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = ___0_vEvent;
		NullCheck(L_42);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_43 = L_42->____anEdge;
		NullCheck(L_43);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = L_43->____Sym;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_3;
		NullCheck(L_45);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = L_45->____Lnext;
		NullCheck(L_40);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_47;
		L_47 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_40, L_41, L_44, L_46, NULL);
		V_6 = L_47;
		goto IL_00f3;
	}

IL_00ce:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:966>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_48 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_49 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_4;
		NullCheck(L_50);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51;
		L_51 = Edge_get__Dnext_m61B1425BB7BBFA4D996A431C104F8417603F206C(L_50, NULL);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = ___0_vEvent;
		NullCheck(L_52);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_53 = L_52->____anEdge;
		NullCheck(L_48);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54;
		L_54 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_48, L_49, L_51, L_53, NULL);
		NullCheck(L_54);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_55 = L_54->____Sym;
		V_6 = L_55;
	}

IL_00f3:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:968>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_56 = V_5;
		NullCheck(L_56);
		bool L_57 = L_56->____fixUpperEdge;
		if (!L_57)
		{
			goto IL_0108;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:970>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_58 = V_5;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_59 = V_6;
		Tess_FixUpperEdge_m3EA63F4044BF98BF031DE0C32DCD5B5245E737F6(__this, L_58, L_59, NULL);
		goto IL_0117;
	}

IL_0108:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:974>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_60 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_61 = V_6;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_62;
		L_62 = Tess_AddRegionBelow_m4822FD2001C9390D9D624BBD9DBF536129B007A6(__this, L_60, L_61, NULL);
		Tess_ComputeWinding_m164A5309BBEAAA26966D2AE1E0CF8FAC99FA9376(__this, L_62, NULL);
	}

IL_0117:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:976>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_63 = ___0_vEvent;
		Tess_SweepEvent_m21DAC799361D2DDF3274FFB677D6ECE09DAE2F78(__this, L_63, NULL);
		return;
	}

IL_011f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:982>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_64 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_65 = ___0_vEvent;
		NullCheck(L_65);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_66 = L_65->____anEdge;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_67 = ___0_vEvent;
		NullCheck(L_67);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_68 = L_67->____anEdge;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_64, L_66, L_68, (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL, (bool)1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:984>
		return;
	}
}
// Method Definition Index: 55452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_m21DAC799361D2DDF3274FFB677D6ECE09DAE2F78 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* ___0_vEvent, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_1 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_4 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:992>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_0 = ___0_vEvent;
		__this->____event = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event), (void*)L_0);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:997>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = ___0_vEvent;
		NullCheck(L_1);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = L_1->____anEdge;
		V_0 = L_2;
		goto IL_0028;
	}

IL_0010:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1000>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_0;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____Onext;
		V_0 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1001>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_0;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = ___0_vEvent;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____anEdge;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_5) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_7))))
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1004>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = ___0_vEvent;
		Tess_ConnectLeftVertex_m688BD9B47D51640C1CE3F56EBB131201FF6174D4(__this, L_8, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1005>
		return;
	}

IL_0028:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:998>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_0;
		NullCheck(L_9);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_10 = L_9->____activeRegion;
		if (!L_10)
		{
			goto IL_0010;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1015>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		NullCheck(L_11);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_12 = L_11->____activeRegion;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_13;
		L_13 = Tess_TopLeftRegion_m035D36093FF04567CCCE4B3F19EEEAEF5D2F53AD(__this, L_12, NULL);
		V_1 = L_13;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1016>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_14 = V_1;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_15;
		L_15 = Tess_RegionBelow_m11FCC7CBA8C6F379032E37B96EA1F41BCD2E45FD(__this, L_14, NULL);
		V_2 = L_15;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1017>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_16 = V_2;
		NullCheck(L_16);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = L_16->____eUp;
		V_3 = L_17;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1018>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_18 = V_2;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_19;
		L_19 = Tess_FinishLeftRegions_m1DE64DC60588A1A3EAC8DC7260A1D64D1B56DA62(__this, L_18, (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE*)NULL, NULL);
		V_4 = L_19;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1024>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_4;
		NullCheck(L_20);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = L_20->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_3;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_21) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_22))))
		{
			goto IL_006a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1027>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_23 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = V_4;
		Tess_ConnectRightVertex_m7CF37EC43C24079CE8FEA77404E8A08BB22992D2(__this, L_23, L_24, NULL);
		return;
	}

IL_006a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1031>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_25 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_4;
		NullCheck(L_26);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = L_26->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_3;
		Tess_AddRightEdges_m4018AEDFCF5621ECB23C3BCDA1FD86EA4A4003B1(__this, L_25, L_27, L_28, L_29, (bool)1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1033>
		return;
	}
}
// Method Definition Index: 55453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m63322194D5191E681E1C7CC2722FDEE53079D4C4 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, float ___0_smin, float ___1_smax, float ___2_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Insert_m29022799FFB4BEEF05D4770B5A08FB8E24C513C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1044>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_1 = __this->____pool;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2;
		L_2 = Mesh_MakeEdge_m3D0A00C5539506BD80B3A810DC16DBCAA9BB061C(L_0, L_1, NULL);
		V_0 = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1045>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_0;
		NullCheck(L_3);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = L_3->____Org;
		float L_5 = ___1_smax;
		NullCheck(L_4);
		L_4->____s = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1046>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_0;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org;
		float L_8 = ___2_t;
		NullCheck(L_7);
		L_7->____t = L_8;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1047>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_0;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10;
		L_10 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_9, NULL);
		float L_11 = ___0_smin;
		NullCheck(L_10);
		L_10->____s = L_11;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1048>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_0;
		NullCheck(L_12);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13;
		L_13 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_12, NULL);
		float L_14 = ___2_t;
		NullCheck(L_13);
		L_13->____t = L_14;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1049>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16;
		L_16 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_15, NULL);
		__this->____event = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event), (void*)L_16);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1051>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_17 = __this->____pool;
		NullCheck(L_17);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_18;
		L_18 = GenericVirtualFuncInvoker0< ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* >::Invoke(IPool_Get_TisActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE_mD213BB8AF0C2AA7202D92624A18F3CF684CDE3E8_RuntimeMethod_var, L_17);
		V_1 = L_18;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1052>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_19 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_0;
		NullCheck(L_19);
		L_19->____eUp = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____eUp), (void*)L_20);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1053>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_21 = V_1;
		NullCheck(L_21);
		L_21->____windingNumber = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1054>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_22 = V_1;
		NullCheck(L_22);
		L_22->____inside = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1055>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_23 = V_1;
		NullCheck(L_23);
		L_23->____fixUpperEdge = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1056>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_24 = V_1;
		NullCheck(L_24);
		L_24->____sentinel = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1057>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_25 = V_1;
		NullCheck(L_25);
		L_25->____dirty = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1058>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_26 = V_1;
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_27 = __this->____dict;
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_28 = V_1;
		NullCheck(L_27);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_29;
		L_29 = Dict_1_Insert_m29022799FFB4BEEF05D4770B5A08FB8E24C513C8(L_27, L_28, Dict_1_Insert_m29022799FFB4BEEF05D4770B5A08FB8E24C513C8_RuntimeMethod_var);
		NullCheck(L_26);
		L_26->____nodeUp = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____nodeUp), (void*)L_29);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1059>
		return;
	}
}
// Method Definition Index: 55454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_m60439FCFF58F6194C3C997FD0918BD7EEBC6FE8E (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1__ctor_m209CE83302FE6BA9AD4F9EF945793855B467D91A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tess_EdgeLeq_mBBA2BC792106918134934914DBF531DD74AB3D2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1067>
		LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A* L_0 = (LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A*)il2cpp_codegen_object_new(LessOrEqual_t60FD1DDEDA59F70459928802B25C04D35F5C4A8A_il2cpp_TypeInfo_var);
		LessOrEqual__ctor_mBBAC12C0C1638916E114F128CD3F87B86508D94A(L_0, __this, (intptr_t)((void*)Tess_EdgeLeq_mBBA2BC792106918134934914DBF531DD74AB3D2C_RuntimeMethod_var), NULL);
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_1 = (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*)il2cpp_codegen_object_new(Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531_il2cpp_TypeInfo_var);
		Dict_1__ctor_m209CE83302FE6BA9AD4F9EF945793855B467D91A(L_1, L_0, Dict_1__ctor_m209CE83302FE6BA9AD4F9EF945793855B467D91A_RuntimeMethod_var);
		__this->____dict = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1069>
		float L_2 = __this->___SentinelCoord;
		float L_3 = __this->___SentinelCoord;
		float L_4 = __this->___SentinelCoord;
		Tess_AddSentinel_m63322194D5191E681E1C7CC2722FDEE53079D4C4(__this, ((-L_2)), L_3, ((-L_4)), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1070>
		float L_5 = __this->___SentinelCoord;
		float L_6 = __this->___SentinelCoord;
		float L_7 = __this->___SentinelCoord;
		Tess_AddSentinel_m63322194D5191E681E1C7CC2722FDEE53079D4C4(__this, ((-L_5)), L_6, L_7, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1071>
		return;
	}
}
// Method Definition Index: 55455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m760B02FF396436E30372443619D044DA95FCC05D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Min_mCBD3210CFC0610214960F6CCA2DAFBCC5D67C739_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* V_0 = NULL;
	{
		goto IL_0010;
	}

IL_0002:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1083>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_0 = V_0;
		NullCheck(L_0);
		bool L_1 = L_0->____sentinel;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1089>
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_2 = V_0;
		Tess_DeleteRegion_mAB8F1EB04876F21073CE9AF22CA638759288D503(__this, L_2, NULL);
	}

IL_0010:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1078>
		Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531* L_3 = __this->____dict;
		NullCheck(L_3);
		Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D* L_4;
		L_4 = Dict_1_Min_mCBD3210CFC0610214960F6CCA2DAFBCC5D67C739(L_3, Dict_1_Min_mCBD3210CFC0610214960F6CCA2DAFBCC5D67C739_RuntimeMethod_var);
		NullCheck(L_4);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_5;
		L_5 = Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_inline(L_4, Node_get_Key_m2B64B1B10134694ADD2CF082DC7680F004BE2B7E_RuntimeMethod_var);
		ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1092>
		__this->____dict = (Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict), (void*)(Dict_1_t99B3E6279D602F30B071FCE4F1EF9F8A612F6531*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1093>
		return;
	}
}
// Method Definition Index: 55456
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_mEA740DA6799454F92769FF3D9A7377920D2657FA (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_3 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1100>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eHead;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1102>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = L_2->____next;
		V_1 = L_3;
		goto IL_00c5;
	}

IL_0018:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1104>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_1;
		NullCheck(L_4);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = L_4->____next;
		V_2 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1105>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_1;
		NullCheck(L_6);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6->____Lnext;
		V_3 = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1107>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_1;
		NullCheck(L_8);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = L_8->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11;
		L_11 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_10, NULL);
		bool L_12;
		L_12 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_1;
		NullCheck(L_13);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_14 = L_13->____Lnext;
		NullCheck(L_14);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_15 = L_14->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_1;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_15) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1111>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_1;
		Tess_SpliceMergeVertices_m48D936585FF30D86343C6195C1D665F40B99CF67(__this, L_17, L_18, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1112>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_19 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_20 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_1;
		NullCheck(L_19);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_19, L_20, L_21, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1113>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_3;
		V_1 = L_22;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1114>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_1;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = L_23->____Lnext;
		V_3 = L_24;
	}

IL_006a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1116>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_3;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_1;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_26) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_27))))
		{
			goto IL_00c3;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1120>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = V_1;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_28) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_29)))
		{
			goto IL_009d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1122>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = V_2;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_30) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_31)))
		{
			goto IL_0084;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_3;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_2;
		NullCheck(L_33);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = L_33->____Sym;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_32) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_34))))
		{
			goto IL_008b;
		}
	}

IL_0084:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1124>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = V_2;
		NullCheck(L_35);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = L_35->____next;
		V_2 = L_36;
	}

IL_008b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1126>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_37 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_38 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_39 = V_3;
		NullCheck(L_37);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_37, L_38, L_39, NULL);
	}

IL_009d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1128>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = V_2;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_40) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_41)))
		{
			goto IL_00aa;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_43 = V_2;
		NullCheck(L_43);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = L_43->____Sym;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_42) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_44))))
		{
			goto IL_00b1;
		}
	}

IL_00aa:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1130>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_2;
		NullCheck(L_45);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = L_45->____next;
		V_2 = L_46;
	}

IL_00b1:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1132>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_47 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_48 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_1;
		NullCheck(L_47);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_47, L_48, L_49, NULL);
	}

IL_00c3:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1102>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50 = V_2;
		V_1 = L_50;
	}

IL_00c5:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1102>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_51) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_52))))
		{
			goto IL_0018;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1135>
		return;
	}
}
// Method Definition Index: 55457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m8C57A253EBE886758D4DAA88EC928696890D5B9D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Init_m928EC1FF5C339947B1206C972EE70D3B77829BC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1__ctor_m2C29270DF8FD8F531E158284E3B90778CF6A064F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1143>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = L_0->____vHead;
		V_0 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1144>
		V_2 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1146>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = L_2->____next;
		V_1 = L_3;
		goto IL_0022;
	}

IL_0017:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1148>
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1146>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = V_1;
		NullCheck(L_5);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = L_5->____next;
		V_1 = L_6;
	}

IL_0022:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1146>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_7) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_8))))
		{
			goto IL_0017;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1151>
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 8));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1153>
		int32_t L_10 = V_2;
		LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58* L_11 = (LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58*)il2cpp_codegen_object_new(LessOrEqual_tFE4E120A1A39EE776A6FBE3A59729699D2578C58_il2cpp_TypeInfo_var);
		LessOrEqual__ctor_mC062AD51CEBEC2C0372E1AD778700E992E3015CE(L_11, NULL, (intptr_t)((void*)Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1_RuntimeMethod_var), NULL);
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_12 = (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*)il2cpp_codegen_object_new(PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927_il2cpp_TypeInfo_var);
		PriorityQueue_1__ctor_m2C29270DF8FD8F531E158284E3B90778CF6A064F(L_12, L_10, L_11, PriorityQueue_1__ctor_m2C29270DF8FD8F531E158284E3B90778CF6A064F_RuntimeMethod_var);
		__this->____pq = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pq), (void*)L_12);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1155>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_13 = __this->____mesh;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14 = L_13->____vHead;
		V_0 = L_14;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1156>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = L_15->____next;
		V_1 = L_16;
		goto IL_008d;
	}

IL_0057:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1157>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = V_1;
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_18 = __this->____pq;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_19 = V_1;
		NullCheck(L_18);
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314 L_20;
		L_20 = PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1(L_18, L_19, PriorityQueue_1_Insert_mDBF2CA009F93E083A33FFC3E4EC790F8E1ABC4A1_RuntimeMethod_var);
		NullCheck(L_17);
		L_17->____pqHandle = L_20;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1158>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = V_1;
		NullCheck(L_21);
		PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314* L_22 = (PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314*)(&L_21->____pqHandle);
		int32_t L_23 = L_22->____handle;
		il2cpp_codegen_runtime_class_init_inline(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var);
		int32_t L_24 = ((PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t200D64210DCCDE2D38805A50009BD40CE09BB314_il2cpp_TypeInfo_var))->___Invalid;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0086;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1160>
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_InitPriorityQ_m8C57A253EBE886758D4DAA88EC928696890D5B9D_RuntimeMethod_var)));
	}

IL_0086:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1156>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_26 = V_1;
		NullCheck(L_26);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = L_26->____next;
		V_1 = L_27;
	}

IL_008d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1156>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = V_0;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_28) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_29))))
		{
			goto IL_0057;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1163>
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_30 = __this->____pq;
		NullCheck(L_30);
		PriorityQueue_1_Init_m928EC1FF5C339947B1206C972EE70D3B77829BC1(L_30, PriorityQueue_1_Init_m928EC1FF5C339947B1206C972EE70D3B77829BC1_RuntimeMethod_var);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1164>
		return;
	}
}
// Method Definition Index: 55458
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m000B1D23F66BAA98C855F506E6AD7EE087BE2DE8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1168>
		__this->____pq = (PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pq), (void*)(PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1169>
		return;
	}
}
// Method Definition Index: 55459
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m5972E77884DC6365F09F899F32056E1959590544 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1190>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_004f;
	}

IL_0013:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1192>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = V_0;
		NullCheck(L_3);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = L_3->____next;
		V_1 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1193>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_0;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____anEdge;
		V_2 = L_6;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1196>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = V_2;
		NullCheck(L_7);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = L_7->____Lnext;
		NullCheck(L_8);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = L_8->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_9) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_10))))
		{
			goto IL_004d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1199>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_2;
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = L_11->____Onext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_2;
		Geom_AddWinding_m7F138F904EDF9A9D1117F39F2758EE60DFF774AB(L_12, L_13, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1200>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_14 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_15 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_2;
		NullCheck(L_14);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_14, L_15, L_16, NULL);
	}

IL_004d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1190>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_17 = V_1;
		V_0 = L_17;
	}

IL_004f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1190>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_19 = __this->____mesh;
		NullCheck(L_19);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_20 = L_19->____fHead;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_18) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_20))))
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1203>
		return;
	}
}
// Method Definition Index: 55460
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mA51153C7B94F34C4161B6060D67385A801DDACE8 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Minimum_m4CC75BE2CF318C831BDC9DD6E9B8532F2C4CC771_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1219>
		Tess_RemoveDegenerateEdges_mEA740DA6799454F92769FF3D9A7377920D2657FA(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1220>
		Tess_InitPriorityQ_m8C57A253EBE886758D4DAA88EC928696890D5B9D(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1221>
		Tess_RemoveDegenerateFaces_m5972E77884DC6365F09F899F32056E1959590544(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1222>
		Tess_InitEdgeDict_m60439FCFF58F6194C3C997FD0918BD7EEBC6FE8E(__this, NULL);
		goto IL_0059;
	}

IL_001a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1229>
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_0 = __this->____pq;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1;
		L_1 = PriorityQueue_1_Minimum_m4CC75BE2CF318C831BDC9DD6E9B8532F2C4CC771(L_0, PriorityQueue_1_Minimum_m4CC75BE2CF318C831BDC9DD6E9B8532F2C4CC771_RuntimeMethod_var);
		V_1 = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1230>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_3 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_4 = V_0;
		bool L_5;
		L_5 = Geom_VertEq_m5523371D0B53270A6DC6AB0E55557E7CE8D67DC6(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1248>
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_6 = __this->____pq;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7;
		L_7 = PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4(L_6, PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4_RuntimeMethod_var);
		V_1 = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1249>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		NullCheck(L_8);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = L_8->____anEdge;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = V_1;
		NullCheck(L_10);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = L_10->____anEdge;
		Tess_SpliceMergeVertices_m48D936585FF30D86343C6195C1D665F40B99CF67(__this, L_9, L_11, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1227>
		goto IL_001a;
	}

IL_0052:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1251>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = V_0;
		Tess_SweepEvent_m21DAC799361D2DDF3274FFB677D6ECE09DAE2F78(__this, L_12, NULL);
	}

IL_0059:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1225>
		PriorityQueue_1_tE879454BB0D59CCE006A32C35C89DCFB309EE927* L_13 = __this->____pq;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14;
		L_14 = PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4(L_13, PriorityQueue_1_ExtractMin_m7209957EC5C5F7C45E37A7AF196CE88B273A13F4_RuntimeMethod_var);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_15 = L_14;
		V_0 = L_15;
		if (L_15)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1254>
		Tess_DoneEdgeDict_m760B02FF396436E30372443619D044DA95FCC05D(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1255>
		Tess_DonePriorityQ_m000B1D23F66BAA98C855F506E6AD7EE087BE2DE8(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1257>
		Tess_RemoveDegenerateFaces_m5972E77884DC6365F09F899F32056E1959590544(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:1259>
		return;
	}
}
// Method Definition Index: 55461
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 Tess_get_Normal_m27C8EF3650BF0BD02CB1706A4624F73E23997657 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:161>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = __this->____normal;
		return L_0;
	}
}
// Method Definition Index: 55462
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_set_Normal_mCA55A2A33161A330A2B225D4C62061572CDE3463 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:161>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = ___0_value;
		__this->____normal = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:161>
		return;
	}
}
// Method Definition Index: 55463
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* Tess_get_Vertices_m74F558EAFA4C61978E7B9D5C71390AF54FF3665B (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:186>
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_0 = __this->____vertices;
		return L_0;
	}
}
// Method Definition Index: 55464
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_VertexCount_mE74A775085AD12D6BEC8458C890A5B1DCD2E1F57 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:190>
		int32_t L_0 = __this->____vertexCount;
		return L_0;
	}
}
// Method Definition Index: 55465
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Tess_get_Elements_mE42B4713E624EE5016B6C7F5C9DF538D215E2D14 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:195>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____elements;
		return L_0;
	}
}
// Method Definition Index: 55466
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_ElementCount_mF11A80B7813FABD939913FBF2A050172CE8B1B3D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:199>
		int32_t L_0 = __this->____elementCount;
		return L_0;
	}
}
// Method Definition Index: 55467
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_m13D977CD43A379DEC7E5DA51E9AD30E49E6B34FB (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:202>
		DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E* L_0 = (DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E*)il2cpp_codegen_object_new(DefaultPool_t88E048DB9401A7ADAFF14EC74CD00059FB96052E_il2cpp_TypeInfo_var);
		DefaultPool__ctor_m1418BADB8C4AB3BD573CDBC48DB0F5AB1637C575(L_0, NULL);
		Tess__ctor_mB97C95E8EFABD8EA0CAB9B9AB0A353B728ECB28D(__this, L_0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:204>
		return;
	}
}
// Method Definition Index: 55468
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB97C95E8EFABD8EA0CAB9B9AB0A353B728ECB28D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:163>
		__this->___SUnitX = (1.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:168>
		__this->___SentinelCoord = (4.00000006E+30f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:181>
		__this->___UsePooling = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:206>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:208>
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = ((Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var))->___Zero;
		__this->____normal = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:209>
		float L_1 = (0.0f);
		V_0 = L_1;
		__this->____bmaxY = L_1;
		float L_2 = V_0;
		float L_3 = L_2;
		V_0 = L_3;
		__this->____bmaxX = L_3;
		float L_4 = V_0;
		float L_5 = L_4;
		V_0 = L_5;
		__this->____bminY = L_5;
		float L_6 = V_0;
		__this->____bminX = L_6;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:211>
		__this->____windingRule = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:212>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_7 = ___0_pool;
		__this->____pool = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool), (void*)L_7);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:213>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_8 = __this->____pool;
		if (L_8)
		{
			goto IL_0075;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:215>
		NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF* L_9 = (NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF*)il2cpp_codegen_object_new(NullPool_t5694A82814C8B2F36282359A912A74D47CCF6DBF_il2cpp_TypeInfo_var);
		NullPool__ctor_mE6458D67CCDD6BC8DE755C638E600AA573298FCE(L_9, NULL);
		__this->____pool = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool), (void*)L_9);
	}

IL_0075:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:217>
		__this->____mesh = (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh), (void*)(Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:219>
		__this->____vertices = (ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:220>
		__this->____vertexCount = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:221>
		__this->____elements = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:222>
		__this->____elementCount = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:223>
		return;
	}
}
// Method Definition Index: 55469
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m8A17094DCC720DDB670B30AAB562FC37ABD307A6 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* ___0_norm, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_8 = NULL;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:227>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		NullCheck(L_0);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_1 = L_0->____vHead;
		NullCheck(L_1);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_2 = L_1->____next;
		V_0 = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:229>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5 = V_0;
		NullCheck(L_5);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_6 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_5->____coords);
		float L_7 = L_6->___X;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_7);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = V_0;
		NullCheck(L_9);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_10 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_9->____coords);
		float L_11 = L_10->___Y;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_11);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = L_8;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13 = V_0;
		NullCheck(L_13);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_14 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_13->____coords);
		float L_15 = L_14->___Z;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_15);
		V_1 = L_12;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:230>
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_16 = (VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46*)(VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46*)SZArrayNew(VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_17 = L_16;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_18);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_19 = L_17;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_20 = V_0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_20);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_21 = L_19;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_22);
		V_2 = L_21;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:231>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_23;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = V_0;
		NullCheck(L_25);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_26 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_25->____coords);
		float L_27 = L_26->___X;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_27);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_24;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_29 = V_0;
		NullCheck(L_29);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_30 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_29->____coords);
		float L_31 = L_30->___Y;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_31);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_28;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_33 = V_0;
		NullCheck(L_33);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_34 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_33->____coords);
		float L_35 = L_34->___Z;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_35);
		V_3 = L_32;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:232>
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_36 = (VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46*)(VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46*)SZArrayNew(VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_37 = L_36;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_38);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_39 = L_37;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_40 = V_0;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_40);
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_41 = L_39;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = V_0;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_42);
		V_4 = L_41;
		goto IL_0175;
	}

IL_009f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:236>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_43 = V_0;
		NullCheck(L_43);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_44 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_43->____coords);
		float L_45 = L_44->___X;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = 0;
		float L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((float)L_45) < ((float)L_48))))
		{
			goto IL_00c1;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:236>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_50 = V_0;
		NullCheck(L_50);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_51 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_50->____coords);
		float L_52 = L_51->___X;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_52);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:236>
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_53 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_54 = V_0;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_54);
	}

IL_00c1:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:237>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_55 = V_0;
		NullCheck(L_55);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_56 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_55->____coords);
		float L_57 = L_56->___Y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = 1;
		float L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((!(((float)L_57) < ((float)L_60))))
		{
			goto IL_00e3;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:237>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62 = V_0;
		NullCheck(L_62);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_63 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_62->____coords);
		float L_64 = L_63->___Y;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_64);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:237>
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_65 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_66 = V_0;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_66);
	}

IL_00e3:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:238>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_67 = V_0;
		NullCheck(L_67);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_68 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_67->____coords);
		float L_69 = L_68->___Z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_70 = V_1;
		NullCheck(L_70);
		int32_t L_71 = 2;
		float L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((float)L_69) < ((float)L_72))))
		{
			goto IL_0105;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:238>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_73 = V_1;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_74 = V_0;
		NullCheck(L_74);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_75 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_74->____coords);
		float L_76 = L_75->___Z;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_76);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:238>
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_77 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_78 = V_0;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_78);
	}

IL_0105:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:239>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_79 = V_0;
		NullCheck(L_79);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_80 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_79->____coords);
		float L_81 = L_80->___X;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = 0;
		float L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		if ((!(((float)L_81) > ((float)L_84))))
		{
			goto IL_0128;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:239>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_86 = V_0;
		NullCheck(L_86);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_87 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_86->____coords);
		float L_88 = L_87->___X;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_88);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:239>
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_89 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_90 = V_0;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_90);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_90);
	}

IL_0128:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:240>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_91 = V_0;
		NullCheck(L_91);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_92 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_91->____coords);
		float L_93 = L_92->___Y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_94 = V_3;
		NullCheck(L_94);
		int32_t L_95 = 1;
		float L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		if ((!(((float)L_93) > ((float)L_96))))
		{
			goto IL_014b;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:240>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_97 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_98 = V_0;
		NullCheck(L_98);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_99 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_98->____coords);
		float L_100 = L_99->___Y;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_100);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:240>
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_101 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_102 = V_0;
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_102);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_102);
	}

IL_014b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:241>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_103 = V_0;
		NullCheck(L_103);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_104 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_103->____coords);
		float L_105 = L_104->___Z;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_106 = V_3;
		NullCheck(L_106);
		int32_t L_107 = 2;
		float L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		if ((!(((float)L_105) > ((float)L_108))))
		{
			goto IL_016e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:241>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_109 = V_3;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_110 = V_0;
		NullCheck(L_110);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_111 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_110->____coords);
		float L_112 = L_111->___Z;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_112);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:241>
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_113 = V_4;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_114 = V_0;
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_114);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_114);
	}

IL_016e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:234>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_115 = V_0;
		NullCheck(L_115);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_116 = L_115->____next;
		V_0 = L_116;
	}

IL_0175:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:234>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_117 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_118 = __this->____mesh;
		NullCheck(L_118);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_119 = L_118->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_117) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_119))))
		{
			goto IL_009f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:246>
		V_5 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:247>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_120 = V_3;
		NullCheck(L_120);
		int32_t L_121 = 1;
		float L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_123 = V_1;
		NullCheck(L_123);
		int32_t L_124 = 1;
		float L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_126 = V_3;
		NullCheck(L_126);
		int32_t L_127 = 0;
		float L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_129 = V_1;
		NullCheck(L_129);
		int32_t L_130 = 0;
		float L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		if ((!(((float)((float)il2cpp_codegen_subtract(L_122, L_125))) > ((float)((float)il2cpp_codegen_subtract(L_128, L_131))))))
		{
			goto IL_019c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:247>
		V_5 = 1;
	}

IL_019c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:248>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_132 = V_3;
		NullCheck(L_132);
		int32_t L_133 = 2;
		float L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_135 = V_1;
		NullCheck(L_135);
		int32_t L_136 = 2;
		float L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_138 = V_3;
		int32_t L_139 = V_5;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		float L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_142 = V_1;
		int32_t L_143 = V_5;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		float L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		if ((!(((float)((float)il2cpp_codegen_subtract(L_134, L_137))) > ((float)((float)il2cpp_codegen_subtract(L_141, L_145))))))
		{
			goto IL_01b1;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:248>
		V_5 = 2;
	}

IL_01b1:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:249>
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_146 = V_1;
		int32_t L_147 = V_5;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		float L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_150 = V_3;
		int32_t L_151 = V_5;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		float L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		if ((!(((float)L_149) >= ((float)L_153))))
		{
			goto IL_01d6;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:252>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_154 = ___0_norm;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_155;
		memset((&L_155), 0, sizeof(L_155));
		Vec3__ctor_m95957C0DEE2BAC8062A90688A1B160025012F183((&L_155), (0.0f), (0.0f), (1.0f), NULL);
		*(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)L_154 = L_155;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:253>
		return;
	}

IL_01d6:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:258>
		V_6 = (0.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:259>
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_156 = V_2;
		int32_t L_157 = V_5;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:260>
		VertexU5BU5D_t71808C246960B89A9EA8A887B09D25F4BE867D46* L_160 = V_4;
		int32_t L_161 = V_5;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		V_8 = L_163;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:262>
		NullCheck(L_159);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_164 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_159->____coords);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_165 = V_8;
		NullCheck(L_165);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_166 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_165->____coords);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_Sub_mCDE4E6D261C482B3B58AB0EA0FA08DBA1860B110(L_164, L_166, (&V_9), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:263>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_167 = __this->____mesh;
		NullCheck(L_167);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_168 = L_167->____vHead;
		NullCheck(L_168);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_169 = L_168->____next;
		V_0 = L_169;
		goto IL_02e1;
	}

IL_0211:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:265>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_170 = V_0;
		NullCheck(L_170);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_171 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_170->____coords);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_172 = V_8;
		NullCheck(L_172);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_173 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_172->____coords);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_Sub_mCDE4E6D261C482B3B58AB0EA0FA08DBA1860B110(L_171, L_173, (&V_10), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:266>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_174 = V_9;
		float L_175 = L_174.___Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_176 = V_10;
		float L_177 = L_176.___Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_178 = V_9;
		float L_179 = L_178.___Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_180 = V_10;
		float L_181 = L_180.___Y;
		(&V_11)->___X = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_175, L_177)), ((float)il2cpp_codegen_multiply(L_179, L_181))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:267>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_182 = V_9;
		float L_183 = L_182.___Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_184 = V_10;
		float L_185 = L_184.___X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_186 = V_9;
		float L_187 = L_186.___X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_188 = V_10;
		float L_189 = L_188.___Z;
		(&V_11)->___Y = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_183, L_185)), ((float)il2cpp_codegen_multiply(L_187, L_189))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:268>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_190 = V_9;
		float L_191 = L_190.___X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_192 = V_10;
		float L_193 = L_192.___Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_194 = V_9;
		float L_195 = L_194.___Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_196 = V_10;
		float L_197 = L_196.___X;
		(&V_11)->___Z = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_191, L_193)), ((float)il2cpp_codegen_multiply(L_195, L_197))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:269>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_198 = V_11;
		float L_199 = L_198.___X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_200 = V_11;
		float L_201 = L_200.___X;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_202 = V_11;
		float L_203 = L_202.___Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_204 = V_11;
		float L_205 = L_204.___Y;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_206 = V_11;
		float L_207 = L_206.___Z;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_208 = V_11;
		float L_209 = L_208.___Z;
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_199, L_201)), ((float)il2cpp_codegen_multiply(L_203, L_205)))), ((float)il2cpp_codegen_multiply(L_207, L_209))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:270>
		float L_210 = V_7;
		float L_211 = V_6;
		if ((!(((float)L_210) > ((float)L_211))))
		{
			goto IL_02da;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:272>
		float L_212 = V_7;
		V_6 = L_212;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:273>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_213 = ___0_norm;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_214 = V_11;
		*(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)L_213 = L_214;
	}

IL_02da:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:263>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_215 = V_0;
		NullCheck(L_215);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_216 = L_215->____next;
		V_0 = L_216;
	}

IL_02e1:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:263>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_217 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_218 = __this->____mesh;
		NullCheck(L_218);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_219 = L_218->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_217) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_219))))
		{
			goto IL_0211;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:277>
		float L_220 = V_6;
		if ((!(((float)L_220) <= ((float)(0.0f)))))
		{
			goto IL_031c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:280>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_221 = ___0_norm;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_222 = ((Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var))->___Zero;
		*(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)L_221 = L_222;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:281>
		int32_t L_223;
		L_223 = Vec3_LongAxis_m3A93BE72D5B052A5908805AEF993AC6F296ED4CB((&V_9), NULL);
		V_5 = L_223;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:282>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_224 = ___0_norm;
		int32_t L_225 = V_5;
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(L_224, L_225, (1.0f), NULL);
	}

IL_031c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:284>
		return;
	}
}
// Method Definition Index: 55470
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_mC98D6D1A4D24FC080952E17734F178CB20E35041 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_2 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:290>
		V_0 = (0.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:291>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = L_1->____next;
		V_1 = L_2;
		goto IL_0037;
	}

IL_0019:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:293>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = V_1;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____anEdge;
		NullCheck(L_4);
		int32_t L_5 = L_4->____winding;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:297>
		float L_6 = V_0;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_1;
		float L_8;
		L_8 = MeshUtils_FaceArea_m31485BAB025AE006EFCC80939E541426A7D34E1C(L_7, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_6, L_8));
	}

IL_0030:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:291>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = V_1;
		NullCheck(L_9);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10 = L_9->____next;
		V_1 = L_10;
	}

IL_0037:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:291>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = V_1;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_12 = __this->____mesh;
		NullCheck(L_12);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = L_12->____fHead;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_11) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_13))))
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:299>
		float L_14 = V_0;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:302>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_15 = __this->____mesh;
		NullCheck(L_15);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_16 = L_15->____vHead;
		NullCheck(L_16);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_17 = L_16->____next;
		V_2 = L_17;
		goto IL_0074;
	}

IL_0060:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:304>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_18 = V_2;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_19 = V_2;
		NullCheck(L_19);
		float L_20 = L_19->____t;
		NullCheck(L_18);
		L_18->____t = ((-L_20));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:302>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = V_2;
		NullCheck(L_21);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_22 = L_21->____next;
		V_2 = L_22;
	}

IL_0074:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:302>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_23 = V_2;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_24 = __this->____mesh;
		NullCheck(L_24);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_25 = L_24->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_23) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_25))))
		{
			goto IL_0060;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:306>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_26 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&__this->____tUnit);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_Neg_m56FA56AE9B5B9AC36E12FF1A40FCDA51EFF04139(L_26, NULL);
	}

IL_008d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:308>
		return;
	}
}
// Method Definition Index: 55471
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_mE898E1815D7491F44FA1AF3C242E3CDBDA49455F (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_4 = NULL;
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_5 = NULL;
	float V_6 = 0.0f;
	int32_t G_B6_0 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B5_1 = NULL;
	float G_B7_0 = 0.0f;
	int32_t G_B7_1 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B8_1 = NULL;
	float G_B10_0 = 0.0f;
	int32_t G_B10_1 = 0;
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* G_B10_2 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:312>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = __this->____normal;
		V_0 = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:314>
		V_1 = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:315>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_1 = V_0;
		float L_2 = L_1.___X;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_3 = V_0;
		float L_4 = L_3.___Y;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_5 = V_0;
		float L_6 = L_5.___Z;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:317>
		Tess_ComputeNormal_m8A17094DCC720DDB670B30AAB562FC37ABD307A6(__this, (&V_0), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:318>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_7 = V_0;
		__this->____normal = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:319>
		V_1 = (bool)1;
	}

IL_0041:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:322>
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Vec3_LongAxis_m3A93BE72D5B052A5908805AEF993AC6F296ED4CB((&V_0), NULL);
		V_2 = L_8;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:324>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_9 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&__this->____sUnit);
		int32_t L_10 = V_2;
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(L_9, L_10, (0.0f), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:325>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_11 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&__this->____sUnit);
		int32_t L_12 = V_2;
		float L_13 = __this->___SUnitX;
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(L_11, ((int32_t)(((int32_t)il2cpp_codegen_add(L_12, 1))%3)), L_13, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:326>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_14 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&__this->____sUnit);
		int32_t L_15 = V_2;
		float L_16 = __this->___SUnitY;
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(L_14, ((int32_t)(((int32_t)il2cpp_codegen_add(L_15, 2))%3)), L_16, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:328>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_17 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&__this->____tUnit);
		int32_t L_18 = V_2;
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(L_17, L_18, (0.0f), NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:329>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_19 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&__this->____tUnit);
		int32_t L_20 = V_2;
		int32_t L_21 = V_2;
		float L_22;
		L_22 = Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF((&V_0), L_21, NULL);
		if ((((float)L_22) > ((float)(0.0f))))
		{
			G_B6_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_20, 1))%3));
			G_B6_1 = L_19;
			goto IL_00b9;
		}
		G_B5_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_20, 1))%3));
		G_B5_1 = L_19;
	}
	{
		float L_23 = __this->___SUnitY;
		G_B7_0 = L_23;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_00c0;
	}

IL_00b9:
	{
		float L_24 = __this->___SUnitY;
		G_B7_0 = ((-L_24));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_00c0:
	{
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(G_B7_2, G_B7_1, G_B7_0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:330>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_25 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&__this->____tUnit);
		int32_t L_26 = V_2;
		int32_t L_27 = V_2;
		float L_28;
		L_28 = Vec3_get_Item_mDA9302EE49009B97DA3BCAF460DD45788064B2FF((&V_0), L_27, NULL);
		if ((((float)L_28) > ((float)(0.0f))))
		{
			G_B9_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_26, 2))%3));
			G_B9_1 = L_25;
			goto IL_00e8;
		}
		G_B8_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_26, 2))%3));
		G_B8_1 = L_25;
	}
	{
		float L_29 = __this->___SUnitX;
		G_B10_0 = ((-L_29));
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00ee;
	}

IL_00e8:
	{
		float L_30 = __this->___SUnitX;
		G_B10_0 = L_30;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00ee:
	{
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_set_Item_m5C3021ED23A73035F24A53F6B44E58C2A4ADA7BF(G_B10_2, G_B10_1, G_B10_0, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:333>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_31 = __this->____mesh;
		NullCheck(L_31);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_32 = L_31->____vHead;
		NullCheck(L_32);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_33 = L_32->____next;
		V_4 = L_33;
		goto IL_0142;
	}

IL_0107:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:335>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_34 = V_4;
		NullCheck(L_34);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_35 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_34->____coords);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_36 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&__this->____sUnit);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = V_4;
		NullCheck(L_37);
		float* L_38 = (float*)(&L_37->____s);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		Vec3_Dot_mC49EABB6FB4C33967B4005AAF9F999317CAB6341(L_35, L_36, L_38, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:336>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39 = V_4;
		NullCheck(L_39);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_40 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&L_39->____coords);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521* L_41 = (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521*)(&__this->____tUnit);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42 = V_4;
		NullCheck(L_42);
		float* L_43 = (float*)(&L_42->____t);
		Vec3_Dot_mC49EABB6FB4C33967B4005AAF9F999317CAB6341(L_40, L_41, L_43, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:333>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_44 = V_4;
		NullCheck(L_44);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_45 = L_44->____next;
		V_4 = L_45;
	}

IL_0142:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:333>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_46 = V_4;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_47 = __this->____mesh;
		NullCheck(L_47);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_48 = L_47->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_46) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_48))))
		{
			goto IL_0107;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:338>
		bool L_49 = V_1;
		if (!L_49)
		{
			goto IL_015a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:340>
		Tess_CheckOrientation_mC98D6D1A4D24FC080952E17734F178CB20E35041(__this, NULL);
	}

IL_015a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:344>
		V_3 = (bool)1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:345>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_50 = __this->____mesh;
		NullCheck(L_50);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_51 = L_50->____vHead;
		NullCheck(L_51);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_52 = L_51->____next;
		V_5 = L_52;
		goto IL_0223;
	}

IL_0173:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:347>
		bool L_53 = V_3;
		if (!L_53)
		{
			goto IL_01aa;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:349>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_54 = V_5;
		NullCheck(L_54);
		float L_55 = L_54->____s;
		float L_56 = L_55;
		V_6 = L_56;
		__this->____bmaxX = L_56;
		float L_57 = V_6;
		__this->____bminX = L_57;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:350>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_58 = V_5;
		NullCheck(L_58);
		float L_59 = L_58->____t;
		float L_60 = L_59;
		V_6 = L_60;
		__this->____bmaxY = L_60;
		float L_61 = V_6;
		__this->____bminY = L_61;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:351>
		V_3 = (bool)0;
		goto IL_021a;
	}

IL_01aa:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:355>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62 = V_5;
		NullCheck(L_62);
		float L_63 = L_62->____s;
		float L_64 = __this->____bminX;
		if ((!(((float)L_63) < ((float)L_64))))
		{
			goto IL_01c6;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:355>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_65 = V_5;
		NullCheck(L_65);
		float L_66 = L_65->____s;
		__this->____bminX = L_66;
	}

IL_01c6:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:356>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_67 = V_5;
		NullCheck(L_67);
		float L_68 = L_67->____s;
		float L_69 = __this->____bmaxX;
		if ((!(((float)L_68) > ((float)L_69))))
		{
			goto IL_01e2;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:356>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_70 = V_5;
		NullCheck(L_70);
		float L_71 = L_70->____s;
		__this->____bmaxX = L_71;
	}

IL_01e2:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:357>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_72 = V_5;
		NullCheck(L_72);
		float L_73 = L_72->____t;
		float L_74 = __this->____bminY;
		if ((!(((float)L_73) < ((float)L_74))))
		{
			goto IL_01fe;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:357>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_75 = V_5;
		NullCheck(L_75);
		float L_76 = L_75->____t;
		__this->____bminY = L_76;
	}

IL_01fe:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:358>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_77 = V_5;
		NullCheck(L_77);
		float L_78 = L_77->____t;
		float L_79 = __this->____bmaxY;
		if ((!(((float)L_78) > ((float)L_79))))
		{
			goto IL_021a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:358>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_80 = V_5;
		NullCheck(L_80);
		float L_81 = L_80->____t;
		__this->____bmaxY = L_81;
	}

IL_021a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:345>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_82 = V_5;
		NullCheck(L_82);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_83 = L_82->____next;
		V_5 = L_83;
	}

IL_0223:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:345>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_84 = V_5;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_85 = __this->____mesh;
		NullCheck(L_85);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_86 = L_85->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_84) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_86))))
		{
			goto IL_0173;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:361>
		return;
	}
}
// Method Definition Index: 55472
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_mAFDE0D12109933FBACE160C2FCFAF118FEA1458C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* ___0_face, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:397>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_0 = ___0_face;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____anEdge;
		V_0 = L_1;
		goto IL_0010;
	}

IL_0009:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:400>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = V_0;
		NullCheck(L_2);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3;
		L_3 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_2, NULL);
		V_0 = L_3;
	}

IL_0010:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:400>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = V_0;
		NullCheck(L_4);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_5;
		L_5 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_4, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = V_0;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____Org;
		bool L_8;
		L_8 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_5, L_7, NULL);
		if (L_8)
		{
			goto IL_0009;
		}
	}
	{
		goto IL_002c;
	}

IL_0025:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:401>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_0;
		NullCheck(L_9);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = L_9->____Lnext;
		V_0 = L_10;
	}

IL_002c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:401>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		NullCheck(L_11);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_12 = L_11->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_14;
		L_14 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_13, NULL);
		bool L_15;
		L_15 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_0025;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:403>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_0;
		NullCheck(L_16);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17;
		L_17 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_16, NULL);
		V_1 = L_17;
		goto IL_0121;
	}

IL_004b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:407>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_0;
		NullCheck(L_18);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_19;
		L_19 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_18, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_20 = V_1;
		NullCheck(L_20);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_21 = L_20->____Org;
		bool L_22;
		L_22 = Geom_VertLeq_m7AD55B7D222641B0E0439DBD7A7C40633ADFA5B1(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_0081;
	}

IL_0063:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:415>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_23 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_24 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = V_1;
		NullCheck(L_25);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = L_25->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_27 = V_1;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_28;
		L_28 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_23, L_24, L_26, L_27, NULL);
		NullCheck(L_28);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = L_28->____Sym;
		V_1 = L_29;
	}

IL_0081:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:412>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:413>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_1;
		NullCheck(L_30);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_31 = L_30->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_32 = V_0;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_31) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_32)))
		{
			goto IL_00ba;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_1;
		NullCheck(L_33);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = L_33->____Lnext;
		bool L_35;
		L_35 = Geom_EdgeGoesLeft_m661D83069B722B9BF6031E6A9E5F3AA05F8CC06C(L_34, NULL);
		if (L_35)
		{
			goto IL_0063;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_1;
		NullCheck(L_36);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = L_36->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39;
		L_39 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_38, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_40 = V_1;
		NullCheck(L_40);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_41 = L_40->____Lnext;
		NullCheck(L_41);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_42;
		L_42 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_41, NULL);
		float L_43;
		L_43 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_37, L_39, L_42, NULL);
		if ((((float)L_43) <= ((float)(0.0f))))
		{
			goto IL_0063;
		}
	}

IL_00ba:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:417>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = V_1;
		NullCheck(L_44);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45;
		L_45 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_44, NULL);
		V_1 = L_45;
		goto IL_0121;
	}

IL_00c3:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:425>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_46 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_47 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_48 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_49 = V_0;
		NullCheck(L_49);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_50;
		L_50 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_49, NULL);
		NullCheck(L_46);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_51;
		L_51 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_46, L_47, L_48, L_50, NULL);
		NullCheck(L_51);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_52 = L_51->____Sym;
		V_0 = L_52;
	}

IL_00e1:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:422>
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:423>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_53 = V_1;
		NullCheck(L_53);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_54 = L_53->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_55 = V_0;
		if ((((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_54) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_55)))
		{
			goto IL_011a;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_56 = V_0;
		NullCheck(L_56);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_57;
		L_57 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_56, NULL);
		bool L_58;
		L_58 = Geom_EdgeGoesRight_m20C08A2EA78E8ED7B91CD6CD677F0F52E7A5F50A(L_57, NULL);
		if (L_58)
		{
			goto IL_00c3;
		}
	}
	{
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_59 = V_0;
		NullCheck(L_59);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_60;
		L_60 = Edge_get__Dst_mA227B3EFAA46E4B763457FAE6EB6D09D4F93A81A(L_59, NULL);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_61 = V_0;
		NullCheck(L_61);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62 = L_61->____Org;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_63 = V_0;
		NullCheck(L_63);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_64;
		L_64 = Edge_get__Lprev_m5E5BEB337854302FD2637F0F08AF49E2FCB0769D(L_63, NULL);
		NullCheck(L_64);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_65 = L_64->____Org;
		float L_66;
		L_66 = Geom_EdgeSign_mEDAE86E270ADE796B0A1EBCEA0E30D0F0E13C172(L_60, L_62, L_65, NULL);
		if ((((float)L_66) >= ((float)(0.0f))))
		{
			goto IL_00c3;
		}
	}

IL_011a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:427>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_67 = V_0;
		NullCheck(L_67);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_68 = L_67->____Lnext;
		V_0 = L_68;
	}

IL_0121:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:405>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_69 = V_0;
		NullCheck(L_69);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_70 = L_69->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_71 = V_1;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_70) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_71))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_014d;
	}

IL_012f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:436>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_72 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_73 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_74 = V_1;
		NullCheck(L_74);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_75 = L_74->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_76 = V_1;
		NullCheck(L_72);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_77;
		L_77 = Mesh_Connect_m7DD7CF28CC77EDF75811D5690C3BA36053684BB3(L_72, L_73, L_75, L_76, NULL);
		NullCheck(L_77);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_78 = L_77->____Sym;
		V_1 = L_78;
	}

IL_014d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:434>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_79 = V_1;
		NullCheck(L_79);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_80 = L_79->____Lnext;
		NullCheck(L_80);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_81 = L_80->____Lnext;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_82 = V_0;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_81) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_82))))
		{
			goto IL_012f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:438>
		return;
	}
}
// Method Definition Index: 55473
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mAC4117DACBE4B60A5173D688C6919981B2C18B6D (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:448>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_002b;
	}

IL_0013:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:451>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = V_0;
		NullCheck(L_3);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = L_3->____next;
		V_1 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:452>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:454>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_7 = V_0;
		Tess_TessellateMonoRegion_mAFDE0D12109933FBACE160C2FCFAF118FEA1458C(__this, L_7, NULL);
	}

IL_0029:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:448>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_8 = V_1;
		V_0 = L_8;
	}

IL_002b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:448>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_10 = __this->____mesh;
		NullCheck(L_10);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = L_10->____fHead;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_9) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_11))))
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:457>
		return;
	}
}
// Method Definition Index: 55474
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DiscardExterior_m6A19039A07D59F7331400AC84CCDB45D281B6C12 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:469>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_0036;
	}

IL_0013:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:472>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = V_0;
		NullCheck(L_3);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_4 = L_3->____next;
		V_1 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:473>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside;
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:474>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_7 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_8 = __this->____pool;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = V_0;
		NullCheck(L_7);
		Mesh_ZapFace_m5EA809DDA7500239AB92BEBF71D6F25F90FF326D(L_7, L_8, L_9, NULL);
	}

IL_0034:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:469>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_10 = V_1;
		V_0 = L_10;
	}

IL_0036:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:469>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_11 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_12 = __this->____mesh;
		NullCheck(L_12);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = L_12->____fHead;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_11) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_13))))
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:477>
		return;
	}
}
// Method Definition Index: 55475
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m8A41F77B75A390E8D960C52A6564CF48288AE90A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, int32_t ___0_value, bool ___1_keepOnlyBoundary, const RuntimeMethod* method) 
{
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* G_B4_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* G_B5_1 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:492>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		NullCheck(L_0);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_1 = L_0->____eHead;
		NullCheck(L_1);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_006c;
	}

IL_0013:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:494>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_3 = V_0;
		NullCheck(L_3);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_4 = L_3->____next;
		V_1 = L_4;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:495>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = V_0;
		NullCheck(L_5);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6;
		L_6 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_5, NULL);
		NullCheck(L_6);
		bool L_7 = L_6->____inside;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_8 = V_0;
		NullCheck(L_8);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_9 = L_8->____Lface;
		NullCheck(L_9);
		bool L_10 = L_9->____inside;
		if ((((int32_t)L_7) == ((int32_t)L_10)))
		{
			goto IL_004c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:499>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_0;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_0;
		NullCheck(L_12);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_13 = L_12->____Lface;
		NullCheck(L_13);
		bool L_14 = L_13->____inside;
		if (L_14)
		{
			G_B4_0 = L_11;
			goto IL_0044;
		}
		G_B3_0 = L_11;
	}
	{
		int32_t L_15 = ___0_value;
		G_B5_0 = ((-L_15));
		G_B5_1 = G_B3_0;
		goto IL_0045;
	}

IL_0044:
	{
		int32_t L_16 = ___0_value;
		G_B5_0 = L_16;
		G_B5_1 = G_B4_0;
	}

IL_0045:
	{
		NullCheck(G_B5_1);
		G_B5_1->____winding = G_B5_0;
		goto IL_006a;
	}

IL_004c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:505>
		bool L_17 = ___1_keepOnlyBoundary;
		if (L_17)
		{
			goto IL_0058;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:507>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = V_0;
		NullCheck(L_18);
		L_18->____winding = 0;
		goto IL_006a;
	}

IL_0058:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:511>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_19 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_20 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_0;
		NullCheck(L_19);
		Mesh_Delete_m717DAF7E322AAC738BF2B9B32DB59B5A8726B35A(L_19, L_20, L_21, NULL);
	}

IL_006a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:492>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22 = V_1;
		V_0 = L_22;
	}

IL_006c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:492>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_24 = __this->____mesh;
		NullCheck(L_24);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = L_24->____eHead;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_23) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_25))))
		{
			goto IL_0013;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:516>
		return;
	}
}
// Method Definition Index: 55476
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_m5E5A22A378DB4BFA1F77FF6C42FEEDDD4734F39C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* ___0_edge, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:520>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_0 = ___0_edge;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1;
		L_1 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:521>
		return (-1);
	}

IL_000a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:522>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_2 = ___0_edge;
		NullCheck(L_2);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3;
		L_3 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_2, NULL);
		NullCheck(L_3);
		bool L_4 = L_3->____inside;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:523>
		return (-1);
	}

IL_0019:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:524>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_5 = ___0_edge;
		NullCheck(L_5);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_6;
		L_6 = Edge_get__Rface_m4C02D23A2E94208D4B0EB3AA194040A1410163AE(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7 = L_6->____n;
		return L_7;
	}
}
// Method Definition Index: 55477
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_m86408071771F039677956D25E8E3A62EF95482C5 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, int32_t ___0_elementType, int32_t ___1_polySize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* V_0 = NULL;
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:532>
		V_3 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:533>
		V_4 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:536>
		int32_t L_0 = ___1_polySize;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_000c;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:538>
		___1_polySize = 3;
	}

IL_000c:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:542>
		int32_t L_1 = ___1_polySize;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_0022;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:544>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_2 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_3 = __this->____pool;
		int32_t L_4 = ___1_polySize;
		NullCheck(L_2);
		Mesh_MergeConvexFaces_m5A5B25E0A8953C1CE73FC5C215C93A5B550DDFE3(L_2, L_3, L_4, NULL);
	}

IL_0022:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:548>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_5 = __this->____mesh;
		NullCheck(L_5);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_6 = L_5->____vHead;
		NullCheck(L_6);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_7 = L_6->____next;
		V_0 = L_7;
		goto IL_0043;
	}

IL_0035:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:549>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_8 = V_0;
		NullCheck(L_8);
		L_8->____n = (-1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:548>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_9 = V_0;
		NullCheck(L_9);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_10 = L_9->____next;
		V_0 = L_10;
	}

IL_0043:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:548>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_11 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_12 = __this->____mesh;
		NullCheck(L_12);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_13 = L_12->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_11) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_13))))
		{
			goto IL_0035;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:552>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_14 = __this->____mesh;
		NullCheck(L_14);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_15 = L_14->____fHead;
		NullCheck(L_15);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_16 = L_15->____next;
		V_1 = L_16;
		goto IL_00dd;
	}

IL_0064:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:554>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_17 = V_1;
		NullCheck(L_17);
		L_17->____n = (-1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:555>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = V_1;
		NullCheck(L_18);
		bool L_19 = L_18->____inside;
		if (!L_19)
		{
			goto IL_00d6;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:557>
		bool L_20 = __this->___NoEmptyPolygons;
		if (!L_20)
		{
			goto IL_008d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:559>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_21 = V_1;
		float L_22;
		L_22 = MeshUtils_FaceArea_m31485BAB025AE006EFCC80939E541426A7D34E1C(L_21, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:560>
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_23;
		L_23 = fabsf(L_22);
		if ((((float)L_23) < ((float)(1.40129846E-45f))))
		{
			goto IL_00d6;
		}
	}

IL_008d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:566>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_24 = V_1;
		NullCheck(L_24);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_25 = L_24->____anEdge;
		V_2 = L_25;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:567>
		V_5 = 0;
	}

IL_0097:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:569>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_26 = V_2;
		NullCheck(L_26);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_27 = L_26->____Org;
		V_0 = L_27;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:570>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->____n;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00b5;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:572>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_30 = V_0;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		L_30->____n = L_31;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:573>
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b5:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:575>
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:576>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_34 = V_2;
		NullCheck(L_34);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_35 = L_34->____Lnext;
		V_2 = L_35;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:578>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_37 = V_1;
		NullCheck(L_37);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = L_37->____anEdge;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_36) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_38))))
		{
			goto IL_0097;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:582>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_39 = V_1;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		L_39->____n = L_40;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:583>
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00d6:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:552>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_42 = V_1;
		NullCheck(L_42);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_43 = L_42->____next;
		V_1 = L_43;
	}

IL_00dd:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:552>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_44 = V_1;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_45 = __this->____mesh;
		NullCheck(L_45);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_46 = L_45->____fHead;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_44) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_46))))
		{
			goto IL_0064;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:586>
		int32_t L_47 = V_3;
		__this->____elementCount = L_47;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:587>
		int32_t L_48 = ___0_elementType;
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_00fd;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:588>
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_49, 2));
	}

IL_00fd:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:589>
		int32_t L_50 = V_3;
		int32_t L_51 = ___1_polySize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_50, L_51)));
		__this->____elements = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)L_52);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:591>
		int32_t L_53 = V_4;
		__this->____vertexCount = L_53;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:592>
		int32_t L_54 = __this->____vertexCount;
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_55 = (ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)SZArrayNew(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B_il2cpp_TypeInfo_var, (uint32_t)L_54);
		__this->____vertices = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)L_55);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:595>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_56 = __this->____mesh;
		NullCheck(L_56);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_57 = L_56->____vHead;
		NullCheck(L_57);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_58 = L_57->____next;
		V_0 = L_58;
		goto IL_017f;
	}

IL_0137:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:597>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60 = L_59->____n;
		if ((((int32_t)L_60) == ((int32_t)(-1))))
		{
			goto IL_0178;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:600>
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_61 = __this->____vertices;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_62 = V_0;
		NullCheck(L_62);
		int32_t L_63 = L_62->____n;
		NullCheck(L_61);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_64 = V_0;
		NullCheck(L_64);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_65 = L_64->____coords;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___Position = L_65;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:601>
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_66 = __this->____vertices;
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = L_67->____n;
		NullCheck(L_66);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_69 = V_0;
		NullCheck(L_69);
		RuntimeObject* L_70 = L_69->____data;
		((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___Data = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___Data), (void*)L_70);
	}

IL_0178:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:595>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_71 = V_0;
		NullCheck(L_71);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_72 = L_71->____next;
		V_0 = L_72;
	}

IL_017f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:595>
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_73 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_74 = __this->____mesh;
		NullCheck(L_74);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_75 = L_74->____vHead;
		if ((!(((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_73) == ((RuntimeObject*)(Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C*)L_75))))
		{
			goto IL_0137;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:606>
		V_7 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:607>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_76 = __this->____mesh;
		NullCheck(L_76);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_77 = L_76->____fHead;
		NullCheck(L_77);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_78 = L_77->____next;
		V_1 = L_78;
		goto IL_0280;
	}

IL_01a6:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:609>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_79 = V_1;
		NullCheck(L_79);
		bool L_80 = L_79->____inside;
		if (!L_80)
		{
			goto IL_0279;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:611>
		bool L_81 = __this->___NoEmptyPolygons;
		if (!L_81)
		{
			goto IL_01ce;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:613>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_82 = V_1;
		float L_83;
		L_83 = MeshUtils_FaceArea_m31485BAB025AE006EFCC80939E541426A7D34E1C(L_82, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:614>
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_84;
		L_84 = fabsf(L_83);
		if ((((float)L_84) < ((float)(1.40129846E-45f))))
		{
			goto IL_0279;
		}
	}

IL_01ce:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:621>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_85 = V_1;
		NullCheck(L_85);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_86 = L_85->____anEdge;
		V_2 = L_86;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:622>
		V_5 = 0;
	}

IL_01d8:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:624>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_87 = V_2;
		NullCheck(L_87);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_88 = L_87->____Org;
		V_0 = L_88;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:625>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____elements;
		int32_t L_90 = V_7;
		int32_t L_91 = L_90;
		V_7 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_92 = V_0;
		NullCheck(L_92);
		int32_t L_93 = L_92->____n;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (int32_t)L_93);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:626>
		int32_t L_94 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:627>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_95 = V_2;
		NullCheck(L_95);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_96 = L_95->____Lnext;
		V_2 = L_96;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:628>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_97 = V_2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_98 = V_1;
		NullCheck(L_98);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_99 = L_98->____anEdge;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_97) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_99))))
		{
			goto IL_01d8;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:630>
		int32_t L_100 = V_5;
		V_6 = L_100;
		goto IL_0224;
	}

IL_020f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:632>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = __this->____elements;
		int32_t L_102 = V_7;
		int32_t L_103 = L_102;
		V_7 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (int32_t)(-1));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:630>
		int32_t L_104 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0224:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:630>
		int32_t L_105 = V_6;
		int32_t L_106 = ___1_polySize;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_020f;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:636>
		int32_t L_107 = ___0_elementType;
		if ((!(((uint32_t)L_107) == ((uint32_t)1))))
		{
			goto IL_0279;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:638>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_108 = V_1;
		NullCheck(L_108);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_109 = L_108->____anEdge;
		V_2 = L_109;
	}

IL_0234:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:641>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____elements;
		int32_t L_111 = V_7;
		int32_t L_112 = L_111;
		V_7 = ((int32_t)il2cpp_codegen_add(L_112, 1));
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_113 = V_2;
		int32_t L_114;
		L_114 = Tess_GetNeighbourFace_m5E5A22A378DB4BFA1F77FF6C42FEEDDD4734F39C(__this, L_113, NULL);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (int32_t)L_114);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:642>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_115 = V_2;
		NullCheck(L_115);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_116 = L_115->____Lnext;
		V_2 = L_116;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:643>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_117 = V_2;
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_118 = V_1;
		NullCheck(L_118);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_119 = L_118->____anEdge;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_117) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_119))))
		{
			goto IL_0234;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:645>
		int32_t L_120 = V_5;
		V_6 = L_120;
		goto IL_0274;
	}

IL_025f:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:647>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = __this->____elements;
		int32_t L_122 = V_7;
		int32_t L_123 = L_122;
		V_7 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (int32_t)(-1));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:645>
		int32_t L_124 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_0274:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:645>
		int32_t L_125 = V_6;
		int32_t L_126 = ___1_polySize;
		if ((((int32_t)L_125) < ((int32_t)L_126)))
		{
			goto IL_025f;
		}
	}

IL_0279:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:607>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_127 = V_1;
		NullCheck(L_127);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_128 = L_127->____next;
		V_1 = L_128;
	}

IL_0280:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:607>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_129 = V_1;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_130 = __this->____mesh;
		NullCheck(L_130);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_131 = L_130->____fHead;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_129) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_131))))
		{
			goto IL_01a6;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:651>
		return;
	}
}
// Method Definition Index: 55478
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_m8E950D86EC60346E478BD58B08B486430D5D4461 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* V_0 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:657>
		V_3 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:658>
		V_4 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:660>
		__this->____vertexCount = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:661>
		__this->____elementCount = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:663>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		NullCheck(L_0);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_1 = L_0->____fHead;
		NullCheck(L_1);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_2 = L_1->____next;
		V_0 = L_2;
		goto IL_0065;
	}

IL_0026:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:665>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->____inside;
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:667>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_5 = V_0;
		NullCheck(L_5);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_6 = L_5->____anEdge;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_7 = L_6;
		V_1 = L_7;
		V_2 = L_7;
	}

IL_0037:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:670>
		int32_t L_8 = __this->____vertexCount;
		__this->____vertexCount = ((int32_t)il2cpp_codegen_add(L_8, 1));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:671>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_9 = V_1;
		NullCheck(L_9);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = L_9->____Lnext;
		V_1 = L_10;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:673>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_11 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_12 = V_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_11) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_12))))
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:675>
		int32_t L_13 = __this->____elementCount;
		__this->____elementCount = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:663>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_14 = V_0;
		NullCheck(L_14);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_15 = L_14->____next;
		V_0 = L_15;
	}

IL_0065:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:663>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_16 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_17 = __this->____mesh;
		NullCheck(L_17);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_18 = L_17->____fHead;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_16) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_18))))
		{
			goto IL_0026;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:678>
		int32_t L_19 = __this->____elementCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_19, 2)));
		__this->____elements = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)L_20);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:679>
		int32_t L_21 = __this->____vertexCount;
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_22 = (ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)SZArrayNew(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->____vertices = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)L_22);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:681>
		V_5 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:682>
		V_6 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:684>
		V_3 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:686>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_23 = __this->____mesh;
		NullCheck(L_23);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_24 = L_23->____fHead;
		NullCheck(L_24);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_25 = L_24->____next;
		V_0 = L_25;
		goto IL_0148;
	}

IL_00b5:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:688>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->____inside;
		if (!L_27)
		{
			goto IL_0141;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:690>
		V_4 = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:691>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_28 = V_0;
		NullCheck(L_28);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_29 = L_28->____anEdge;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = L_29;
		V_1 = L_30;
		V_2 = L_30;
	}

IL_00cc:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:693>
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_31 = __this->____vertices;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_33 = V_1;
		NullCheck(L_33);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_34 = L_33->____Org;
		NullCheck(L_34);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_35 = L_34->____coords;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___Position = L_35;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:694>
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_36 = __this->____vertices;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_39 = L_38->____Org;
		NullCheck(L_39);
		RuntimeObject* L_40 = L_39->____data;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___Data = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___Data), (void*)L_40);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:695>
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:696>
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:697>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_43 = V_1;
		NullCheck(L_43);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = L_43->____Lnext;
		V_1 = L_44;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:698>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_45 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_46 = V_2;
		if ((!(((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_45) == ((RuntimeObject*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)L_46))))
		{
			goto IL_00cc;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:700>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = __this->____elements;
		int32_t L_48 = V_6;
		int32_t L_49 = L_48;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_3;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (int32_t)L_50);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:701>
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = __this->____elements;
		int32_t L_52 = V_6;
		int32_t L_53 = L_52;
		V_6 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_4;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_54);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:703>
		int32_t L_55 = V_3;
		int32_t L_56 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_55, L_56));
	}

IL_0141:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:686>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_57 = V_0;
		NullCheck(L_57);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_58 = L_57->____next;
		V_0 = L_58;
	}

IL_0148:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:686>
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_59 = V_0;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_60 = __this->____mesh;
		NullCheck(L_60);
		Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C* L_61 = L_60->____fHead;
		if ((!(((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_59) == ((RuntimeObject*)(Face_t290638C5E0E34941801183E7C6C5013E30EC1A7C*)L_61))))
		{
			goto IL_00b5;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:705>
		return;
	}
}
// Method Definition Index: 55479
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m805061A3ABFFED5CEEB369534F14C83195ADEB6C (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, RuntimeObject* ___0_vertices, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 V_2;
	memset((&V_2), 0, sizeof(V_2));
	ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:709>
		V_0 = (0.0f);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:711>
		V_1 = 0;
		goto IL_005b;
	}

IL_000a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:713>
		RuntimeObject* L_0 = ___0_vertices;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_2;
		L_2 = InterfaceFuncInvoker1< ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503, int32_t >::Invoke(0, IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:714>
		RuntimeObject* L_3 = ___0_vertices;
		int32_t L_4 = V_1;
		RuntimeObject* L_5 = ___0_vertices;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_7;
		L_7 = InterfaceFuncInvoker1< ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503, int32_t >::Invoke(0, IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var, L_3, ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))%L_6)));
		V_3 = L_7;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:716>
		float L_8 = V_0;
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_9 = V_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_10 = L_9.___Position;
		float L_11 = L_10.___X;
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_12 = V_3;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_13 = L_12.___Position;
		float L_14 = L_13.___Y;
		V_0 = ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_11, L_14))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:717>
		float L_15 = V_0;
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_16 = V_2;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_17 = L_16.___Position;
		float L_18 = L_17.___Y;
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_19 = V_3;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_20 = L_19.___Position;
		float L_21 = L_20.___X;
		V_0 = ((float)il2cpp_codegen_subtract(L_15, ((float)il2cpp_codegen_multiply(L_18, L_21))));
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:711>
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005b:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:711>
		int32_t L_23 = V_1;
		RuntimeObject* L_24 = ___0_vertices;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var, L_24);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:720>
		float L_26 = V_0;
		return ((float)il2cpp_codegen_multiply((0.5f), L_26));
	}
}
// Method Definition Index: 55480
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_m167A3645E455198C686B8DAC398BD6E999A6B13E (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:735>
		ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B* L_0 = ___0_vertices;
		int32_t L_1 = ___1_forceOrientation;
		Tess_AddContourInternal_m27D31BFFBB09EE11725A33423A976EEEF4FD911A(__this, (RuntimeObject*)L_0, L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:736>
		return;
	}
}
// Method Definition Index: 55481
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_m4A4D0117021E8CB0E5194F570D6A8E27169064E0 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, RuntimeObject* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:750>
		RuntimeObject* L_0 = ___0_vertices;
		int32_t L_1 = ___1_forceOrientation;
		Tess_AddContourInternal_m27D31BFFBB09EE11725A33423A976EEEF4FD911A(__this, L_0, L_1, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:751>
		return;
	}
}
// Method Definition Index: 55482
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_m27D31BFFBB09EE11725A33423A976EEEF4FD911A (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, RuntimeObject* ___0_vertices, int32_t ___1_forceOrientation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m230FE9743ED76CE16996600D2AD1BD86FCCD41FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B17_0 = 0;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:755>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_0 = __this->____mesh;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:757>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_1 = __this->____pool;
		NullCheck(L_1);
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_2;
		L_2 = GenericVirtualFuncInvoker0< Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* >::Invoke(IPool_Get_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m230FE9743ED76CE16996600D2AD1BD86FCCD41FF_RuntimeMethod_var, L_1);
		__this->____mesh = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh), (void*)L_2);
	}

IL_0019:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:760>
		V_0 = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:761>
		int32_t L_3 = ___1_forceOrientation;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:763>
		RuntimeObject* L_4 = ___0_vertices;
		float L_5;
		L_5 = Tess_SignedArea_m805061A3ABFFED5CEEB369534F14C83195ADEB6C(__this, L_4, NULL);
		V_2 = L_5;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:764>
		int32_t L_6 = ___1_forceOrientation;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		float L_7 = V_2;
		if ((((float)L_7) < ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}

IL_0032:
	{
		int32_t L_8 = ___1_forceOrientation;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0040;
		}
	}
	{
		float L_9 = V_2;
		G_B9_0 = ((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		goto IL_0044;
	}

IL_0040:
	{
		G_B9_0 = 0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B9_0 = 1;
	}

IL_0044:
	{
		V_0 = (bool)G_B9_0;
	}

IL_0045:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:767>
		V_1 = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:768>
		V_3 = 0;
		goto IL_00f0;
	}

IL_004e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:770>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_10 = V_1;
		if (L_10)
		{
			goto IL_007d;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:772>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_11 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_12 = __this->____pool;
		NullCheck(L_11);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_13;
		L_13 = Mesh_MakeEdge_m3D0A00C5539506BD80B3A810DC16DBCAA9BB061C(L_11, L_12, NULL);
		V_1 = L_13;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:773>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_14 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_15 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_16 = V_1;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_17 = V_1;
		NullCheck(L_17);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_18 = L_17->____Sym;
		NullCheck(L_14);
		Mesh_Splice_m04CA771D3228C7CD25330AC0B7FCE6BBF372AD39(L_14, L_15, L_16, L_18, NULL);
		goto IL_0097;
	}

IL_007d:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:779>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_19 = __this->____mesh;
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_20 = __this->____pool;
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_21 = V_1;
		NullCheck(L_19);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_22;
		L_22 = Mesh_SplitEdge_m7831A80B64687080371B14FB7DAE7A83A7B17058(L_19, L_20, L_21, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:780>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_23 = V_1;
		NullCheck(L_23);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_24 = L_23->____Lnext;
		V_1 = L_24;
	}

IL_0097:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:783>
		bool L_25 = V_0;
		if (L_25)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_26 = V_3;
		G_B17_0 = L_26;
		goto IL_00a7;
	}

IL_009d:
	{
		RuntimeObject* L_27 = ___0_vertices;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var, L_27);
		int32_t L_29 = V_3;
		G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_28, 1)), L_29));
	}

IL_00a7:
	{
		V_4 = G_B17_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:785>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_30 = V_1;
		NullCheck(L_30);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_31 = L_30->____Org;
		RuntimeObject* L_32 = ___0_vertices;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_34;
		L_34 = InterfaceFuncInvoker1< ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503, int32_t >::Invoke(0, IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var, L_32, L_33);
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_35 = L_34.___Position;
		NullCheck(L_31);
		L_31->____coords = L_35;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:786>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_36 = V_1;
		NullCheck(L_36);
		Vertex_tB6940FE71D2FBC98B7D7B06B328C411B07AC242C* L_37 = L_36->____Org;
		RuntimeObject* L_38 = ___0_vertices;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503 L_40;
		L_40 = InterfaceFuncInvoker1< ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503, int32_t >::Invoke(0, IList_1_t5CE5C2EA154320CCAAACCB1A52B5D83AF2943E70_il2cpp_TypeInfo_var, L_38, L_39);
		RuntimeObject* L_41 = L_40.___Data;
		NullCheck(L_37);
		L_37->____data = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____data), (void*)L_41);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:792>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_42 = V_1;
		NullCheck(L_42);
		L_42->____winding = 1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:793>
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_43 = V_1;
		NullCheck(L_43);
		Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861* L_44 = L_43->____Sym;
		NullCheck(L_44);
		L_44->____winding = (-1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:768>
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00f0:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:768>
		int32_t L_46 = V_3;
		RuntimeObject* L_47 = ___0_vertices;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(0, ICollection_1_t0D6A75627F0E477B35D74221365E6BDE87E61245_il2cpp_TypeInfo_var, L_47);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_004e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:795>
		return;
	}
}
// Method Definition Index: 55483
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_Tessellate_m09035B8F3A60F908AD64CC78FEE995442B38D156 (Tess_t700727978B9FD01B7C28BD8B816E54BDB8B1C677* __this, int32_t ___0_windingRule, int32_t ___1_elementType, int32_t ___2_polySize, CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* ___3_combineCallback, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___4_normal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m1415C029D364C624A0EB24110DEAE23585476F65_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:808>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = ___4_normal;
		__this->____normal = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:809>
		__this->____vertices = (ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices), (void*)(ContourVertexU5BU5D_t66AA407C9C5B22C89B0B9DE741F0AE505105AD5B*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:810>
		__this->____elements = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:812>
		int32_t L_1 = ___0_windingRule;
		__this->____windingRule = L_1;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:813>
		CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* L_2 = ___3_combineCallback;
		__this->____combineCallback = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____combineCallback), (void*)L_2);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:815>
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_3 = __this->____mesh;
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:817>
		return;
	}

IL_002e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:822>
		Tess_ProjectPolygon_mE898E1815D7491F44FA1AF3C242E3CDBDA49455F(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:829>
		Tess_ComputeInterior_mA51153C7B94F34C4161B6060D67385A801DDACE8(__this, NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:834>
		int32_t L_4 = ___1_elementType;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:836>
		Tess_SetWindingNumber_m8A41F77B75A390E8D960C52A6564CF48288AE90A(__this, 1, (bool)1, NULL);
		goto IL_004e;
	}

IL_0048:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:840>
		Tess_TessellateInterior_mAC4117DACBE4B60A5173D688C6919981B2C18B6D(__this, NULL);
	}

IL_004e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:845>
		int32_t L_5 = ___1_elementType;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:847>
		Tess_OutputContours_m8E950D86EC60346E478BD58B08B486430D5D4461(__this, NULL);
		goto IL_0062;
	}

IL_005a:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:851>
		int32_t L_6 = ___1_elementType;
		int32_t L_7 = ___2_polySize;
		Tess_OutputPolymesh_m86408071771F039677956D25E8E3A62EF95482C5(__this, L_6, L_7, NULL);
	}

IL_0062:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:854>
		IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* L_8 = __this->____pool;
		Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* L_9 = __this->____mesh;
		NullCheck(L_8);
		GenericVirtualActionInvoker1< Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E* >::Invoke(IPool_Return_TisMesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E_m1415C029D364C624A0EB24110DEAE23585476F65_RuntimeMethod_var, L_8, L_9);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:855>
		__this->____mesh = (Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh), (void*)(Mesh_t905F2FAAD1DC1CADC95834F52C2A77186E5EB82E*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:856>
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
// Method Definition Index: 55484
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Init_mFB460BD793FDF5BCAAE75A1BF2F3D8B21C497C97 (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:56>
		return;
	}
}
// Method Definition Index: 55485
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Reset_m3435EEFA4A447A6A181FE25104F685072403823B (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* __this, IPool_t52EE8878EA25F6F8C4E5FE477458EF561AAE22B7* ___0_pool, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:60>
		__this->____eUp = (Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eUp), (void*)(Edge_t27D7F70BF3E34540FA8ADD6B9757589B73D84861*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:61>
		__this->____nodeUp = (Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodeUp), (void*)(Node_tE92F355E5B0612BB754A3082BE6F9E5D90242C1D*)NULL);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:62>
		__this->____windingNumber = 0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:63>
		__this->____inside = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:64>
		__this->____sentinel = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:65>
		__this->____dirty = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:66>
		__this->____fixUpperEdge = (bool)0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Sweep.cs:67>
		return;
	}
}
// Method Definition Index: 55486
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion__ctor_m09E7360A72243F807CC57FD938B6ED62685793D9 (ActiveRegion_tDDB8CF9E842CFCBBB0122DE4A21EB0DF532C16DE* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_pinvoke(const ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503& unmarshaled, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_pinvoke& marshaled)
{
	marshaled.___Position = unmarshaled.___Position;
	if (unmarshaled.___Data != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data))
		{
			marshaled.___Data = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Data));
			(marshaled.___Data)->AddRef();
		}
		else
		{
			marshaled.___Data = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Data);
		}
	}
	else
	{
		marshaled.___Data = NULL;
	}
}
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_pinvoke_back(const ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_pinvoke& marshaled, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 unmarshaledPosition_temp_0;
	memset((&unmarshaledPosition_temp_0), 0, sizeof(unmarshaledPosition_temp_0));
	unmarshaledPosition_temp_0 = marshaled.___Position;
	unmarshaled.___Position = unmarshaledPosition_temp_0;
	if (marshaled.___Data != NULL)
	{
		unmarshaled.___Data = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Data), Il2CppIUnknown::IID, marshaled.___Data);
		}
	}
	else
	{
		unmarshaled.___Data = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data), (void*)NULL);
	}
}
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_pinvoke_cleanup(ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_pinvoke& marshaled)
{
	if (marshaled.___Data != NULL)
	{
		(marshaled.___Data)->Release();
		marshaled.___Data = NULL;
	}
}
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_com(const ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503& unmarshaled, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_com& marshaled)
{
	marshaled.___Position = unmarshaled.___Position;
	if (unmarshaled.___Data != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data))
		{
			marshaled.___Data = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___Data));
			(marshaled.___Data)->AddRef();
		}
		else
		{
			marshaled.___Data = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___Data);
		}
	}
	else
	{
		marshaled.___Data = NULL;
	}
}
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_com_back(const ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_com& marshaled, ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 unmarshaledPosition_temp_0;
	memset((&unmarshaledPosition_temp_0), 0, sizeof(unmarshaledPosition_temp_0));
	unmarshaledPosition_temp_0 = marshaled.___Position;
	unmarshaled.___Position = unmarshaledPosition_temp_0;
	if (marshaled.___Data != NULL)
	{
		unmarshaled.___Data = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Data, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___Data))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___Data), Il2CppIUnknown::IID, marshaled.___Data);
		}
	}
	else
	{
		unmarshaled.___Data = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Data), (void*)NULL);
	}
}
IL2CPP_EXTERN_C void ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshal_com_cleanup(ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503_marshaled_com& marshaled)
{
	if (marshaled.___Data != NULL)
	{
		(marshaled.___Data)->Release();
		marshaled.___Data = NULL;
	}
}
// Method Definition Index: 55487
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mEFCCBED4649918C6C12249A56FE50E626112B614 (ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___0_position, RuntimeObject* ___1_data, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:98>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = ___0_position;
		__this->___Position = L_0;
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:99>
		RuntimeObject* L_1 = ___1_data;
		__this->___Data = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data), (void*)L_1);
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:100>
		return;
	}
}
IL2CPP_EXTERN_C  void ContourVertex__ctor_mEFCCBED4649918C6C12249A56FE50E626112B614_AdjustorThunk (RuntimeObject* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___0_position, RuntimeObject* ___1_data, const RuntimeMethod* method)
{
	ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503*>(__this + _offset);
	ContourVertex__ctor_mEFCCBED4649918C6C12249A56FE50E626112B614(_thisAdjusted, ___0_position, ___1_data, method);
}
// Method Definition Index: 55488
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m03B1E67F4BB4464247EA630A997CB7A895A363C8 (ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Tess.cs:104>
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_0 = __this->___Position;
		Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var, &L_1);
		RuntimeObject* L_3 = __this->___Data;
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* ContourVertex_ToString_m03B1E67F4BB4464247EA630A997CB7A895A363C8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ContourVertex_t10C43880D9303ACDB86D664BEF0D736F7B872503*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ContourVertex_ToString_m03B1E67F4BB4464247EA630A997CB7A895A363C8(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_Multicast(CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* currentDelegate = reinterpret_cast<CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_position, ___1_data, ___2_weights, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
	return retVal;
}
RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_OpenInst(CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_position, ___1_data, ___2_weights, method);
}
RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_OpenStatic(CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr)(___0_position, ___1_data, ___2_weights, method);
}
// Method Definition Index: 55489
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineCallback__ctor_m62215A5A14C79B8EBB783889AEF5AD56ED685CF1 (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_OpenStatic;
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
	__this->___extra_arg = (intptr_t)&CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_Multicast;
}
// Method Definition Index: 55490
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95 (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, ___1_data, ___2_weights, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 55491
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_BeginInvoke_m578CCFBB0B8DADF667286A95EF57E83CD2B495C5 (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521_il2cpp_TypeInfo_var, &___0_position);
	__d_args[1] = ___1_data;
	__d_args[2] = ___2_weights;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// Method Definition Index: 55492
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_EndInvoke_m75155E33B425B7F964FE0FB38131E909E252024C (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return (RuntimeObject*)__result;
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
// Method Definition Index: 55490
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_Invoke_mC0C7CF66B5A9D41445A86140F502BB9E006A1D95_inline (CombineCallback_tB92D15161C412AB7F350AFCD2200E574DDCF22D9* __this, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521 ___0_position, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_data, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___2_weights, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, Vec3_t14CFF38B38616D3D276BC18427ADBB4BA5D5E521, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_position, ___1_data, ___2_weights, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 55304
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Node_get_Key_mE91C7EABEFDECA9C2C21D7214FBF02A903D24F7B_gshared_inline (Node_tBAF37CFC01B6D2E92066A65879BC618366C4B3DB* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Packages/Toolkit/Runtime/LibTessDotNet/Dict.cs:47>
		RuntimeObject* L_0 = __this->____key;
		return L_0;
	}
}
