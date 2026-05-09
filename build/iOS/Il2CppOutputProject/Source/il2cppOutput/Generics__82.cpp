#include "pch-cpp.hpp"





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
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E;
struct Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D;
struct ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30;
struct ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A;
struct ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6;
struct SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B;
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B;
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B;
struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F;
struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80;
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A;
struct ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2;
struct CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5;
struct CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB;
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9;
struct GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376;
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705;
struct BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86;
struct BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct AreaNode_tB9A4250EFEA8C60BEDFFDA3E78F20EA6DE77DA7D;

IL2CPP_EXTERN_C RuntimeClass* BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB46164953228904843938099AF66650313FEE5;
IL2CPP_EXTERN_C String_t* _stringLiteral358A3678217D3CE720F0C294149170B975E33338;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteralA48D25CCEBF3743275270A3FC7FFBE993AAE3594;
IL2CPP_EXTERN_C String_t* _stringLiteralEA6EE064E726E2CCE5154639543C273DACAB3448;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
IL2CPP_EXTERN_C String_t* _stringLiteralF0850A1FC3AAD228B4E8851CFDD31FD24902CF60;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43;
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427;
struct ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F;
struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80;
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A;
struct ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2;
struct CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5;
struct CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB;
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9;
struct GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_t5DEA403BAFDC5AC2F35C8826395BF35F76EAE720  : public RuntimeObject
{
};
struct EmptyArray_1_t910BE047C1A6E9E334831BFBF9773D3C3852ED95  : public RuntimeObject
{
};
struct EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2  : public RuntimeObject
{
};
struct EmptyArray_1_t200AEA0094BFCA9414824E328EC31EAB52F2142C  : public RuntimeObject
{
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99  : public RuntimeObject
{
};
struct EmptyArray_1_t42D5099F7FCE2834141926DB372392B8C75ADBEC  : public RuntimeObject
{
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C  : public RuntimeObject
{
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1  : public RuntimeObject
{
};
struct EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9  : public RuntimeObject
{
};
struct EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498  : public RuntimeObject
{
};
struct EmptyArray_1_tF01C5B6CDD56CDA122E6B85402777F31EE92A685  : public RuntimeObject
{
};
struct EmptyArray_1_tB029523A05EA2FFE1EB90490D66A384F7A0D4574  : public RuntimeObject
{
};
struct EmptyArray_1_t0605DD263F295CE065C4B24BC0263FB5067617EC  : public RuntimeObject
{
};
struct EmptyArray_1_t27401338DAB1F4C8F9B8E695AB18ABBBF6573E17  : public RuntimeObject
{
};
struct EmptyArray_1_t640F34C5C1351444FCE089711FFEF74161372D64  : public RuntimeObject
{
};
struct EmptyArray_1_t9D02D6D1FF8E81441083A08AA0F8970E511F0900  : public RuntimeObject
{
};
struct EmptyArray_1_t256B6266763D5FE975C2ED0C86C1B3BF93BA56C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___buckets;
	SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* ___slots;
	int32_t ___count;
	int32_t ___freeList;
	RuntimeObject* ___comparer;
};
struct SpanDebugView_1_t6B249F4737457563D0548242B2E940C385BF66E5  : public RuntimeObject
{
};
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2  : public RuntimeObject
{
	bool ___U3CdisposedU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7  : public RuntimeObject
{
	int32_t ___U3CmaxAtlasSizeU3Ek__BackingField;
	int32_t ___U3CmaxImageWidthU3Ek__BackingField;
	int32_t ___U3CmaxImageHeightU3Ek__BackingField;
	int32_t ___U3CvirtualWidthU3Ek__BackingField;
	int32_t ___U3CvirtualHeightU3Ek__BackingField;
	int32_t ___U3CphysicalWidthU3Ek__BackingField;
	int32_t ___U3CphysicalHeightU3Ek__BackingField;
	AreaNode_tB9A4250EFEA8C60BEDFFDA3E78F20EA6DE77DA7D* ___m_FirstUnpartitionedArea;
	RowU5BU5D_t325BC67027D8D4C3AB8E0375B85F72BEB5ADA376* ___m_OpenRows;
	int32_t ___m_1SidePadding;
	int32_t ___m_2SidePadding;
	bool ___U3CdisposedU3Ek__BackingField;
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
struct EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A  : public EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9
{
};
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	bool ___hasValue;
	int32_t ___value;
};
struct SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0 
{
	void* ____buffer;
};
struct SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08 
{
	void* ____buffer;
};
struct Slot_t3D6F59B8061C33D6ADE1DDB6081830EA9663C334 
{
	int32_t ___hashCode;
	Il2CppChar ___value;
	int32_t ___next;
};
struct Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___value;
};
struct Slot_tE40ADD3E3758BFA1DB21D9E728F98EBFEF2AE27E 
{
	int32_t ___hashCode;
	RuntimeObject* ___value;
	int32_t ___next;
};
struct Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___value;
};
typedef Il2CppFullySharedGenericStruct Slot_tEC146EEEF7022C6542EBF082D658446682962BFD;
typedef Il2CppFullySharedGenericStruct Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B;
typedef Il2CppFullySharedGenericStruct Slot_t15722483BF8D3D9AE95C0F301EAB5E41F7E1E2B9;
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	BatchDrawCommandIndirect_t06F3B5DC4AF7D4B115CEECDB0A1E4E92065BC705* ___indirectDrawCommands;
	BatchDrawCommandProcedural_t5780BD7745B5772AA54BA6E6021292F6A6553B86* ___proceduralDrawCommands;
	BatchDrawCommandProceduralIndirect_t8417CDF3495237CD8C9204B3DADC6BA4A1488B50* ___proceduralIndirectDrawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___drawCommandPickingEntityIds;
	int32_t ___drawCommandCount;
	int32_t ___indirectDrawCommandCount;
	int32_t ___proceduralDrawCommandCount;
	int32_t ___proceduralIndirectDrawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	float ___m_Weight0;
	float ___m_Weight1;
	float ___m_Weight2;
	float ___m_Weight3;
	int32_t ___m_BoneIndex0;
	int32_t ___m_BoneIndex1;
	int32_t ___m_BoneIndex2;
	int32_t ___m_BoneIndex3;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 
{
	int32_t ___firstIndex;
	int32_t ___indexCount;
	int32_t ___minIndexVal;
	int32_t ___vertsReferenced;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			int32_t ___m_Data;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[4];
	};
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
struct GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 
{
	int32_t ___levelCount;
	float ___lodSlope;
	float ___lodBias;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 
{
	int32_t ___Index;
	int32_t ___Version;
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
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C 
{
	intptr_t ____value;
};
struct ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 
{
	intptr_t ____value;
};
struct ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 
{
	intptr_t ____value;
};
struct ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 
{
	intptr_t ____value;
};
struct ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 
{
	intptr_t ____value;
};
struct ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B 
{
	intptr_t ____value;
};
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 
{
	intptr_t ____value;
};
struct ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 
{
	intptr_t ____value;
};
struct ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE 
{
	intptr_t ____value;
};
struct ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 
{
	intptr_t ____value;
};
struct ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB 
{
	intptr_t ____value;
};
struct ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 
{
	intptr_t ____value;
};
struct ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 
{
	intptr_t ____value;
};
struct ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF 
{
	intptr_t ____value;
};
struct ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6  : public EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A
{
};
struct SliderKey_t43E96838E1E854487D7A7516094E7659C6054D1C 
{
	int32_t ___value__;
};
struct SliderKey_t6D2D477078D3F87B046A5089EC099225FE23C471 
{
	int32_t ___value__;
};
struct SliderKey_t50E90577048B339A992940C01D208901E524828B 
{
	int32_t ___value__;
};
struct Slot_t99E1DAD9EC10BC2CA3AD0951B37A54FB9B0C1992 
{
	int32_t ___hashCode;
	int32_t ___next;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___value;
};
struct Slot_t01BC837CECD5F009823F5389DCECD4E29B56411B 
{
	LayoutHandle_tCFE060947B4EDC8F11BF5B480181493FB578BEB6 ___Item;
	int32_t ___SequenceNumber;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E 
{
	intptr_t ___m_TextElementInfosPtr;
	int32_t ___m_TextElementCount;
	int32_t ___textAssetId;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct CollisionPairHeaderFlags_tBA40F470BC1564B84C3093CEA5761804FA0650C3 
{
	uint16_t ___value__;
};
struct ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___addFlags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityPage;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___textCoreSettingsPage;
	int32_t ___usesTextCoreSettings;
	float ___textureId;
	int32_t ___gradientSettingsIndexOffset;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
	int32_t ___flipIndices;
	int32_t ___forceZ;
	float ___positionZ;
	int32_t ___remapUVs;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___atlasRect;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___layoutSize;
};
struct CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
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
struct FilterMode_t4AD57F1A3FE272D650E0E688BA044AE872BD2A34 
{
	int32_t ___value__;
};
struct HideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
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
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t29FEC1E8134CF98858AC01DEE01F4B20811F583F 
{
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_t34BA04A4BFD729569345665C169CDBF1E713EEA3 
{
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE ____pointer;
	int32_t ____length;
};
struct Slot_t0A95045068CA69D35855DB49026245B2D7F2E059 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C ____pointer;
	int32_t ____length;
};
struct Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 ____pointer;
	int32_t ____length;
};
struct Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 ____pointer;
	int32_t ____length;
};
struct Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F 
{
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 ____pointer;
	int32_t ____length;
};
struct Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 ____pointer;
	int32_t ____length;
};
struct Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 ____pointer;
	int32_t ____length;
};
struct Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer;
	int32_t ____length;
};
struct Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE ____pointer;
	int32_t ____length;
};
struct Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 ____pointer;
	int32_t ____length;
};
struct Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB ____pointer;
	int32_t ____length;
};
struct Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 ____pointer;
	int32_t ____length;
};
struct Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 ____pointer;
	int32_t ____length;
};
struct Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF ____pointer;
	int32_t ____length;
};
struct Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 
{
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_BodyID;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E  : public MulticastDelegate_t
{
};
struct Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782  : public MulticastDelegate_t
{
};
struct ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30  : public BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2
{
	int32_t ___m_InitialSize;
	int32_t ___m_MaxSize;
	int32_t ___m_Format;
	Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* ___m_Convert;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* ___m_Allocator;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___m_Texels;
};
struct ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A  : public BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2
{
	int32_t ___m_InitialSize;
	int32_t ___m_MaxSize;
	int32_t ___m_Format;
	Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* ___m_Convert;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* ___m_Allocator;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Texels;
};
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B  : public MulticastDelegate_t
{
};
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B  : public MulticastDelegate_t
{
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct Slot_tEE444C62D9FC9B5D53D6541EEB01C136B0F395F1 
{
	int32_t ___hashCode;
	int32_t ___next;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___value;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct EmptyArray_1_t5DEA403BAFDC5AC2F35C8826395BF35F76EAE720_StaticFields
{
	Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___Value;
};
struct EmptyArray_1_t910BE047C1A6E9E334831BFBF9773D3C3852ED95_StaticFields
{
	ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___Value;
};
struct EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2_StaticFields
{
	BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___Value;
};
struct EmptyArray_1_t200AEA0094BFCA9414824E328EC31EAB52F2142C_StaticFields
{
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___Value;
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Value;
};
struct EmptyArray_1_t42D5099F7FCE2834141926DB372392B8C75ADBEC_StaticFields
{
	BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___Value;
};
struct EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Value;
};
struct EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Value;
};
struct EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9_StaticFields
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___Value;
};
struct EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498_StaticFields
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___Value;
};
struct EmptyArray_1_tF01C5B6CDD56CDA122E6B85402777F31EE92A685_StaticFields
{
	ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ___Value;
};
struct EmptyArray_1_tB029523A05EA2FFE1EB90490D66A384F7A0D4574_StaticFields
{
	ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* ___Value;
};
struct EmptyArray_1_t0605DD263F295CE065C4B24BC0263FB5067617EC_StaticFields
{
	CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* ___Value;
};
struct EmptyArray_1_t27401338DAB1F4C8F9B8E695AB18ABBBF6573E17_StaticFields
{
	CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ___Value;
};
struct EmptyArray_1_t640F34C5C1351444FCE089711FFEF74161372D64_StaticFields
{
	DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* ___Value;
};
struct EmptyArray_1_t9D02D6D1FF8E81441083A08AA0F8970E511F0900_StaticFields
{
	EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___Value;
};
struct EmptyArray_1_t256B6266763D5FE975C2ED0C86C1B3BF93BA56C2_StaticFields
{
	GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* ___Value;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields
{
	int32_t ___s_TextureCounter;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerCopyTexture;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerGetTextureData;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerUpdateTexture;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerTryAllocate;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_StaticFields
{
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___kZero;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
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
struct SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B_StaticFields
{
	RuntimeObject* ___U3CInstanceU3Ek__BackingField;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
struct SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
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
struct Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43  : public RuntimeArray
{
	ALIGN_FIELD (8) Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 m_Items[1];

	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 value)
	{
		m_Items[index] = value;
	}
};
struct ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F  : public RuntimeArray
{
	ALIGN_FIELD (8) ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E m_Items[1];

	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E value)
	{
		m_Items[index] = value;
	}
};
struct BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80  : public RuntimeArray
{
	ALIGN_FIELD (8) BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D m_Items[1];

	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D value)
	{
		m_Items[index] = value;
	}
};
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5  : public RuntimeArray
{
	ALIGN_FIELD (8) Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 m_Items[1];

	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 value)
	{
		m_Items[index] = value;
	}
};
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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
struct ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B m_Items[1];

	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B value)
	{
		m_Items[index] = value;
	}
};
struct ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2  : public RuntimeArray
{
	ALIGN_FIELD (8) ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 m_Items[1];

	inline ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 value)
	{
		m_Items[index] = value;
	}
};
struct CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5  : public RuntimeArray
{
	ALIGN_FIELD (8) CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 m_Items[1];

	inline CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 value)
	{
		m_Items[index] = value;
	}
};
struct CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61  : public RuntimeArray
{
	ALIGN_FIELD (8) CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 m_Items[1];

	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 value)
	{
		m_Items[index] = value;
	}
};
struct DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB  : public RuntimeArray
{
	ALIGN_FIELD (8) DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 m_Items[1];

	inline DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 value)
	{
		m_Items[index] = value;
	}
};
struct EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9  : public RuntimeArray
{
	ALIGN_FIELD (8) EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 m_Items[1];

	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 value)
	{
		m_Items[index] = value;
	}
};
struct GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1  : public RuntimeArray
{
	ALIGN_FIELD (8) GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 m_Items[1];

	inline GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m69BC805AF0DB57B6478AB7A982D71B1657887187_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_gshared_inline (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m468C3E25D460F8CCF7975569A4661D1BE92E5B92_gshared_inline (Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_mFC1541DEB846A9B11D71054636C38E30FC1B38F4_gshared (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_gshared_inline (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, void* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D_gshared (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_gshared (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SingletonMonoBehaviour_1_get_Instance_mD6D40E70B1508B803B958AD4E9048EEFB9553768_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1_set_Instance_m0191812E77B7E1D847AF05DB1273F842EE2CB0BF_gshared_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_destination, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4868E2A05AB294488A5AF17BC94F000C5A0F68F7_gshared_inline (ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* Array_Empty_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mFB61E6C1D57945549B403C13B1652F8CE5324A3C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215_gshared (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_destination, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_gshared_inline (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B_gshared (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_gshared_inline (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mCF6D6F9A859D0DB86629D46B25379F2D9C9B8CBB_gshared_inline (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5ADA1F648D3D4D37DB595FA24A1207E2AFE0FDE5_gshared (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___0_destination, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0519BAD7DF271438138DD6AEC8CE28A60D0619CE_gshared_inline (ReadOnlySpan_1_t29FEC1E8134CF98858AC01DEE01F4B20811F583F* __this, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB74D4D3C2AD6B802DDB07920C132F554AED832BB_gshared_inline (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* Array_Empty_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m327783287506F38234D68882E5BEE202618B5300_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1D909AF584BE28F3A4AD990A5D7BE41287E28B38_gshared_inline (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_gshared_inline (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647_gshared (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_destination, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB60BC31800C0877424E21575E45AE6C8AA50ADA6_gshared_inline (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC3D811BCA73C14AA673ADAB2E2CF39FE1385714B_gshared_inline (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2F8451EBCA1900A8FF93D17DF8177C41EAA2E94B_gshared_inline (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68_gshared (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_gshared_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_gshared_inline (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7_gshared (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_destination, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3263AAE2466F33D0150BF7B8223568108EB82C0B_gshared_inline (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m747EE0A1A7E520F51D231F9185826EBBB38823E4_gshared_inline (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9663565B53FD6471C5AADFE1AEC8D8CE458AA2E6_gshared_inline (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m3B50FB2CF29A0E7C0C8B69E4E5A72D75883EBC4B_gshared_inline (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52_gshared (ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_destination, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDB9E4DFF0687E0A5405FF4F6387379524B1B07AB_gshared_inline (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1910D0E44CCD92AD908E1D5F61FFF27ADFE1EFAD_gshared_inline (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* Array_Empty_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m164EDF2519D24430C10F8BB106ADB252BF225C26_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE396EB49F11B34D41818F29E84D8865E2003B251_gshared_inline (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD8B694DDD50485878B197BD97C4848FA0E770DCD_gshared_inline (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03_gshared (CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_destination, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m75A7463F5588DB7F45AC0CE204FFB188419EC066_gshared_inline (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3BE0AC61B8202E191A699FD2E62859E8C4367CB8_gshared_inline (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* Array_Empty_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m636107AFEDC2888AAD9A190C5FCB115D4483F86F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8E37FAEE50C1A5ED9D35A2445208BE080A64E81B_gshared_inline (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_gshared_inline (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80_gshared (CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_destination, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7515BCC9EAB305B335A968E684B597A1FC9A5F24_gshared_inline (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m938DD54F3773C27DD1393A85BB94346047AD1DA5_gshared_inline (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m59E7D308EB85B51BA4162E76EE21E5568E986970_gshared_inline (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFF4419EF107B2F1CD3364357F9723EAC96433F03_gshared_inline (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54_gshared (DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_destination, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB6153B16E29314D6497048CA9F509CF21C277F71_gshared_inline (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m52DDC62CEE4B57B1A97604C59D91F867D9C9472B_gshared_inline (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* Array_Empty_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m05A4DA3A4ACD6D784909779870EE466DF7778EC7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7F574E10BF82902E6DFCF264F060076901BC34C0_gshared_inline (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_gshared_inline (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900_gshared (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_destination, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1F035A6038B22EE2B7A2E6000536EFB888AC4043_gshared_inline (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE1AF7117E421D34F536A857B1313F4E6CA659AA0_gshared_inline (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE8B22E5931866F928A71F99AF44F27432C1E57BB_gshared_inline (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mAC098ECAAC99824E8345A33C804795BCEE5EF619_gshared_inline (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m02E97F34D8471A290B7463365307EA6035752182_gshared (GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_destination, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m759C3B292D6D3053D1D7160B6E5B66591D2C22CF_gshared_inline (ReadOnlySpan_1_t34BA04A4BFD729569345665C169CDBF1E713EEA3* __this, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m93D87E73F48BD2BD9F2EE7F31B0161782474BBFE_gshared_inline (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* Array_Empty_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m7689028C3ECA005C223F9BA9EC28226970872BE0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m87D77C7F9C35BB06EAF4BC1D311C7F8F6F6FC20B_gshared_inline (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* ___0_array, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseShaderInfoStorage__ctor_m5CD6C884D6587272D9C90F8DEE2BE0C38A5C4DBB (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D (bool ___0_condition, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_inline (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRAtlasAllocator_Dispose_mB956D63F99999BA479695669265B4E6F9755D155 (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseShaderInfoStorage_Dispose_m4346D0BFF23C896046CB1A774E6EB4F4EFC9E56F (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, bool ___0_disposing, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F (RuntimeObject* ___0_disposable, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRAtlasAllocator__ctor_m4263398EB9C4D3D4C8B752C441A1D8F1044B8DF2 (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, int32_t ___0_initialAtlasSize, int32_t ___1_maxAtlasSize, int32_t ___2_sidePadding, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIRAtlasAllocator_TryAllocate_m4DE2C4C9761F6C736122F59AA11BA6E29021E187 (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, int32_t ___0_width, int32_t ___1_height, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___2_location, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___0_xMin, int32_t ___1_yMin, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) ;
inline void ShaderInfoStorage_1_CreateOrExpandTexture_m69BC805AF0DB57B6478AB7A982D71B1657887187 (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, const RuntimeMethod* method)
{
	((  void (*) (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30*, const RuntimeMethod*))ShaderInfoStorage_1_CreateOrExpandTexture_m69BC805AF0DB57B6478AB7A982D71B1657887187_gshared)(__this, method);
}
inline bool NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_inline (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
inline NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m468C3E25D460F8CCF7975569A4661D1BE92E5B92_inline (Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))Func_2_Invoke_m468C3E25D460F8CCF7975569A4661D1BE92E5B92_gshared_inline)(__this, ___0_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___0_updateMipmaps, bool ___1_makeNoLongerReadable, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_textureFormat, bool ___3_mipChain, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void ShaderInfoStorage_1_CpuBlit_mFC1541DEB846A9B11D71054636C38E30FC1B38F4 (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, int32_t, int32_t, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, int32_t, int32_t, const RuntimeMethod*))ShaderInfoStorage_1_CpuBlit_mFC1541DEB846A9B11D71054636C38E30FC1B38F4_gshared)(___0_src, ___1_srcWidth, ___2_srcHeight, ___3_dst, ___4_dstWidth, ___5_dstHeight, method);
}
inline void SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_inline (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	((  void (*) (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0*, void*, const RuntimeMethod*))SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_gshared_inline)(__this, ___0_buffer, method);
}
inline intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_inline (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  intptr_t* (*) (void*, const RuntimeMethod*))UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared_inline)(___0_ptr, method);
}
inline intptr_t* SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, const RuntimeMethod* method)
{
	return ((  intptr_t* (*) (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0*, const RuntimeMethod*))SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D_gshared)(__this, method);
}
inline void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	((  void (*) (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08*, void*, const RuntimeMethod*))SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared_inline)(__this, ___0_buffer, method);
}
inline Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2 (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08*, const RuntimeMethod*))SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1 (int16_t* __this, const RuntimeMethod* method) ;
inline RuntimeObject* SingletonMonoBehaviour_1_get_Instance_mD6D40E70B1508B803B958AD4E9048EEFB9553768_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))SingletonMonoBehaviour_1_get_Instance_mD6D40E70B1508B803B958AD4E9048EEFB9553768_gshared_inline)(method);
}
inline void SingletonMonoBehaviour_1_set_Instance_m0191812E77B7E1D847AF05DB1273F842EE2CB0BF_inline (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))SingletonMonoBehaviour_1_set_Instance_m0191812E77B7E1D847AF05DB1273F842EE2CB0BF_gshared_inline)(___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D (uint8_t* ___0_b, uint64_t ___1_byteLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
inline int32_t Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3*, const RuntimeMethod*))Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_destination, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
inline void ReadOnlySpan_1__ctor_m4868E2A05AB294488A5AF17BC94F000C5A0F68F7_inline (ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m4868E2A05AB294488A5AF17BC94F000C5A0F68F7_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3*, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* Array_Empty_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mFB61E6C1D57945549B403C13B1652F8CE5324A3C_inline (const RuntimeMethod* method)
{
	return ((  Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* (*) (const RuntimeMethod*))Array_Empty_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mFB61E6C1D57945549B403C13B1652F8CE5324A3C_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3*, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*, const RuntimeMethod*))Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948*, const RuntimeMethod*))Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215 (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_destination, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_inline (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7*, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948*, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*, int32_t, const RuntimeMethod*))Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_inline (const RuntimeMethod* method)
{
	return ((  ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* (*) (const RuntimeMethod*))Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_gshared_inline)(method);
}
inline void Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948*, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F*, const RuntimeMethod*))Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428*, const RuntimeMethod*))Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_destination, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_inline (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7*, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428*, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*, int32_t, const RuntimeMethod*))Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline (const RuntimeMethod* method)
{
	return ((  BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* (*) (const RuntimeMethod*))Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_gshared_inline)(method);
}
inline void Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428*, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80*, const RuntimeMethod*))Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mCF6D6F9A859D0DB86629D46B25379F2D9C9B8CBB_inline (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F*, const RuntimeMethod*))Span_1_get_Length_mCF6D6F9A859D0DB86629D46B25379F2D9C9B8CBB_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5ADA1F648D3D4D37DB595FA24A1207E2AFE0FDE5 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___0_destination, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5ADA1F648D3D4D37DB595FA24A1207E2AFE0FDE5_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0519BAD7DF271438138DD6AEC8CE28A60D0619CE_inline (ReadOnlySpan_1_t29FEC1E8134CF98858AC01DEE01F4B20811F583F* __this, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t29FEC1E8134CF98858AC01DEE01F4B20811F583F*, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0519BAD7DF271438138DD6AEC8CE28A60D0619CE_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mB74D4D3C2AD6B802DDB07920C132F554AED832BB_inline (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F*, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*, int32_t, const RuntimeMethod*))Span_1__ctor_mB74D4D3C2AD6B802DDB07920C132F554AED832BB_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* Array_Empty_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m327783287506F38234D68882E5BEE202618B5300_inline (const RuntimeMethod* method)
{
	return ((  BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* (*) (const RuntimeMethod*))Array_Empty_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m327783287506F38234D68882E5BEE202618B5300_gshared_inline)(method);
}
inline void Span_1__ctor_m1D909AF584BE28F3A4AD990A5D7BE41287E28B38_inline (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F*, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*, const RuntimeMethod*))Span_1__ctor_m1D909AF584BE28F3A4AD990A5D7BE41287E28B38_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, const RuntimeMethod*))Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198 (bool* ___0_destination, bool* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (bool*, bool*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2*, bool*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, bool*, int32_t, const RuntimeMethod*))Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline (const RuntimeMethod* method)
{
	return ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (const RuntimeMethod*))Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline)(method);
}
inline void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51*, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*, const RuntimeMethod*))Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_inline (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634*, const RuntimeMethod*))Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_destination, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mB60BC31800C0877424E21575E45AE6C8AA50ADA6_inline (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mB60BC31800C0877424E21575E45AE6C8AA50ADA6_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mC3D811BCA73C14AA673ADAB2E2CF39FE1385714B_inline (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*, int32_t, const RuntimeMethod*))Span_1__ctor_mC3D811BCA73C14AA673ADAB2E2CF39FE1385714B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_inline (const RuntimeMethod* method)
{
	return ((  BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* (*) (const RuntimeMethod*))Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_gshared_inline)(method);
}
inline void Span_1__ctor_m2F8451EBCA1900A8FF93D17DF8177C41EAA2E94B_inline (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634*, BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5*, const RuntimeMethod*))Span_1__ctor_m2F8451EBCA1900A8FF93D17DF8177C41EAA2E94B_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190 (uint8_t* ___0_destination, uint8_t* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, uint8_t*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (const RuntimeMethod*))Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline)(method);
}
inline void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, const RuntimeMethod*))Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446 (Il2CppChar* ___0_destination, Il2CppChar* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Il2CppChar*, Il2CppChar*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline (const RuntimeMethod* method)
{
	return ((  CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* (*) (const RuntimeMethod*))Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline)(method);
}
inline void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, const RuntimeMethod*))Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_destination, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, int32_t, const RuntimeMethod*))Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_inline (const RuntimeMethod* method)
{
	return ((  ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* (*) (const RuntimeMethod*))Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline)(method);
}
inline void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018*, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*, const RuntimeMethod*))Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, const RuntimeMethod*))Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_destination, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, int32_t, const RuntimeMethod*))Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_inline (const RuntimeMethod* method)
{
	return ((  Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* (*) (const RuntimeMethod*))Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_gshared_inline)(method);
}
inline void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D*, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*, const RuntimeMethod*))Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_inline (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907*, const RuntimeMethod*))Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7 (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_destination, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m3263AAE2466F33D0150BF7B8223568108EB82C0B_inline (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B*, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m3263AAE2466F33D0150BF7B8223568108EB82C0B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m747EE0A1A7E520F51D231F9185826EBBB38823E4_inline (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907*, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*, int32_t, const RuntimeMethod*))Span_1__ctor_m747EE0A1A7E520F51D231F9185826EBBB38823E4_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_inline (const RuntimeMethod* method)
{
	return ((  ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* (*) (const RuntimeMethod*))Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_gshared_inline)(method);
}
inline void Span_1__ctor_m9663565B53FD6471C5AADFE1AEC8D8CE458AA2E6_inline (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907*, ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A*, const RuntimeMethod*))Span_1__ctor_m9663565B53FD6471C5AADFE1AEC8D8CE458AA2E6_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m3B50FB2CF29A0E7C0C8B69E4E5A72D75883EBC4B_inline (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48*, const RuntimeMethod*))Span_1_get_Length_m3B50FB2CF29A0E7C0C8B69E4E5A72D75883EBC4B_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52 (ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_destination, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mDB9E4DFF0687E0A5405FF4F6387379524B1B07AB_inline (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A*, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mDB9E4DFF0687E0A5405FF4F6387379524B1B07AB_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m1910D0E44CCD92AD908E1D5F61FFF27ADFE1EFAD_inline (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48*, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*, int32_t, const RuntimeMethod*))Span_1__ctor_m1910D0E44CCD92AD908E1D5F61FFF27ADFE1EFAD_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* Array_Empty_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m164EDF2519D24430C10F8BB106ADB252BF225C26_inline (const RuntimeMethod* method)
{
	return ((  ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* (*) (const RuntimeMethod*))Array_Empty_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m164EDF2519D24430C10F8BB106ADB252BF225C26_gshared_inline)(method);
}
inline void Span_1__ctor_mE396EB49F11B34D41818F29E84D8865E2003B251_inline (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48*, ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2*, const RuntimeMethod*))Span_1__ctor_mE396EB49F11B34D41818F29E84D8865E2003B251_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mD8B694DDD50485878B197BD97C4848FA0E770DCD_inline (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30*, const RuntimeMethod*))Span_1_get_Length_mD8B694DDD50485878B197BD97C4848FA0E770DCD_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03 (CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_destination, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m75A7463F5588DB7F45AC0CE204FFB188419EC066_inline (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA*, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m75A7463F5588DB7F45AC0CE204FFB188419EC066_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m3BE0AC61B8202E191A699FD2E62859E8C4367CB8_inline (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30*, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*, int32_t, const RuntimeMethod*))Span_1__ctor_m3BE0AC61B8202E191A699FD2E62859E8C4367CB8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* Array_Empty_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m636107AFEDC2888AAD9A190C5FCB115D4483F86F_inline (const RuntimeMethod* method)
{
	return ((  CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* (*) (const RuntimeMethod*))Array_Empty_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m636107AFEDC2888AAD9A190C5FCB115D4483F86F_gshared_inline)(method);
}
inline void Span_1__ctor_m8E37FAEE50C1A5ED9D35A2445208BE080A64E81B_inline (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30*, CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5*, const RuntimeMethod*))Span_1__ctor_m8E37FAEE50C1A5ED9D35A2445208BE080A64E81B_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_inline (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116*, const RuntimeMethod*))Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80 (CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_destination, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m7515BCC9EAB305B335A968E684B597A1FC9A5F24_inline (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF*, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m7515BCC9EAB305B335A968E684B597A1FC9A5F24_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m938DD54F3773C27DD1393A85BB94346047AD1DA5_inline (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116*, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*, int32_t, const RuntimeMethod*))Span_1__ctor_m938DD54F3773C27DD1393A85BB94346047AD1DA5_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_inline (const RuntimeMethod* method)
{
	return ((  CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* (*) (const RuntimeMethod*))Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_gshared_inline)(method);
}
inline void Span_1__ctor_m59E7D308EB85B51BA4162E76EE21E5568E986970_inline (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116*, CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61*, const RuntimeMethod*))Span_1__ctor_m59E7D308EB85B51BA4162E76EE21E5568E986970_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mFF4419EF107B2F1CD3364357F9723EAC96433F03_inline (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73*, const RuntimeMethod*))Span_1_get_Length_mFF4419EF107B2F1CD3364357F9723EAC96433F03_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54 (DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_destination, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_mB6153B16E29314D6497048CA9F509CF21C277F71_inline (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B*, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mB6153B16E29314D6497048CA9F509CF21C277F71_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m52DDC62CEE4B57B1A97604C59D91F867D9C9472B_inline (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73*, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*, int32_t, const RuntimeMethod*))Span_1__ctor_m52DDC62CEE4B57B1A97604C59D91F867D9C9472B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* Array_Empty_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m05A4DA3A4ACD6D784909779870EE466DF7778EC7_inline (const RuntimeMethod* method)
{
	return ((  DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* (*) (const RuntimeMethod*))Array_Empty_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m05A4DA3A4ACD6D784909779870EE466DF7778EC7_gshared_inline)(method);
}
inline void Span_1__ctor_m7F574E10BF82902E6DFCF264F060076901BC34C0_inline (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73*, DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB*, const RuntimeMethod*))Span_1__ctor_m7F574E10BF82902E6DFCF264F060076901BC34C0_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_inline (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A*, const RuntimeMethod*))Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900 (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_destination, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m1F035A6038B22EE2B7A2E6000536EFB888AC4043_inline (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1F035A6038B22EE2B7A2E6000536EFB888AC4043_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_mE1AF7117E421D34F536A857B1313F4E6CA659AA0_inline (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A*, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*, int32_t, const RuntimeMethod*))Span_1__ctor_mE1AF7117E421D34F536A857B1313F4E6CA659AA0_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_inline (const RuntimeMethod* method)
{
	return ((  EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* (*) (const RuntimeMethod*))Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_gshared_inline)(method);
}
inline void Span_1__ctor_mE8B22E5931866F928A71F99AF44F27432C1E57BB_inline (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A*, EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*, const RuntimeMethod*))Span_1__ctor_mE8B22E5931866F928A71F99AF44F27432C1E57BB_gshared_inline)(__this, ___0_array, method);
}
inline int32_t Span_1_get_Length_mAC098ECAAC99824E8345A33C804795BCEE5EF619_inline (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14*, const RuntimeMethod*))Span_1_get_Length_mAC098ECAAC99824E8345A33C804795BCEE5EF619_gshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m02E97F34D8471A290B7463365307EA6035752182 (GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_destination, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m02E97F34D8471A290B7463365307EA6035752182_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
inline void ReadOnlySpan_1__ctor_m759C3B292D6D3053D1D7160B6E5B66591D2C22CF_inline (ReadOnlySpan_1_t34BA04A4BFD729569345665C169CDBF1E713EEA3* __this, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t34BA04A4BFD729569345665C169CDBF1E713EEA3*, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m759C3B292D6D3053D1D7160B6E5B66591D2C22CF_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void Span_1__ctor_m93D87E73F48BD2BD9F2EE7F31B0161782474BBFE_inline (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14*, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*, int32_t, const RuntimeMethod*))Span_1__ctor_m93D87E73F48BD2BD9F2EE7F31B0161782474BBFE_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* Array_Empty_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m7689028C3ECA005C223F9BA9EC28226970872BE0_inline (const RuntimeMethod* method)
{
	return ((  GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* (*) (const RuntimeMethod*))Array_Empty_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m7689028C3ECA005C223F9BA9EC28226970872BE0_gshared_inline)(method);
}
inline void Span_1__ctor_m87D77C7F9C35BB06EAF4BC1D311C7F8F6F6FC20B_inline (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14*, GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1*, const RuntimeMethod*))Span_1__ctor_m87D77C7F9C35BB06EAF4BC1D311C7F8F6F6FC20B_gshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7 (intptr_t ___0_markerPtr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409 (intptr_t ___0_markerPtr, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 53577
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1__ctor_mED0A938761C7C57601C916255E86AF3FCCCEDD4E_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->___comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)7);
		__this->___buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_3);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_4 = (SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)(SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (uint32_t)7);
		__this->___slots = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_4);
		__this->___freeList = (-1);
		return;
	}
}
// Method Definition Index: 53578
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Add_mA59F3D323F7969614AEF4DAEC1546F94E059B3E2_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		bool L_1;
		L_1 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_0: *(void**)L_0), (bool)1);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 53579
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Set_1_Find_m6FFC5DAA463589F3E2D7EDD7D4C21ACDFE366953_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, bool ___1_add, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_38 = L_0;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___buckets;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___buckets;
		NullCheck(L_4);
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		int32_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_0065;
	}

IL_001e:
	{
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_7 = __this->___slots;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0));
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_11 = __this->___comparer;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_12 = __this->___slots;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),1)), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		NullCheck(L_11);
		bool L_16;
		L_16 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_15: *(void**)L_15));
		if (!L_16)
		{
			goto IL_0053;
		}
	}
	{
		return (bool)1;
	}

IL_0053:
	{
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_17 = __this->___slots;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2));
		V_1 = L_19;
	}

IL_0065:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		bool L_21 = ___1_add;
		if (!L_21)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_22 = __this->___freeList;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_23 = __this->___freeList;
		V_2 = L_23;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_24 = __this->___slots;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2));
		__this->___freeList = L_26;
		goto IL_00c3;
	}

IL_0098:
	{
		int32_t L_27 = __this->___count;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_28 = __this->___slots;
		NullCheck(L_28);
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_00ae;
		}
	}
	{
		((  void (*) (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
	}

IL_00ae:
	{
		int32_t L_29 = __this->___count;
		V_2 = L_29;
		int32_t L_30 = __this->___count;
		__this->___count = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00c3:
	{
		int32_t L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->___buckets;
		NullCheck(L_32);
		V_3 = ((int32_t)(L_31%((int32_t)(((RuntimeArray*)L_32)->max_length))));
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_33 = __this->___slots;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0), L_35);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_36 = __this->___slots;
		int32_t L_37 = V_2;
		NullCheck(L_36);
		il2cpp_codegen_memcpy(L_38, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		il2cpp_codegen_write_instance_field_data(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),1), L_38, SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_39 = __this->___slots;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___buckets;
		int32_t L_42 = V_3;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2), ((int32_t)il2cpp_codegen_subtract(L_44, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___buckets;
		int32_t L_46 = V_3;
		int32_t L_47 = V_2;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (int32_t)((int32_t)il2cpp_codegen_add(L_47, 1)));
	}

IL_0118:
	{
		return (bool)0;
	}
}
// Method Definition Index: 53580
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Set_1_Resize_m042F5E61A9646B1949ADC2B8F1A01FB1C82397AE_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___count;
		if (((int64_t)L_0 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, 2)) + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 2)), 1));
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_1 = L_2;
		int32_t L_3 = V_0;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_4 = (SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)(SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 5), (uint32_t)L_3);
		V_2 = L_4;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_5 = __this->___slots;
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_6 = V_2;
		int32_t L_7 = __this->___count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, L_7, NULL);
		V_3 = 0;
		goto IL_005e;
	}

IL_0031:
	{
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),0));
		int32_t L_11 = V_0;
		V_4 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tF45120D6701798B3D99EA6E4D4BD09B970E2242B*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 10),2), ((int32_t)il2cpp_codegen_subtract(L_17, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_4;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_005e:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = __this->___count;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0031;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_1;
		__this->___buckets = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buckets), (void*)L_24);
		SlotU5BU5D_tCF0D54242481E38619E4C123D61F54AF17426427* L_25 = V_2;
		__this->___slots = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slots), (void*)L_25);
		return;
	}
}
// Method Definition Index: 53581
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Set_1_InternalGetHashCode_m4A0B85ECABF6C737809F72F682E564CB502CBD7E_gshared (Set_1_t4A604F72EF005CBFC2A3221C663EC2D0E1DEA65D* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7), L_0);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_2 = __this->___comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? ___0_value : &___0_value), SizeOf_TElement_t65838287198D29C1A2F194E4FBD25389CA14586D);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_3: *(void**)L_3));
		return ((int32_t)(L_4&((int32_t)2147483647LL)));
	}

IL_001b:
	{
		return 0;
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
// Method Definition Index: 22618
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1__ctor_m3A0A8B48CCEDA1F58DC2A1E45D890DDA33593187_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, int32_t ___0_format, Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* ___1_convert, int32_t ___2_initialSize, int32_t ___3_maxSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		BaseShaderInfoStorage__ctor_m5CD6C884D6587272D9C90F8DEE2BE0C38A5C4DBB((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		int32_t L_0 = ___3_maxSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_2 = ___2_initialSize;
		int32_t L_3 = ___3_maxSize;
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_4 = ___2_initialSize;
		bool L_5;
		L_5 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_inline(L_4, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_5, NULL);
		int32_t L_6 = ___3_maxSize;
		bool L_7;
		L_7 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_inline(L_6, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_7, NULL);
		Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* L_8 = ___1_convert;
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((RuntimeObject*)(Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		int32_t L_9 = ___2_initialSize;
		__this->___m_InitialSize = L_9;
		int32_t L_10 = ___3_maxSize;
		__this->___m_MaxSize = L_10;
		int32_t L_11 = ___0_format;
		__this->___m_Format = L_11;
		Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* L_12 = ___1_convert;
		__this->___m_Convert = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Convert), (void*)L_12);
		return;
	}
}
// Method Definition Index: 22619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_Dispose_m74AF0FF1FF5C010A746B8A0457EA28EECAC060CC_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B3_0 = NULL;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B2_0 = NULL;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		bool L_1 = ___0_disposing;
		V_0 = (bool)((int32_t)(((((int32_t)L_0) == ((int32_t)0))? 1 : 0)&(int32_t)L_1));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, NULL);
		__this->___m_Texture = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_4 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_4, sizeof(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_5 = __this->___m_Allocator;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_6 = L_5;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_003c;
		}
		G_B2_0 = L_6;
	}
	{
		goto IL_0042;
	}

IL_003c:
	{
		NullCheck(G_B3_0);
		UIRAtlasAllocator_Dispose_mB956D63F99999BA479695669265B4E6F9755D155(G_B3_0, NULL);
	}

IL_0042:
	{
		__this->___m_Allocator = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL);
	}

IL_004a:
	{
		bool L_7 = ___0_disposing;
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		BaseShaderInfoStorage_Dispose_m4346D0BFF23C896046CB1A774E6EB4F4EFC9E56F((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, L_7, NULL);
		return;
	}
}
// Method Definition Index: 22620
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ShaderInfoStorage_1_get_texture_m6F7C1265092E1DD652F00F7D10EFEE74C6CBF95B_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_Texture;
		return L_0;
	}
}
// Method Definition Index: 22621
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderInfoStorage_1_AllocateRect_m41EB00B8DA1E503EF573F59F4DD6DDD178D131B7_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, int32_t ___0_width, int32_t ___1_height, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___2_uvs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_2 = ___2_uvs;
		il2cpp_codegen_initobj(L_2, sizeof(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8));
		V_1 = (bool)0;
		goto IL_0080;
	}

IL_001e:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_3 = __this->___m_Allocator;
		V_2 = (bool)((((RuntimeObject*)(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = __this->___m_InitialSize;
		int32_t L_6 = __this->___m_MaxSize;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_7 = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)il2cpp_codegen_object_new(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		UIRAtlasAllocator__ctor_m4263398EB9C4D3D4C8B752C441A1D8F1044B8DF2(L_7, L_5, L_6, 0, NULL);
		__this->___m_Allocator = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)L_7);
	}

IL_0043:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_8 = __this->___m_Allocator;
		int32_t L_9 = ___0_width;
		int32_t L_10 = ___1_height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_11 = ___2_uvs;
		NullCheck(L_8);
		bool L_12;
		L_12 = UIRAtlasAllocator_TryAllocate_m4DE2C4C9761F6C736122F59AA11BA6E29021E187(L_8, L_9, L_10, L_11, NULL);
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0080;
	}

IL_005c:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_14 = ___2_uvs;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_15 = ___2_uvs;
		il2cpp_codegen_runtime_class_init_inline(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline(L_15, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_17 = ___2_uvs;
		int32_t L_18;
		L_18 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline(L_17, NULL);
		int32_t L_19 = ___0_width;
		int32_t L_20 = ___1_height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_21;
		memset((&L_21), 0, sizeof(L_21));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline((&L_21), L_16, L_18, L_19, L_20, NULL);
		*(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*)L_14 = L_21;
		ShaderInfoStorage_1_CreateOrExpandTexture_m69BC805AF0DB57B6478AB7A982D71B1657887187(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_1 = (bool)1;
		goto IL_0080;
	}

IL_0080:
	{
		bool L_22 = V_1;
		return L_22;
	}
}
// Method Definition Index: 22622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_SetTexel_mCD04D40793D8A3A83934B5C3D549E5F070B226CA_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		goto IL_0077;
	}

IL_0015:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_2 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		bool L_3;
		L_3 = NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerGetTextureData), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___m_Texture;
		NullCheck(L_5);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_6;
		L_6 = Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___m_Texels = L_6;
		ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerGetTextureData), NULL);
	}

IL_0050:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_7 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		int32_t L_8 = ___0_x;
		int32_t L_9 = ___1_y;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* L_12 = __this->___m_Convert;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___2_color;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Func_2_Invoke_m468C3E25D460F8CCF7975569A4661D1BE92E5B92_inline(L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		IL2CPP_NATIVEARRAY_SET_ITEM(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (L_7)->___m_Buffer, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_multiply(L_9, L_11)))), (L_14));
	}

IL_0077:
	{
		return;
	}
}
// Method Definition Index: 22623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_UpdateTexture_m259E4530800035DF1625C5055FDFE7574680AECE_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		goto IL_006a;
	}

IL_0015:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_4 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		bool L_5;
		L_5 = NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_inline(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B5_0 = 1;
	}

IL_0034:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_006a;
	}

IL_003a:
	{
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerUpdateTexture), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_Texture;
		NullCheck(L_7);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_7, (bool)0, (bool)0, NULL);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_8 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_8, sizeof(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D));
		ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerUpdateTexture), NULL);
	}

IL_006a:
	{
		return;
	}
}
// Method Definition Index: 22624
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m69BC805AF0DB57B6478AB7A982D71B1657887187_gshared (ShaderInfoStorage_1_tA67AC95B2ECE99BBF16CB6CE9BAA1BB8F41AFB30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral358A3678217D3CE720F0C294149170B975E33338);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B4_0 = 0;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_0 = __this->___m_Allocator;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_0, NULL);
		V_0 = L_1;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_2 = __this->___m_Allocator;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_2, NULL);
		V_1 = L_3;
		V_2 = (bool)0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_5;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_12 = V_1;
		G_B4_0 = ((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B4_0 = 0;
	}

IL_004d:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0154;
	}

IL_0058:
	{
		V_2 = (bool)1;
	}

IL_005b:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_14 = __this->___m_Allocator;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_14, NULL);
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_16 = __this->___m_Allocator;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_16, NULL);
		int32_t L_18 = __this->___m_Format;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_19, L_15, L_17, L_18, (bool)0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = L_19;
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		int32_t L_21 = ((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter;
		int32_t L_22 = L_21;
		((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter = ((int32_t)il2cpp_codegen_add(L_22, 1));
		V_6 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral358A3678217D3CE720F0C294149170B975E33338, L_23, NULL);
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_20);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_20, L_24, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = L_20;
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_25);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_25, (int32_t)((int32_t)61), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = L_25;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_26);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_26, (int32_t)0, NULL);
		V_3 = L_26;
		bool L_27 = V_2;
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0135;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerCopyTexture), NULL);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_29 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		bool L_30;
		L_30 = NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_inline(L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_30)
		{
			goto IL_00e3;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = __this->___m_Texture;
		NullCheck(L_31);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_32;
		L_32 = Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3(L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B11_0 = L_32;
		goto IL_00e9;
	}

IL_00e3:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_33 = __this->___m_Texels;
		G_B11_0 = L_33;
	}

IL_00e9:
	{
		V_8 = G_B11_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = V_3;
		NullCheck(L_34);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_35;
		L_35 = Texture2D_GetRawTextureData_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B133F38C7E43266DCD025BC599C24C187E779B3(L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_9 = L_35;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_36 = V_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_37);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_39);
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_39);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_41 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42 = V_3;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_42);
		int32_t L_43;
		L_43 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_42);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = V_3;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_44);
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_44);
		ShaderInfoStorage_1_CpuBlit_mFC1541DEB846A9B11D71054636C38E30FC1B38F4(L_36, L_38, L_40, L_41, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_46 = V_9;
		__this->___m_Texels = L_46;
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerCopyTexture), NULL);
		goto IL_0141;
	}

IL_0135:
	{
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_47 = (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_47, sizeof(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D));
	}

IL_0141:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_48, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_49 = V_3;
		__this->___m_Texture = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)L_49);
	}

IL_0154:
	{
		return;
	}
}
// Method Definition Index: 22625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_mFC1541DEB846A9B11D71054636C38E30FC1B38F4_gshared (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___4_dstWidth;
		int32_t L_1 = ___1_srcWidth;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = ___5_dstHeight;
		int32_t L_3 = ___2_srcHeight;
		G_B3_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B3_0, NULL);
		int32_t L_4 = ___4_dstWidth;
		int32_t L_5 = ___1_srcWidth;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = ___5_dstHeight;
		int32_t L_7 = ___2_srcHeight;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		int32_t L_8 = ___1_srcWidth;
		int32_t L_9 = ___2_srcHeight;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_8, L_9));
		V_3 = 0;
		V_4 = 0;
		int32_t L_10 = ___1_srcWidth;
		V_5 = L_10;
		goto IL_0068;
	}

IL_002f:
	{
		goto IL_0050;
	}

IL_0032:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ((&___0_src))->___m_Buffer, L_12);
		IL2CPP_NATIVEARRAY_SET_ITEM(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ((&___3_dst))->___m_Buffer, L_11, (L_13));
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0050:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_5;
		V_6 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (L_18)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_19 = V_5;
		int32_t L_20 = ___1_srcWidth;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		int32_t L_21 = V_4;
		int32_t L_22 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
	}

IL_0068:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_2;
		V_7 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (L_25)
		{
			goto IL_002f;
		}
	}
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
// Method Definition Index: 22618
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1__ctor_mFE6521060564BB839835FA902AA1D9BA02F85E86_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, int32_t ___0_format, Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* ___1_convert, int32_t ___2_initialSize, int32_t ___3_maxSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		BaseShaderInfoStorage__ctor_m5CD6C884D6587272D9C90F8DEE2BE0C38A5C4DBB((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		int32_t L_0 = ___3_maxSize;
		int32_t L_1;
		L_1 = SystemInfo_get_maxTextureSize_mEE557C09643222591C6F4D3F561D7A60CD403991(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_2 = ___2_initialSize;
		int32_t L_3 = ___3_maxSize;
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((((int32_t)((((int32_t)L_2) > ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		int32_t L_4 = ___2_initialSize;
		bool L_5;
		L_5 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_inline(L_4, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_5, NULL);
		int32_t L_6 = ___3_maxSize;
		bool L_7;
		L_7 = Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_inline(L_6, NULL);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D(L_7, NULL);
		Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* L_8 = ___1_convert;
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)((!(((RuntimeObject*)(Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), NULL);
		int32_t L_9 = ___2_initialSize;
		__this->___m_InitialSize = L_9;
		int32_t L_10 = ___3_maxSize;
		__this->___m_MaxSize = L_10;
		int32_t L_11 = ___0_format;
		__this->___m_Format = L_11;
		Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* L_12 = ___1_convert;
		__this->___m_Convert = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Convert), (void*)L_12);
		return;
	}
}
// Method Definition Index: 22619
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_Dispose_m3A95983FB76FC8AFBD0EB90D9B7FAD40536E05C4_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B3_0 = NULL;
	UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* G_B2_0 = NULL;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		bool L_1 = ___0_disposing;
		V_0 = (bool)((int32_t)(((((int32_t)L_0) == ((int32_t)0))? 1 : 0)&(int32_t)L_1));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, NULL);
		__this->___m_Texture = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_4, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_5 = __this->___m_Allocator;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_6 = L_5;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_003c;
		}
		G_B2_0 = L_6;
	}
	{
		goto IL_0042;
	}

IL_003c:
	{
		NullCheck(G_B3_0);
		UIRAtlasAllocator_Dispose_mB956D63F99999BA479695669265B4E6F9755D155(G_B3_0, NULL);
	}

IL_0042:
	{
		__this->___m_Allocator = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)NULL);
	}

IL_004a:
	{
		bool L_7 = ___0_disposing;
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		BaseShaderInfoStorage_Dispose_m4346D0BFF23C896046CB1A774E6EB4F4EFC9E56F((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, L_7, NULL);
		return;
	}
}
// Method Definition Index: 22620
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ShaderInfoStorage_1_get_texture_m6C37ECA9DABA5D261E358801335376BE5A4ECE4B_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, const RuntimeMethod* method) 
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_Texture;
		return L_0;
	}
}
// Method Definition Index: 22621
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ShaderInfoStorage_1_AllocateRect_mF0004D550D493D1C12BB4B259293F1DD082BEC88_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, int32_t ___0_width, int32_t ___1_height, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___2_uvs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_2 = ___2_uvs;
		il2cpp_codegen_initobj(L_2, sizeof(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8));
		V_1 = (bool)0;
		goto IL_0080;
	}

IL_001e:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_3 = __this->___m_Allocator;
		V_2 = (bool)((((RuntimeObject*)(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = __this->___m_InitialSize;
		int32_t L_6 = __this->___m_MaxSize;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_7 = (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7*)il2cpp_codegen_object_new(UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7_il2cpp_TypeInfo_var);
		UIRAtlasAllocator__ctor_m4263398EB9C4D3D4C8B752C441A1D8F1044B8DF2(L_7, L_5, L_6, 0, NULL);
		__this->___m_Allocator = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Allocator), (void*)L_7);
	}

IL_0043:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_8 = __this->___m_Allocator;
		int32_t L_9 = ___0_width;
		int32_t L_10 = ___1_height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_11 = ___2_uvs;
		NullCheck(L_8);
		bool L_12;
		L_12 = UIRAtlasAllocator_TryAllocate_m4DE2C4C9761F6C736122F59AA11BA6E29021E187(L_8, L_9, L_10, L_11, NULL);
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0080;
	}

IL_005c:
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_14 = ___2_uvs;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_15 = ___2_uvs;
		il2cpp_codegen_runtime_class_init_inline(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_il2cpp_TypeInfo_var);
		int32_t L_16;
		L_16 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline(L_15, NULL);
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* L_17 = ___2_uvs;
		int32_t L_18;
		L_18 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline(L_17, NULL);
		int32_t L_19 = ___0_width;
		int32_t L_20 = ___1_height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_21;
		memset((&L_21), 0, sizeof(L_21));
		RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline((&L_21), L_16, L_18, L_19, L_20, NULL);
		*(RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*)L_14 = L_21;
		((  void (*) (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		V_1 = (bool)1;
		goto IL_0080;
	}

IL_0080:
	{
		bool L_22 = V_1;
		return L_22;
	}
}
// Method Definition Index: 22622
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_SetTexel_m5F6938D6AD91CBA99FD3A575B4E1D2CB02669A89_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, int32_t ___0_x, int32_t ___1_y, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711);
	bool V_0 = false;
	bool V_1 = false;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		goto IL_0077;
	}

IL_0015:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		bool L_3;
		L_3 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerGetTextureData), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___m_Texture;
		NullCheck(L_5);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		L_6 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		__this->___m_Texels = L_6;
		ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerGetTextureData), NULL);
	}

IL_0050:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		int32_t L_8 = ___0_x;
		int32_t L_9 = ___1_y;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		Func_2_t781E8579E9FF2D1F9E663A289445D85212CBE782* L_12 = __this->___m_Convert;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___2_color;
		NullCheck(L_12);
		InvokerActionInvoker2< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_12, L_13, (Il2CppFullySharedGenericStruct*)L_14);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_multiply(L_9, L_11)))), L_14);
	}

IL_0077:
	{
		return;
	}
}
// Method Definition Index: 22623
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_UpdateTexture_m9ACE3AFEC8022BA9756E8A10C8FB4F8D058FBBDA_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		NullCheck((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this);
		bool L_0;
		L_0 = BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2*)__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		DisposeHelper_NotifyDisposedUsed_m7A9C988A4B96B0920E470EEA604BA42C5ABB437F((RuntimeObject*)__this, NULL);
		goto IL_006a;
	}

IL_0015:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		bool L_5;
		L_5 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		G_B5_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B5_0 = 1;
	}

IL_0034:
	{
		V_1 = (bool)G_B5_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_006a;
	}

IL_003a:
	{
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerUpdateTexture), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_Texture;
		NullCheck(L_7);
		Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_7, (bool)0, (bool)0, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_8, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerUpdateTexture), NULL);
	}

IL_006a:
	{
		return;
	}
}
// Method Definition Index: 22624
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CreateOrExpandTexture_m8642AC345100DA2F4FA6D2DC5E283FB777730361_gshared (ShaderInfoStorage_1_t32194748F3ED0F5527B4E31A28D04606FAEE539A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral358A3678217D3CE720F0C294149170B975E33338);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_8;
	memset((&V_8), 0, sizeof(V_8));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B4_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_0 = __this->___m_Allocator;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_0, NULL);
		V_0 = L_1;
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_2 = __this->___m_Allocator;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_2, NULL);
		V_1 = L_3;
		V_2 = (bool)0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_5;
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_7);
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_10);
		int32_t L_12 = V_1;
		G_B4_0 = ((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B4_0 = 0;
	}

IL_004d:
	{
		V_5 = (bool)G_B4_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0154;
	}

IL_0058:
	{
		V_2 = (bool)1;
	}

IL_005b:
	{
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_14 = __this->___m_Allocator;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline(L_14, NULL);
		UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* L_16 = __this->___m_Allocator;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline(L_16, NULL);
		int32_t L_18 = __this->___m_Format;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_mECF60A9EC0638EC353C02C8E99B6B465D23BE917(L_19, L_15, L_17, L_18, (bool)0, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_20 = L_19;
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		int32_t L_21 = ((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter;
		int32_t L_22 = L_21;
		((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_TextureCounter = ((int32_t)il2cpp_codegen_add(L_22, 1));
		V_6 = L_22;
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral358A3678217D3CE720F0C294149170B975E33338, L_23, NULL);
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_20);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_20, L_24, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_25 = L_20;
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_25);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_25, (int32_t)((int32_t)61), NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_26 = L_25;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_26);
		Texture_set_filterMode_mE423E58C0C16D059EA62BA87AD70F44AEA50CCC9((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_26, (int32_t)0, NULL);
		V_3 = L_26;
		bool L_27 = V_2;
		V_7 = L_27;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0135;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerCopyTexture), NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_29 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		bool L_30;
		L_30 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_30)
		{
			goto IL_00e3;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = __this->___m_Texture;
		NullCheck(L_31);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_32;
		L_32 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		G_B11_0 = L_32;
		goto IL_00e9;
	}

IL_00e3:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_33 = __this->___m_Texels;
		G_B11_0 = L_33;
	}

IL_00e9:
	{
		V_8 = G_B11_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_34 = V_3;
		NullCheck(L_34);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_35;
		L_35 = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_9 = L_35;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_36 = V_8;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_37 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_37);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_39 = __this->___m_Texture;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_39);
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_39);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_41 = V_9;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_42 = V_3;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_42);
		int32_t L_43;
		L_43 = VirtualFuncInvoker0< int32_t >::Invoke(4, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_42);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_44 = V_3;
		NullCheck((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_44);
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(6, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)L_44);
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_36, L_38, L_40, L_41, L_43, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_46 = V_9;
		__this->___m_Texels = L_46;
		il2cpp_codegen_runtime_class_init_inline(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var);
		ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline((&((BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_StaticFields*)il2cpp_codegen_static_fields_for(BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2_il2cpp_TypeInfo_var))->___s_MarkerCopyTexture), NULL);
		goto IL_0141;
	}

IL_0135:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_47 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Texels);
		il2cpp_codegen_initobj(L_47, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
	}

IL_0141:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_48 = __this->___m_Texture;
		il2cpp_codegen_runtime_class_init_inline(UIRUtility_tBBCA94052EAE57F0A59876553C582FFCF52E706C_il2cpp_TypeInfo_var);
		UIRUtility_Destroy_m9E925E79E7B4A4853B47C1EFACEF2ED0A7844A23((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_48, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_49 = V_3;
		__this->___m_Texture = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Texture), (void*)L_49);
	}

IL_0154:
	{
		return;
	}
}
// Method Definition Index: 22625
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShaderInfoStorage_1_CpuBlit_m0E45789132A1E82D5777E6170B1D9470441F21BD_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcWidth, int32_t ___2_srcHeight, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___3_dst, int32_t ___4_dstWidth, int32_t ___5_dstHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 8));
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_T_tDC969906238A4B266B1EEEE339C754265058C711);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___4_dstWidth;
		int32_t L_1 = ___1_srcWidth;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = ___5_dstHeight;
		int32_t L_3 = ___2_srcHeight;
		G_B3_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m6E778CACD0F440E2DEA9ACDD9330A22DAF16E96D((bool)G_B3_0, NULL);
		int32_t L_4 = ___4_dstWidth;
		int32_t L_5 = ___1_srcWidth;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = ___5_dstHeight;
		int32_t L_7 = ___2_srcHeight;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		int32_t L_8 = ___1_srcWidth;
		int32_t L_9 = ___2_srcHeight;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_8, L_9));
		V_3 = 0;
		V_4 = 0;
		int32_t L_10 = ___1_srcWidth;
		V_5 = L_10;
		goto IL_0068;
	}

IL_002f:
	{
		goto IL_0050;
	}

IL_0032:
	{
		int32_t L_11 = V_4;
		int32_t L_12 = V_3;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12), (&___0_src), L_12, (Il2CppFullySharedGenericStruct*)L_13);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), (&___3_dst), L_11, L_13);
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0050:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = V_5;
		V_6 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_6;
		if (L_18)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_19 = V_5;
		int32_t L_20 = ___1_srcWidth;
		V_5 = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		int32_t L_21 = V_4;
		int32_t L_22 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
	}

IL_0068:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_2;
		V_7 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (L_25)
		{
			goto IL_002f;
		}
	}
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
// Method Definition Index: 34177
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_gshared (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, void* ___0_buffer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_buffer;
		__this->____buffer = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_AdjustorThunk (RuntimeObject* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0*>(__this + _offset);
	SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_inline(_thisAdjusted, ___0_buffer, method);
}
// Method Definition Index: 34178
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D_gshared (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->____buffer;
		intptr_t* L_1;
		L_1 = UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C  intptr_t* SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0*>(__this + _offset);
	intptr_t* _returnValue;
	_returnValue = SharedStatic_1_get_Data_m42DD928B26C146E0D920D5348F2CEBC3C7F21C3D(_thisAdjusted, method);
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
// Method Definition Index: 34177
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_buffer;
		__this->____buffer = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_AdjustorThunk (RuntimeObject* __this, void* ___0_buffer, const RuntimeMethod* method)
{
	SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08*>(__this + _offset);
	SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_inline(_thisAdjusted, ___0_buffer, method);
}
// Method Definition Index: 34178
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_gshared (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->____buffer;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = SharedStatic_1_get_Data_m679BD82198B4EC1D89F2EDE946A60F4DEE8E47E2(_thisAdjusted, method);
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
// Method Definition Index: 11080
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortEnumEqualityComparer_1__ctor_mDF4021A13BC967B8F2160B8A016872E7025447E9_gshared (ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 11081
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShortEnumEqualityComparer_1__ctor_m61792EA8BEDC5EB839C9BE5113E73DE5E2C17C91_gshared (ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_information, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		((  void (*) (EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((EnumEqualityComparer_1_tBE0A26FDB9917D9CB482A0E2018093AB3394FC1A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return;
	}
}
// Method Definition Index: 11082
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShortEnumEqualityComparer_1_GetHashCode_m3DD7EC97F7CC8C9A3747EFB17278B3B4AF22E8E9_gshared (ShortEnumEqualityComparer_1_t93E714E73A6CDB76D15D51942E3800AB3E57DFF6* __this, Il2CppFullySharedGenericStruct ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF891361FC715BBD984F1037039A2A971DE20FE75 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF891361FC715BBD984F1037039A2A971DE20FE75);
	int16_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_obj, SizeOf_T_tF891361FC715BBD984F1037039A2A971DE20FE75);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), NULL, L_0);
		V_0 = ((int16_t)L_1);
		int32_t L_2;
		L_2 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1((&V_0), NULL);
		return L_2;
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
// Method Definition Index: 44132
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingletonMonoBehaviour_1_get_Instance_mD6D40E70B1508B803B958AD4E9048EEFB9553768_gshared (const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:12>
		RuntimeObject* L_0 = ((SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CInstanceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 44133
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1_set_Instance_m0191812E77B7E1D847AF05DB1273F842EE2CB0BF_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:12>
		RuntimeObject* L_0 = ___0_value;
		((SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CInstanceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CInstanceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 44134
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1_Awake_m4E12E473147A85792BD468C826E2ECD38F7C76F2_gshared (SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA48D25CCEBF3743275270A3FC7FFBE993AAE3594);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA6EE064E726E2CCE5154639543C273DACAB3448);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0850A1FC3AAD228B4E8851CFDD31FD24902CF60);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:16>
		RuntimeObject* L_0;
		L_0 = SingletonMonoBehaviour_1_get_Instance_mD6D40E70B1508B803B958AD4E9048EEFB9553768_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:17>
		SingletonMonoBehaviour_1_set_Instance_m0191812E77B7E1D847AF05DB1273F842EE2CB0BF_inline(((RuntimeObject*)IsInst((RuntimeObject*)__this, il2cpp_rgctx_data(method->klass->rgctx_data, 1))), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return;
	}

IL_0023:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:18>
		RuntimeObject* L_2;
		L_2 = SingletonMonoBehaviour_1_get_Instance_mD6D40E70B1508B803B958AD4E9048EEFB9553768_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)__this, NULL);
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:19>
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEA6EE064E726E2CCE5154639543C273DACAB3448);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck((MemberInfo_t*)L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_8);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_6;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA48D25CCEBF3743275270A3FC7FFBE993AAE3594);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, NULL);
		NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_12);
		String_t* L_13;
		L_13 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_12, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_11;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF0850A1FC3AAD228B4E8851CFDD31FD24902CF60);
		String_t* L_15;
		L_15 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB((RuntimeObject*)L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)__this, NULL);
	}

IL_007e:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:20>
		return;
	}
}
// Method Definition Index: 44135
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1_OnDestroy_mE551A47B4BF49AD955FED31A0A2FCF3666A24DB1_gshared (SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:24>
		RuntimeObject* L_0;
		L_0 = SingletonMonoBehaviour_1_get_Instance_mD6D40E70B1508B803B958AD4E9048EEFB9553768_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)__this, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:25>
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		SingletonMonoBehaviour_1_set_Instance_m0191812E77B7E1D847AF05DB1273F842EE2CB0BF_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
	}

IL_0020:
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:26>
		return;
	}
}
// Method Definition Index: 44136
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1__ctor_mA56436CC11C0DB4A388F2009D2B013B83D1650F9_gshared (SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E((MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71*)__this, NULL);
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
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* currentDelegate = reinterpret_cast<SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenInst(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic(SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
// Method Definition Index: 11094
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m4BBCE8F9C0E8FCC935E1765742799AEAD48606AE_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_OpenStatic;
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
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_Multicast;
}
// Method Definition Index: 11095
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* currentDelegate = reinterpret_cast<SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenInst(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
// Method Definition Index: 11094
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m52B80F2401AFC1EDA0C92BDEC3320FB33A9FEB85_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic;
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
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast;
}
// Method Definition Index: 11095
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* currentDelegate = reinterpret_cast<SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenInst(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
// Method Definition Index: 11094
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m779B33E518F02340D4E655DDF668877EE565FE88_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic;
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
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast;
}
// Method Definition Index: 11095
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* currentDelegate = reinterpret_cast<SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_span, ___1_arg);
}
void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker(SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_span, ___1_arg);
}
// Method Definition Index: 11094
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_mDA3D51C491A1F13D8CC15EB34D552737FFAE68E4_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedStaticInvoker;
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_ClosedInstInvoker;
	}
	__this->___extra_arg = (intptr_t)&SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_Multicast;
}
// Method Definition Index: 11095
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_gshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1 = V_0;
		if (L_1.___hasValue)
		{
			goto IL_0037;
		}
	}
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_2 = ___0_array;
		NullCheck((RuntimeObject*)L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_7 = ___0_array;
		NullCheck((RuntimeArray*)L_7);
		uint8_t* L_8;
		L_8 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_7, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_9;
		L_9 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>(L_8);
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_10;
		memset((&L_10), 0, sizeof(L_10));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_10), L_9);
		__this->____pointer = L_10;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_11 = ___0_array;
		NullCheck(L_11);
		__this->____length = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m86B77173AFE17E5C448B2A46B2D4FA7C86D55239_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = V_0;
		if (L_3.___hasValue)
		{
			goto IL_0042;
		}
	}
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___1_start;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_10 = ___0_array;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___2_length;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = ___1_start;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_14 = ___0_array;
		NullCheck((RuntimeArray*)L_14);
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_16;
		L_16 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>(L_15);
		int32_t L_17 = ___1_start;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_18;
		L_18 = il2cpp_unsafe_add<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,int32_t>(L_16, L_17);
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer = L_19;
		int32_t L_20 = ___2_length;
		__this->____length = L_20;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m39B630629631F5F3797AFE9EDDA475EE404BC100_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_2;
		L_2 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>((uint8_t*)L_1);
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = ___0_ptr;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* Span_1_get_Item_m7A00D3468D32D9E828F5147FEBDC4B1601DCF647_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_2 = __this->____pointer;
		V_0 = L_2;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_5;
		L_5 = il2cpp_unsafe_add<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* Span_1_GetPinnableReference_m4D8CBE3528B5E06DF38B65E0E8F8F2E95CFC2C33_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_1;
		L_1 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_2 = __this->____pointer;
		V_0 = L_2;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m0EA6C54837B6AAE0635EFA982EA2B499DE24E04F_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_0 = __this->____pointer;
		V_0 = L_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mE28027CAC681ADB1E428BF8BCF2EDEC974CF684A_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_4 = __this->____pointer;
		V_2 = L_4;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_12 = __this->____pointer;
		V_2 = L_12;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_19 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_18 = L_19;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_24 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_23 = L_24;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_29 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_28 = L_29;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_34 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_33 = L_34;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_39 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_38 = L_39;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_44 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_43 = L_44;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_49 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_48 = L_49;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_54 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_64 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_63 = L_64;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_69 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_68 = L_69;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_74 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_73 = L_74;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_79 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_85 = ___0_value;
		*(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m0364BD7751FBC14F5DA2CF8BA474307F6E815129_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_2 = ___0_destination;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_3 = L_2.____pointer;
		V_0 = L_3;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_5 = __this->____pointer;
		V_0 = L_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m26C08A30C59BF1CF7196C28B23414AAFAA8EE83B_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_2 = ___0_destination;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_3 = L_2.____pointer;
		V_1 = L_3;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_1));
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_5 = __this->____pointer;
		V_1 = L_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_mC3633C2B3E764D4E4DEBE743EC64C5B9701D9D06_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 ___0_left, Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_4 = ___0_left;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_5 = L_4.____pointer;
		V_0 = L_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_7 = ___1_right;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_8 = L_7.____pointer;
		V_0 = L_8;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2 Span_1_op_Implicit_m761C3454CAE69FEFBCF116FB76C960A81F8F1A72_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_0 = ___0_span;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_1 = L_0.____pointer;
		V_0 = L_1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m4868E2A05AB294488A5AF17BC94F000C5A0F68F7_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mAF2F48674F21E265E6A1E2841DA4F93B099BCC41_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_5 = __this->____pointer;
		V_1 = L_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 Span_1_Slice_m56B7FFB5404EF5699C0AAD0698A2110806CB7403_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_2 = __this->____pointer;
		V_0 = L_2;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_5;
		L_5 = il2cpp_unsafe_add<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 Span_1_Slice_m1DA91F93C25B329E4DF9C8BF96C38AC3255CCD5A_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_5 = __this->____pointer;
		V_0 = L_5;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_8;
		L_8 = il2cpp_unsafe_add<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* Span_1_ToArray_m4F7B49E4DEFFF7590D3FEE459AFD8F93825E62C7_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_1;
		L_1 = Array_Empty_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mFB61E6C1D57945549B403C13B1652F8CE5324A3C_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_3 = (Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)(Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_6;
		L_6 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>(L_5);
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_7 = __this->____pointer;
		V_0 = L_7;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mBCF551834A5B6D371531B7F25078FA3DFB1B5E97(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m7D50961771F0951CFC3634638723DF9EEF1A824F_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m35D53A63F76BDF113E43492876A788F40434C748_gshared (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 Span_1_op_Implicit_m8E5FF3761AA50C08946266E63BD40F877F22245A_gshared (Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, const RuntimeMethod* method) 
{
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_0 = ___0_array;
		Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, const RuntimeMethod* method) 
{
	ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E));
		goto IL_0037;
	}

IL_0037:
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>(L_3);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mFB1DF83BC23670EC8E9E5549A662686C2BF5A209_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_11;
		L_11 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>(L_10);
		int32_t L_12 = ___1_start;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_13;
		L_13 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_11, L_12);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m4A57D2C127E05581118403FF297339A88CBF04D7_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_2;
		L_2 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>((uint8_t*)L_1);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_0 = ___0_ptr;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* Span_1_get_Item_mB31CA271AD62255832652CCBA3B6144E386155D7_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_2 = __this->____pointer;
		V_0 = L_2;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_5;
		L_5 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* Span_1_GetPinnableReference_m7C8E33E87C25BE64667C578289D3DEE26FCCA0C4_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_1;
		L_1 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_2 = __this->____pointer;
		V_0 = L_2;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mABBD13C8435F3F29A1DAC8442C2A5553A0D4E4B1_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_0 = __this->____pointer;
		V_0 = L_0;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mC8DC7F6EDCE047652100F251B4D18E254E9C4B67_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_4 = __this->____pointer;
		V_2 = L_4;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_12 = __this->____pointer;
		V_2 = L_12;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_19 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_18 = L_19;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_24 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_23 = L_24;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_29 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_28 = L_29;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_34 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_33 = L_34;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_39 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_38 = L_39;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_44 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_43 = L_44;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_49 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_48 = L_49;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_54 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_64 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_63 = L_64;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_69 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_68 = L_69;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_74 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_73 = L_74;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_79 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E L_85 = ___0_value;
		*(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m69E286C36213A3F0A2865C947B1402909A27D13D_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_2 = ___0_destination;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_3 = L_2.____pointer;
		V_0 = L_3;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = __this->____pointer;
		V_0 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m3F2672DBD1CBB222A9062D13B53EE549E236DEE9_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_2 = ___0_destination;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_3 = L_2.____pointer;
		V_1 = L_3;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_1));
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = __this->____pointer;
		V_1 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_mF4C4A8902355CEED2915C9B09E31FD54FA1E4ABA_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 ___0_left, Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_4 = ___0_left;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = L_4.____pointer;
		V_0 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_7 = ___1_right;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_8 = L_7.____pointer;
		V_0 = L_8;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 Span_1_op_Implicit_m86584B024E037F330D6D8BAD3654D009976F3186_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_0 = ___0_span;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_1 = L_0.____pointer;
		V_0 = L_1;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m095D5F8A52B67EDB057CF850BB375D945B975194_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = __this->____pointer;
		V_1 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 Span_1_Slice_m57905D80A43A7487820D76CE38E84805236492B2_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_2 = __this->____pointer;
		V_0 = L_2;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_5;
		L_5 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 Span_1_Slice_m085D783FD988C5CE9726A19B347DB3791B1BB7CF_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5 = __this->____pointer;
		V_0 = L_5;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_8;
		L_8 = il2cpp_unsafe_add<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* Span_1_ToArray_mB0B732DF6D1AAF2D2FD4818EF9091E54136DE58F_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_1;
		L_1 = Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_3 = (ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F*)(ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_6;
		L_6 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>(L_5);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_7 = __this->____pointer;
		V_0 = L_7;
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_mF7B64A7A3AED5F75779174F1164B6D60E51A6215(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mEC9CE7A49026C798E76AD11A730B0199AEC6BD10_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m313C66D04AC3CA5C139861E0B60F6A2C4ED47AFC_gshared (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 Span_1_op_Implicit_mD167D5E84BC89F06CF65BED50126A856D72DB6AD_gshared (ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, const RuntimeMethod* method) 
{
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ___0_array;
		Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, const RuntimeMethod* method) 
{
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		goto IL_0037;
	}

IL_0037:
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_3);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6AD4D32958406E99771BD80D95955B6C1C1D8C7E_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_11;
		L_11 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_10);
		int32_t L_12 = ___1_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_13;
		L_13 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_11, L_12);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF21BAD08783861F66A5DC64B2008B831D4E70ECD_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_2;
		L_2 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>((uint8_t*)L_1);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_0 = ___0_ptr;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* Span_1_get_Item_m8F05BEF265BF6D467B7F3EC7E0FC6144A17514B9_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_2 = __this->____pointer;
		V_0 = L_2;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_5;
		L_5 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* Span_1_GetPinnableReference_m1651F4B2CE8A49E7C5F7AFA47B2C760465CD6E77_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_1;
		L_1 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_2 = __this->____pointer;
		V_0 = L_2;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1B718013A2B8F944A651556CC5C238834972E189_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_0 = __this->____pointer;
		V_0 = L_0;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mCFE2C408BFC0620F17CED47CB3A5E4E9097A2A2C_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_4 = __this->____pointer;
		V_2 = L_4;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_12 = __this->____pointer;
		V_2 = L_12;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_19 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_18 = L_19;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_24 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_23 = L_24;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_29 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_28 = L_29;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_34 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_33 = L_34;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_39 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_38 = L_39;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_44 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_43 = L_44;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_49 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_48 = L_49;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_54 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_64 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_63 = L_64;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_69 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_68 = L_69;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_74 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_73 = L_74;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_79 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_85 = ___0_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mDCB97095A5B438EEDD243FF0924E8AFE4D0F040F_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_2 = ___0_destination;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3 = L_2.____pointer;
		V_0 = L_3;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_0 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mE4C5E1C41D72D994C9A4EAA1714F82F57ACB3D1D_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_2 = ___0_destination;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_3 = L_2.____pointer;
		V_1 = L_3;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_1));
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_1 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_m49ACB9C0BC088C107A830ACBE5BD3DEAA66F52E3_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___0_left, Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_4 = ___0_left;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = L_4.____pointer;
		V_0 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_7 = ___1_right;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_8 = L_7.____pointer;
		V_0 = L_8;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 Span_1_op_Implicit_m55793F89576C91F51F84FEE419581F8B4B5F38C5_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_0 = ___0_span;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_1 = L_0.____pointer;
		V_0 = L_1;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m6103F745B1C7B9A9BD3A3116AF5F988065C25AF4_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_1 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 Span_1_Slice_m755E9ED71968348BB9C4E8463E30DE839E3FEFD0_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_2 = __this->____pointer;
		V_0 = L_2;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_5;
		L_5 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 Span_1_Slice_mA98F6A471377545511DC5E22FD4DF75F4E10F707_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5 = __this->____pointer;
		V_0 = L_5;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_8;
		L_8 = il2cpp_unsafe_add<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Span_1_ToArray_m33F9F235649E5BECFA4795C77789731BF922CFC7_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_1;
		L_1 = Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_3 = (BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80*)(BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_6;
		L_6 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_5);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_7 = __this->____pointer;
		V_0 = L_7;
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m9074142CF2F0828232AFEBB926F490D33E285B9B(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m31F00188DB58D0A6AC422C1110FE121512B83A8B_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mB00CEDEC6497D53AB78D6B46111F2695915CF97A_gshared (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 Span_1_op_Implicit_m94CCC4AEF130B0783BEB1BFB5ACB39512FB9EF03_gshared (BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, const RuntimeMethod* method) 
{
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ___0_array;
		Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1D909AF584BE28F3A4AD990A5D7BE41287E28B38_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___0_array, const RuntimeMethod* method) 
{
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		goto IL_0037;
	}

IL_0037:
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_4;
		L_4 = il2cpp_unsafe_as_ref<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F>(L_3);
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC004D19B5E92ED05206D4FEF61FCE04D32DEF58A_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_11;
		L_11 = il2cpp_unsafe_as_ref<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F>(L_10);
		int32_t L_12 = ___1_start;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_13;
		L_13 = il2cpp_unsafe_add<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,int32_t>(L_11, L_12);
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7567DF292516EAF388B2B23118310BEC461C4C06_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_2;
		L_2 = il2cpp_unsafe_as_ref<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F>((uint8_t*)L_1);
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB74D4D3C2AD6B802DDB07920C132F554AED832BB_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_0 = ___0_ptr;
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* Span_1_get_Item_m191908546402CCAF4B926044F1CEBA030C762C90_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_2 = __this->____pointer;
		V_0 = L_2;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_5;
		L_5 = il2cpp_unsafe_add<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* Span_1_GetPinnableReference_mD95038A506E3D6E298ED536D536AACDCFF429BC1_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, const RuntimeMethod* method) 
{
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_1;
		L_1 = il2cpp_unsafe_as_ref<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_2 = __this->____pointer;
		V_0 = L_2;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mDAC7E0301B450A278FD6A253EA6A8C92424E31DE_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, const RuntimeMethod* method) 
{
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_0 = __this->____pointer;
		V_0 = L_0;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mA6EDB5054EE5CECB71A59212C0AD73857B06D025_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_4 = __this->____pointer;
		V_2 = L_4;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_12 = __this->____pointer;
		V_2 = L_12;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_19 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_18 = L_19;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_24 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_23 = L_24;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_29 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_28 = L_29;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_34 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_33 = L_34;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_39 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_38 = L_39;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_44 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_43 = L_44;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_49 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_48 = L_49;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_54 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_64 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_63 = L_64;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_69 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_68 = L_69;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_74 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_73 = L_74;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_79 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_85 = ___0_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m492139B2BCFB349DFBC2BBF80E1D32B1153042B0_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mCF6D6F9A859D0DB86629D46B25379F2D9C9B8CBB_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F L_2 = ___0_destination;
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_3 = L_2.____pointer;
		V_0 = L_3;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_0));
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_5 = __this->____pointer;
		V_0 = L_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5ADA1F648D3D4D37DB595FA24A1207E2AFE0FDE5(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m6BED16B9366315638CB6193ECE3F7D2977ACD00C_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mCF6D6F9A859D0DB86629D46B25379F2D9C9B8CBB_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F L_2 = ___0_destination;
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_3 = L_2.____pointer;
		V_1 = L_3;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_1));
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_5 = __this->____pointer;
		V_1 = L_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5ADA1F648D3D4D37DB595FA24A1207E2AFE0FDE5(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_m13DB42C6CFB869E67658E1DC900DB75760B2D864_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F ___0_left, Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F L_4 = ___0_left;
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_5 = L_4.____pointer;
		V_0 = L_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_0));
		Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F L_7 = ___1_right;
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_8 = L_7.____pointer;
		V_0 = L_8;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t29FEC1E8134CF98858AC01DEE01F4B20811F583F Span_1_op_Implicit_m995964325FCC3041D5E638CC453303233E10048A_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F L_0 = ___0_span;
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_1 = L_0.____pointer;
		V_0 = L_1;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_0));
		Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t29FEC1E8134CF98858AC01DEE01F4B20811F583F L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0519BAD7DF271438138DD6AEC8CE28A60D0619CE_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m4ABF153853B5D4D21DE15729F45554D25789AAA0_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_5 = __this->____pointer;
		V_1 = L_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F Span_1_Slice_m0B9A41E3B8D2B2F8F9EA30FA547C89DC0CD024C9_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_2 = __this->____pointer;
		V_0 = L_2;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_5;
		L_5 = il2cpp_unsafe_add<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mB74D4D3C2AD6B802DDB07920C132F554AED832BB_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F Span_1_Slice_mB9CBAF3C6C76C26B4FA2599463FDD387909E11E0_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_5 = __this->____pointer;
		V_0 = L_5;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_8;
		L_8 = il2cpp_unsafe_add<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mB74D4D3C2AD6B802DDB07920C132F554AED832BB_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* Span_1_ToArray_mA3B9B019C213D77BA565097E2E762C3A51031B64_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, const RuntimeMethod* method) 
{
	ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_1;
		L_1 = Array_Empty_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m327783287506F38234D68882E5BEE202618B5300_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_3 = (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_6;
		L_6 = il2cpp_unsafe_as_ref<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F>(L_5);
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_7 = __this->____pointer;
		V_0 = L_7;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5ADA1F648D3D4D37DB595FA24A1207E2AFE0FDE5(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mCF6D6F9A859D0DB86629D46B25379F2D9C9B8CBB_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m62B20436A1C0BBAC6F87A7A21C964F61F7DF6EC8_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m5113E93248A796211D38FB0089101CBA9968A245_gshared (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F Span_1_op_Implicit_m93526F73308D3A2340F93EB81820FC5D0B9E5510_gshared (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___0_array, const RuntimeMethod* method) 
{
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_0 = ___0_array;
		Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m1D909AF584BE28F3A4AD990A5D7BE41287E28B38_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0037;
	}

IL_0037:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		bool* L_4;
		L_4 = il2cpp_unsafe_as_ref<bool>(L_3);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF010B57B13C6597DA14D7957BD2E07090F8336A6_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		bool* L_11;
		L_11 = il2cpp_unsafe_as_ref<bool>(L_10);
		int32_t L_12 = ___1_start;
		bool* L_13;
		L_13 = il2cpp_unsafe_add<bool,int32_t>(L_11, L_12);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9863659F38934C7B3CF0E727F433498C43070D2F_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		bool* L_2;
		L_2 = il2cpp_unsafe_as_ref<bool>((uint8_t*)L_1);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Span_1_get_Item_m27BAFEC8B3FFE7DEB25D60F10C9941C139B90E41_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		bool* L_5;
		L_5 = il2cpp_unsafe_add<bool,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Span_1_GetPinnableReference_mC68E9B3CD4F8680E06367DD4736FA06D7D3CA4F2_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool* L_1;
		L_1 = il2cpp_unsafe_as_ref<bool>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m519E41C1F421677B73AAFBBC520A75F377A7CF34_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_0 = __this->____pointer;
		V_0 = L_0;
		bool* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<bool>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m82EADA29C24D18F714A43323334596A4FCB9FD82_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	bool* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<bool>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		bool L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_4 = __this->____pointer;
		V_2 = L_4;
		bool* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_12 = __this->____pointer;
		V_2 = L_12;
		bool* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<bool>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		bool* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		bool* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		bool L_19 = ___0_value;
		*(bool*)L_18 = L_19;
		bool* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		bool* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		bool L_24 = ___0_value;
		*(bool*)L_23 = L_24;
		bool* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		bool* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		bool L_29 = ___0_value;
		*(bool*)L_28 = L_29;
		bool* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		bool* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		bool L_34 = ___0_value;
		*(bool*)L_33 = L_34;
		bool* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		bool* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		bool L_39 = ___0_value;
		*(bool*)L_38 = L_39;
		bool* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		bool* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		bool L_44 = ___0_value;
		*(bool*)L_43 = L_44;
		bool* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		bool* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		bool L_49 = ___0_value;
		*(bool*)L_48 = L_49;
		bool* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		bool* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		bool L_54 = ___0_value;
		*(bool*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		bool* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		bool* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		bool L_64 = ___0_value;
		*(bool*)L_63 = L_64;
		bool* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		bool* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		bool L_69 = ___0_value;
		*(bool*)L_68 = L_69;
		bool* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		bool* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		bool L_74 = ___0_value;
		*(bool*)L_73 = L_74;
		bool* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		bool* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		bool L_79 = ___0_value;
		*(bool*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		bool* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		bool* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<bool,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		bool L_85 = ___0_value;
		*(bool*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mD4A4E2B11E4B55D0E34818F92516CA8C73F66E52_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_2 = ___0_destination;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3 = L_2.____pointer;
		V_0 = L_3;
		bool* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_0 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m840B35C6072B9118C6B103D322BACAAE77E2F08B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_2 = ___0_destination;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_3 = L_2.____pointer;
		V_1 = L_3;
		bool* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_1 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_mD294DFFE07221746B3FDFAE65325FFF7523C842A_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_left, Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_4 = ___0_left;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = L_4.____pointer;
		V_0 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_7 = ___1_right;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_8 = L_7.____pointer;
		V_0 = L_8;
		bool* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 Span_1_op_Implicit_m532947D2F4A072CD15514EE6D890A44C2B4C465B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_0 = ___0_span;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1 = L_0.____pointer;
		V_0 = L_1;
		bool* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mF5B8BAB40C1B80B9B1A0921B31B2968310CB65A3_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_1 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_Slice_mF6D7367FEA695E2CE8E186FC9798415839735753_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_2 = __this->____pointer;
		V_0 = L_2;
		bool* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		bool* L_5;
		L_5 = il2cpp_unsafe_add<bool,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_Slice_m673F7A3E7082015E7E5AA80ACF267623570ABB84_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5 = __this->____pointer;
		V_0 = L_5;
		bool* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		bool* L_8;
		L_8 = il2cpp_unsafe_add<bool,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Span_1_ToArray_mFC04BEB2B94DC9AB1599B278616C046F62EA99C2_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1;
		L_1 = Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		bool* L_6;
		L_6 = il2cpp_unsafe_as_ref<bool>(L_5);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_7 = __this->____pointer;
		V_0 = L_7;
		bool* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(bool, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6C1A997DCFEFC3BA96EEB5E75FB8B54DF2D21198(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m55CEACD776C1B696BF7E0EEA57CA12538E5B6A93_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m1F00FAF1BC9554C7D07229B28319B50B119EAF21_gshared (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 Span_1_op_Implicit_m1F838ECD24613509CFE3CA0A82DD6F0762357A99_gshared (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2F8451EBCA1900A8FF93D17DF8177C41EAA2E94B_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___0_array, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		goto IL_0037;
	}

IL_0037:
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4;
		L_4 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>(L_3);
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1D68DA3C995B291B2A4E6045AE32252D77530ED1_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_11;
		L_11 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>(L_10);
		int32_t L_12 = ___1_start;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_13;
		L_13 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_11, L_12);
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7A5841E1E41FE87941B0108F82BB86231379DC86_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_2;
		L_2 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>((uint8_t*)L_1);
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC3D811BCA73C14AA673ADAB2E2CF39FE1385714B_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = ___0_ptr;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* Span_1_get_Item_m23EB68F027999B3A731DF8D6525D0D34EA9362F4_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_2 = __this->____pointer;
		V_0 = L_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_5;
		L_5 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* Span_1_GetPinnableReference_m14130DD0E4AB97B002DEA65B3F3AB37938EFDB80_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_1;
		L_1 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_2 = __this->____pointer;
		V_0 = L_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mF21E83BA9DC08D6C48FEECC39E4338B752B091F0_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_0 = __this->____pointer;
		V_0 = L_0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mCED8A4E9FEA8D8594A3867571BCF99B8C9298EE5_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_4 = __this->____pointer;
		V_2 = L_4;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_12 = __this->____pointer;
		V_2 = L_12;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_19 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_18 = L_19;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_24 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_23 = L_24;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_29 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_28 = L_29;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_34 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_33 = L_34;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_39 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_38 = L_39;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_44 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_43 = L_44;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_49 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_48 = L_49;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_54 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_64 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_63 = L_64;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_69 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_68 = L_69;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_74 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_73 = L_74;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_79 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_85 = ___0_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mB183FB8E4C4ACE66FA4B887B2C6C26A314B5E080_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_2 = ___0_destination;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_3 = L_2.____pointer;
		V_0 = L_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5 = __this->____pointer;
		V_0 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mACC4DE78CDB50F24DD23B186C7E8DC340220254A_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_2 = ___0_destination;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_3 = L_2.____pointer;
		V_1 = L_3;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_1));
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5 = __this->____pointer;
		V_1 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_m1E4FBF19B62F0C30ADDB5CEED260A2D15D4A81A2_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 ___0_left, Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_4 = ___0_left;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5 = L_4.____pointer;
		V_0 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_7 = ___1_right;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_8 = L_7.____pointer;
		V_0 = L_8;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 Span_1_op_Implicit_m0AA6AC1C800F0A73B2D20034416FF2F5F4806F90_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_0 = ___0_span;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_1 = L_0.____pointer;
		V_0 = L_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mB60BC31800C0877424E21575E45AE6C8AA50ADA6_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mD2D2EBB7EED4A99E548C43E4528340F8372063E7_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5 = __this->____pointer;
		V_1 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 Span_1_Slice_m5DF84A262FF00D41C01E47878D2B66EB18E9E7DF_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_2 = __this->____pointer;
		V_0 = L_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_5;
		L_5 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC3D811BCA73C14AA673ADAB2E2CF39FE1385714B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 Span_1_Slice_m1A08ECA0C3737BBD50983EF79197E8FF50E84E81_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5 = __this->____pointer;
		V_0 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8;
		L_8 = il2cpp_unsafe_add<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC3D811BCA73C14AA673ADAB2E2CF39FE1385714B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* Span_1_ToArray_mBBD4D2D1C13110607114AF4817753190558B3689_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_1;
		L_1 = Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_3 = (BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5*)(BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_6;
		L_6 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>(L_5);
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_7 = __this->____pointer;
		V_0 = L_7;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m4925E1D88272BE2E628F28AFFEC4FF09CC2EC647(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m7767F56E291A6E7D52299410A83F3650CBB5D46A_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mA98E83BB9F2E7AFC80DB8C1D8EA7ACBEE665D609_gshared (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 Span_1_op_Implicit_m296328C71F84E227BAAC66BCD8D4B6CCC4D0EF8B_gshared (BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___0_array, const RuntimeMethod* method) 
{
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_0 = ___0_array;
		Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m2F8451EBCA1900A8FF93D17DF8177C41EAA2E94B_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = ___1_start;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_add<uint8_t,int32_t>(L_11, L_12);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_1);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_get_Item_mA500F3AC2BE20A39F8425A1CCA39B704F44DC0E1_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m95E8A4114E1E52B458C21B864A802C4A07A96F15_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_0 = __this->____pointer;
		V_0 = L_0;
		uint8_t* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<uint8_t>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	uint8_t* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<uint8_t>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		uint8_t L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4 = __this->____pointer;
		V_2 = L_4;
		uint8_t* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_12 = __this->____pointer;
		V_2 = L_12;
		uint8_t* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<uint8_t>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		uint8_t* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		uint8_t L_19 = ___0_value;
		*(uint8_t*)L_18 = L_19;
		uint8_t* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		uint8_t* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		uint8_t L_24 = ___0_value;
		*(uint8_t*)L_23 = L_24;
		uint8_t* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		uint8_t L_29 = ___0_value;
		*(uint8_t*)L_28 = L_29;
		uint8_t* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		uint8_t* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		uint8_t L_34 = ___0_value;
		*(uint8_t*)L_33 = L_34;
		uint8_t* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		uint8_t* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		uint8_t L_39 = ___0_value;
		*(uint8_t*)L_38 = L_39;
		uint8_t* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		uint8_t* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		uint8_t L_44 = ___0_value;
		*(uint8_t*)L_43 = L_44;
		uint8_t* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		uint8_t* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		uint8_t L_49 = ___0_value;
		*(uint8_t*)L_48 = L_49;
		uint8_t* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		uint8_t* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		uint8_t L_54 = ___0_value;
		*(uint8_t*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		uint8_t* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		uint8_t* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		uint8_t L_64 = ___0_value;
		*(uint8_t*)L_63 = L_64;
		uint8_t* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		uint8_t L_69 = ___0_value;
		*(uint8_t*)L_68 = L_69;
		uint8_t* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		uint8_t* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		uint8_t L_74 = ___0_value;
		*(uint8_t*)L_73 = L_74;
		uint8_t* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		uint8_t* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		uint8_t L_79 = ___0_value;
		*(uint8_t*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		uint8_t* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		uint8_t* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<uint8_t,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		uint8_t L_85 = ___0_value;
		*(uint8_t*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mFD99196C62E0CE029A2E64ED0B0F4FEC623B9F56_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___0_destination;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = L_2.____pointer;
		V_1 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_mBB7F4722E6098C4202A57F3782309BD5CBBF2BF7_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_left, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4 = ___0_left;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = L_4.____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7 = ___1_right;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_8 = L_7.____pointer;
		V_0 = L_8;
		uint8_t* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0 = ___0_span;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1 = L_0.____pointer;
		V_0 = L_1;
		uint8_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m94E8AC193D974B79432BD6D8CC8AE7E7832AC6A4_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_1 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Span_1_ToArray_mF415F39478D842BDA5A27003F3B9D3903DCE24BF_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_7 = __this->____pointer;
		V_0 = L_7;
		uint8_t* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB1465EEEBE0A608FA51B29BC3F145F287AD04190(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m7F08055851C835FE3E76471A6015683E6CCBD980_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mAB5C55282F13372D4B32AFA20E3E2618CE417F61_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Il2CppChar* L_11;
		L_11 = il2cpp_unsafe_as_ref<Il2CppChar>(L_10);
		int32_t L_12 = ___1_start;
		Il2CppChar* L_13;
		L_13 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_11, L_12);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Il2CppChar* L_2;
		L_2 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_1);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_get_Item_mF2BC8531357665CFAEC613B2AE68EB588ED973E5_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Span_1_GetPinnableReference_m31DB483DD16D694AEBD26E1ECD9F03D3A5296CF7_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1D40175F89C9D3C30CE2E42C986374C1A4B8DB75_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_0 = __this->____pointer;
		V_0 = L_0;
		Il2CppChar* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Il2CppChar>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m13ADB57BBCF7684FF92630FACC729B10B9B6B254_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Il2CppChar* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Il2CppChar>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Il2CppChar L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_4 = __this->____pointer;
		V_2 = L_4;
		Il2CppChar* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_12 = __this->____pointer;
		V_2 = L_12;
		Il2CppChar* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Il2CppChar>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Il2CppChar* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Il2CppChar* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Il2CppChar L_19 = ___0_value;
		*(Il2CppChar*)L_18 = L_19;
		Il2CppChar* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Il2CppChar* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Il2CppChar L_24 = ___0_value;
		*(Il2CppChar*)L_23 = L_24;
		Il2CppChar* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Il2CppChar L_29 = ___0_value;
		*(Il2CppChar*)L_28 = L_29;
		Il2CppChar* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Il2CppChar* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Il2CppChar L_34 = ___0_value;
		*(Il2CppChar*)L_33 = L_34;
		Il2CppChar* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Il2CppChar* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Il2CppChar L_39 = ___0_value;
		*(Il2CppChar*)L_38 = L_39;
		Il2CppChar* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Il2CppChar* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Il2CppChar L_44 = ___0_value;
		*(Il2CppChar*)L_43 = L_44;
		Il2CppChar* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Il2CppChar* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Il2CppChar L_49 = ___0_value;
		*(Il2CppChar*)L_48 = L_49;
		Il2CppChar* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Il2CppChar* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Il2CppChar L_54 = ___0_value;
		*(Il2CppChar*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Il2CppChar* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Il2CppChar* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Il2CppChar L_64 = ___0_value;
		*(Il2CppChar*)L_63 = L_64;
		Il2CppChar* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Il2CppChar L_69 = ___0_value;
		*(Il2CppChar*)L_68 = L_69;
		Il2CppChar* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Il2CppChar* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Il2CppChar L_74 = ___0_value;
		*(Il2CppChar*)L_73 = L_74;
		Il2CppChar* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Il2CppChar* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Il2CppChar L_79 = ___0_value;
		*(Il2CppChar*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Il2CppChar* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Il2CppChar* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Il2CppChar,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Il2CppChar L_85 = ___0_value;
		*(Il2CppChar*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7BB0A9984004C444974C7F111CCAD6D85325A15E_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m25ED56B31CC4F4DBC734E898741037AADC8806F8_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___0_destination;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = L_2.____pointer;
		V_1 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_m28C2010034F8CAED9B8F15E113BB7F69C390B7DE_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_left, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_4 = ___0_left;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = L_4.____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_7 = ___1_right;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_8 = L_7.____pointer;
		V_0 = L_8;
		Il2CppChar* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___0_span;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1 = L_0.____pointer;
		V_0 = L_1;
		Il2CppChar* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m12316C6CDC05E2F49EA4BDAD78FD7F1718E6E980_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_1 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Span_1_ToArray_m3403E698018738391BF349D71C3B53A6942E53DC_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1;
		L_1 = Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Il2CppChar* L_6;
		L_6 = il2cpp_unsafe_as_ref<Il2CppChar>(L_5);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_7 = __this->____pointer;
		V_0 = L_7;
		Il2CppChar* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m62AF071D7F91DFC9A4D8B847D6A4472B820B5446(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mC3849E0C0D3F56F6E60A6CF94A829B5671286935_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m3EC9972281C0F59EB1D5E884FA5BD061EEE5298B_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0037;
	}

IL_0037:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_3);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m61CB4E239F4B8535AE2EB854BD18DDFC1142FD07_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11;
		L_11 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_10);
		int32_t L_12 = ___1_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13;
		L_13 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_11, L_12);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m03647096ABFA9C361BD608B88E888E6D24BD45B6_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2;
		L_2 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>((uint8_t*)L_1);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* Span_1_get_Item_m52CBA5BCE5D91D266DC53BC8CAA58B6B838758C9_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* Span_1_GetPinnableReference_mEFCAEA30D41DF35EEA06996BF69E98951950937B_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1;
		L_1 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mCB7BFD6347A5FC9F5C98881FBB6EED05DC7CEAFB_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_0 = __this->____pointer;
		V_0 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m179EE62D8B2DFC60ADF134F7DF0633D7949836EE_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_4 = __this->____pointer;
		V_2 = L_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_12 = __this->____pointer;
		V_2 = L_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_18 = L_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_23 = L_24;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_28 = L_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_33 = L_34;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_38 = L_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_43 = L_44;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_48 = L_49;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_63 = L_64;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_68 = L_69;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_73 = L_74;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_85 = ___0_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m312B7E6091A77C90731BB4B3B0F9013A0380E8FE_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_2 = ___0_destination;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3 = L_2.____pointer;
		V_0 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_0 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m222A33CADBBA4AE2718BA2E3FB364B9595A83E5E_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_2 = ___0_destination;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_3 = L_2.____pointer;
		V_1 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_1 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_m866204AA5AC0CE7CE2966B11DCA60889E493030C_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_left, Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_4 = ___0_left;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = L_4.____pointer;
		V_0 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_7 = ___1_right;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_8 = L_7.____pointer;
		V_0 = L_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 Span_1_op_Implicit_m37C59BB49FE22493B2449536D2487DC02E45B376_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_0 = ___0_span;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1 = L_0.____pointer;
		V_0 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mAF2DA66DEE0290DEFDE874C1F418EF5AEB17E8E2_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_1 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_Slice_m0348A44E5418C052C9535570A1DE71BB4AE61E71_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_2 = __this->____pointer;
		V_0 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5;
		L_5 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_Slice_mE5AD8E826B11284EBF2D856E2D337D31DE34D25B_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5 = __this->____pointer;
		V_0 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8;
		L_8 = il2cpp_unsafe_add<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Span_1_ToArray_m6F8FFA52461A0D5172130CD6B6AF02461326AF5C_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1;
		L_1 = Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6;
		L_6 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_5);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_7 = __this->____pointer;
		V_0 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m3B15D4D61932A340BAAA5BE6E8D419605D3692E6(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mB55BD6134EA35A11485DCF408D6D5FFC0BD3F533_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m6962C2A5B1AD4080D5573C23E91A19EB6D728CF7_gshared (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 Span_1_op_Implicit_m9C1413FB618ED0B2E091F5EF63CE03A4C0AEC1A2_gshared (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		goto IL_0037;
	}

IL_0037:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_3);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7F27D45B1D68DA5173A121174DC1B8EEF1D43D5E_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_11;
		L_11 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_10);
		int32_t L_12 = ___1_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_13;
		L_13 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_11, L_12);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m3F2D12A6DE9449A7F172A8190B51721D3533512A_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_2;
		L_2 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>((uint8_t*)L_1);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_ptr;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* Span_1_get_Item_mCE0F47FEF30AFC052EE646724CF0CCA095E61295_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_2 = __this->____pointer;
		V_0 = L_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5;
		L_5 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* Span_1_GetPinnableReference_m123DCF19CBBED00AF2DA4DF6BB89335CFBAD4285_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_1;
		L_1 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_2 = __this->____pointer;
		V_0 = L_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m44937991C3C572BAA1C7D8B220198A6D73296EFD_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_0 = __this->____pointer;
		V_0 = L_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mC1DCF00C88E61AB4C769979DAB36C6AC2FD7AC8F_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_4 = __this->____pointer;
		V_2 = L_4;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_12 = __this->____pointer;
		V_2 = L_12;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_19 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_18 = L_19;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_23 = L_24;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_29 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_28 = L_29;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_34 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_33 = L_34;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_39 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_38 = L_39;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_44 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_43 = L_44;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_49 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_48 = L_49;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_54 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_64 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_63 = L_64;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_69 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_68 = L_69;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_74 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_73 = L_74;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_79 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_85 = ___0_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m9D9E0B986FEB6121776F6E72762BFA348872D32D_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_2 = ___0_destination;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3 = L_2.____pointer;
		V_0 = L_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_0 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m5751351E4F7B9348F5F42D82F5219BC76C16AEAF_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_2 = ___0_destination;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_3 = L_2.____pointer;
		V_1 = L_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_1));
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_1 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_mA3B44B2F006C571D051EA88DAF9793F2FBC10617_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_left, Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_4 = ___0_left;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = L_4.____pointer;
		V_0 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_7 = ___1_right;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_8 = L_7.____pointer;
		V_0 = L_8;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC Span_1_op_Implicit_mF3E148EA33236C003117DE38E62DE33D938EC163_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_0 = ___0_span;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1 = L_0.____pointer;
		V_0 = L_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mECADFF7BF87B76EA399CEE34F582D9F58876B9C6_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_1 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D Span_1_Slice_m7D6809980EE719FEF240C5A1F91ED1F8A49438D6_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_2 = __this->____pointer;
		V_0 = L_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5;
		L_5 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D Span_1_Slice_mC32C0950E410BE1C194BBA46C50AD868A23A25B8_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5 = __this->____pointer;
		V_0 = L_5;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_8;
		L_8 = il2cpp_unsafe_add<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Span_1_ToArray_mC46741F43EE2A7AF5495CB3595312D25F9E437E5_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_1;
		L_1 = Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_6;
		L_6 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_5);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_7 = __this->____pointer;
		V_0 = L_7;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mA65CAF282F03FD4DB46666E2C44C22E3D0035A68(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m1BC77A3C37539F0BD54EC0D5E1062B0612D351CA_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mE5B1E8B27CA89868BA83DBD5092B62AB77DF4565_gshared (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D Span_1_op_Implicit_m8E6421CEC98AFF0BFB7F1C0A6796C55428A58195_gshared (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) 
{
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9663565B53FD6471C5AADFE1AEC8D8CE458AA2E6_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ___0_array, const RuntimeMethod* method) 
{
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		goto IL_0037;
	}

IL_0037:
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_4;
		L_4 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>(L_3);
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m65D841CCEACC7DFACDE270E2516678C77B6E19C0_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_11;
		L_11 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>(L_10);
		int32_t L_12 = ___1_start;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_13;
		L_13 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_11, L_12);
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m58EA7364D9006EFE47AB4C10450C598698B53280_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_2;
		L_2 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>((uint8_t*)L_1);
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m747EE0A1A7E520F51D231F9185826EBBB38823E4_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_0 = ___0_ptr;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* Span_1_get_Item_mFA8662007D539CAA20FD6DC82D0540CFE9FAFB01_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_2 = __this->____pointer;
		V_0 = L_2;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_5;
		L_5 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* Span_1_GetPinnableReference_m5891F891A8FB9A23695E3ADD6D82E20EE631D6EA_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_1;
		L_1 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_2 = __this->____pointer;
		V_0 = L_2;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mD9A4FEA4FEDA8274A9E24DC7A4537BDE22AC51B4_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_0 = __this->____pointer;
		V_0 = L_0;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m74A05D6688A951EDF4A966DED67F6D5D55224268_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_4 = __this->____pointer;
		V_2 = L_4;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_12 = __this->____pointer;
		V_2 = L_12;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_19 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_18 = L_19;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_24 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_23 = L_24;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_29 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_28 = L_29;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_34 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_33 = L_34;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_39 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_38 = L_39;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_44 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_43 = L_44;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_49 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_48 = L_49;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_54 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_64 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_63 = L_64;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_69 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_68 = L_69;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_74 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_73 = L_74;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_79 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_85 = ___0_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m0B9F2B78E505DCD0B7693171D9843F0F2535AEB8_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_2 = ___0_destination;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_3 = L_2.____pointer;
		V_0 = L_3;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5 = __this->____pointer;
		V_0 = L_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m61D35B1EDB0CD06B7ECB1E1CC09E95CEB8D13453_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_2 = ___0_destination;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_3 = L_2.____pointer;
		V_1 = L_3;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_1));
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5 = __this->____pointer;
		V_1 = L_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_m51E6F8AE3034C1F44E4EBDC9461140828FF557C1_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 ___0_left, Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_4 = ___0_left;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5 = L_4.____pointer;
		V_0 = L_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_7 = ___1_right;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_8 = L_7.____pointer;
		V_0 = L_8;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B Span_1_op_Implicit_mF511F65BFD353CA0710D6A1B3CC385B263D6E44C_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_0 = ___0_span;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_1 = L_0.____pointer;
		V_0 = L_1;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m3263AAE2466F33D0150BF7B8223568108EB82C0B_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m445A1666A44A3CB9E66B1059200EA8E2220396ED_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5 = __this->____pointer;
		V_1 = L_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 Span_1_Slice_m7E3DAFD6E26C9A20222BED586EA77F3256111156_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_2 = __this->____pointer;
		V_0 = L_2;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_5;
		L_5 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m747EE0A1A7E520F51D231F9185826EBBB38823E4_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 Span_1_Slice_m32983825BD168459560E7EE42CFBE82DB8BD3BCD_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5 = __this->____pointer;
		V_0 = L_5;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_8;
		L_8 = il2cpp_unsafe_add<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m747EE0A1A7E520F51D231F9185826EBBB38823E4_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* Span_1_ToArray_m6810605A33E8361A8DB9502C0E23DD592FD7A42C_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, const RuntimeMethod* method) 
{
	ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_1;
		L_1 = Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_3 = (ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A*)(ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_6;
		L_6 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>(L_5);
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_7 = __this->____pointer;
		V_0 = L_7;
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m7B231E78B8FBBF3128AC7D5D9AA1EF250AB8BBB7(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mE0BCC2D2C2DF044FDD6D071354544364548644B8_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m659B71406272609DB20B939B0EEF19BAAD899169_gshared (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 Span_1_op_Implicit_m5FCE197A10FB31A015B11F1B520B4659C73CA2D3_gshared (ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ___0_array, const RuntimeMethod* method) 
{
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_0 = ___0_array;
		Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m9663565B53FD6471C5AADFE1AEC8D8CE458AA2E6_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE396EB49F11B34D41818F29E84D8865E2003B251_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* ___0_array, const RuntimeMethod* method) 
{
	ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1));
		goto IL_0037;
	}

IL_0037:
	{
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>(L_3);
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mBE8FABAA24DF826BE1E82A4AB4423495327BCB0A_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_11;
		L_11 = il2cpp_unsafe_as_ref<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>(L_10);
		int32_t L_12 = ___1_start;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_13;
		L_13 = il2cpp_unsafe_add<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,int32_t>(L_11, L_12);
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m08D63DAF47E1B9EAF1763F6F0014D3DB2520FAA6_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_2;
		L_2 = il2cpp_unsafe_as_ref<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>((uint8_t*)L_1);
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1910D0E44CCD92AD908E1D5F61FFF27ADFE1EFAD_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_0 = ___0_ptr;
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* Span_1_get_Item_mB28D2A5E8933AF3C4FBD8A9A71922A169C115575_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_2 = __this->____pointer;
		V_0 = L_2;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_5;
		L_5 = il2cpp_unsafe_add<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* Span_1_GetPinnableReference_mD943FE6E9066C8C38051A78BD45AB387012FB0B3_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_1;
		L_1 = il2cpp_unsafe_as_ref<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_2 = __this->____pointer;
		V_0 = L_2;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m6FB345A0D9938AE254BE078AB5674E14B35BA2B0_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_0 = __this->____pointer;
		V_0 = L_0;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m693268106C25B6C11C5114CA1B213FCC66383737_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_4 = __this->____pointer;
		V_2 = L_4;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_12 = __this->____pointer;
		V_2 = L_12;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_19 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_18 = L_19;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_24 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_23 = L_24;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_29 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_28 = L_29;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_34 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_33 = L_34;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_39 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_38 = L_39;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_44 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_43 = L_44;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_49 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_48 = L_49;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_54 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_64 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_63 = L_64;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_69 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_68 = L_69;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_74 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_73 = L_74;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_79 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_85 = ___0_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m9F453E565E11AE491CA47DC1FC6166FCA11A0BA9_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3B50FB2CF29A0E7C0C8B69E4E5A72D75883EBC4B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_2 = ___0_destination;
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_3 = L_2.____pointer;
		V_0 = L_3;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_5 = __this->____pointer;
		V_0 = L_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m7FE4C465E3CD79439D013535C7654D757BF138FC_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m3B50FB2CF29A0E7C0C8B69E4E5A72D75883EBC4B_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_2 = ___0_destination;
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_3 = L_2.____pointer;
		V_1 = L_3;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_1));
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_5 = __this->____pointer;
		V_1 = L_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_m5758E6F40516C75E210474B6F78A5E593193851F_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 ___0_left, Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_4 = ___0_left;
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_5 = L_4.____pointer;
		V_0 = L_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_7 = ___1_right;
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_8 = L_7.____pointer;
		V_0 = L_8;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A Span_1_op_Implicit_mE518F0B4D759B13BED4E77F67B8A84AE65EE3A55_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_0 = ___0_span;
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_1 = L_0.____pointer;
		V_0 = L_1;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mDB9E4DFF0687E0A5405FF4F6387379524B1B07AB_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m4B7F2DF1F6F7198DDFDEB08A1EA7555F079D706D_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_5 = __this->____pointer;
		V_1 = L_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 Span_1_Slice_m453B02BE47BECE17D1067E062DB0CF528C86058D_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_2 = __this->____pointer;
		V_0 = L_2;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_5;
		L_5 = il2cpp_unsafe_add<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m1910D0E44CCD92AD908E1D5F61FFF27ADFE1EFAD_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 Span_1_Slice_m8FA4A766C94410882272AD62143536F8CFD55DFB_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_5 = __this->____pointer;
		V_0 = L_5;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_8;
		L_8 = il2cpp_unsafe_add<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m1910D0E44CCD92AD908E1D5F61FFF27ADFE1EFAD_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* Span_1_ToArray_mCFA7DC986EFD8E702DBF3D8E14C955ED5B3D18EF_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, const RuntimeMethod* method) 
{
	ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_1;
		L_1 = Array_Empty_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m164EDF2519D24430C10F8BB106ADB252BF225C26_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_3 = (ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2*)(ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_6;
		L_6 = il2cpp_unsafe_as_ref<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>(L_5);
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_7 = __this->____pointer;
		V_0 = L_7;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m747B7D7DC0AA466783F69D3676EC5EE854D08D52(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m3B50FB2CF29A0E7C0C8B69E4E5A72D75883EBC4B_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m3F0D2AD3665B8971808A96CAEC224BCCF9B01C36_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m4E876D3B694C51A92940AB4174BDA10EAF3FBB1E_gshared (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 Span_1_op_Implicit_mD040C04412B7ECE954FC223604A61BBEA4E46BD6_gshared (ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* ___0_array, const RuntimeMethod* method) 
{
	{
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_0 = ___0_array;
		Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mE396EB49F11B34D41818F29E84D8865E2003B251_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m8E37FAEE50C1A5ED9D35A2445208BE080A64E81B_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* ___0_array, const RuntimeMethod* method) 
{
	CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8));
		goto IL_0037;
	}

IL_0037:
	{
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_4;
		L_4 = il2cpp_unsafe_as_ref<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>(L_3);
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m279630D61B4FD19C357BFE24828799A0F53FB833_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_11;
		L_11 = il2cpp_unsafe_as_ref<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>(L_10);
		int32_t L_12 = ___1_start;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_13;
		L_13 = il2cpp_unsafe_add<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,int32_t>(L_11, L_12);
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCE4D0D96FBB9574861B3E41620A6427750ADB530_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_2;
		L_2 = il2cpp_unsafe_as_ref<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>((uint8_t*)L_1);
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m3BE0AC61B8202E191A699FD2E62859E8C4367CB8_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_0 = ___0_ptr;
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* Span_1_get_Item_m182E6ADC6CB56C60562209498D9E1AB6D62B8167_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_2 = __this->____pointer;
		V_0 = L_2;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_5;
		L_5 = il2cpp_unsafe_add<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* Span_1_GetPinnableReference_m13B2213CC4B653C138F3C0926B0DD6ECABD16A52_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_1;
		L_1 = il2cpp_unsafe_as_ref<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_2 = __this->____pointer;
		V_0 = L_2;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mDB7B8E56891449A81330487BD48F778B33AF946E_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_0 = __this->____pointer;
		V_0 = L_0;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m48E1812228D53C7E67FCDD1E3E4A69A584E88D20_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_4 = __this->____pointer;
		V_2 = L_4;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_12 = __this->____pointer;
		V_2 = L_12;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_19 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_18 = L_19;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_24 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_23 = L_24;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_29 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_28 = L_29;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_34 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_33 = L_34;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_39 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_38 = L_39;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_44 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_43 = L_44;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_49 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_48 = L_49;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_54 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_64 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_63 = L_64;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_69 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_68 = L_69;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_74 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_73 = L_74;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_79 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 L_85 = ___0_value;
		*(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m71509FBD20D15BC751A3A46AA7D04EA3A0267FD1_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD8B694DDD50485878B197BD97C4848FA0E770DCD_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_2 = ___0_destination;
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_3 = L_2.____pointer;
		V_0 = L_3;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_5 = __this->____pointer;
		V_0 = L_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mC3AD1385CB0C2E203B004D394FCBE2A3D3F4061F_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mD8B694DDD50485878B197BD97C4848FA0E770DCD_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_2 = ___0_destination;
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_3 = L_2.____pointer;
		V_1 = L_3;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_1));
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_5 = __this->____pointer;
		V_1 = L_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_m4A055C482ED676DD8108D855880D4C0C1C874D95_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 ___0_left, Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_4 = ___0_left;
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_5 = L_4.____pointer;
		V_0 = L_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_7 = ___1_right;
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_8 = L_7.____pointer;
		V_0 = L_8;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA Span_1_op_Implicit_m77682795D28913DA710825C3EE4B326FD7E9B76E_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_0 = ___0_span;
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_1 = L_0.____pointer;
		V_0 = L_1;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m75A7463F5588DB7F45AC0CE204FFB188419EC066_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mF94E90FCA8A099ED8F8F9327D5FA8AFC3A86EABF_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_5 = __this->____pointer;
		V_1 = L_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 Span_1_Slice_m30DFE85498FF9D0B01056B76A551DB31990447CB_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_2 = __this->____pointer;
		V_0 = L_2;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_5;
		L_5 = il2cpp_unsafe_add<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m3BE0AC61B8202E191A699FD2E62859E8C4367CB8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 Span_1_Slice_mC8105D719B3581D4BB98C3E9538C6E02788C177A_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_5 = __this->____pointer;
		V_0 = L_5;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_8;
		L_8 = il2cpp_unsafe_add<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m3BE0AC61B8202E191A699FD2E62859E8C4367CB8_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* Span_1_ToArray_m5B9F89B0598734DFC214CA570E2202A51EF876C0_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, const RuntimeMethod* method) 
{
	ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_1;
		L_1 = Array_Empty_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m636107AFEDC2888AAD9A190C5FCB115D4483F86F_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_3 = (CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5*)(CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_6;
		L_6 = il2cpp_unsafe_as_ref<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>(L_5);
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_7 = __this->____pointer;
		V_0 = L_7;
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m8A5B65BF262A2B1C988311D13733E08E197C8A03(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD8B694DDD50485878B197BD97C4848FA0E770DCD_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m6911C4B5771EDE9072D3DE07376FE8E0F2214B55_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m13D365E76EA4C6F714EA3681F941B39FDBFFA391_gshared (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 Span_1_op_Implicit_m9AE3558D556438BD85DDDEABB96BBD162C45C60F_gshared (CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* ___0_array, const RuntimeMethod* method) 
{
	{
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_0 = ___0_array;
		Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m8E37FAEE50C1A5ED9D35A2445208BE080A64E81B_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m59E7D308EB85B51BA4162E76EE21E5568E986970_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ___0_array, const RuntimeMethod* method) 
{
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0));
		goto IL_0037;
	}

IL_0037:
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_4;
		L_4 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>(L_3);
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m606517B73FE4D624EC119A86BE3E06F24C19893E_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_11;
		L_11 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>(L_10);
		int32_t L_12 = ___1_start;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_13;
		L_13 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_11, L_12);
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE2FA83FC81F71DF9F7FF270D9B9F0BA6E9682CC6_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_2;
		L_2 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>((uint8_t*)L_1);
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m938DD54F3773C27DD1393A85BB94346047AD1DA5_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_0 = ___0_ptr;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* Span_1_get_Item_m0DD0A598D8E775F0F40CA173448E867F3C4D7184_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_2 = __this->____pointer;
		V_0 = L_2;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_5;
		L_5 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* Span_1_GetPinnableReference_mF57B8ED4367F2403F2F7265D07FDEDE55D2747B7_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_1;
		L_1 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_2 = __this->____pointer;
		V_0 = L_2;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m36960EB93F65E71DED9E56FBCCD6DE03D299B416_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_0 = __this->____pointer;
		V_0 = L_0;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mADB4236876AE9BE883BE402317D8B5A6D2FDB581_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_4 = __this->____pointer;
		V_2 = L_4;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_12 = __this->____pointer;
		V_2 = L_12;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_19 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_18 = L_19;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_24 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_23 = L_24;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_29 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_28 = L_29;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_34 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_33 = L_34;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_39 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_38 = L_39;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_44 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_43 = L_44;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_49 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_48 = L_49;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_54 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_64 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_63 = L_64;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_69 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_68 = L_69;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_74 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_73 = L_74;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_79 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_85 = ___0_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m80A1636F770BC85161F858E9C9CB7D9E3CD10285_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_2 = ___0_destination;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_3 = L_2.____pointer;
		V_0 = L_3;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5 = __this->____pointer;
		V_0 = L_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mECF82110A92F5DE6D13C143A65D6479EF6EB3E9B_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_2 = ___0_destination;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_3 = L_2.____pointer;
		V_1 = L_3;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_1));
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5 = __this->____pointer;
		V_1 = L_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_m23015D42F6DD1BFF08171E3FE5559A221B5F342D_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 ___0_left, Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_4 = ___0_left;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5 = L_4.____pointer;
		V_0 = L_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_7 = ___1_right;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_8 = L_7.____pointer;
		V_0 = L_8;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF Span_1_op_Implicit_m50C31B4C2B83D2776A89C2431F1B8CA12A87B786_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_0 = ___0_span;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_1 = L_0.____pointer;
		V_0 = L_1;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m7515BCC9EAB305B335A968E684B597A1FC9A5F24_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m58DBA8626A402C6462C2DAC716BBE2A0D7132E27_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5 = __this->____pointer;
		V_1 = L_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 Span_1_Slice_m63DB5DCB9F9F920F70F16F0D2BF971E736B91419_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_2 = __this->____pointer;
		V_0 = L_2;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_5;
		L_5 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m938DD54F3773C27DD1393A85BB94346047AD1DA5_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 Span_1_Slice_mFBBEF6E4AC4F1A5960049A4F244F9FF9D85F7767_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5 = __this->____pointer;
		V_0 = L_5;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_8;
		L_8 = il2cpp_unsafe_add<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m938DD54F3773C27DD1393A85BB94346047AD1DA5_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* Span_1_ToArray_mA2628E72CF7312719A67C20F19743C12093A3454_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, const RuntimeMethod* method) 
{
	ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_1;
		L_1 = Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_3 = (CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61*)(CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_6;
		L_6 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>(L_5);
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_7 = __this->____pointer;
		V_0 = L_7;
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m9A4B5780CB8BC1ACD63C193EC68D5E217CDBAC80(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m81034FE9CEB9BF65700774B1C6670020FF2F1E91_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m224B624467E11482C2F71CD49F9A224DFDF521E6_gshared (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 Span_1_op_Implicit_mEE5E639E63941E7CD6CF6C70F043A3D749BBF49E_gshared (CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ___0_array, const RuntimeMethod* method) 
{
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_0 = ___0_array;
		Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m59E7D308EB85B51BA4162E76EE21E5568E986970_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7F574E10BF82902E6DFCF264F060076901BC34C0_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* ___0_array, const RuntimeMethod* method) 
{
	DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5));
		goto IL_0037;
	}

IL_0037:
	{
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_4;
		L_4 = il2cpp_unsafe_as_ref<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>(L_3);
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF67C4C6EFA782F05C69F6BB6A886AB9C9C10BDC7_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_11;
		L_11 = il2cpp_unsafe_as_ref<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>(L_10);
		int32_t L_12 = ___1_start;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_13;
		L_13 = il2cpp_unsafe_add<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,int32_t>(L_11, L_12);
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m228D147D941B814F1329A67DDFDE2EEB431FB518_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_2;
		L_2 = il2cpp_unsafe_as_ref<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>((uint8_t*)L_1);
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m52DDC62CEE4B57B1A97604C59D91F867D9C9472B_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_0 = ___0_ptr;
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* Span_1_get_Item_m11AE8F8BE99DFC276141A8E87744C2BA1D969DEE_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_2 = __this->____pointer;
		V_0 = L_2;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_5;
		L_5 = il2cpp_unsafe_add<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* Span_1_GetPinnableReference_m6A061B872A1AAF8703C8EA44458E89148D848BEA_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_1;
		L_1 = il2cpp_unsafe_as_ref<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_2 = __this->____pointer;
		V_0 = L_2;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m8D5E95ECEAAA5A95DA84A54805C724EC84151053_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_0 = __this->____pointer;
		V_0 = L_0;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m45952C7D9651153521D16CAAF7F702BE54191BD3_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_4 = __this->____pointer;
		V_2 = L_4;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_12 = __this->____pointer;
		V_2 = L_12;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_19 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_18 = L_19;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_24 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_23 = L_24;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_29 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_28 = L_29;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_34 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_33 = L_34;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_39 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_38 = L_39;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_44 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_43 = L_44;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_49 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_48 = L_49;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_54 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_64 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_63 = L_64;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_69 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_68 = L_69;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_74 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_73 = L_74;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_79 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_85 = ___0_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m816C9F3553EB12A6072B1A1D2593A6D01330556C_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFF4419EF107B2F1CD3364357F9723EAC96433F03_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_2 = ___0_destination;
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_3 = L_2.____pointer;
		V_0 = L_3;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_5 = __this->____pointer;
		V_0 = L_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mADD62B12032BFD1A15E6D36DA8A3F1AE31C2D126_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFF4419EF107B2F1CD3364357F9723EAC96433F03_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_2 = ___0_destination;
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_3 = L_2.____pointer;
		V_1 = L_3;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_1));
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_5 = __this->____pointer;
		V_1 = L_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_mC46E5FE82F83E4F4F9A278DA7B29DEAFE4208D4A_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 ___0_left, Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_4 = ___0_left;
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_5 = L_4.____pointer;
		V_0 = L_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_7 = ___1_right;
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_8 = L_7.____pointer;
		V_0 = L_8;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B Span_1_op_Implicit_m5C75F80A5B0F30B448701B42F47880BE6B13AA49_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_0 = ___0_span;
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_1 = L_0.____pointer;
		V_0 = L_1;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_mB6153B16E29314D6497048CA9F509CF21C277F71_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m2923E7AA319022EBFDDC405189D77B50BBE47C9C_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_5 = __this->____pointer;
		V_1 = L_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 Span_1_Slice_m4D9B63EFD3EDBBCDDC506B2A4EE7255AE98E716E_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_2 = __this->____pointer;
		V_0 = L_2;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_5;
		L_5 = il2cpp_unsafe_add<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m52DDC62CEE4B57B1A97604C59D91F867D9C9472B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 Span_1_Slice_m572F7CB4090B053E5DB995EE2207BD30E316B1DB_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_5 = __this->____pointer;
		V_0 = L_5;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_8;
		L_8 = il2cpp_unsafe_add<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m52DDC62CEE4B57B1A97604C59D91F867D9C9472B_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* Span_1_ToArray_m65E63225ABF6D547FE1422B368B4137536104EC3_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, const RuntimeMethod* method) 
{
	ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_1;
		L_1 = Array_Empty_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m05A4DA3A4ACD6D784909779870EE466DF7778EC7_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_3 = (DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB*)(DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_6;
		L_6 = il2cpp_unsafe_as_ref<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>(L_5);
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_7 = __this->____pointer;
		V_0 = L_7;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mDF1CDB2973A50B932ED2E72CC7A57E75C7FCAB54(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFF4419EF107B2F1CD3364357F9723EAC96433F03_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m9D8B811F0101BC86E8D92ADD191281F338CD607B_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mB74E5CF070738CD4752565624A8C10667F0B8781_gshared (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 Span_1_op_Implicit_m0118B6AB1BE7F6DDBA033389286B1B23268ED8CC_gshared (DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* ___0_array, const RuntimeMethod* method) 
{
	{
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_0 = ___0_array;
		Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m7F574E10BF82902E6DFCF264F060076901BC34C0_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE8B22E5931866F928A71F99AF44F27432C1E57BB_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, const RuntimeMethod* method) 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		goto IL_0037;
	}

IL_0037:
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_4;
		L_4 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>(L_3);
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC3108D8C62937B22FE9F1DAA907813880E62F409_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_11;
		L_11 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>(L_10);
		int32_t L_12 = ___1_start;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_13;
		L_13 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_11, L_12);
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m812948FA39E42C52AB5CBC520ADB971680EB74AF_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_2;
		L_2 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>((uint8_t*)L_1);
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE1AF7117E421D34F536A857B1313F4E6CA659AA0_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_ptr;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* Span_1_get_Item_m969001869D2ACE9B28B4FA5B89711830F56F00AC_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_2 = __this->____pointer;
		V_0 = L_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_5;
		L_5 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* Span_1_GetPinnableReference_m654A387BD1517F6364C21F5AAA696273CBD2E925_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_1;
		L_1 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_2 = __this->____pointer;
		V_0 = L_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE0078119A5207D4667E23A54BCF30D4F2FFB7695_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_0 = __this->____pointer;
		V_0 = L_0;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mD6598B749E77E16FF38246CFCB5B6ED5EEC65D50_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_4 = __this->____pointer;
		V_2 = L_4;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_12 = __this->____pointer;
		V_2 = L_12;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_19 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_18 = L_19;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_24 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_23 = L_24;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_29 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_28 = L_29;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_34 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_33 = L_34;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_39 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_38 = L_39;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_44 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_43 = L_44;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_49 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_48 = L_49;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_54 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_64 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_63 = L_64;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_69 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_68 = L_69;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_74 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_73 = L_74;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_79 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_85 = ___0_value;
		*(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m337C921BC41030BC7DFE341E2CC2D86BABC29BCB_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_2 = ___0_destination;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_3 = L_2.____pointer;
		V_0 = L_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5 = __this->____pointer;
		V_0 = L_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mC6F2222AC1597D8895D8B2B7023DFFCCBA8E8375_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_2 = ___0_destination;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_3 = L_2.____pointer;
		V_1 = L_3;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_1));
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5 = __this->____pointer;
		V_1 = L_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_m17A6413C8DE4AEC17C994CDAEB3DFF9D99D800AE_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A ___0_left, Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_4 = ___0_left;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5 = L_4.____pointer;
		V_0 = L_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_7 = ___1_right;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_8 = L_7.____pointer;
		V_0 = L_8;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 Span_1_op_Implicit_m0FD1C89492566376ACF45EA3AF02C57DB9DED785_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_0 = ___0_span;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_1 = L_0.____pointer;
		V_0 = L_1;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m1F035A6038B22EE2B7A2E6000536EFB888AC4043_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mC85B176004AB9AA83A57F0CF97F92BAACB7B5DE2_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5 = __this->____pointer;
		V_1 = L_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A Span_1_Slice_mB2995241B40B3F5BE0B9E524F7141D13167830D0_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_2 = __this->____pointer;
		V_0 = L_2;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_5;
		L_5 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mE1AF7117E421D34F536A857B1313F4E6CA659AA0_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A Span_1_Slice_m4002A4846F635F7F39C0017C5DDA05B895FB6BC2_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5 = __this->____pointer;
		V_0 = L_5;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_8;
		L_8 = il2cpp_unsafe_add<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mE1AF7117E421D34F536A857B1313F4E6CA659AA0_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* Span_1_ToArray_m44F304900CA6CFABCE27B15C2786CF1DC10DCC31_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, const RuntimeMethod* method) 
{
	ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_1;
		L_1 = Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_3 = (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)(EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_6;
		L_6 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>(L_5);
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_7 = __this->____pointer;
		V_0 = L_7;
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8D3BF3FF1317BAF44B55A14301469F3AB0E60900(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mAA956BB686B587E8B134BFC02D72017F1EE31A9B_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m7DA98562F71778D761DFF4186D41227E0056B7FF_gshared (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A Span_1_op_Implicit_mD07DE95648E10AB35DDD4922E0C9DE477ABD478C_gshared (EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, const RuntimeMethod* method) 
{
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = ___0_array;
		Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mE8B22E5931866F928A71F99AF44F27432C1E57BB_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
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
// Method Definition Index: 2393
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m87D77C7F9C35BB06EAF4BC1D311C7F8F6F6FC20B_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* ___0_array, const RuntimeMethod* method) 
{
	GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061));
		goto IL_0037;
	}

IL_0037:
	{
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_4;
		L_4 = il2cpp_unsafe_as_ref<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>(L_3);
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2394
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5024DBC67E5B2F96B3812FF7E6440BBAB9EB9DCB_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_5 = ___0_array;
		NullCheck(L_5);
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = ___2_length;
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_7 = ___0_array;
		NullCheck(L_7);
		int32_t L_8 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_9 = ___0_array;
		NullCheck((RuntimeArray*)L_9);
		uint8_t* L_10;
		L_10 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_9, NULL);
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_11;
		L_11 = il2cpp_unsafe_as_ref<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>(L_10);
		int32_t L_12 = ___1_start;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_13;
		L_13 = il2cpp_unsafe_add<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,int32_t>(L_11, L_12);
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_14;
		memset((&L_14), 0, sizeof(L_14));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_14), L_13);
		__this->____pointer = L_14;
		int32_t L_15 = ___2_length;
		__this->____length = L_15;
		return;
	}
}
// Method Definition Index: 2395
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mFCF2917399BA2F09687DB016B0EFAC5D24FD308E_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_2;
		L_2 = il2cpp_unsafe_as_ref<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>((uint8_t*)L_1);
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m93D87E73F48BD2BD9F2EE7F31B0161782474BBFE_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_0 = ___0_ptr;
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2397
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* Span_1_get_Item_mA717F5983954FC9D8DCDE4C7310C1040127B7879_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_2 = __this->____pointer;
		V_0 = L_2;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_5;
		L_5 = il2cpp_unsafe_add<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,int32_t>(L_3, L_4);
		return L_5;
	}
}
// Method Definition Index: 2398
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* Span_1_GetPinnableReference_m8F647AEDF0FC329D940B5ECE3F3F9A0D54C193A6_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, const RuntimeMethod* method) 
{
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_1;
		L_1 = il2cpp_unsafe_as_ref<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>((void*)((uintptr_t)0));
		return L_1;
	}

IL_0010:
	{
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_2 = __this->____pointer;
		V_0 = L_2;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_0));
		return L_3;
	}
}
// Method Definition Index: 2399
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m076AE0B7AE7791F304653A3B1061E377E1E7EDFF_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, const RuntimeMethod* method) 
{
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_0 = __this->____pointer;
		V_0 = L_0;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4;
		L_4 = il2cpp_unsafe_sizeof<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>();
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_3), ((int64_t)L_4))), NULL);
		return;
	}
}
// Method Definition Index: 2400
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mCC127D83802EC818758A690F89BD127326AD5511_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = (uint32_t)L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_4 = __this->____pointer;
		V_2 = L_4;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = *((uint8_t*)L_7);
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		V_3 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_10));
		uint64_t L_11 = V_3;
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_12 = __this->____pointer;
		V_2 = L_12;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_13;
		L_13 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_2));
		V_4 = L_13;
		int32_t L_14;
		L_14 = il2cpp_unsafe_sizeof<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>();
		V_5 = (uint64_t)((int64_t)(uint64_t)((uint32_t)L_14));
		V_6 = (uint64_t)((int64_t)0);
		goto IL_0110;
	}

IL_0064:
	{
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_15 = V_4;
		uint64_t L_16 = V_6;
		uint64_t L_17 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_18;
		L_18 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_15, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_19 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_18 = L_19;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_23;
		L_23 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_20, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_21, ((int64_t)1))), (int64_t)L_22)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_24 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_23 = L_24;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_25 = V_4;
		uint64_t L_26 = V_6;
		uint64_t L_27 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_28;
		L_28 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_25, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_26, ((int64_t)2))), (int64_t)L_27)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_29 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_28 = L_29;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_30 = V_4;
		uint64_t L_31 = V_6;
		uint64_t L_32 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_33;
		L_33 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_30, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_31, ((int64_t)3))), (int64_t)L_32)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_34 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_33 = L_34;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_35 = V_4;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_38;
		L_38 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_35, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, ((int64_t)4))), (int64_t)L_37)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_39 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_38 = L_39;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_40 = V_4;
		uint64_t L_41 = V_6;
		uint64_t L_42 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_43;
		L_43 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_40, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_41, ((int64_t)5))), (int64_t)L_42)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_44 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_43 = L_44;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_45 = V_4;
		uint64_t L_46 = V_6;
		uint64_t L_47 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_48;
		L_48 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_45, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_46, ((int64_t)6))), (int64_t)L_47)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_49 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_48 = L_49;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_50 = V_4;
		uint64_t L_51 = V_6;
		uint64_t L_52 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_53;
		L_53 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_50, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_51, ((int64_t)7))), (int64_t)L_52)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_54 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_53 = L_54;
		uint64_t L_55 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)8)));
	}

IL_0110:
	{
		uint64_t L_56 = V_6;
		uint64_t L_57 = V_3;
		if ((!(((uint64_t)L_56) >= ((uint64_t)((int64_t)((int64_t)L_57&((int64_t)((int32_t)-8))))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_58 = V_6;
		uint64_t L_59 = V_3;
		if ((!(((uint64_t)L_58) < ((uint64_t)((int64_t)((int64_t)L_59&((int64_t)((int32_t)-4))))))))
		{
			goto IL_0198;
		}
	}
	{
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_60 = V_4;
		uint64_t L_61 = V_6;
		uint64_t L_62 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_63;
		L_63 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_60, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_61, (int64_t)L_62)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_64 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_63 = L_64;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_65 = V_4;
		uint64_t L_66 = V_6;
		uint64_t L_67 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_68;
		L_68 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_65, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)1))), (int64_t)L_67)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_69 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_68 = L_69;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_70 = V_4;
		uint64_t L_71 = V_6;
		uint64_t L_72 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_73;
		L_73 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_70, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_71, ((int64_t)2))), (int64_t)L_72)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_74 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_73 = L_74;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_75 = V_4;
		uint64_t L_76 = V_6;
		uint64_t L_77 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_78;
		L_78 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_75, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)3))), (int64_t)L_77)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_79 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_78 = L_79;
		uint64_t L_80 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)4)));
		goto IL_0198;
	}

IL_017f:
	{
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_81 = V_4;
		uint64_t L_82 = V_6;
		uint64_t L_83 = V_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_84;
		L_84 = il2cpp_unsafe_add_byte_offset<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,uint64_t>(L_81, (uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_82, (int64_t)L_83)));
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 L_85 = ___0_value;
		*(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061*)L_84 = L_85;
		uint64_t L_86 = V_6;
		V_6 = (uint64_t)((int64_t)il2cpp_codegen_add((int64_t)L_86, ((int64_t)1)));
	}

IL_0198:
	{
		uint64_t L_87 = V_6;
		uint64_t L_88 = V_3;
		if ((!(((uint64_t)L_87) >= ((uint64_t)L_88))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 2401
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mC0B3E14BA4E08BD238E16ED61E10E27B48B61C93_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAC098ECAAC99824E8345A33C804795BCEE5EF619_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 L_2 = ___0_destination;
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_3 = L_2.____pointer;
		V_0 = L_3;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_0));
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_5 = __this->____pointer;
		V_0 = L_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m02E97F34D8471A290B7463365307EA6035752182(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
// Method Definition Index: 2402
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mFD13A6F4389E14327979E3D7927E7F7E014D3E07_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAC098ECAAC99824E8345A33C804795BCEE5EF619_inline((&___0_destination), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 L_2 = ___0_destination;
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_3 = L_2.____pointer;
		V_1 = L_3;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_1));
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_5 = __this->____pointer;
		V_1 = L_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		Buffer_Memmove_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m02E97F34D8471A290B7463365307EA6035752182(L_4, L_6, (uint64_t)((int64_t)L_7), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// Method Definition Index: 2403
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_op_Equality_m1A72A9195AF06927F0A5E9BF8EC2040AEA8777C2_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 ___0_left, Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 ___1_right, const RuntimeMethod* method) 
{
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 L_0 = ___0_left;
		int32_t L_1 = L_0.____length;
		Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 L_2 = ___1_right;
		int32_t L_3 = L_2.____length;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 L_4 = ___0_left;
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_5 = L_4.____pointer;
		V_0 = L_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_0));
		Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 L_7 = ___1_right;
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_8 = L_7.____pointer;
		V_0 = L_8;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_9;
		L_9 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_0));
		bool L_10;
		L_10 = il2cpp_unsafe_are_same(L_6, L_9);
		return L_10;
	}

IL_0030:
	{
		return (bool)0;
	}
}
// Method Definition Index: 2404
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t34BA04A4BFD729569345665C169CDBF1E713EEA3 Span_1_op_Implicit_m7A7D5B826F909A8EB66496F03CA0F3481103CCD8_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 ___0_span, const RuntimeMethod* method) 
{
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 L_0 = ___0_span;
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_1 = L_0.____pointer;
		V_0 = L_1;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_0));
		Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 L_3 = ___0_span;
		int32_t L_4 = L_3.____length;
		ReadOnlySpan_1_t34BA04A4BFD729569345665C169CDBF1E713EEA3 L_5;
		memset((&L_5), 0, sizeof(L_5));
		ReadOnlySpan_1__ctor_m759C3B292D6D3053D1D7160B6E5B66591D2C22CF_inline((&L_5), L_2, L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return L_5;
	}
}
// Method Definition Index: 2405
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m00453E68053F0F9BCC54EA846D4B0CB5386E8CFE_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.char_class->byval_arg) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_5 = __this->____pointer;
		V_1 = L_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_as_ref<Il2CppChar>(L_6);
		V_0 = L_7;
		Il2CppChar* L_8 = V_0;
		int32_t L_9 = __this->____length;
		String_t* L_10;
		L_10 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)((uintptr_t)L_8), 0, L_9, NULL);
		return L_10;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck((MemberInfo_t*)L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8, (MemberInfo_t*)L_12);
		int32_t L_14 = __this->____length;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_defaults.int32_class, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, (RuntimeObject*)L_13, L_16, NULL);
		return L_17;
	}
}
// Method Definition Index: 2406
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 Span_1_Slice_m00ABC873BA3C21EA5882BE58A4596EEA951C4112_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_2 = __this->____pointer;
		V_0 = L_2;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_5;
		L_5 = il2cpp_unsafe_add<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m93D87E73F48BD2BD9F2EE7F31B0161782474BBFE_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_8;
	}
}
// Method Definition Index: 2407
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 Span_1_Slice_m84326591CB5EAD6E39C1E3A2A58E988DF17066F5_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_5 = __this->____pointer;
		V_0 = L_5;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_8;
		L_8 = il2cpp_unsafe_add<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m93D87E73F48BD2BD9F2EE7F31B0161782474BBFE_inline((&L_10), L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		return L_10;
	}
}
// Method Definition Index: 2408
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* Span_1_ToArray_m9C3CE96FC0AB8FEE598BAC340B6A3CD162306EC9_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, const RuntimeMethod* method) 
{
	ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_1;
		L_1 = Array_Empty_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m7689028C3ECA005C223F9BA9EC28226970872BE0_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_3 = (GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1*)(GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1*)SZArrayNew(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21), (uint32_t)L_2);
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_6;
		L_6 = il2cpp_unsafe_as_ref<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>(L_5);
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_7 = __this->____pointer;
		V_0 = L_7;
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		Buffer_Memmove_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m02E97F34D8471A290B7463365307EA6035752182(L_6, L_8, (uint64_t)((int64_t)L_9), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		return L_4;
	}
}
// Method Definition Index: 2409
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mAC098ECAAC99824E8345A33C804795BCEE5EF619_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2410
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m608B81D304AD2D6C0BB0C56476CDEBC948B016E5_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2411
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m02DF246D4B74C764743E1BA6F2725D6C0BE0DC9C_gshared (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
// Method Definition Index: 2412
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 Span_1_op_Implicit_m356B5B80F3D5C2ED6E84E00041EF8AC424BCA74B_gshared (GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* ___0_array, const RuntimeMethod* method) 
{
	{
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_0 = ___0_array;
		Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m87D77C7F9C35BB06EAF4BC1D311C7F8F6F6FC20B_inline((&L_1), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 35823
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_IsPowerOfTwo_m58172AEBE272F53FD34CC10641057847181E960A_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___0_value;
		V_0 = (bool)((((int32_t)((int32_t)(L_0&((int32_t)il2cpp_codegen_subtract(L_1, 1))))) == ((int32_t)0))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// Method Definition Index: 22612
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BaseShaderInfoStorage_get_disposed_mAF7F54A791E6AF75BF1AD71B1DDA85099BFCE1EF_inline (BaseShaderInfoStorage_tA4E5F167749C2492F7933E0B660BF9CF8F6716A2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposedU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 34660
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_XMin;
		return L_0;
	}
}
// Method Definition Index: 34662
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_YMin;
		return L_0;
	}
}
// Method Definition Index: 34672
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RectInt__ctor_m6E8B3A6C7EE11257A6B438E36274116FE39B5B42_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, int32_t ___0_xMin, int32_t ___1_yMin, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_xMin;
		__this->___m_XMin = L_0;
		int32_t L_1 = ___1_yMin;
		__this->___m_YMin = L_1;
		int32_t L_2 = ___2_width;
		__this->___m_Width = L_2;
		int32_t L_3 = ___3_height;
		__this->___m_Height = L_3;
		return;
	}
}
// Method Definition Index: 34066
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr;
		ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7(L_0, NULL);
		return;
	}
}
// Method Definition Index: 34067
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr;
		ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409(L_0, NULL);
		return;
	}
}
// Method Definition Index: 16825
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalWidth_m0B06147154436A555CEABB9C9EB319D7D33A5398_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CphysicalWidthU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 16827
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UIRAtlasAllocator_get_physicalHeight_m736C92B2C509CE66BAFFBA87110103BBC72DBD88_inline (UIRAtlasAllocator_t70FA0F3477E077A18096F66B51F6A2B205825BD7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CphysicalHeightU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 3155
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
// Method Definition Index: 34114
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m60E0066AC25C7F4A75F4B60C02E89BF5094BE852_gshared_inline (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 887
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Func_2_Invoke_m468C3E25D460F8CCF7975569A4661D1BE92E5B92_gshared_inline (Func_2_t81B76467028D6BD95DE2EC625D0325AA0387285E* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_arg, const RuntimeMethod* method) 
{
	typedef Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*FunctionPointerType) (RuntimeObject*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 34177
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_mF83D06637E10F1C230BA4F1A841E742F6A5ED399_gshared_inline (SharedStatic_1_t33583FDAFE4C36D5BA68FE6F5444170BB42F98C0* __this, void* ___0_buffer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_buffer;
		__this->____buffer = L_0;
		return;
	}
}
// Method Definition Index: 34232
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (intptr_t*)(L_0);
	}
}
// Method Definition Index: 34177
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedStatic_1__ctor_m467F9A64986F442AA4853C5C314D0A54D887CDDC_gshared_inline (SharedStatic_1_t965CBE4F8A30F785649BF3D97C277D0927858D08* __this, void* ___0_buffer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_buffer;
		__this->____buffer = L_0;
		return;
	}
}
// Method Definition Index: 44132
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SingletonMonoBehaviour_1_get_Instance_mD6D40E70B1508B803B958AD4E9048EEFB9553768_gshared_inline (const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:12>
		RuntimeObject* L_0 = ((SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CInstanceU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 44133
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SingletonMonoBehaviour_1_set_Instance_m0191812E77B7E1D847AF05DB1273F842EE2CB0BF_gshared_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		//<source_info:D:/UNITY/UNITY - PROJECTS  - UNITY2019/AssetStore_HomeDesigner_Merged/Assets/Exoa/HomeDesigner/Scripts/Utils/SingletonMonoBehaviour.cs:12>
		RuntimeObject* L_0 = ___0_value;
		((SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CInstanceU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SingletonMonoBehaviour_1_tFD93E70585AC4675BD3A7374DFB8E976AB1E027B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___U3CInstanceU3Ek__BackingField), (void*)L_0);
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m92912F015428BEA4C4E33A78B846E6B3CDB11751_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m4868E2A05AB294488A5AF17BC94F000C5A0F68F7_gshared_inline (ReadOnlySpan_1_t38A9F2C8804739CCDFBD7062CA1C47C44BAE5AC2* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = ___0_ptr;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDA8E6598A3E9F174C4024C9915ACA9463BA35F22_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_0 = ___0_ptr;
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* Array_Empty_TisNullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28_mFB61E6C1D57945549B403C13B1652F8CE5324A3C_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_0 = ((EmptyArray_1_t5DEA403BAFDC5AC2F35C8826395BF35F76EAE720_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m809249502A9C502A89D571353424C3BAC9610EFA_gshared_inline (Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3* __this, Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* ___0_array, const RuntimeMethod* method) 
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t13FC778C32B303EBD00D6D808D35F6A0FBD988E3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1 = V_0;
		if (L_1.___hasValue)
		{
			goto IL_0037;
		}
	}
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_2 = ___0_array;
		NullCheck((RuntimeObject*)L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_7 = ___0_array;
		NullCheck((RuntimeArray*)L_7);
		uint8_t* L_8;
		L_8 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_7, NULL);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_9;
		L_9 = il2cpp_unsafe_as_ref<Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28>(L_8);
		ByReference_1_t442613A31118CABBBDFA511BC4B3E7B369A7720C L_10;
		memset((&L_10), 0, sizeof(L_10));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_10), L_9);
		__this->____pointer = L_10;
		Nullable_1U5BU5D_t4BBED9A00EC2D72318A66049CDB2B0B2553D4B43* L_11 = ___0_array;
		NullCheck(L_11);
		__this->____length = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mAB8B8F731C3753B681689724D8C10D0F6706324A_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m61974A48F0249F9BF95E2B30196D22127E7AD9CB_gshared_inline (ReadOnlySpan_1_tAE84767975672BD032424E74DD54F304DED0E2A7* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_0 = ___0_ptr;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m51AEBDDF4FA3F8681B44273910D1645414D5B4AB_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_0 = ___0_ptr;
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* Array_Empty_TisATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E_m5293579F263F9A3750FDFA1AA45718B28873BFBB_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ((EmptyArray_1_t910BE047C1A6E9E334831BFBF9773D3C3852ED95_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m41429CDEFEBC1254E9655F1E8E1020C0609E0919_gshared_inline (Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948* __this, ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* ___0_array, const RuntimeMethod* method) 
{
	ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t14EC2E77DBAA48290810774B64FB790F124E6948));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E));
		goto IL_0037;
	}

IL_0037:
	{
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E* L_4;
		L_4 = il2cpp_unsafe_as_ref<ATGMeshInfo_t92E7F6713ADB43FC6EB49CEEC1DF4FAFC5C78A9E>(L_3);
		ByReference_1_tAAA6F8A1B2C11CBC8A0BD502702CEC3F265DC542 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ATGMeshInfoU5BU5D_tEA25ABAF8CAF15CC88901DD4F41D1CE7FF0BE05F* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m739A39BB426B19B7583557F308B2BDA52E2C3DD9_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m729E93C65964D6955F3A0794056B0A8FA3E1FB44_gshared_inline (ReadOnlySpan_1_tE73282FE39C46EDD2EE2F61A9E3E69BE943784B7* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_0 = ___0_ptr;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB2713B2424259A6D18038A2E29BD96DA081378D6_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_0 = ___0_ptr;
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* Array_Empty_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m652D1F78F0DEF31A60A1D09589A89DE06F12C3E4_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ((EmptyArray_1_tA6E339CF983886C190886835190061C2E3B679F2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7126F92024E73EE43580A7A9D64C39CD973406CC_gshared_inline (Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428* __this, BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* ___0_array, const RuntimeMethod* method) 
{
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t36B7E942A80FDA89A0043D5EDED0559212667428));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D));
		goto IL_0037;
	}

IL_0037:
	{
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D* L_4;
		L_4 = il2cpp_unsafe_as_ref<BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D>(L_3);
		ByReference_1_t6B219462DA620514530122E206E21B814BB5AE56 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BatchCullingOutputDrawCommandsU5BU5D_t74BE7663EB19A8F858498AE303D905FBCCF54F80* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mCF6D6F9A859D0DB86629D46B25379F2D9C9B8CBB_gshared_inline (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0519BAD7DF271438138DD6AEC8CE28A60D0619CE_gshared_inline (ReadOnlySpan_1_t29FEC1E8134CF98858AC01DEE01F4B20811F583F* __this, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_0 = ___0_ptr;
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB74D4D3C2AD6B802DDB07920C132F554AED832BB_gshared_inline (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_0 = ___0_ptr;
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* Array_Empty_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m327783287506F38234D68882E5BEE202618B5300_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_0 = ((EmptyArray_1_t200AEA0094BFCA9414824E328EC31EAB52F2142C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1D909AF584BE28F3A4AD990A5D7BE41287E28B38_gshared_inline (Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___0_array, const RuntimeMethod* method) 
{
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t16DF83B87A21BF0C3F96F56FE8FB20C7E6E66F9F));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F));
		goto IL_0037;
	}

IL_0037:
	{
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* L_4;
		L_4 = il2cpp_unsafe_as_ref<BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F>(L_3);
		ByReference_1_t914FB161BC5CAF21F87B88155EB485C508375331 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mED1253429B93CB6D2928015A22105A16FF64C86B_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m5818A0EC9B5A3628E69F90A3521BDE96E1FDC74F_gshared_inline (ReadOnlySpan_1_t1CABD9AC48FDD39B6D2C26BCA3D87FCA5F94F1C2* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC733F92ACB7C0D922180991442FE7A28DCB60772_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, bool* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_ptr;
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5AF7377F267C08DB0D59CB23F59DF954F7DEE62C_gshared_inline (Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t087F0E3724EBFD3A74A84E3F9E3F027249F37B51));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		goto IL_0037;
	}

IL_0037:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		bool* L_4;
		L_4 = il2cpp_unsafe_as_ref<bool>(L_3);
		ByReference_1_t98C4399D749F9F8F828547057023CF78951E6126 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF487895F53310FF6F399B7BD07038C49D29A6EAB_gshared_inline (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB60BC31800C0877424E21575E45AE6C8AA50ADA6_gshared_inline (ReadOnlySpan_1_tCA4391229D70967C5F52C769440BB78CBF80BE99* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = ___0_ptr;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC3D811BCA73C14AA673ADAB2E2CF39FE1385714B_gshared_inline (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_0 = ___0_ptr;
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* Array_Empty_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mB6CFBB5D8AF33F0BAE72154209AB29B8D52FBCDA_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_0 = ((EmptyArray_1_t42D5099F7FCE2834141926DB372392B8C75ADBEC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2F8451EBCA1900A8FF93D17DF8177C41EAA2E94B_gshared_inline (Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634* __this, BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___0_array, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF1D09AE3581D2E6304B9FC753705C3FC5DF90634));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3));
		goto IL_0037;
	}

IL_0037:
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* L_4;
		L_4 = il2cpp_unsafe_as_ref<Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3>(L_3);
		ByReference_1_t9FE639FD03570F793D25C119C09D9C344FD5577B L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Array_Empty_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6080CA526758F4FA182A066B2780D1761CD36ED5_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((EmptyArray_1_t7187E746F328254739F076CFBCAABB28D4B4554C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m513968BDBFF3CFCE89F3F77FE44CAB22CA474EF9_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0037;
	}

IL_0037:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mB79622153F80AD55A805C005842AF045F4FCF992_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* Array_Empty_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD1C1362CB74B91496D984B006ADC79B688D9B50D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ((EmptyArray_1_t7BBC8CED754F364A777871A238BBBE3F94FFDDE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m23CBCD46AD762681A232C97FE90B3A9EDD4991E5_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0037;
	}

IL_0037:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>(L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m83147EFB62B7FFBA49EEBEBE975F7348D665BAD0_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD46BD07C5320D1B1A225E53FAF466E153FFC1679_gshared_inline (ReadOnlySpan_1_t7EE9E7096EE52CA433AA61A9353AD90B29B2C816* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m48419159317F9826172EDEA69FDB0598B87B34D2_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = ___0_ptr;
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* Array_Empty_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m7E922E24AAEBD664256383832D53DDF17E1F3052_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ((EmptyArray_1_t9FC4EAC7DDBFA164B697CFEBFF39A52B321CC8C9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD8CCC80CA9129EEAC13B40BA31C6C577BDF46ECD_gshared_inline (Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___0_array, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t162CEB1BEB175B131BEFB9D4647CEB2D48558018));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		goto IL_0037;
	}

IL_0037:
	{
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color_tD001788D726C3A7F1379BEED0260B9591F440C1F>(L_3);
		ByReference_1_t9B1B5AE3B920C99C8F3511B46F258F98CCFD0836 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m413F20ECFE3F523163B62ED5BAB7DFA22F2FCCD4_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m841651F5E0DEC77984A109EF01090F3F776571FB_gshared_inline (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_ptr;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD16E04B2ED38420390E0DE1D6E01DE23C583B434_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___0_ptr;
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Array_Empty_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m5B415C4745E47108DD9258EBCCB422EFD6B8A0EB_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ((EmptyArray_1_tC72AE83DCB4E240E4B2AC2595448148BB03F9498_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDE7408B1AC4D3DDE1E8EB6C1A8AE8244CAB0BBB1_gshared_inline (Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_array, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF27B3DC55C4AD13268A1F154352D6782B237F7D));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B));
		goto IL_0037;
	}

IL_0037:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_4;
		L_4 = il2cpp_unsafe_as_ref<Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B>(L_3);
		ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFC8114ED22DABAF53250748121F627D7199AFE7C_gshared_inline (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m3263AAE2466F33D0150BF7B8223568108EB82C0B_gshared_inline (ReadOnlySpan_1_tE3532BC307A7083D956DB5168B470DDF370FB99B* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_0 = ___0_ptr;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m747EE0A1A7E520F51D231F9185826EBBB38823E4_gshared_inline (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_0 = ___0_ptr;
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* Array_Empty_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m2AE4E8C460D733DF5362B246ED865C5CE0C4AA60_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_0 = ((EmptyArray_1_tF01C5B6CDD56CDA122E6B85402777F31EE92A685_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9663565B53FD6471C5AADFE1AEC8D8CE458AA2E6_gshared_inline (Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907* __this, ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* ___0_array, const RuntimeMethod* method) 
{
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBBAFA836A153BEF6FDEF8E7DE7F4E0F6DC6B0907));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B));
		goto IL_0037;
	}

IL_0037:
	{
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B* L_4;
		L_4 = il2cpp_unsafe_as_ref<ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B>(L_3);
		ByReference_1_t5201FA96B0CE6EF7DA17ED2350AB142709D673CE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ContactPairHeaderU5BU5D_tB754539003A0C6D67CC58AF905E0ADC94468872A* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m3B50FB2CF29A0E7C0C8B69E4E5A72D75883EBC4B_gshared_inline (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mDB9E4DFF0687E0A5405FF4F6387379524B1B07AB_gshared_inline (ReadOnlySpan_1_t1CFFA3B34C09F05622921AC4014011D43A25715A* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_0 = ___0_ptr;
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m1910D0E44CCD92AD908E1D5F61FFF27ADFE1EFAD_gshared_inline (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_0 = ___0_ptr;
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* Array_Empty_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m164EDF2519D24430C10F8BB106ADB252BF225C26_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_0 = ((EmptyArray_1_tB029523A05EA2FFE1EB90490D66A384F7A0D4574_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE396EB49F11B34D41818F29E84D8865E2003B251_gshared_inline (Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48* __this, ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* ___0_array, const RuntimeMethod* method) 
{
	ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tA69488C008961B8AE09141F37FDAE8A0F575CE48));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1));
		goto IL_0037;
	}

IL_0037:
	{
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1* L_4;
		L_4 = il2cpp_unsafe_as_ref<ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1>(L_3);
		ByReference_1_tF22763B5EFC788349C264CA03884C061A3FD8051 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		ConvertMeshJobDataU5BU5D_tB2771774E6E94A75BA5D65C7D84F0B7F3AD6D9E2* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mD8B694DDD50485878B197BD97C4848FA0E770DCD_gshared_inline (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m75A7463F5588DB7F45AC0CE204FFB188419EC066_gshared_inline (ReadOnlySpan_1_tD576C6727C2A9E78508B2FE71F72440F869DF5CA* __this, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_0 = ___0_ptr;
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m3BE0AC61B8202E191A699FD2E62859E8C4367CB8_gshared_inline (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_0 = ___0_ptr;
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* Array_Empty_TisCopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8_m636107AFEDC2888AAD9A190C5FCB115D4483F86F_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_0 = ((EmptyArray_1_t0605DD263F295CE065C4B24BC0263FB5067617EC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m8E37FAEE50C1A5ED9D35A2445208BE080A64E81B_gshared_inline (Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30* __this, CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* ___0_array, const RuntimeMethod* method) 
{
	CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t0F901C7F7248B37E2D8773703E8E8790204A0A30));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8));
		goto IL_0037;
	}

IL_0037:
	{
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8* L_4;
		L_4 = il2cpp_unsafe_as_ref<CopyMeshJobData_t8A9A7785E58E23442500E07C72C0C00E91B2BAF8>(L_3);
		ByReference_1_tD6252C8872F720FDE0325E91E9F49CC9AA1059FB L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CopyMeshJobDataU5BU5D_tE59B1B0057B43C36FA221B4FF0B973D16E978ED5* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m385F87A001B432F97C5381EF1F01B485642ED27D_gshared_inline (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m7515BCC9EAB305B335A968E684B597A1FC9A5F24_gshared_inline (ReadOnlySpan_1_t7918A88B9E042EA0B873C90C85D2A8B97CB11BDF* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_0 = ___0_ptr;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m938DD54F3773C27DD1393A85BB94346047AD1DA5_gshared_inline (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_0 = ___0_ptr;
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* Array_Empty_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_m46787E1D6E481E4790F1F9E63000A067C9AF33CD_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_0 = ((EmptyArray_1_t27401338DAB1F4C8F9B8E695AB18ABBBF6573E17_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m59E7D308EB85B51BA4162E76EE21E5568E986970_gshared_inline (Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116* __this, CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* ___0_array, const RuntimeMethod* method) 
{
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tC85B5D30CDD48BE32D9DF528934ED5AEC5BFC116));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0));
		goto IL_0037;
	}

IL_0037:
	{
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0* L_4;
		L_4 = il2cpp_unsafe_as_ref<CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0>(L_3);
		ByReference_1_t81CF4D69552C11045F619B7C65392B2FB3646E25 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		CullingSplitU5BU5D_tE7E4F4841F80A466E7A6149F61460774D8813F61* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mFF4419EF107B2F1CD3364357F9723EAC96433F03_gshared_inline (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB6153B16E29314D6497048CA9F509CF21C277F71_gshared_inline (ReadOnlySpan_1_tB185515663CA8B149175531C2C9804EB48DDEC9B* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_0 = ___0_ptr;
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m52DDC62CEE4B57B1A97604C59D91F867D9C9472B_gshared_inline (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_0 = ___0_ptr;
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* Array_Empty_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m05A4DA3A4ACD6D784909779870EE466DF7778EC7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_0 = ((EmptyArray_1_t640F34C5C1351444FCE089711FFEF74161372D64_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m7F574E10BF82902E6DFCF264F060076901BC34C0_gshared_inline (Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73* __this, DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* ___0_array, const RuntimeMethod* method) 
{
	DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tFCA7D5D0BF7401ABF1CDA871A9259927808E7F73));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5));
		goto IL_0037;
	}

IL_0037:
	{
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5* L_4;
		L_4 = il2cpp_unsafe_as_ref<DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5>(L_3);
		ByReference_1_t4E075C50F1605FECDAC4938F5DEBE21F2A040718 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		DrawBufferRangeU5BU5D_t6B42ADE630C5C9FFF52E20462A038BB9696764DB* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mF40B0389DD242EC35D44F25C7490012314A18568_gshared_inline (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1F035A6038B22EE2B7A2E6000536EFB888AC4043_gshared_inline (ReadOnlySpan_1_t48362DFB63F63089AE9628BE8FD9AAEE1B48D686* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_ptr;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE1AF7117E421D34F536A857B1313F4E6CA659AA0_gshared_inline (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_0 = ___0_ptr;
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* Array_Empty_TisEntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8_m8EF4F258FBF5AEC804ED891772BFFC84A01DB5D9_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = ((EmptyArray_1_t9D02D6D1FF8E81441083A08AA0F8970E511F0900_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE8B22E5931866F928A71F99AF44F27432C1E57BB_gshared_inline (Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A* __this, EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* ___0_array, const RuntimeMethod* method) 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5D7E7A039DDB174888A2AC5552AF592E3B641F6A));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8));
		goto IL_0037;
	}

IL_0037:
	{
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* L_4;
		L_4 = il2cpp_unsafe_as_ref<EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8>(L_3);
		ByReference_1_tA1EDA2A801CDA440B5FACA1FE234FE951748D2FF L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		EntityIdU5BU5D_t8A607D0FD754ABFC6D83D6B358F75FEE0F9B6FB9* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
// Method Definition Index: 2409
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_mAC098ECAAC99824E8345A33C804795BCEE5EF619_gshared_inline (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
// Method Definition Index: 2305
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m759C3B292D6D3053D1D7160B6E5B66591D2C22CF_gshared_inline (ReadOnlySpan_1_t34BA04A4BFD729569345665C169CDBF1E713EEA3* __this, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_0 = ___0_ptr;
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 2396
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m93D87E73F48BD2BD9F2EE7F31B0161782474BBFE_gshared_inline (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_0 = ___0_ptr;
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
// Method Definition Index: 3204
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* Array_Empty_TisGPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061_m7689028C3ECA005C223F9BA9EC28226970872BE0_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_0 = ((EmptyArray_1_t256B6266763D5FE975C2ED0C86C1B3BF93BA56C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 2393
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m87D77C7F9C35BB06EAF4BC1D311C7F8F6F6FC20B_gshared_inline (Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14* __this, GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* ___0_array, const RuntimeMethod* method) 
{
	GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tD8DF0C094B05AD0B6BB587DC85D6FBCB8DAA5D14));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061));
		goto IL_0037;
	}

IL_0037:
	{
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061* L_4;
		L_4 = il2cpp_unsafe_as_ref<GPUDrivenMeshLodInfo_tC906887AE63DADE17AC5F423639E74F740CB9061>(L_3);
		ByReference_1_t1397A4F20916EC1240D060ACC5469CBAD66F63DE L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		GPUDrivenMeshLodInfoU5BU5D_t37E3A7FBA334103C085B6384EE471A5FAAD373C1* L_6 = ___0_array;
		NullCheck(L_6);
		__this->____length = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		return;
	}
}
