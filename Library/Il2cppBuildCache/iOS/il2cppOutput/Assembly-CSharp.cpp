#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEnumerable`1<System.Double>
struct IEnumerable_1_t4DFA5CB8F95829BAC3B2C5251EA018F27F9EFCB2;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// AdSample
struct AdSample_tB9EA4C0469D7085D04C599CAB61A65B11072B0FD;
// Banner
struct Banner_tBEB262EFDD0E1680DD4D5C6B9E4DB6860E4C0EAF;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// constdata.ConstData
struct ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059;
// constmethod.ConstMethod
struct ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8;
// Date
struct Date_t28D15A2DFB20BEE5DDCDC0277F8F1AC90FBDEA6C;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.Encoder
struct Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// Ending
struct Ending_t7861303E64C500F150F830DD1804D849512B0576;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// UnityEngine.Advertisements.IUnityAdsListener
struct IUnityAdsListener_tF90B6FC58A94E4308096CEAA5FA0C7B5FAC9A9C6;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Main
struct Main_tDB418C89D33CD2699713F36E95C4373C8892C046;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Ranking
struct Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B;
// RankingAd
struct RankingAd_t6630582BC1073C047D6880539E299522AD813666;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// savedata.SaveData
struct SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D;
// savemethod.SaveMethod
struct SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____01C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____32B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____7C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral054EA21FBB9C768DD9E8B5F5B96C34E13BBFDBE2;
IL2CPP_EXTERN_C String_t* _stringLiteral13FAE4F0DC77A2C061CB9B4B37F4D1E9178C633A;
IL2CPP_EXTERN_C String_t* _stringLiteral18CA46361F03E90558C9FB7AF510C8173C532D49;
IL2CPP_EXTERN_C String_t* _stringLiteral2BF22E36C5F3E3FBFAAE4C45B6293AB3F25901DD;
IL2CPP_EXTERN_C String_t* _stringLiteral32097A3C12A516088B553DBE3E4E940195691617;
IL2CPP_EXTERN_C String_t* _stringLiteral32EFB11ADF7CE51983B21374384F6C0F68D19D6A;
IL2CPP_EXTERN_C String_t* _stringLiteral339FA48A9FBD1C15908DC5DC509972A1E9011210;
IL2CPP_EXTERN_C String_t* _stringLiteral36E00DB686A9061572DB82E4535DAA12A20DEB27;
IL2CPP_EXTERN_C String_t* _stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15;
IL2CPP_EXTERN_C String_t* _stringLiteral3D1CD038401D2E156485C1AAD598B3A769DC02C7;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFD0AC4E2D970944C99778AB1BF7A096E978A38;
IL2CPP_EXTERN_C String_t* _stringLiteral3E0B96248A1F75628FFF39E1E8E74838F3EB685F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F84049596B448CEDCA17F101AB53DB4484565B2;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral41DE41B3053F5F8036C1B5510E5737C04FA57166;
IL2CPP_EXTERN_C String_t* _stringLiteral48ED56FC71BECB4C75C1E7E29A0D4F03C92B5CF5;
IL2CPP_EXTERN_C String_t* _stringLiteral4B416EC272EB1FCD8DA23849E9A0C8D11CFC97B4;
IL2CPP_EXTERN_C String_t* _stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716;
IL2CPP_EXTERN_C String_t* _stringLiteral51AE2B768FE553E03A8EBEDD446A5CD8E844F6EC;
IL2CPP_EXTERN_C String_t* _stringLiteral534327745AD91CDB7BD25CB5EC5E8B60E3A2D58D;
IL2CPP_EXTERN_C String_t* _stringLiteral55B2E96F13573B81733E1B384F71787214A19B91;
IL2CPP_EXTERN_C String_t* _stringLiteral57C795C522102EFADCB37455610FBCEAF945174B;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB8E181EF665F2000B8FB2DD838B17C18C8CC50;
IL2CPP_EXTERN_C String_t* _stringLiteral5DEB2211C12E6E0ABDBF4D44B5B26B8010C11481;
IL2CPP_EXTERN_C String_t* _stringLiteral5E1BDC42E956C39EDD69B0A8265D46F6EC4C8A4D;
IL2CPP_EXTERN_C String_t* _stringLiteral62D10116F0CA4066BB7303553EA7440BF2D4B7EE;
IL2CPP_EXTERN_C String_t* _stringLiteral6C4B5BECFF2C39E52330CB8204E2FA0245E8A65F;
IL2CPP_EXTERN_C String_t* _stringLiteral73D555A6934CAE0E6C86173C1A620F17304B90CC;
IL2CPP_EXTERN_C String_t* _stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5;
IL2CPP_EXTERN_C String_t* _stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F;
IL2CPP_EXTERN_C String_t* _stringLiteral78BC4DD92B77F5C14DD7FC018155905B806E65C3;
IL2CPP_EXTERN_C String_t* _stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19;
IL2CPP_EXTERN_C String_t* _stringLiteral7F9B2509C5F1EA43473F31D593986A52C1EF6259;
IL2CPP_EXTERN_C String_t* _stringLiteral8F2C24F26EA3F4190757227EEB46A39CA702288C;
IL2CPP_EXTERN_C String_t* _stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8;
IL2CPP_EXTERN_C String_t* _stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB;
IL2CPP_EXTERN_C String_t* _stringLiteralA0302E7B8933CEAAED3D984F673813DBDD7414F5;
IL2CPP_EXTERN_C String_t* _stringLiteralA0B3FFC689E515CD1809BEE7A6CEA7EBA57563E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C;
IL2CPP_EXTERN_C String_t* _stringLiteralA9672B10DCAB95710622770CD57DDFFAB3410A5E;
IL2CPP_EXTERN_C String_t* _stringLiteralAF4183F9C9D34AF9464222E41150C802EE0FB1BD;
IL2CPP_EXTERN_C String_t* _stringLiteralB10BF7FB4B17FA19ECD901F3B77C3B3459C0E89C;
IL2CPP_EXTERN_C String_t* _stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9;
IL2CPP_EXTERN_C String_t* _stringLiteralBE14B5CF98221AA69533306F461EEDFCFD3A9A28;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE7C83AA7E91C6D7A72796E34EBF38E5903E6B862;
IL2CPP_EXTERN_C String_t* _stringLiteralEE733E57E359E32EF72BCED03E662570A609967C;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
IL2CPP_EXTERN_C String_t* _stringLiteralF6EB3D5CD29DBA088A5C4098BEF4A22C4F4D34BB;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_mD76433A17104869E4691012479D1CCD6BFC799BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_m0979464994C7D37A91E273FABAF78239C15DDE41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Reverse_mB2B4C1FD2957F967431B503FA3A594ECD4BBBD55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mB7E22A7FFC2F7C7989CCFE06FC9870523317C979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var;

struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Double>
struct  List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____items_1)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__items_1() const { return ____items_1; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields, ____emptyArray_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// constdata.ConstData
struct  ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059  : public RuntimeObject
{
public:
	// System.Int32[] constdata.ConstData::id_one
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_one_0;
	// System.String[] constdata.ConstData::channelName_one
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_one_1;
	// System.Double[] constdata.ConstData::subscriber_one
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_one_2;
	// System.Int32[] constdata.ConstData::id_two
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_two_3;
	// System.String[] constdata.ConstData::channelName_two
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_two_4;
	// System.Double[] constdata.ConstData::subscriber_two
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_two_5;
	// System.Int32[] constdata.ConstData::id_three
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_three_6;
	// System.String[] constdata.ConstData::channelName_three
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_three_7;
	// System.Double[] constdata.ConstData::subscriber_three
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_three_8;
	// System.Int32[] constdata.ConstData::id_four
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_four_9;
	// System.String[] constdata.ConstData::channelName_four
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_four_10;
	// System.Double[] constdata.ConstData::subscriber_four
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_four_11;
	// System.Int32[] constdata.ConstData::id_five
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_five_12;
	// System.String[] constdata.ConstData::channelName_five
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_five_13;
	// System.Double[] constdata.ConstData::subscriber_five
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_five_14;
	// System.Int32[] constdata.ConstData::id_six
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_six_15;
	// System.String[] constdata.ConstData::channelName_six
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_six_16;
	// System.Double[] constdata.ConstData::subscriber_six
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_six_17;
	// System.Int32[] constdata.ConstData::id_seven
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_seven_18;
	// System.String[] constdata.ConstData::channelName_seven
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_seven_19;
	// System.Double[] constdata.ConstData::subscriber_seven
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_seven_20;
	// System.Int32[] constdata.ConstData::id_eight
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_eight_21;
	// System.String[] constdata.ConstData::channelName_eight
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_eight_22;
	// System.Double[] constdata.ConstData::subscriber_eight
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_eight_23;
	// System.Int32[] constdata.ConstData::id_nine
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_nine_24;
	// System.String[] constdata.ConstData::channelName_nine
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_nine_25;
	// System.Double[] constdata.ConstData::subscriber_nine
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_nine_26;
	// System.Int32[] constdata.ConstData::id_ten
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_ten_27;
	// System.String[] constdata.ConstData::channelName_ten
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_ten_28;
	// System.Double[] constdata.ConstData::subscriber_ten
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_ten_29;
	// System.Int32[] constdata.ConstData::id_eleven
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_eleven_30;
	// System.String[] constdata.ConstData::channelName_eleven
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_eleven_31;
	// System.Double[] constdata.ConstData::subscriber_eleven
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_eleven_32;
	// System.Int32[] constdata.ConstData::id_twelve
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_twelve_33;
	// System.String[] constdata.ConstData::channelName_twelve
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_twelve_34;
	// System.Double[] constdata.ConstData::subscriber_twelve
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_twelve_35;

public:
	inline static int32_t get_offset_of_id_one_0() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_one_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_one_0() const { return ___id_one_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_one_0() { return &___id_one_0; }
	inline void set_id_one_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_one_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_one_0), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_one_1() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_one_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_one_1() const { return ___channelName_one_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_one_1() { return &___channelName_one_1; }
	inline void set_channelName_one_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_one_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_one_1), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_one_2() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_one_2)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_one_2() const { return ___subscriber_one_2; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_one_2() { return &___subscriber_one_2; }
	inline void set_subscriber_one_2(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_one_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_one_2), (void*)value);
	}

	inline static int32_t get_offset_of_id_two_3() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_two_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_two_3() const { return ___id_two_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_two_3() { return &___id_two_3; }
	inline void set_id_two_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_two_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_two_3), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_two_4() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_two_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_two_4() const { return ___channelName_two_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_two_4() { return &___channelName_two_4; }
	inline void set_channelName_two_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_two_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_two_4), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_two_5() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_two_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_two_5() const { return ___subscriber_two_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_two_5() { return &___subscriber_two_5; }
	inline void set_subscriber_two_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_two_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_two_5), (void*)value);
	}

	inline static int32_t get_offset_of_id_three_6() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_three_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_three_6() const { return ___id_three_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_three_6() { return &___id_three_6; }
	inline void set_id_three_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_three_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_three_6), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_three_7() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_three_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_three_7() const { return ___channelName_three_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_three_7() { return &___channelName_three_7; }
	inline void set_channelName_three_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_three_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_three_7), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_three_8() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_three_8)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_three_8() const { return ___subscriber_three_8; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_three_8() { return &___subscriber_three_8; }
	inline void set_subscriber_three_8(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_three_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_three_8), (void*)value);
	}

	inline static int32_t get_offset_of_id_four_9() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_four_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_four_9() const { return ___id_four_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_four_9() { return &___id_four_9; }
	inline void set_id_four_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_four_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_four_9), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_four_10() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_four_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_four_10() const { return ___channelName_four_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_four_10() { return &___channelName_four_10; }
	inline void set_channelName_four_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_four_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_four_10), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_four_11() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_four_11)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_four_11() const { return ___subscriber_four_11; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_four_11() { return &___subscriber_four_11; }
	inline void set_subscriber_four_11(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_four_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_four_11), (void*)value);
	}

	inline static int32_t get_offset_of_id_five_12() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_five_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_five_12() const { return ___id_five_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_five_12() { return &___id_five_12; }
	inline void set_id_five_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_five_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_five_12), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_five_13() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_five_13)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_five_13() const { return ___channelName_five_13; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_five_13() { return &___channelName_five_13; }
	inline void set_channelName_five_13(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_five_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_five_13), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_five_14() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_five_14)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_five_14() const { return ___subscriber_five_14; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_five_14() { return &___subscriber_five_14; }
	inline void set_subscriber_five_14(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_five_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_five_14), (void*)value);
	}

	inline static int32_t get_offset_of_id_six_15() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_six_15)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_six_15() const { return ___id_six_15; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_six_15() { return &___id_six_15; }
	inline void set_id_six_15(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_six_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_six_15), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_six_16() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_six_16)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_six_16() const { return ___channelName_six_16; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_six_16() { return &___channelName_six_16; }
	inline void set_channelName_six_16(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_six_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_six_16), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_six_17() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_six_17)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_six_17() const { return ___subscriber_six_17; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_six_17() { return &___subscriber_six_17; }
	inline void set_subscriber_six_17(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_six_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_six_17), (void*)value);
	}

	inline static int32_t get_offset_of_id_seven_18() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_seven_18)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_seven_18() const { return ___id_seven_18; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_seven_18() { return &___id_seven_18; }
	inline void set_id_seven_18(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_seven_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_seven_18), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_seven_19() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_seven_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_seven_19() const { return ___channelName_seven_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_seven_19() { return &___channelName_seven_19; }
	inline void set_channelName_seven_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_seven_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_seven_19), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_seven_20() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_seven_20)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_seven_20() const { return ___subscriber_seven_20; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_seven_20() { return &___subscriber_seven_20; }
	inline void set_subscriber_seven_20(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_seven_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_seven_20), (void*)value);
	}

	inline static int32_t get_offset_of_id_eight_21() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_eight_21)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_eight_21() const { return ___id_eight_21; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_eight_21() { return &___id_eight_21; }
	inline void set_id_eight_21(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_eight_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_eight_21), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_eight_22() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_eight_22)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_eight_22() const { return ___channelName_eight_22; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_eight_22() { return &___channelName_eight_22; }
	inline void set_channelName_eight_22(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_eight_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_eight_22), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_eight_23() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_eight_23)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_eight_23() const { return ___subscriber_eight_23; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_eight_23() { return &___subscriber_eight_23; }
	inline void set_subscriber_eight_23(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_eight_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_eight_23), (void*)value);
	}

	inline static int32_t get_offset_of_id_nine_24() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_nine_24)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_nine_24() const { return ___id_nine_24; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_nine_24() { return &___id_nine_24; }
	inline void set_id_nine_24(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_nine_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_nine_24), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_nine_25() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_nine_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_nine_25() const { return ___channelName_nine_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_nine_25() { return &___channelName_nine_25; }
	inline void set_channelName_nine_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_nine_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_nine_25), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_nine_26() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_nine_26)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_nine_26() const { return ___subscriber_nine_26; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_nine_26() { return &___subscriber_nine_26; }
	inline void set_subscriber_nine_26(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_nine_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_nine_26), (void*)value);
	}

	inline static int32_t get_offset_of_id_ten_27() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_ten_27)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_ten_27() const { return ___id_ten_27; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_ten_27() { return &___id_ten_27; }
	inline void set_id_ten_27(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_ten_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_ten_27), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_ten_28() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_ten_28)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_ten_28() const { return ___channelName_ten_28; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_ten_28() { return &___channelName_ten_28; }
	inline void set_channelName_ten_28(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_ten_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_ten_28), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_ten_29() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_ten_29)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_ten_29() const { return ___subscriber_ten_29; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_ten_29() { return &___subscriber_ten_29; }
	inline void set_subscriber_ten_29(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_ten_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_ten_29), (void*)value);
	}

	inline static int32_t get_offset_of_id_eleven_30() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_eleven_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_eleven_30() const { return ___id_eleven_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_eleven_30() { return &___id_eleven_30; }
	inline void set_id_eleven_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_eleven_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_eleven_30), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_eleven_31() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_eleven_31)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_eleven_31() const { return ___channelName_eleven_31; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_eleven_31() { return &___channelName_eleven_31; }
	inline void set_channelName_eleven_31(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_eleven_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_eleven_31), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_eleven_32() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_eleven_32)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_eleven_32() const { return ___subscriber_eleven_32; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_eleven_32() { return &___subscriber_eleven_32; }
	inline void set_subscriber_eleven_32(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_eleven_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_eleven_32), (void*)value);
	}

	inline static int32_t get_offset_of_id_twelve_33() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___id_twelve_33)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_twelve_33() const { return ___id_twelve_33; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_twelve_33() { return &___id_twelve_33; }
	inline void set_id_twelve_33(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_twelve_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_twelve_33), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_twelve_34() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___channelName_twelve_34)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_twelve_34() const { return ___channelName_twelve_34; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_twelve_34() { return &___channelName_twelve_34; }
	inline void set_channelName_twelve_34(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_twelve_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_twelve_34), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_twelve_35() { return static_cast<int32_t>(offsetof(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059, ___subscriber_twelve_35)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_twelve_35() const { return ___subscriber_twelve_35; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_twelve_35() { return &___subscriber_twelve_35; }
	inline void set_subscriber_twelve_35(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_twelve_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_twelve_35), (void*)value);
	}
};


// constmethod.ConstMethod
struct  ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8  : public RuntimeObject
{
public:
	// System.Int32[] constmethod.ConstMethod::id_one
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_one_0;
	// System.String[] constmethod.ConstMethod::channelName_one
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_one_1;
	// System.Double[] constmethod.ConstMethod::subscriber_one
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_one_2;
	// System.Int32[] constmethod.ConstMethod::id_two
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_two_3;
	// System.String[] constmethod.ConstMethod::channelName_two
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_two_4;
	// System.Double[] constmethod.ConstMethod::subscriber_two
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_two_5;
	// System.Int32[] constmethod.ConstMethod::id_three
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_three_6;
	// System.String[] constmethod.ConstMethod::channelName_three
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_three_7;
	// System.Double[] constmethod.ConstMethod::subscriber_three
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_three_8;
	// System.Int32[] constmethod.ConstMethod::id_four
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_four_9;
	// System.String[] constmethod.ConstMethod::channelName_four
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_four_10;
	// System.Double[] constmethod.ConstMethod::subscriber_four
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_four_11;
	// System.Int32[] constmethod.ConstMethod::id_five
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_five_12;
	// System.String[] constmethod.ConstMethod::channelName_five
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_five_13;
	// System.Double[] constmethod.ConstMethod::subscriber_five
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_five_14;
	// System.Int32[] constmethod.ConstMethod::id_six
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_six_15;
	// System.String[] constmethod.ConstMethod::channelName_six
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_six_16;
	// System.Double[] constmethod.ConstMethod::subscriber_six
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_six_17;
	// System.Int32[] constmethod.ConstMethod::id_seven
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_seven_18;
	// System.String[] constmethod.ConstMethod::channelName_seven
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_seven_19;
	// System.Double[] constmethod.ConstMethod::subscriber_seven
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_seven_20;
	// System.Int32[] constmethod.ConstMethod::id_eight
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_eight_21;
	// System.String[] constmethod.ConstMethod::channelName_eight
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_eight_22;
	// System.Double[] constmethod.ConstMethod::subscriber_eight
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_eight_23;
	// System.Int32[] constmethod.ConstMethod::id_nine
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_nine_24;
	// System.String[] constmethod.ConstMethod::channelName_nine
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_nine_25;
	// System.Double[] constmethod.ConstMethod::subscriber_nine
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_nine_26;
	// System.Int32[] constmethod.ConstMethod::id_ten
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_ten_27;
	// System.String[] constmethod.ConstMethod::channelName_ten
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_ten_28;
	// System.Double[] constmethod.ConstMethod::subscriber_ten
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_ten_29;
	// System.Int32[] constmethod.ConstMethod::id_eleven
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_eleven_30;
	// System.String[] constmethod.ConstMethod::channelName_eleven
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_eleven_31;
	// System.Double[] constmethod.ConstMethod::subscriber_eleven
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_eleven_32;
	// System.Int32[] constmethod.ConstMethod::id_twelve
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_twelve_33;
	// System.String[] constmethod.ConstMethod::channelName_twelve
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_twelve_34;
	// System.Double[] constmethod.ConstMethod::subscriber_twelve
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_twelve_35;

public:
	inline static int32_t get_offset_of_id_one_0() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_one_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_one_0() const { return ___id_one_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_one_0() { return &___id_one_0; }
	inline void set_id_one_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_one_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_one_0), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_one_1() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_one_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_one_1() const { return ___channelName_one_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_one_1() { return &___channelName_one_1; }
	inline void set_channelName_one_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_one_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_one_1), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_one_2() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_one_2)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_one_2() const { return ___subscriber_one_2; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_one_2() { return &___subscriber_one_2; }
	inline void set_subscriber_one_2(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_one_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_one_2), (void*)value);
	}

	inline static int32_t get_offset_of_id_two_3() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_two_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_two_3() const { return ___id_two_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_two_3() { return &___id_two_3; }
	inline void set_id_two_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_two_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_two_3), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_two_4() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_two_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_two_4() const { return ___channelName_two_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_two_4() { return &___channelName_two_4; }
	inline void set_channelName_two_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_two_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_two_4), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_two_5() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_two_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_two_5() const { return ___subscriber_two_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_two_5() { return &___subscriber_two_5; }
	inline void set_subscriber_two_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_two_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_two_5), (void*)value);
	}

	inline static int32_t get_offset_of_id_three_6() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_three_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_three_6() const { return ___id_three_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_three_6() { return &___id_three_6; }
	inline void set_id_three_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_three_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_three_6), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_three_7() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_three_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_three_7() const { return ___channelName_three_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_three_7() { return &___channelName_three_7; }
	inline void set_channelName_three_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_three_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_three_7), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_three_8() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_three_8)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_three_8() const { return ___subscriber_three_8; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_three_8() { return &___subscriber_three_8; }
	inline void set_subscriber_three_8(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_three_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_three_8), (void*)value);
	}

	inline static int32_t get_offset_of_id_four_9() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_four_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_four_9() const { return ___id_four_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_four_9() { return &___id_four_9; }
	inline void set_id_four_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_four_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_four_9), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_four_10() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_four_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_four_10() const { return ___channelName_four_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_four_10() { return &___channelName_four_10; }
	inline void set_channelName_four_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_four_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_four_10), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_four_11() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_four_11)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_four_11() const { return ___subscriber_four_11; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_four_11() { return &___subscriber_four_11; }
	inline void set_subscriber_four_11(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_four_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_four_11), (void*)value);
	}

	inline static int32_t get_offset_of_id_five_12() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_five_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_five_12() const { return ___id_five_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_five_12() { return &___id_five_12; }
	inline void set_id_five_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_five_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_five_12), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_five_13() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_five_13)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_five_13() const { return ___channelName_five_13; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_five_13() { return &___channelName_five_13; }
	inline void set_channelName_five_13(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_five_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_five_13), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_five_14() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_five_14)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_five_14() const { return ___subscriber_five_14; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_five_14() { return &___subscriber_five_14; }
	inline void set_subscriber_five_14(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_five_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_five_14), (void*)value);
	}

	inline static int32_t get_offset_of_id_six_15() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_six_15)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_six_15() const { return ___id_six_15; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_six_15() { return &___id_six_15; }
	inline void set_id_six_15(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_six_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_six_15), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_six_16() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_six_16)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_six_16() const { return ___channelName_six_16; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_six_16() { return &___channelName_six_16; }
	inline void set_channelName_six_16(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_six_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_six_16), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_six_17() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_six_17)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_six_17() const { return ___subscriber_six_17; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_six_17() { return &___subscriber_six_17; }
	inline void set_subscriber_six_17(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_six_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_six_17), (void*)value);
	}

	inline static int32_t get_offset_of_id_seven_18() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_seven_18)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_seven_18() const { return ___id_seven_18; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_seven_18() { return &___id_seven_18; }
	inline void set_id_seven_18(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_seven_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_seven_18), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_seven_19() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_seven_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_seven_19() const { return ___channelName_seven_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_seven_19() { return &___channelName_seven_19; }
	inline void set_channelName_seven_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_seven_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_seven_19), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_seven_20() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_seven_20)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_seven_20() const { return ___subscriber_seven_20; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_seven_20() { return &___subscriber_seven_20; }
	inline void set_subscriber_seven_20(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_seven_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_seven_20), (void*)value);
	}

	inline static int32_t get_offset_of_id_eight_21() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_eight_21)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_eight_21() const { return ___id_eight_21; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_eight_21() { return &___id_eight_21; }
	inline void set_id_eight_21(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_eight_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_eight_21), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_eight_22() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_eight_22)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_eight_22() const { return ___channelName_eight_22; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_eight_22() { return &___channelName_eight_22; }
	inline void set_channelName_eight_22(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_eight_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_eight_22), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_eight_23() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_eight_23)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_eight_23() const { return ___subscriber_eight_23; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_eight_23() { return &___subscriber_eight_23; }
	inline void set_subscriber_eight_23(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_eight_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_eight_23), (void*)value);
	}

	inline static int32_t get_offset_of_id_nine_24() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_nine_24)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_nine_24() const { return ___id_nine_24; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_nine_24() { return &___id_nine_24; }
	inline void set_id_nine_24(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_nine_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_nine_24), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_nine_25() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_nine_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_nine_25() const { return ___channelName_nine_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_nine_25() { return &___channelName_nine_25; }
	inline void set_channelName_nine_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_nine_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_nine_25), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_nine_26() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_nine_26)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_nine_26() const { return ___subscriber_nine_26; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_nine_26() { return &___subscriber_nine_26; }
	inline void set_subscriber_nine_26(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_nine_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_nine_26), (void*)value);
	}

	inline static int32_t get_offset_of_id_ten_27() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_ten_27)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_ten_27() const { return ___id_ten_27; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_ten_27() { return &___id_ten_27; }
	inline void set_id_ten_27(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_ten_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_ten_27), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_ten_28() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_ten_28)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_ten_28() const { return ___channelName_ten_28; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_ten_28() { return &___channelName_ten_28; }
	inline void set_channelName_ten_28(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_ten_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_ten_28), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_ten_29() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_ten_29)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_ten_29() const { return ___subscriber_ten_29; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_ten_29() { return &___subscriber_ten_29; }
	inline void set_subscriber_ten_29(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_ten_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_ten_29), (void*)value);
	}

	inline static int32_t get_offset_of_id_eleven_30() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_eleven_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_eleven_30() const { return ___id_eleven_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_eleven_30() { return &___id_eleven_30; }
	inline void set_id_eleven_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_eleven_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_eleven_30), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_eleven_31() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_eleven_31)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_eleven_31() const { return ___channelName_eleven_31; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_eleven_31() { return &___channelName_eleven_31; }
	inline void set_channelName_eleven_31(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_eleven_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_eleven_31), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_eleven_32() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_eleven_32)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_eleven_32() const { return ___subscriber_eleven_32; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_eleven_32() { return &___subscriber_eleven_32; }
	inline void set_subscriber_eleven_32(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_eleven_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_eleven_32), (void*)value);
	}

	inline static int32_t get_offset_of_id_twelve_33() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___id_twelve_33)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_twelve_33() const { return ___id_twelve_33; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_twelve_33() { return &___id_twelve_33; }
	inline void set_id_twelve_33(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_twelve_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_twelve_33), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_twelve_34() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___channelName_twelve_34)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_twelve_34() const { return ___channelName_twelve_34; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_twelve_34() { return &___channelName_twelve_34; }
	inline void set_channelName_twelve_34(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_twelve_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_twelve_34), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_twelve_35() { return static_cast<int32_t>(offsetof(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8, ___subscriber_twelve_35)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_twelve_35() const { return ___subscriber_twelve_35; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_twelve_35() { return &___subscriber_twelve_35; }
	inline void set_subscriber_twelve_35(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_twelve_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_twelve_35), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// savedata.SaveData
struct  SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D  : public RuntimeObject
{
public:
	// System.Double savedata.SaveData::nowTime
	double ___nowTime_0;
	// System.Int32 savedata.SaveData::year
	int32_t ___year_1;
	// System.Int32 savedata.SaveData::month
	int32_t ___month_2;
	// System.Int32 savedata.SaveData::week
	int32_t ___week_3;
	// System.Int32[] savedata.SaveData::id
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_4;
	// System.String[] savedata.SaveData::channelName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_5;
	// System.Double[] savedata.SaveData::subscriber
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_6;

public:
	inline static int32_t get_offset_of_nowTime_0() { return static_cast<int32_t>(offsetof(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D, ___nowTime_0)); }
	inline double get_nowTime_0() const { return ___nowTime_0; }
	inline double* get_address_of_nowTime_0() { return &___nowTime_0; }
	inline void set_nowTime_0(double value)
	{
		___nowTime_0 = value;
	}

	inline static int32_t get_offset_of_year_1() { return static_cast<int32_t>(offsetof(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D, ___year_1)); }
	inline int32_t get_year_1() const { return ___year_1; }
	inline int32_t* get_address_of_year_1() { return &___year_1; }
	inline void set_year_1(int32_t value)
	{
		___year_1 = value;
	}

	inline static int32_t get_offset_of_month_2() { return static_cast<int32_t>(offsetof(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D, ___month_2)); }
	inline int32_t get_month_2() const { return ___month_2; }
	inline int32_t* get_address_of_month_2() { return &___month_2; }
	inline void set_month_2(int32_t value)
	{
		___month_2 = value;
	}

	inline static int32_t get_offset_of_week_3() { return static_cast<int32_t>(offsetof(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D, ___week_3)); }
	inline int32_t get_week_3() const { return ___week_3; }
	inline int32_t* get_address_of_week_3() { return &___week_3; }
	inline void set_week_3(int32_t value)
	{
		___week_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D, ___id_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_4() const { return ___id_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_4), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_5() { return static_cast<int32_t>(offsetof(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D, ___channelName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_5() const { return ___channelName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_5() { return &___channelName_5; }
	inline void set_channelName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_5), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_6() { return static_cast<int32_t>(offsetof(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D, ___subscriber_6)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_6() const { return ___subscriber_6; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_6() { return &___subscriber_6; }
	inline void set_subscriber_6(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_6), (void*)value);
	}
};


// savemethod.SaveMethod
struct  SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB  : public RuntimeObject
{
public:
	// System.Double savemethod.SaveMethod::nowTime
	double ___nowTime_0;
	// System.Int32 savemethod.SaveMethod::year
	int32_t ___year_1;
	// System.Int32 savemethod.SaveMethod::month
	int32_t ___month_2;
	// System.Int32 savemethod.SaveMethod::week
	int32_t ___week_3;
	// System.Int32[] savemethod.SaveMethod::id
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___id_4;
	// System.String[] savemethod.SaveMethod::channelName
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___channelName_5;
	// System.Double[] savemethod.SaveMethod::subscriber
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___subscriber_6;

public:
	inline static int32_t get_offset_of_nowTime_0() { return static_cast<int32_t>(offsetof(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB, ___nowTime_0)); }
	inline double get_nowTime_0() const { return ___nowTime_0; }
	inline double* get_address_of_nowTime_0() { return &___nowTime_0; }
	inline void set_nowTime_0(double value)
	{
		___nowTime_0 = value;
	}

	inline static int32_t get_offset_of_year_1() { return static_cast<int32_t>(offsetof(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB, ___year_1)); }
	inline int32_t get_year_1() const { return ___year_1; }
	inline int32_t* get_address_of_year_1() { return &___year_1; }
	inline void set_year_1(int32_t value)
	{
		___year_1 = value;
	}

	inline static int32_t get_offset_of_month_2() { return static_cast<int32_t>(offsetof(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB, ___month_2)); }
	inline int32_t get_month_2() const { return ___month_2; }
	inline int32_t* get_address_of_month_2() { return &___month_2; }
	inline void set_month_2(int32_t value)
	{
		___month_2 = value;
	}

	inline static int32_t get_offset_of_week_3() { return static_cast<int32_t>(offsetof(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB, ___week_3)); }
	inline int32_t get_week_3() const { return ___week_3; }
	inline int32_t* get_address_of_week_3() { return &___week_3; }
	inline void set_week_3(int32_t value)
	{
		___week_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB, ___id_4)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_id_4() const { return ___id_4; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___id_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___id_4), (void*)value);
	}

	inline static int32_t get_offset_of_channelName_5() { return static_cast<int32_t>(offsetof(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB, ___channelName_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_channelName_5() const { return ___channelName_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_channelName_5() { return &___channelName_5; }
	inline void set_channelName_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___channelName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelName_5), (void*)value);
	}

	inline static int32_t get_offset_of_subscriber_6() { return static_cast<int32_t>(offsetof(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB, ___subscriber_6)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_subscriber_6() const { return ___subscriber_6; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_subscriber_6() { return &___subscriber_6; }
	inline void set_subscriber_6(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___subscriber_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriber_6), (void*)value);
	}
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


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
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


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct  __StaticArrayInitTypeSizeU3D40_tEADC5D82E308542CB0A95168FC156FE53D85DB4F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_tEADC5D82E308542CB0A95168FC156FE53D85DB4F__padding[40];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80
struct  __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625__padding[80];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::01C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___01C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841
	__StaticArrayInitTypeSizeU3D40_tEADC5D82E308542CB0A95168FC156FE53D85DB4F  ___10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::32B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___32B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::7C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___7C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=80 <PrivateImplementationDetails>::F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5
	__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  ___F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12;

public:
	inline static int32_t get_offset_of_U301C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___01C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_U301C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0() const { return ___01C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_U301C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0() { return &___01C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0; }
	inline void set_U301C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___01C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0 = value;
	}

	inline static int32_t get_offset_of_U310B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1)); }
	inline __StaticArrayInitTypeSizeU3D40_tEADC5D82E308542CB0A95168FC156FE53D85DB4F  get_U310B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1() const { return ___10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1; }
	inline __StaticArrayInitTypeSizeU3D40_tEADC5D82E308542CB0A95168FC156FE53D85DB4F * get_address_of_U310B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1() { return &___10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1; }
	inline void set_U310B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1(__StaticArrayInitTypeSizeU3D40_tEADC5D82E308542CB0A95168FC156FE53D85DB4F  value)
	{
		___10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1 = value;
	}

	inline static int32_t get_offset_of_U332B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___32B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_U332B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2() const { return ___32B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_U332B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2() { return &___32B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2; }
	inline void set_U332B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___32B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2 = value;
	}

	inline static int32_t get_offset_of_U37C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___7C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_U37C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3() const { return ___7C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_U37C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3() { return &___7C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3; }
	inline void set_U37C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___7C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3 = value;
	}

	inline static int32_t get_offset_of_U3943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_U3943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4() const { return ___943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_U3943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4() { return &___943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4; }
	inline void set_U3943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4 = value;
	}

	inline static int32_t get_offset_of_A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5() const { return ___A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5() { return &___A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5; }
	inline void set_A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5 = value;
	}

	inline static int32_t get_offset_of_B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6() const { return ___B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6() { return &___B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6; }
	inline void set_B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6 = value;
	}

	inline static int32_t get_offset_of_B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7() const { return ___B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7() { return &___B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7; }
	inline void set_B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7 = value;
	}

	inline static int32_t get_offset_of_B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8() const { return ___B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8() { return &___B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8; }
	inline void set_B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8 = value;
	}

	inline static int32_t get_offset_of_BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9() const { return ___BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9() { return &___BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9; }
	inline void set_BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9 = value;
	}

	inline static int32_t get_offset_of_CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10() const { return ___CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10() { return &___CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10; }
	inline void set_CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10 = value;
	}

	inline static int32_t get_offset_of_EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11() const { return ___EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11() { return &___EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11; }
	inline void set_EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11 = value;
	}

	inline static int32_t get_offset_of_F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12)); }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  get_F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12() const { return ___F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12; }
	inline __StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625 * get_address_of_F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12() { return &___F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12; }
	inline void set_F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12(__StaticArrayInitTypeSizeU3D80_t96F91921A1B05688D604AA0DDC6261BCAA3FF625  value)
	{
		___F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12 = value;
	}
};


// UnityEngine.Advertisements.BannerPosition
struct  BannerPosition_t29565664AA28FC370AB42D7CC1BD2599EFA04079 
{
public:
	// System.Int32 UnityEngine.Advertisements.BannerPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BannerPosition_t29565664AA28FC370AB42D7CC1BD2599EFA04079, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Advertisements.ShowResult
struct  ShowResult_t5127A29B6AC14751283A7740E2368FDC284CA87D 
{
public:
	// System.Int32 UnityEngine.Advertisements.ShowResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShowResult_t5127A29B6AC14751283A7740E2368FDC284CA87D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamReader
struct  StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_20)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.IO.StreamWriter
struct  StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___stream_12)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_12() const { return ___stream_12; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoding_13)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_13), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___encoder_14)); }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___byteBuffer_15)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charBuffer_16)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6, ____asyncWriteTask_22)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_22), (void*)value);
	}
};

struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ___Null_11)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_11), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_23), (void*)value);
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AdSample
struct  AdSample_tB9EA4C0469D7085D04C599CAB61A65B11072B0FD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String AdSample::gameId
	String_t* ___gameId_4;
	// System.String AdSample::adUnitAndroidId
	String_t* ___adUnitAndroidId_5;
	// System.Boolean AdSample::testMode
	bool ___testMode_6;

public:
	inline static int32_t get_offset_of_gameId_4() { return static_cast<int32_t>(offsetof(AdSample_tB9EA4C0469D7085D04C599CAB61A65B11072B0FD, ___gameId_4)); }
	inline String_t* get_gameId_4() const { return ___gameId_4; }
	inline String_t** get_address_of_gameId_4() { return &___gameId_4; }
	inline void set_gameId_4(String_t* value)
	{
		___gameId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameId_4), (void*)value);
	}

	inline static int32_t get_offset_of_adUnitAndroidId_5() { return static_cast<int32_t>(offsetof(AdSample_tB9EA4C0469D7085D04C599CAB61A65B11072B0FD, ___adUnitAndroidId_5)); }
	inline String_t* get_adUnitAndroidId_5() const { return ___adUnitAndroidId_5; }
	inline String_t** get_address_of_adUnitAndroidId_5() { return &___adUnitAndroidId_5; }
	inline void set_adUnitAndroidId_5(String_t* value)
	{
		___adUnitAndroidId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adUnitAndroidId_5), (void*)value);
	}

	inline static int32_t get_offset_of_testMode_6() { return static_cast<int32_t>(offsetof(AdSample_tB9EA4C0469D7085D04C599CAB61A65B11072B0FD, ___testMode_6)); }
	inline bool get_testMode_6() const { return ___testMode_6; }
	inline bool* get_address_of_testMode_6() { return &___testMode_6; }
	inline void set_testMode_6(bool value)
	{
		___testMode_6 = value;
	}
};


// Banner
struct  Banner_tBEB262EFDD0E1680DD4D5C6B9E4DB6860E4C0EAF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Banner::gameId
	String_t* ___gameId_4;
	// System.String Banner::mySurfacingId
	String_t* ___mySurfacingId_5;
	// System.Boolean Banner::testMode
	bool ___testMode_6;

public:
	inline static int32_t get_offset_of_gameId_4() { return static_cast<int32_t>(offsetof(Banner_tBEB262EFDD0E1680DD4D5C6B9E4DB6860E4C0EAF, ___gameId_4)); }
	inline String_t* get_gameId_4() const { return ___gameId_4; }
	inline String_t** get_address_of_gameId_4() { return &___gameId_4; }
	inline void set_gameId_4(String_t* value)
	{
		___gameId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameId_4), (void*)value);
	}

	inline static int32_t get_offset_of_mySurfacingId_5() { return static_cast<int32_t>(offsetof(Banner_tBEB262EFDD0E1680DD4D5C6B9E4DB6860E4C0EAF, ___mySurfacingId_5)); }
	inline String_t* get_mySurfacingId_5() const { return ___mySurfacingId_5; }
	inline String_t** get_address_of_mySurfacingId_5() { return &___mySurfacingId_5; }
	inline void set_mySurfacingId_5(String_t* value)
	{
		___mySurfacingId_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mySurfacingId_5), (void*)value);
	}

	inline static int32_t get_offset_of_testMode_6() { return static_cast<int32_t>(offsetof(Banner_tBEB262EFDD0E1680DD4D5C6B9E4DB6860E4C0EAF, ___testMode_6)); }
	inline bool get_testMode_6() const { return ___testMode_6; }
	inline bool* get_address_of_testMode_6() { return &___testMode_6; }
	inline void set_testMode_6(bool value)
	{
		___testMode_6 = value;
	}
};


// Date
struct  Date_t28D15A2DFB20BEE5DDCDC0277F8F1AC90FBDEA6C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// savedata.SaveData Date::saveData
	SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * ___saveData_4;
	// savemethod.SaveMethod Date::saveMethod
	SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * ___saveMethod_5;
	// UnityEngine.UI.Text Date::yearText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___yearText_6;
	// UnityEngine.UI.Text Date::monthText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___monthText_7;
	// UnityEngine.UI.Text Date::weekText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___weekText_8;

public:
	inline static int32_t get_offset_of_saveData_4() { return static_cast<int32_t>(offsetof(Date_t28D15A2DFB20BEE5DDCDC0277F8F1AC90FBDEA6C, ___saveData_4)); }
	inline SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * get_saveData_4() const { return ___saveData_4; }
	inline SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D ** get_address_of_saveData_4() { return &___saveData_4; }
	inline void set_saveData_4(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * value)
	{
		___saveData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveData_4), (void*)value);
	}

	inline static int32_t get_offset_of_saveMethod_5() { return static_cast<int32_t>(offsetof(Date_t28D15A2DFB20BEE5DDCDC0277F8F1AC90FBDEA6C, ___saveMethod_5)); }
	inline SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * get_saveMethod_5() const { return ___saveMethod_5; }
	inline SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB ** get_address_of_saveMethod_5() { return &___saveMethod_5; }
	inline void set_saveMethod_5(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * value)
	{
		___saveMethod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveMethod_5), (void*)value);
	}

	inline static int32_t get_offset_of_yearText_6() { return static_cast<int32_t>(offsetof(Date_t28D15A2DFB20BEE5DDCDC0277F8F1AC90FBDEA6C, ___yearText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_yearText_6() const { return ___yearText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_yearText_6() { return &___yearText_6; }
	inline void set_yearText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___yearText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yearText_6), (void*)value);
	}

	inline static int32_t get_offset_of_monthText_7() { return static_cast<int32_t>(offsetof(Date_t28D15A2DFB20BEE5DDCDC0277F8F1AC90FBDEA6C, ___monthText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_monthText_7() const { return ___monthText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_monthText_7() { return &___monthText_7; }
	inline void set_monthText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___monthText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthText_7), (void*)value);
	}

	inline static int32_t get_offset_of_weekText_8() { return static_cast<int32_t>(offsetof(Date_t28D15A2DFB20BEE5DDCDC0277F8F1AC90FBDEA6C, ___weekText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_weekText_8() const { return ___weekText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_weekText_8() { return &___weekText_8; }
	inline void set_weekText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___weekText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weekText_8), (void*)value);
	}
};


// Ending
struct  Ending_t7861303E64C500F150F830DD1804D849512B0576  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Ending::infomationText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___infomationText_4;
	// System.Int32 Ending::counter
	int32_t ___counter_5;

public:
	inline static int32_t get_offset_of_infomationText_4() { return static_cast<int32_t>(offsetof(Ending_t7861303E64C500F150F830DD1804D849512B0576, ___infomationText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_infomationText_4() const { return ___infomationText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_infomationText_4() { return &___infomationText_4; }
	inline void set_infomationText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___infomationText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___infomationText_4), (void*)value);
	}

	inline static int32_t get_offset_of_counter_5() { return static_cast<int32_t>(offsetof(Ending_t7861303E64C500F150F830DD1804D849512B0576, ___counter_5)); }
	inline int32_t get_counter_5() const { return ___counter_5; }
	inline int32_t* get_address_of_counter_5() { return &___counter_5; }
	inline void set_counter_5(int32_t value)
	{
		___counter_5 = value;
	}
};


// Main
struct  Main_tDB418C89D33CD2699713F36E95C4373C8892C046  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// savedata.SaveData Main::saveData
	SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * ___saveData_4;
	// savemethod.SaveMethod Main::saveMethod
	SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * ___saveMethod_5;
	// constdata.ConstData Main::constData
	ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * ___constData_6;
	// constmethod.ConstMethod Main::constMethod
	ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * ___constMethod_7;
	// System.Double Main::timer
	double ___timer_8;

public:
	inline static int32_t get_offset_of_saveData_4() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___saveData_4)); }
	inline SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * get_saveData_4() const { return ___saveData_4; }
	inline SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D ** get_address_of_saveData_4() { return &___saveData_4; }
	inline void set_saveData_4(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * value)
	{
		___saveData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveData_4), (void*)value);
	}

	inline static int32_t get_offset_of_saveMethod_5() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___saveMethod_5)); }
	inline SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * get_saveMethod_5() const { return ___saveMethod_5; }
	inline SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB ** get_address_of_saveMethod_5() { return &___saveMethod_5; }
	inline void set_saveMethod_5(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * value)
	{
		___saveMethod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveMethod_5), (void*)value);
	}

	inline static int32_t get_offset_of_constData_6() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___constData_6)); }
	inline ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * get_constData_6() const { return ___constData_6; }
	inline ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 ** get_address_of_constData_6() { return &___constData_6; }
	inline void set_constData_6(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * value)
	{
		___constData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constData_6), (void*)value);
	}

	inline static int32_t get_offset_of_constMethod_7() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___constMethod_7)); }
	inline ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * get_constMethod_7() const { return ___constMethod_7; }
	inline ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 ** get_address_of_constMethod_7() { return &___constMethod_7; }
	inline void set_constMethod_7(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * value)
	{
		___constMethod_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constMethod_7), (void*)value);
	}

	inline static int32_t get_offset_of_timer_8() { return static_cast<int32_t>(offsetof(Main_tDB418C89D33CD2699713F36E95C4373C8892C046, ___timer_8)); }
	inline double get_timer_8() const { return ___timer_8; }
	inline double* get_address_of_timer_8() { return &___timer_8; }
	inline void set_timer_8(double value)
	{
		___timer_8 = value;
	}
};


// Ranking
struct  Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// savedata.SaveData Ranking::saveData
	SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * ___saveData_4;
	// savemethod.SaveMethod Ranking::saveMethod
	SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * ___saveMethod_5;
	// constdata.ConstData Ranking::constData
	ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * ___constData_6;
	// constmethod.ConstMethod Ranking::constMethod
	ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * ___constMethod_7;
	// System.Collections.Generic.List`1<System.Double> Ranking::subscriberList
	List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * ___subscriberList_8;
	// UnityEngine.UI.Text Ranking::channelText_One
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___channelText_One_9;
	// UnityEngine.UI.Text Ranking::subscriberText_One
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___subscriberText_One_10;
	// UnityEngine.UI.Text Ranking::channelText_Two
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___channelText_Two_11;
	// UnityEngine.UI.Text Ranking::subscriberText_Two
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___subscriberText_Two_12;
	// UnityEngine.UI.Text Ranking::channelText_Three
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___channelText_Three_13;
	// UnityEngine.UI.Text Ranking::subscriberText_Three
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___subscriberText_Three_14;
	// UnityEngine.UI.Text Ranking::channelText_Four
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___channelText_Four_15;
	// UnityEngine.UI.Text Ranking::subscriberText_Four
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___subscriberText_Four_16;
	// UnityEngine.UI.Text Ranking::channelText_Five
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___channelText_Five_17;
	// UnityEngine.UI.Text Ranking::subscriberText_Five
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___subscriberText_Five_18;
	// UnityEngine.UI.Text Ranking::channelText_Six
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___channelText_Six_19;
	// UnityEngine.UI.Text Ranking::subscriberText_Six
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___subscriberText_Six_20;
	// UnityEngine.UI.Text Ranking::channelText_Seven
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___channelText_Seven_21;
	// UnityEngine.UI.Text Ranking::subscriberText_Seven
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___subscriberText_Seven_22;
	// UnityEngine.UI.Text Ranking::channelText_Eight
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___channelText_Eight_23;
	// UnityEngine.UI.Text Ranking::subscriberText_Eight
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___subscriberText_Eight_24;
	// UnityEngine.UI.Text Ranking::channelText_Nine
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___channelText_Nine_25;
	// UnityEngine.UI.Text Ranking::subscriberText_Nine
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___subscriberText_Nine_26;
	// UnityEngine.UI.Text Ranking::channelText_Ten
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___channelText_Ten_27;
	// UnityEngine.UI.Text Ranking::subscriberText_Ten
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___subscriberText_Ten_28;
	// UnityEngine.UI.Image Ranking::channelBoxOne
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___channelBoxOne_29;
	// UnityEngine.UI.Image Ranking::channelBoxTwo
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___channelBoxTwo_30;
	// UnityEngine.UI.Image Ranking::channelBoxThree
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___channelBoxThree_31;
	// UnityEngine.UI.Image Ranking::channelBoxFour
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___channelBoxFour_32;
	// UnityEngine.UI.Image Ranking::channelBoxFive
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___channelBoxFive_33;
	// UnityEngine.UI.Image Ranking::channelBoxSix
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___channelBoxSix_34;
	// UnityEngine.UI.Image Ranking::channelBoxSeven
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___channelBoxSeven_35;
	// UnityEngine.UI.Image Ranking::channelBoxEight
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___channelBoxEight_36;
	// UnityEngine.UI.Image Ranking::channelBoxNine
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___channelBoxNine_37;
	// UnityEngine.UI.Image Ranking::channelBoxTen
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___channelBoxTen_38;

public:
	inline static int32_t get_offset_of_saveData_4() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___saveData_4)); }
	inline SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * get_saveData_4() const { return ___saveData_4; }
	inline SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D ** get_address_of_saveData_4() { return &___saveData_4; }
	inline void set_saveData_4(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * value)
	{
		___saveData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveData_4), (void*)value);
	}

	inline static int32_t get_offset_of_saveMethod_5() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___saveMethod_5)); }
	inline SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * get_saveMethod_5() const { return ___saveMethod_5; }
	inline SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB ** get_address_of_saveMethod_5() { return &___saveMethod_5; }
	inline void set_saveMethod_5(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * value)
	{
		___saveMethod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveMethod_5), (void*)value);
	}

	inline static int32_t get_offset_of_constData_6() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___constData_6)); }
	inline ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * get_constData_6() const { return ___constData_6; }
	inline ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 ** get_address_of_constData_6() { return &___constData_6; }
	inline void set_constData_6(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * value)
	{
		___constData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constData_6), (void*)value);
	}

	inline static int32_t get_offset_of_constMethod_7() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___constMethod_7)); }
	inline ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * get_constMethod_7() const { return ___constMethod_7; }
	inline ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 ** get_address_of_constMethod_7() { return &___constMethod_7; }
	inline void set_constMethod_7(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * value)
	{
		___constMethod_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constMethod_7), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberList_8() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___subscriberList_8)); }
	inline List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * get_subscriberList_8() const { return ___subscriberList_8; }
	inline List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** get_address_of_subscriberList_8() { return &___subscriberList_8; }
	inline void set_subscriberList_8(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * value)
	{
		___subscriberList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberList_8), (void*)value);
	}

	inline static int32_t get_offset_of_channelText_One_9() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelText_One_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_channelText_One_9() const { return ___channelText_One_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_channelText_One_9() { return &___channelText_One_9; }
	inline void set_channelText_One_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___channelText_One_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelText_One_9), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberText_One_10() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___subscriberText_One_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_subscriberText_One_10() const { return ___subscriberText_One_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_subscriberText_One_10() { return &___subscriberText_One_10; }
	inline void set_subscriberText_One_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___subscriberText_One_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberText_One_10), (void*)value);
	}

	inline static int32_t get_offset_of_channelText_Two_11() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelText_Two_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_channelText_Two_11() const { return ___channelText_Two_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_channelText_Two_11() { return &___channelText_Two_11; }
	inline void set_channelText_Two_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___channelText_Two_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelText_Two_11), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberText_Two_12() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___subscriberText_Two_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_subscriberText_Two_12() const { return ___subscriberText_Two_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_subscriberText_Two_12() { return &___subscriberText_Two_12; }
	inline void set_subscriberText_Two_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___subscriberText_Two_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberText_Two_12), (void*)value);
	}

	inline static int32_t get_offset_of_channelText_Three_13() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelText_Three_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_channelText_Three_13() const { return ___channelText_Three_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_channelText_Three_13() { return &___channelText_Three_13; }
	inline void set_channelText_Three_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___channelText_Three_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelText_Three_13), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberText_Three_14() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___subscriberText_Three_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_subscriberText_Three_14() const { return ___subscriberText_Three_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_subscriberText_Three_14() { return &___subscriberText_Three_14; }
	inline void set_subscriberText_Three_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___subscriberText_Three_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberText_Three_14), (void*)value);
	}

	inline static int32_t get_offset_of_channelText_Four_15() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelText_Four_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_channelText_Four_15() const { return ___channelText_Four_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_channelText_Four_15() { return &___channelText_Four_15; }
	inline void set_channelText_Four_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___channelText_Four_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelText_Four_15), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberText_Four_16() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___subscriberText_Four_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_subscriberText_Four_16() const { return ___subscriberText_Four_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_subscriberText_Four_16() { return &___subscriberText_Four_16; }
	inline void set_subscriberText_Four_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___subscriberText_Four_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberText_Four_16), (void*)value);
	}

	inline static int32_t get_offset_of_channelText_Five_17() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelText_Five_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_channelText_Five_17() const { return ___channelText_Five_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_channelText_Five_17() { return &___channelText_Five_17; }
	inline void set_channelText_Five_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___channelText_Five_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelText_Five_17), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberText_Five_18() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___subscriberText_Five_18)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_subscriberText_Five_18() const { return ___subscriberText_Five_18; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_subscriberText_Five_18() { return &___subscriberText_Five_18; }
	inline void set_subscriberText_Five_18(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___subscriberText_Five_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberText_Five_18), (void*)value);
	}

	inline static int32_t get_offset_of_channelText_Six_19() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelText_Six_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_channelText_Six_19() const { return ___channelText_Six_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_channelText_Six_19() { return &___channelText_Six_19; }
	inline void set_channelText_Six_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___channelText_Six_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelText_Six_19), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberText_Six_20() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___subscriberText_Six_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_subscriberText_Six_20() const { return ___subscriberText_Six_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_subscriberText_Six_20() { return &___subscriberText_Six_20; }
	inline void set_subscriberText_Six_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___subscriberText_Six_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberText_Six_20), (void*)value);
	}

	inline static int32_t get_offset_of_channelText_Seven_21() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelText_Seven_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_channelText_Seven_21() const { return ___channelText_Seven_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_channelText_Seven_21() { return &___channelText_Seven_21; }
	inline void set_channelText_Seven_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___channelText_Seven_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelText_Seven_21), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberText_Seven_22() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___subscriberText_Seven_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_subscriberText_Seven_22() const { return ___subscriberText_Seven_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_subscriberText_Seven_22() { return &___subscriberText_Seven_22; }
	inline void set_subscriberText_Seven_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___subscriberText_Seven_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberText_Seven_22), (void*)value);
	}

	inline static int32_t get_offset_of_channelText_Eight_23() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelText_Eight_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_channelText_Eight_23() const { return ___channelText_Eight_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_channelText_Eight_23() { return &___channelText_Eight_23; }
	inline void set_channelText_Eight_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___channelText_Eight_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelText_Eight_23), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberText_Eight_24() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___subscriberText_Eight_24)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_subscriberText_Eight_24() const { return ___subscriberText_Eight_24; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_subscriberText_Eight_24() { return &___subscriberText_Eight_24; }
	inline void set_subscriberText_Eight_24(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___subscriberText_Eight_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberText_Eight_24), (void*)value);
	}

	inline static int32_t get_offset_of_channelText_Nine_25() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelText_Nine_25)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_channelText_Nine_25() const { return ___channelText_Nine_25; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_channelText_Nine_25() { return &___channelText_Nine_25; }
	inline void set_channelText_Nine_25(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___channelText_Nine_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelText_Nine_25), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberText_Nine_26() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___subscriberText_Nine_26)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_subscriberText_Nine_26() const { return ___subscriberText_Nine_26; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_subscriberText_Nine_26() { return &___subscriberText_Nine_26; }
	inline void set_subscriberText_Nine_26(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___subscriberText_Nine_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberText_Nine_26), (void*)value);
	}

	inline static int32_t get_offset_of_channelText_Ten_27() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelText_Ten_27)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_channelText_Ten_27() const { return ___channelText_Ten_27; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_channelText_Ten_27() { return &___channelText_Ten_27; }
	inline void set_channelText_Ten_27(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___channelText_Ten_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelText_Ten_27), (void*)value);
	}

	inline static int32_t get_offset_of_subscriberText_Ten_28() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___subscriberText_Ten_28)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_subscriberText_Ten_28() const { return ___subscriberText_Ten_28; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_subscriberText_Ten_28() { return &___subscriberText_Ten_28; }
	inline void set_subscriberText_Ten_28(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___subscriberText_Ten_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subscriberText_Ten_28), (void*)value);
	}

	inline static int32_t get_offset_of_channelBoxOne_29() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelBoxOne_29)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_channelBoxOne_29() const { return ___channelBoxOne_29; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_channelBoxOne_29() { return &___channelBoxOne_29; }
	inline void set_channelBoxOne_29(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___channelBoxOne_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelBoxOne_29), (void*)value);
	}

	inline static int32_t get_offset_of_channelBoxTwo_30() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelBoxTwo_30)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_channelBoxTwo_30() const { return ___channelBoxTwo_30; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_channelBoxTwo_30() { return &___channelBoxTwo_30; }
	inline void set_channelBoxTwo_30(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___channelBoxTwo_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelBoxTwo_30), (void*)value);
	}

	inline static int32_t get_offset_of_channelBoxThree_31() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelBoxThree_31)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_channelBoxThree_31() const { return ___channelBoxThree_31; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_channelBoxThree_31() { return &___channelBoxThree_31; }
	inline void set_channelBoxThree_31(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___channelBoxThree_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelBoxThree_31), (void*)value);
	}

	inline static int32_t get_offset_of_channelBoxFour_32() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelBoxFour_32)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_channelBoxFour_32() const { return ___channelBoxFour_32; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_channelBoxFour_32() { return &___channelBoxFour_32; }
	inline void set_channelBoxFour_32(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___channelBoxFour_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelBoxFour_32), (void*)value);
	}

	inline static int32_t get_offset_of_channelBoxFive_33() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelBoxFive_33)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_channelBoxFive_33() const { return ___channelBoxFive_33; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_channelBoxFive_33() { return &___channelBoxFive_33; }
	inline void set_channelBoxFive_33(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___channelBoxFive_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelBoxFive_33), (void*)value);
	}

	inline static int32_t get_offset_of_channelBoxSix_34() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelBoxSix_34)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_channelBoxSix_34() const { return ___channelBoxSix_34; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_channelBoxSix_34() { return &___channelBoxSix_34; }
	inline void set_channelBoxSix_34(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___channelBoxSix_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelBoxSix_34), (void*)value);
	}

	inline static int32_t get_offset_of_channelBoxSeven_35() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelBoxSeven_35)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_channelBoxSeven_35() const { return ___channelBoxSeven_35; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_channelBoxSeven_35() { return &___channelBoxSeven_35; }
	inline void set_channelBoxSeven_35(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___channelBoxSeven_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelBoxSeven_35), (void*)value);
	}

	inline static int32_t get_offset_of_channelBoxEight_36() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelBoxEight_36)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_channelBoxEight_36() const { return ___channelBoxEight_36; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_channelBoxEight_36() { return &___channelBoxEight_36; }
	inline void set_channelBoxEight_36(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___channelBoxEight_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelBoxEight_36), (void*)value);
	}

	inline static int32_t get_offset_of_channelBoxNine_37() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelBoxNine_37)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_channelBoxNine_37() const { return ___channelBoxNine_37; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_channelBoxNine_37() { return &___channelBoxNine_37; }
	inline void set_channelBoxNine_37(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___channelBoxNine_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelBoxNine_37), (void*)value);
	}

	inline static int32_t get_offset_of_channelBoxTen_38() { return static_cast<int32_t>(offsetof(Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B, ___channelBoxTen_38)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_channelBoxTen_38() const { return ___channelBoxTen_38; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_channelBoxTen_38() { return &___channelBoxTen_38; }
	inline void set_channelBoxTen_38(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___channelBoxTen_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelBoxTen_38), (void*)value);
	}
};


// RankingAd
struct  RankingAd_t6630582BC1073C047D6880539E299522AD813666  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// savedata.SaveData RankingAd::saveData
	SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * ___saveData_4;
	// savemethod.SaveMethod RankingAd::saveMethod
	SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * ___saveMethod_5;
	// System.String RankingAd::gameId
	String_t* ___gameId_6;
	// System.Boolean RankingAd::testMode
	bool ___testMode_7;
	// System.String RankingAd::mySurfacingId
	String_t* ___mySurfacingId_8;

public:
	inline static int32_t get_offset_of_saveData_4() { return static_cast<int32_t>(offsetof(RankingAd_t6630582BC1073C047D6880539E299522AD813666, ___saveData_4)); }
	inline SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * get_saveData_4() const { return ___saveData_4; }
	inline SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D ** get_address_of_saveData_4() { return &___saveData_4; }
	inline void set_saveData_4(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * value)
	{
		___saveData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveData_4), (void*)value);
	}

	inline static int32_t get_offset_of_saveMethod_5() { return static_cast<int32_t>(offsetof(RankingAd_t6630582BC1073C047D6880539E299522AD813666, ___saveMethod_5)); }
	inline SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * get_saveMethod_5() const { return ___saveMethod_5; }
	inline SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB ** get_address_of_saveMethod_5() { return &___saveMethod_5; }
	inline void set_saveMethod_5(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * value)
	{
		___saveMethod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveMethod_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameId_6() { return static_cast<int32_t>(offsetof(RankingAd_t6630582BC1073C047D6880539E299522AD813666, ___gameId_6)); }
	inline String_t* get_gameId_6() const { return ___gameId_6; }
	inline String_t** get_address_of_gameId_6() { return &___gameId_6; }
	inline void set_gameId_6(String_t* value)
	{
		___gameId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameId_6), (void*)value);
	}

	inline static int32_t get_offset_of_testMode_7() { return static_cast<int32_t>(offsetof(RankingAd_t6630582BC1073C047D6880539E299522AD813666, ___testMode_7)); }
	inline bool get_testMode_7() const { return ___testMode_7; }
	inline bool* get_address_of_testMode_7() { return &___testMode_7; }
	inline void set_testMode_7(bool value)
	{
		___testMode_7 = value;
	}

	inline static int32_t get_offset_of_mySurfacingId_8() { return static_cast<int32_t>(offsetof(RankingAd_t6630582BC1073C047D6880539E299522AD813666, ___mySurfacingId_8)); }
	inline String_t* get_mySurfacingId_8() const { return ___mySurfacingId_8; }
	inline String_t** get_address_of_mySurfacingId_8() { return &___mySurfacingId_8; }
	inline void set_mySurfacingId_8(String_t* value)
	{
		___mySurfacingId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mySurfacingId_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mB7E22A7FFC2F7C7989CCFE06FC9870523317C979_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Reverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Reverse_mB2B4C1FD2957F967431B503FA3A594ECD4BBBD55_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, double ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_gshared_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method);

// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m50E5DCFAC318D93B37B03C454C0B6648428A109F (String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement/Banner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_SetPosition_mB03D6FE7CBC2DA088649E8EC1DD89D352E201043 (int32_t ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Show_m3C42E55C8F73C12F90BF9AB9D5A293CA7368906E (String_t* ___placementId0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::IsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_IsReady_m7880E5F097F352E81CED7DFA42B48F150B0EC682 (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m8B3BB4A04BD6822D5B0A8CE6E675E6CDEDFDCEED (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void constmethod.ConstMethod::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstMethod__ctor_mF234FD132E3F3971A6708EF8BDA15410B02DDE7F (ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_one_mF4F92125696C21CCA0B205298F38406EECF494C0_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_one_m701DBE14D02ADDE3F0ED2659AD868557BE340F53_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_one_m384CDD6A237A322C27259A17436E21F42927AF34_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_two()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_two_m5EB605B715F51E3327350C022534A9CFBD6E598F_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_two()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_two_mA05F9834C00D027AEB1471BA575CEF40C58C4950_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_two()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_two_m239639A08E7276E3E12B1F209B6320AE06DA23F6_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_three()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_three_m1CB3EE23C49735AA0F197B846D38D464C3C56958_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_three()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_three_m2E6999DB1DD99B0AA0C0C78A5B4299192206F811_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_three()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_three_mC1D0E7A6CB2B3B5C32D06551765AF0BE2A894DD2_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_four()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_four_mE2D73D3ECDEC8D1D4758C13D2766F32DEE8055B1_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_four()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_four_mA8CEF565F16B85135A16EB300D20DAB97769EF9B_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_four()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_four_m86ECA679D4B2CCB344571495BA12F8A12424D17E_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_five()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_five_mDF1EB6254B9AA9913FA994DD23180AEF2782CDA7_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_five()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_five_mC464A3EF07234D743F53E49B8BD0AE0EA45E19C7_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_five()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_five_m0809A571FF8CF669E67FEF125C3F632D73036F8F_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_six()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_six_mCF05A896A65C3101E27CEC3ABB32111B3DFA018D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_six()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_six_m5D1A49C0E51AD6A7A9526EBC11FC099422D288CC_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_six()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_six_m5496E5CB9344F601DD7879523D8B517A3F166B1A_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_seven()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_seven_m8FFED31E586E338FACE6BB8348FF8C06F0921384_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_seven()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_seven_mE2833926A630C7155BDA120A379E603554F7964D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_seven()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_seven_m129BA17538D9120D3EE93B0F2D352BAE6C28561D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_eight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_eight_m8E976D19EBC2DA6617E490870B5BF7B97719B44E_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_eight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_eight_mE5CACD7765C7D3D36670F3BE636F6E8CD99E1688_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_eight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_eight_m1DAB86A514BC8A29940C126FEFE247A958F8EAB2_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_nine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_nine_mDAAE2ED6106E3DC257FF153E1710914203813EED_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_nine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_nine_m9E19D3011E84D756CC7A48A5DC9FDB5F120F5EF1_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_nine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_nine_m2E3266D471AB05B7583023515E240E9C3AB75369_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_ten()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_ten_m1497B160EFFCEE7713805E06E7CCEBB14E1B16E7_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_ten()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_ten_m5E20878776B0283D420BA8D59EE606A7208D879C_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_ten()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_ten_mB21FD6268AEAEDBB022EFA0192C25606CB553DF1_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_eleven()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_eleven_mDEC48EEC09729F642A0EDEFD4FB271ACD8810195_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_eleven()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_eleven_mDE83346CAA6CE6DA6D5E39D5D97F18EE6AD192C3_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_eleven()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_eleven_m7F08C2B2C5DD884E34B1C6EB92CF10D87ED035B3_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Int32[] constdata.ConstData::get_Id_twelve()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_twelve_m9BDB6BFEE9F557A05D45B87519542327C87BDB1E_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String[] constdata.ConstData::get_ChannelName_twelve()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_twelve_m9B26C7961685096F8FE9BA3608FDE5BE95F639D8_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Double[] constdata.ConstData::get_Subscriber_twelve()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_twelve_mDA24C3F8E90EE6B6287A4F7508DE7B0B36F795D7_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.IO.StreamWriter::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m6A81CE9EDAB3AAB4270E88539EA83D945954CD0E (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * __this, String_t* ___path0, bool ___append1, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m1F07D64A9881F3A6B755881210B4E88F8E63849B (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, String_t* ___path0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<constmethod.ConstMethod>(System.String)
inline ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * JsonUtility_FromJson_TisConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_mD76433A17104869E4691012479D1CCD6BFC799BA (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void constdata.ConstData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData__ctor_mCDB0658C26F83558C54CAFB5AE5885AF0A52BF4F (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_one(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_one_mB4BFFCC226EA9913A75DA7ECB2B86CFE7EF408BC_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_one(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_one_mB1DDF691595244247A6A1E443A043F138CD5D75B_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_one(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_one_mA588CF7DCFD6751FC329C8353AD855BB82867EA2_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_two(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_two_m00ED2007794D851D2C5731EA6BF42C82F30CE6CB_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_two(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_two_m59F681510F7545E30C6692FEDB9F50803DD89E0B_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_two(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_two_mC03DA19DC13FF295F568F566797FB25849548F7D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_three(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_three_m78B9421EC80F2EDABB979D85E6417C0B5EFD0475_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_three(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_three_m4B060CA2A008741E19C3714ECFE62986EF557692_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_three(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_three_m1FE6B4DEEBD90026EF7755828E007D3C95B97DA4_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_four(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_four_m4FBECD5865A8F7DDD8B82E31C42618AA6A0D7279_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_four(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_four_m3A35324D28E39A6F1BDD5A9833E14B9F9AB9E88F_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_four(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_four_m2B84BE27645C611B6F1E5C8987D49FAC63B341C6_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_five(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_five_mC51F779DB5E7B6DAC120A75EF2640EF0829C197B_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_five(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_five_mBD1F0D93B6C040A629850CFBE9FEBF61F48455BC_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_five(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_five_mD2483B90160205F9FCB7C7C2E26A19581F3725E2_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_six(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_six_mFB7F01EDA1C25EC8D6CF2C2B33B0EEB1F613A813_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_six(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_six_m835A095C57675B77AC2B96A5876920622C376596_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_six(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_six_mB80A7152228CCDE617EBF090E94C634A5489978D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_seven(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_seven_m914B1236C3B3A04199C5F684C13B3971964474C9_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_seven(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_seven_m23132ECCC9345254637D667EE15B298A6EAB4F43_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_seven(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_seven_m8612A8A8AE67D739A39B6AF19E4E2A8E46C84248_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_eight(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_eight_m83D2EC6FE379BC8B029903B4F10545FEE5BF7F8A_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_eight(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_eight_mCEC2802820A2C1199CDE6D4D4E7E6B93BBC1862D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_eight(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_eight_m7CEB7556ECD0493D6B9863EE7324983082645902_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_nine(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_nine_m00D6592B6CA14F0C8C320D2E03B58812E73BA12D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_nine(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_nine_mEFEB2A50C483342CB039F646643EDDEF4027404F_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_nine(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_nine_m2256B5E90EE1C3A66DB72AFDDC3A1F3CE9B8D76A_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_ten(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_ten_mFBBD8C797888602272B767A769C655D0D94B7025_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_ten(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_ten_m5570A58692EDB9B3B5338E13A92D7FB04385695D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_ten(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_ten_mACF123D0172048F41F25DA0302684F9D94E091CC_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_eleven(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_eleven_m735F99B5186DF309B8C2B7381B7155ADED9CF9FB_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_eleven(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_eleven_m0AD7E9CF632EAB63B849EF288F7F64800C479C78_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_eleven(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_eleven_m1B468ADCAA30F5CE18C40C60642B1BA3921A5997_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Id_twelve(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_twelve_m179E11F1EBA086E44450AEA2672F6C2978A7495C_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_ChannelName_twelve(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_twelve_m94B312947861EEF6B06011B35648003D53506AE6_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void constdata.ConstData::set_Subscriber_twelve(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_twelve_m558826EB7E276A0D2A8CD42D6A812435F9BEABA2_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77 (String_t* ___path0, const RuntimeMethod* method);
// savedata.SaveData savemethod.SaveMethod::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * SaveMethod_Load_m2ADB27ECA0FC592161B76E2769EE7EC05AF0D8CB (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * __this, const RuntimeMethod* method);
// System.Int32 savedata.SaveData::get_Year()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SaveData_get_Year_mBE411FC1E50D2D10BD4C6017741D415B60CD20D1_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 savedata.SaveData::get_Month()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SaveData_get_Month_m604A37495CCDED028F24C3F7B4BD8A0DC472FF7F_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method);
// System.Int32 savedata.SaveData::get_Week()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SaveData_get_Week_m27B5C5912B0D4014C9D9C2EFD64B8A2A366AA938_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method);
// System.Void savedata.SaveData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_m78E26F642D513F242E6B8BBDDEFF416C5656851E (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method);
// System.Void savemethod.SaveMethod::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveMethod__ctor_m9C88F839226E35D2DE9B64CFE8070B0C40D8FA70 (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Void savemethod.SaveMethod::Save(savedata.SaveData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveMethod_Save_m8BCB5E04C5B31132B22481F3804F02A6740D439D (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * __this, SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * ___saveData0, const RuntimeMethod* method);
// System.Void constmethod.ConstMethod::Save(constdata.ConstData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstMethod_Save_mFAB6D8C11A00708903196EB50DE71A5EE47C3F4B (ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * __this, ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * ___constData0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Double savedata.SaveData::get_NowTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double SaveData_get_NowTime_mC47E74D4557DD65CBEBB9B048B95677CB907A0D3_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method);
// System.Void savedata.SaveData::set_NowTime(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_NowTime_m0527D96F449BD4D6D5C75610AC08A68B07127C0C_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, double ___value0, const RuntimeMethod* method);
// System.Void savedata.SaveData::set_Week(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_Week_mC88EF20417E942D94883F9B554B8EB27000EFDEA_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void savedata.SaveData::set_Month(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_Month_m3D05B1B5D46AF162BF12F422FE88EC7C03CC83A2_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, int32_t ___value0, const RuntimeMethod* method);
// constdata.ConstData constmethod.ConstMethod::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * ConstMethod_Load_m0D22DBCEC6A3AC67C2FEE5E1BFBEFB3DAC74B6DA (ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * __this, const RuntimeMethod* method);
// System.Void Ranking::AddList(System.Collections.Generic.List`1<System.Double>&,System.Int32&,constdata.ConstData,savedata.SaveData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ranking_AddList_mF759FC99E07298BDE382AB6209709FC21EC01F3F (Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B * __this, List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** ___subscriberList0, int32_t* ___element1, ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * ___constData2, SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * ___saveData3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Sort()
inline void List_1_Sort_mB7E22A7FFC2F7C7989CCFE06FC9870523317C979 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))List_1_Sort_mB7E22A7FFC2F7C7989CCFE06FC9870523317C979_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::Reverse()
inline void List_1_Reverse_mB2B4C1FD2957F967431B503FA3A594ECD4BBBD55 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))List_1_Reverse_mB2B4C1FD2957F967431B503FA3A594ECD4BBBD55_gshared)(__this, method);
}
// System.Void Ranking::DisplayRanking(System.Collections.Generic.List`1<System.Double>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ranking_DisplayRanking_m540D01679988533330AEC6FE8D98CF912CBB641C (Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B * __this, List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * ___subscriberlist0, int32_t ___element1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
inline void List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_gshared)(__this, ___collection0, method);
}
// System.Int32[] savedata.SaveData::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* SaveData_get_Id_mB39E206950FF941E1DF9DAC2F682BEEADFBFC54F_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method);
// System.Double[] savedata.SaveData::get_Subscriber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Add(!0)
inline void List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, double ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, double, const RuntimeMethod*))List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
inline double List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  double (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, int32_t, const RuntimeMethod*))List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_gshared_inline)(__this, ___index0, method);
}
// System.Void Ranking::DisplayIndividual(System.String,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B (Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B * __this, String_t* ___name0, double ___subscriber1, int32_t ___count2, const RuntimeMethod* method);
// System.String[] savedata.SaveData::get_ChannelName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method);
// System.Void Ranking::DisplayIndividualMine(System.String,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284 (Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B * __this, String_t* ___name0, double ___subscriber1, int32_t ___count2, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
inline void List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Advertisement::AddListener(UnityEngine.Advertisements.IUnityAdsListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_AddListener_m1548B00420180351DF863FBB372C0264AAE49C44 (RuntimeObject* ___listener0, const RuntimeMethod* method);
// System.Void savedata.SaveData::set_Year(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_Year_m3CA1BA5D3C21F81E1644F3BC9A53AE68018F4B67_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<savemethod.SaveMethod>(System.String)
inline SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * JsonUtility_FromJson_TisSaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_m0979464994C7D37A91E273FABAF78239C15DDE41 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void savedata.SaveData::set_Id(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_Id_mE6DAE156580DAF7299EB62D6D63AF2EEE4E3036E_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void savedata.SaveData::set_ChannelName(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_ChannelName_m59135D13CA150372440C6A076878453010A132B5_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Void savedata.SaveData::set_Subscriber(System.Double[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_Subscriber_mB433431AC84B7A65CA677F598EDBABC9B2A0A6AB_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void AdSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSample_Awake_mDCA1D459910AC6FAA4E3EE95FD6FB58ED1A4E129 (AdSample_tB9EA4C0469D7085D04C599CAB61A65B11072B0FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Initialize(gameId, testMode);
		String_t* L_0 = __this->get_gameId_4();
		bool L_1 = __this->get_testMode_6();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m50E5DCFAC318D93B37B03C454C0B6648428A109F(L_0, L_1, /*hidden argument*/NULL);
		// Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
		Banner_SetPosition_mB03D6FE7CBC2DA088649E8EC1DD89D352E201043(4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSample_Update_m49C445D3B36B2AB4C368C8D2B4C407E6F780B502 (AdSample_tB9EA4C0469D7085D04C599CAB61A65B11072B0FD * __this, const RuntimeMethod* method)
{
	{
		// Advertisement.Banner.Show(adUnitAndroidId);
		String_t* L_0 = __this->get_adUnitAndroidId_5();
		Banner_Show_m3C42E55C8F73C12F90BF9AB9D5A293CA7368906E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdSample::ShowInterstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSample_ShowInterstitialAd_m7CA9CBC139D93EDA17A8FAAF81284468A0C140D5 (AdSample_tB9EA4C0469D7085D04C599CAB61A65B11072B0FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Advertisement.IsReady(adUnitAndroidId))
		String_t* L_0 = __this->get_adUnitAndroidId_5();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Advertisement_IsReady_m7880E5F097F352E81CED7DFA42B48F150B0EC682(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Advertisement.Show(adUnitAndroidId);
		String_t* L_2 = __this->get_adUnitAndroidId_5();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var);
		Advertisement_Show_m8B3BB4A04BD6822D5B0A8CE6E675E6CDEDFDCEED(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0019:
	{
		// Debug.Log("Error");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AdSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdSample__ctor_mB3F46ED99E56CD98F6BE387F65C7DB31123FA062 (AdSample_tB9EA4C0469D7085D04C599CAB61A65B11072B0FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFD0AC4E2D970944C99778AB1BF7A096E978A38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string gameId = "4064217";
		__this->set_gameId_4(_stringLiteral3DFD0AC4E2D970944C99778AB1BF7A096E978A38);
		// private string adUnitAndroidId = "Interstitial_Android";
		__this->set_adUnitAndroidId_5(_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		// private bool testMode = true;
		__this->set_testMode_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Banner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Awake_mAAF7442BC70FFE1815CCBFAA21D07F1E4ABC7F49 (Banner_tBEB262EFDD0E1680DD4D5C6B9E4DB6860E4C0EAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Initialize(gameId, testMode);
		String_t* L_0 = __this->get_gameId_4();
		bool L_1 = __this->get_testMode_6();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var);
		Advertisement_Initialize_m50E5DCFAC318D93B37B03C454C0B6648428A109F(L_0, L_1, /*hidden argument*/NULL);
		// Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
		Banner_SetPosition_mB03D6FE7CBC2DA088649E8EC1DD89D352E201043(4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Banner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Update_mEEF207073D89BCD2E27A45896F1158E2E973E11F (Banner_tBEB262EFDD0E1680DD4D5C6B9E4DB6860E4C0EAF * __this, const RuntimeMethod* method)
{
	{
		// Advertisement.Banner.Show(mySurfacingId);
		String_t* L_0 = __this->get_mySurfacingId_5();
		Banner_Show_m3C42E55C8F73C12F90BF9AB9D5A293CA7368906E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Banner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_m6DDDC08EC09A0F8C7B1F1FFB6426248F4DFF9564 (Banner_tBEB262EFDD0E1680DD4D5C6B9E4DB6860E4C0EAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18CA46361F03E90558C9FB7AF510C8173C532D49);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B416EC272EB1FCD8DA23849E9A0C8D11CFC97B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string gameId = "4064216";
		__this->set_gameId_4(_stringLiteral4B416EC272EB1FCD8DA23849E9A0C8D11CFC97B4);
		// private string mySurfacingId = "Banner_iOS";
		__this->set_mySurfacingId_5(_stringLiteral18CA46361F03E90558C9FB7AF510C8173C532D49);
		// private bool testMode = true;
		__this->set_testMode_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32[] constdata.ConstData::get_Id_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_one_mF4F92125696C21CCA0B205298F38406EECF494C0 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_one;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_one_0();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_one(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_one_mB4BFFCC226EA9913A75DA7ECB2B86CFE7EF408BC (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_one = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_one_0(L_0);
		// set {id_one = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_one_m701DBE14D02ADDE3F0ED2659AD868557BE340F53 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_one;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_one_1();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_one(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_one_mB1DDF691595244247A6A1E443A043F138CD5D75B (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_one = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_one_1(L_0);
		// set {channelName_one = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_one_m384CDD6A237A322C27259A17436E21F42927AF34 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_one;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_one_2();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_one(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_one_mA588CF7DCFD6751FC329C8353AD855BB82867EA2 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_one = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_one_2(L_0);
		// set {subscriber_one = value;}
		return;
	}
}
// System.Int32[] constdata.ConstData::get_Id_two()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_two_m5EB605B715F51E3327350C022534A9CFBD6E598F (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_two;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_two_3();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_two(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_two_m00ED2007794D851D2C5731EA6BF42C82F30CE6CB (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_two = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_two_3(L_0);
		// set {id_two = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_two()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_two_mA05F9834C00D027AEB1471BA575CEF40C58C4950 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_two;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_two_4();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_two(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_two_m59F681510F7545E30C6692FEDB9F50803DD89E0B (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_two = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_two_4(L_0);
		// set {channelName_two = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_two()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_two_m239639A08E7276E3E12B1F209B6320AE06DA23F6 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_two;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_two_5();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_two(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_two_mC03DA19DC13FF295F568F566797FB25849548F7D (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_two = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_two_5(L_0);
		// set {subscriber_two = value;}
		return;
	}
}
// System.Int32[] constdata.ConstData::get_Id_three()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_three_m1CB3EE23C49735AA0F197B846D38D464C3C56958 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_three;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_three_6();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_three(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_three_m78B9421EC80F2EDABB979D85E6417C0B5EFD0475 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_three = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_three_6(L_0);
		// set {id_three = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_three()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_three_m2E6999DB1DD99B0AA0C0C78A5B4299192206F811 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_three;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_three_7();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_three(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_three_m4B060CA2A008741E19C3714ECFE62986EF557692 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_three = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_three_7(L_0);
		// set {channelName_three = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_three()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_three_mC1D0E7A6CB2B3B5C32D06551765AF0BE2A894DD2 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_three;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_three_8();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_three(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_three_m1FE6B4DEEBD90026EF7755828E007D3C95B97DA4 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_three = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_three_8(L_0);
		// set {subscriber_three = value;}
		return;
	}
}
// System.Int32[] constdata.ConstData::get_Id_four()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_four_mE2D73D3ECDEC8D1D4758C13D2766F32DEE8055B1 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_four;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_four_9();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_four(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_four_m4FBECD5865A8F7DDD8B82E31C42618AA6A0D7279 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_four = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_four_9(L_0);
		// set {id_four = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_four()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_four_mA8CEF565F16B85135A16EB300D20DAB97769EF9B (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_four;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_four_10();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_four(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_four_m3A35324D28E39A6F1BDD5A9833E14B9F9AB9E88F (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_four = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_four_10(L_0);
		// set {channelName_four = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_four()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_four_m86ECA679D4B2CCB344571495BA12F8A12424D17E (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_four;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_four_11();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_four(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_four_m2B84BE27645C611B6F1E5C8987D49FAC63B341C6 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_four = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_four_11(L_0);
		// set {subscriber_four = value;}
		return;
	}
}
// System.Int32[] constdata.ConstData::get_Id_five()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_five_mDF1EB6254B9AA9913FA994DD23180AEF2782CDA7 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_five;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_five_12();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_five(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_five_mC51F779DB5E7B6DAC120A75EF2640EF0829C197B (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_five = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_five_12(L_0);
		// set {id_five = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_five()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_five_mC464A3EF07234D743F53E49B8BD0AE0EA45E19C7 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_five;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_five_13();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_five(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_five_mBD1F0D93B6C040A629850CFBE9FEBF61F48455BC (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_five = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_five_13(L_0);
		// set {channelName_five = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_five()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_five_m0809A571FF8CF669E67FEF125C3F632D73036F8F (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_five;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_five_14();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_five(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_five_mD2483B90160205F9FCB7C7C2E26A19581F3725E2 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_five = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_five_14(L_0);
		// set {subscriber_five = value;}
		return;
	}
}
// System.Int32[] constdata.ConstData::get_Id_six()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_six_mCF05A896A65C3101E27CEC3ABB32111B3DFA018D (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_six;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_six_15();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_six(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_six_mFB7F01EDA1C25EC8D6CF2C2B33B0EEB1F613A813 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_six = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_six_15(L_0);
		// set {id_six = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_six()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_six_m5D1A49C0E51AD6A7A9526EBC11FC099422D288CC (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_six;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_six_16();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_six(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_six_m835A095C57675B77AC2B96A5876920622C376596 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_six = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_six_16(L_0);
		// set {channelName_six = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_six()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_six_m5496E5CB9344F601DD7879523D8B517A3F166B1A (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_six;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_six_17();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_six(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_six_mB80A7152228CCDE617EBF090E94C634A5489978D (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_six = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_six_17(L_0);
		// set {subscriber_six = value;}
		return;
	}
}
// System.Int32[] constdata.ConstData::get_Id_seven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_seven_m8FFED31E586E338FACE6BB8348FF8C06F0921384 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_seven;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_seven_18();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_seven(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_seven_m914B1236C3B3A04199C5F684C13B3971964474C9 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_seven = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_seven_18(L_0);
		// set {id_seven = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_seven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_seven_mE2833926A630C7155BDA120A379E603554F7964D (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_seven;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_seven_19();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_seven(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_seven_m23132ECCC9345254637D667EE15B298A6EAB4F43 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_seven = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_seven_19(L_0);
		// set {channelName_seven = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_seven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_seven_m129BA17538D9120D3EE93B0F2D352BAE6C28561D (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_seven;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_seven_20();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_seven(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_seven_m8612A8A8AE67D739A39B6AF19E4E2A8E46C84248 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_seven = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_seven_20(L_0);
		// set {subscriber_seven = value;}
		return;
	}
}
// System.Int32[] constdata.ConstData::get_Id_eight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_eight_m8E976D19EBC2DA6617E490870B5BF7B97719B44E (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_eight;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_eight_21();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_eight(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_eight_m83D2EC6FE379BC8B029903B4F10545FEE5BF7F8A (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_eight = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_eight_21(L_0);
		// set {id_eight = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_eight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_eight_mE5CACD7765C7D3D36670F3BE636F6E8CD99E1688 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_eight;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_eight_22();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_eight(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_eight_mCEC2802820A2C1199CDE6D4D4E7E6B93BBC1862D (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_eight = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_eight_22(L_0);
		// set {channelName_eight = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_eight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_eight_m1DAB86A514BC8A29940C126FEFE247A958F8EAB2 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_eight;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_eight_23();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_eight(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_eight_m7CEB7556ECD0493D6B9863EE7324983082645902 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_eight = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_eight_23(L_0);
		// set {subscriber_eight = value;}
		return;
	}
}
// System.Int32[] constdata.ConstData::get_Id_nine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_nine_mDAAE2ED6106E3DC257FF153E1710914203813EED (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_nine;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_nine_24();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_nine(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_nine_m00D6592B6CA14F0C8C320D2E03B58812E73BA12D (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_nine = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_nine_24(L_0);
		// set {id_nine = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_nine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_nine_m9E19D3011E84D756CC7A48A5DC9FDB5F120F5EF1 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_nine;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_nine_25();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_nine(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_nine_mEFEB2A50C483342CB039F646643EDDEF4027404F (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_nine = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_nine_25(L_0);
		// set {channelName_nine = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_nine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_nine_m2E3266D471AB05B7583023515E240E9C3AB75369 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_nine;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_nine_26();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_nine(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_nine_m2256B5E90EE1C3A66DB72AFDDC3A1F3CE9B8D76A (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_nine = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_nine_26(L_0);
		// set {subscriber_nine = value;}
		return;
	}
}
// System.Int32[] constdata.ConstData::get_Id_ten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_ten_m1497B160EFFCEE7713805E06E7CCEBB14E1B16E7 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_ten;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_ten_27();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_ten(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_ten_mFBBD8C797888602272B767A769C655D0D94B7025 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_ten = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_ten_27(L_0);
		// set {id_ten = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_ten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_ten_m5E20878776B0283D420BA8D59EE606A7208D879C (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_ten;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_ten_28();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_ten(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_ten_m5570A58692EDB9B3B5338E13A92D7FB04385695D (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_ten = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_ten_28(L_0);
		// set {channelName_ten = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_ten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_ten_mB21FD6268AEAEDBB022EFA0192C25606CB553DF1 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_ten;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_ten_29();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_ten(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_ten_mACF123D0172048F41F25DA0302684F9D94E091CC (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_ten = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_ten_29(L_0);
		// set {subscriber_ten = value;}
		return;
	}
}
// System.Int32[] constdata.ConstData::get_Id_eleven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_eleven_mDEC48EEC09729F642A0EDEFD4FB271ACD8810195 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_eleven;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_eleven_30();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_eleven(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_eleven_m735F99B5186DF309B8C2B7381B7155ADED9CF9FB (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_eleven = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_eleven_30(L_0);
		// set {id_eleven = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_eleven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_eleven_mDE83346CAA6CE6DA6D5E39D5D97F18EE6AD192C3 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_eleven;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_eleven_31();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_eleven(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_eleven_m0AD7E9CF632EAB63B849EF288F7F64800C479C78 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_eleven = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_eleven_31(L_0);
		// set {channelName_eleven = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_eleven()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_eleven_m7F08C2B2C5DD884E34B1C6EB92CF10D87ED035B3 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_eleven;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_eleven_32();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_eleven(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_eleven_m1B468ADCAA30F5CE18C40C60642B1BA3921A5997 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_eleven = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_eleven_32(L_0);
		// set {subscriber_eleven = value;}
		return;
	}
}
// System.Int32[] constdata.ConstData::get_Id_twelve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_twelve_m9BDB6BFEE9F557A05D45B87519542327C87BDB1E (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_twelve;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_twelve_33();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Id_twelve(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Id_twelve_m179E11F1EBA086E44450AEA2672F6C2978A7495C (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_twelve = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_twelve_33(L_0);
		// set {id_twelve = value;}
		return;
	}
}
// System.String[] constdata.ConstData::get_ChannelName_twelve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_twelve_m9B26C7961685096F8FE9BA3608FDE5BE95F639D8 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_twelve;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_twelve_34();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_ChannelName_twelve(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_twelve_m94B312947861EEF6B06011B35648003D53506AE6 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_twelve = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_twelve_34(L_0);
		// set {channelName_twelve = value;}
		return;
	}
}
// System.Double[] constdata.ConstData::get_Subscriber_twelve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_twelve_mDA24C3F8E90EE6B6287A4F7508DE7B0B36F795D7 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_twelve;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_twelve_35();
		return L_0;
	}
}
// System.Void constdata.ConstData::set_Subscriber_twelve(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_twelve_m558826EB7E276A0D2A8CD42D6A812435F9BEABA2 (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_twelve = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_twelve_35(L_0);
		// set {subscriber_twelve = value;}
		return;
	}
}
// System.Void constdata.ConstData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstData__ctor_mCDB0658C26F83558C54CAFB5AE5885AF0A52BF4F (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____01C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____32B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____7C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral054EA21FBB9C768DD9E8B5F5B96C34E13BBFDBE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13FAE4F0DC77A2C061CB9B4B37F4D1E9178C633A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32097A3C12A516088B553DBE3E4E940195691617);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36E00DB686A9061572DB82E4535DAA12A20DEB27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D1CD038401D2E156485C1AAD598B3A769DC02C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E0B96248A1F75628FFF39E1E8E74838F3EB685F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48ED56FC71BECB4C75C1E7E29A0D4F03C92B5CF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51AE2B768FE553E03A8EBEDD446A5CD8E844F6EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57C795C522102EFADCB37455610FBCEAF945174B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB8E181EF665F2000B8FB2DD838B17C18C8CC50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F9B2509C5F1EA43473F31D593986A52C1EF6259);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F2C24F26EA3F4190757227EEB46A39CA702288C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0302E7B8933CEAAED3D984F673813DBDD7414F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0B3FFC689E515CD1809BEE7A6CEA7EBA57563E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9672B10DCAB95710622770CD57DDFFAB3410A5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB10BF7FB4B17FA19ECD901F3B77C3B3459C0E89C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7C83AA7E91C6D7A72796E34EBF38E5903E6B862);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE733E57E359E32EF72BCED03E662570A609967C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] id_one = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		__this->set_id_one_0(L_1);
		// private string[] channelName_one = {"I.C. Channel", "Kuro Channel", "Asuno Hikari Project", "コーラ大好きクソガキ羊男バーチューバーよしき", "リカコ-陽子-トモコチャンネル", "YUGE/温泉湯気", "キウイちゃん！モテたい！", "ToriCh. あおいとりチャンネル", "Blue ch.", "【世界初?!】宇宙人バーチューバーうちゅるる"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralEE733E57E359E32EF72BCED03E662570A609967C);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralEE733E57E359E32EF72BCED03E662570A609967C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralA0B3FFC689E515CD1809BEE7A6CEA7EBA57563E3);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralA0B3FFC689E515CD1809BEE7A6CEA7EBA57563E3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralA0302E7B8933CEAAED3D984F673813DBDD7414F5);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralA0302E7B8933CEAAED3D984F673813DBDD7414F5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3E0B96248A1F75628FFF39E1E8E74838F3EB685F);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3E0B96248A1F75628FFF39E1E8E74838F3EB685F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3D1CD038401D2E156485C1AAD598B3A769DC02C7);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral3D1CD038401D2E156485C1AAD598B3A769DC02C7);
		__this->set_channelName_one_1(L_13);
		// private double[] subscriber_one = {875446.0, 3175.0, 120819.0, 129.0, 28782.0, 2523.0, 1849.0, 151.0, 40.0, 120.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_14 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_15 = L_14;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_16 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____BC5738FD210BAEC9B41B826BCB4FA60AB2750BA3AD35E79ADF3740AF217346EE_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_15, L_16, /*hidden argument*/NULL);
		__this->set_subscriber_one_2(L_15);
		// private int[] id_two = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = L_17;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_19 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_18, L_19, /*hidden argument*/NULL);
		__this->set_id_two_3(L_18);
		// private string[] channelName_two = {"I.C. Channel", "Kuro Channel", "Asuno Hikari Project", "コーラ大好きクソガキ羊男バーチューバーよしき", "リカコ-陽子-トモコチャンネル", "YUGE/温泉湯気", "いえどっぐチャンネル", "ToriCh. あおいとりチャンネル", "Blue ch.", "Murano Osa Official"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralEE733E57E359E32EF72BCED03E662570A609967C);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralEE733E57E359E32EF72BCED03E662570A609967C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralA0B3FFC689E515CD1809BEE7A6CEA7EBA57563E3);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralA0B3FFC689E515CD1809BEE7A6CEA7EBA57563E3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralB10BF7FB4B17FA19ECD901F3B77C3B3459C0E89C);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB10BF7FB4B17FA19ECD901F3B77C3B3459C0E89C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral3E0B96248A1F75628FFF39E1E8E74838F3EB685F);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral3E0B96248A1F75628FFF39E1E8E74838F3EB685F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		__this->set_channelName_two_4(L_30);
		// private double[] subscriber_two = {1342972.0, 239540.0, 357625.0, 184060.0, 84849.0, 27650.0, 30187.0, 49609.0, 21577.0, 353729.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_31 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_32 = L_31;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_33 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____B003B6607BA30DC097AD5243B6F5789C4EE45E6226EEC6A878B67008D92D392D_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_32, L_33, /*hidden argument*/NULL);
		__this->set_subscriber_two_5(L_32);
		// private int[] id_three = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = L_34;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_36 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_35, L_36, /*hidden argument*/NULL);
		__this->set_id_three_6(L_35);
		// private string[] channelName_three = {"I.C. Channel", "Kuro Channel", "Asuno Hikari Project", "コーラ大好きクソガキ羊男バーチューバーよしき", "リカコ-陽子-トモコチャンネル", "ひかげチャンネル (Hikage Channel)", "いえどっぐチャンネル", "ToriCh. あおいとりチャンネル", "炎ノ神馬", "Murano Osa Official"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteralEE733E57E359E32EF72BCED03E662570A609967C);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralEE733E57E359E32EF72BCED03E662570A609967C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_42;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteralB10BF7FB4B17FA19ECD901F3B77C3B3459C0E89C);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB10BF7FB4B17FA19ECD901F3B77C3B3459C0E89C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = L_44;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_45;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		__this->set_channelName_three_7(L_47);
		// private double[] subscriber_three = {1560948.0, 366826.0, 473724.0, 237328.0, 126399.0, 106413.0, 60374.0, 85530.0, 49024.0, 520304.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_48 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_49 = L_48;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_50 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____01C08B91B23C0A6E035A2EE1FDF764669FB69866F61B9628C6DE82403F17036A_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_49, L_50, /*hidden argument*/NULL);
		__this->set_subscriber_three_8(L_49);
		// private int[] id_four = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = L_51;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_53 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_52, L_53, /*hidden argument*/NULL);
		__this->set_id_four_9(L_52);
		// private string[] channelName_four = {"I.C. Channel", "Kuro Channel", "Asuno Hikari Project", "コーラ大好きクソガキ羊男バーチューバーよしき", "リカコ-陽子-トモコチャンネル", "ひかげチャンネル (Hikage Channel)", "プール部プロジェクト", "ToriCh. あおいとりチャンネル", "炎ノ神馬", "Murano Osa Official"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_54 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = L_54;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_55;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, _stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_56;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = L_57;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteralEE733E57E359E32EF72BCED03E662570A609967C);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralEE733E57E359E32EF72BCED03E662570A609967C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = L_58;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_59;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, _stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = L_60;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteral8F2C24F26EA3F4190757227EEB46A39CA702288C);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral8F2C24F26EA3F4190757227EEB46A39CA702288C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = L_61;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, _stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = L_62;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, _stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_63;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		__this->set_channelName_four_10(L_64);
		// private double[] subscriber_four = {1899328.0, 445359.0, 592629.0, 266365.0, 190225.0, 315133.0, 117403.0, 124668.0, 224741.0, 696349.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_65 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_66 = L_65;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_67 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____CAEFFDB75CEAF1E5D1B1A9CB27AD81DB8E82DE2B9B77184050079258CEBF4A11_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_66, L_67, /*hidden argument*/NULL);
		__this->set_subscriber_four_11(L_66);
		// private int[] id_five = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_68 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = L_68;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_70 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_69, L_70, /*hidden argument*/NULL);
		__this->set_id_five_12(L_69);
		// private string[] channelName_five = {"I.C. Channel", "Kuro Channel", "Asuno Hikari Project", "コーラ大好きクソガキ羊男バーチューバーよしき", "リカコ-陽子-トモコチャンネル", "ひかげチャンネル (Hikage Channel)", "プール部プロジェクト", "ToriCh. あおいとりチャンネル", "炎ノ神馬", "Murano Osa Official"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_72 = L_71;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_73 = L_72;
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, _stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_74 = L_73;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_75 = L_74;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteralEE733E57E359E32EF72BCED03E662570A609967C);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralEE733E57E359E32EF72BCED03E662570A609967C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76 = L_75;
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, _stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_77 = L_76;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, _stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_78 = L_77;
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, _stringLiteral8F2C24F26EA3F4190757227EEB46A39CA702288C);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral8F2C24F26EA3F4190757227EEB46A39CA702288C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = L_78;
		NullCheck(L_79);
		ArrayElementTypeCheck (L_79, _stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral98A06850886921AF30A0F690DA9E288B9F524BAB);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = L_79;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = L_80;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, _stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		__this->set_channelName_five_13(L_81);
		// private double[] subscriber_five = {2002444.0, 475689.0, 623708.0, 278073.0, 216002.0, 339617.0, 147222.0, 140449.0, 241206.0, 753614.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_82 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_83 = L_82;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_84 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____EF4303EECC896BF99B1A2EFB56DCD7C6DE32D6162B12FE07A64FA92990C4DA8A_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_83, L_84, /*hidden argument*/NULL);
		__this->set_subscriber_five_14(L_83);
		// private int[] id_six = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_86 = L_85;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_87 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_86, L_87, /*hidden argument*/NULL);
		__this->set_id_six_15(L_86);
		// private string[] channelName_six = {"I.C. Channel", "Kuro Channel", "Asuno Hikari Project", "YUMEYUME Channel", "リカコ-陽子-トモコチャンネル", "ひかげチャンネル (Hikage Channel)", "プール部プロジェクト", "かふぇもかMusic", "炎ノ神馬", "Murano Osa Official"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_88 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_89 = L_88;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_90 = L_89;
		NullCheck(L_90);
		ArrayElementTypeCheck (L_90, _stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_91 = L_90;
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, _stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_92 = L_91;
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, _stringLiteral48ED56FC71BECB4C75C1E7E29A0D4F03C92B5CF5);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral48ED56FC71BECB4C75C1E7E29A0D4F03C92B5CF5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_93 = L_92;
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, _stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_94 = L_93;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, _stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_95 = L_94;
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, _stringLiteral8F2C24F26EA3F4190757227EEB46A39CA702288C);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral8F2C24F26EA3F4190757227EEB46A39CA702288C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_96 = L_95;
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, _stringLiteral32097A3C12A516088B553DBE3E4E940195691617);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral32097A3C12A516088B553DBE3E4E940195691617);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_97 = L_96;
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, _stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_98 = L_97;
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, _stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		__this->set_channelName_six_16(L_98);
		// private double[] subscriber_six = {2565215.0, 623438.0, 743931.0, 426632.0, 366322.0, 499585.0, 402628.0, 270711.0, 338233.0, 939807.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_99 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_100 = L_99;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_101 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____F8C031907466BE93935DBAD064D5DC2B2861F4581EC2A1524D37100BCDB007C5_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_100, L_101, /*hidden argument*/NULL);
		__this->set_subscriber_six_17(L_100);
		// private int[] id_seven = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_102 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_103 = L_102;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_104 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_103, L_104, /*hidden argument*/NULL);
		__this->set_id_seven_18(L_103);
		// private string[] channelName_seven = {"I.C. Channel", "Kuro Channel", "Asuno Hikari Project", "YUMEYUME Channel", "リカコ-陽子-トモコチャンネル", "ひかげチャンネル (Hikage Channel)", "プール部プロジェクト", "青天あおぞら - Aozora Seiten - ", "炎ノ神馬", "Murano Osa Official"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_105 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_106 = L_105;
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_107 = L_106;
		NullCheck(L_107);
		ArrayElementTypeCheck (L_107, _stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_108 = L_107;
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, _stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_109 = L_108;
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, _stringLiteral48ED56FC71BECB4C75C1E7E29A0D4F03C92B5CF5);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral48ED56FC71BECB4C75C1E7E29A0D4F03C92B5CF5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_110 = L_109;
		NullCheck(L_110);
		ArrayElementTypeCheck (L_110, _stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4F22E6CC1755066CCAB50C52912ECF5AFB1C3716);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_111 = L_110;
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, _stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_112 = L_111;
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, _stringLiteral8F2C24F26EA3F4190757227EEB46A39CA702288C);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral8F2C24F26EA3F4190757227EEB46A39CA702288C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113 = L_112;
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, _stringLiteral36E00DB686A9061572DB82E4535DAA12A20DEB27);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral36E00DB686A9061572DB82E4535DAA12A20DEB27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_114 = L_113;
		NullCheck(L_114);
		ArrayElementTypeCheck (L_114, _stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_115 = L_114;
		NullCheck(L_115);
		ArrayElementTypeCheck (L_115, _stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		__this->set_channelName_seven_19(L_115);
		// private double[] subscriber_seven = {2671198.0, 703806.0, 745342.0, 481322.0, 407156.0, 528026.0, 335137.0, 281651.0, 398978.0, 989937.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_116 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_117 = L_116;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_118 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____32B76A79C9143B9DBAC46BA861AF5273B593E8BB3821F9470397B0E3C49ED923_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_117, L_118, /*hidden argument*/NULL);
		__this->set_subscriber_seven_20(L_117);
		// private int[] id_eight = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_119 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_120 = L_119;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_121 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_120, L_121, /*hidden argument*/NULL);
		__this->set_id_eight_21(L_120);
		// private string[] channelName_eight = {"I.C. Channel", "Kuro Channel", "Asuno Hikari Project", "YUMEYUME Channel", "Water Ch. 潜ウォーター", "ひかげチャンネル (Hikage Channel)", "ドクロCh。骨下ドクロ", "青天あおぞら - Aozora Seiten - ", "炎ノ神馬", "Murano Osa Official"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_122 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_123 = L_122;
		NullCheck(L_123);
		ArrayElementTypeCheck (L_123, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_124 = L_123;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, _stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_125 = L_124;
		NullCheck(L_125);
		ArrayElementTypeCheck (L_125, _stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_126 = L_125;
		NullCheck(L_126);
		ArrayElementTypeCheck (L_126, _stringLiteral48ED56FC71BECB4C75C1E7E29A0D4F03C92B5CF5);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral48ED56FC71BECB4C75C1E7E29A0D4F03C92B5CF5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_127 = L_126;
		NullCheck(L_127);
		ArrayElementTypeCheck (L_127, _stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_128 = L_127;
		NullCheck(L_128);
		ArrayElementTypeCheck (L_128, _stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB5058CF2F6111556463E4161B2A5E8DEBA9CA3E1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_129 = L_128;
		NullCheck(L_129);
		ArrayElementTypeCheck (L_129, _stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_130 = L_129;
		NullCheck(L_130);
		ArrayElementTypeCheck (L_130, _stringLiteral36E00DB686A9061572DB82E4535DAA12A20DEB27);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral36E00DB686A9061572DB82E4535DAA12A20DEB27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_131 = L_130;
		NullCheck(L_131);
		ArrayElementTypeCheck (L_131, _stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_132 = L_131;
		NullCheck(L_132);
		ArrayElementTypeCheck (L_132, _stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		__this->set_channelName_eight_22(L_132);
		// private double[] subscriber_eight = {2696195.0, 704094.0, 733277.0, 543839.0, 337183.0, 532556.0, 420803.0, 384206.0, 472940.0, 997606.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_133 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_134 = L_133;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_135 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____A166FBFE74BD42389F2C221C3BD45B7AB6D040C25247545FE531703ADD95761F_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_134, L_135, /*hidden argument*/NULL);
		__this->set_subscriber_eight_23(L_134);
		// private int[] id_nine = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_136 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_137 = L_136;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_138 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_137, L_138, /*hidden argument*/NULL);
		__this->set_id_nine_24(L_137);
		// private string[] channelName_nine = {"I.C. Channel", "Kuro Channel", "Asuno Hikari Project", "YUMEYUME Channel", "Water Ch. 潜ウォーター", "Nekomu Ch. 狛犬ねこむ", "ドクロCh。骨下ドクロ", "Perori Ch. 食兎ぺろり", "炎ノ神馬", "Murano Osa Official"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_139 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_140 = L_139;
		NullCheck(L_140);
		ArrayElementTypeCheck (L_140, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_141 = L_140;
		NullCheck(L_141);
		ArrayElementTypeCheck (L_141, _stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_142 = L_141;
		NullCheck(L_142);
		ArrayElementTypeCheck (L_142, _stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_143 = L_142;
		NullCheck(L_143);
		ArrayElementTypeCheck (L_143, _stringLiteral48ED56FC71BECB4C75C1E7E29A0D4F03C92B5CF5);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral48ED56FC71BECB4C75C1E7E29A0D4F03C92B5CF5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_144 = L_143;
		NullCheck(L_144);
		ArrayElementTypeCheck (L_144, _stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_145 = L_144;
		NullCheck(L_145);
		ArrayElementTypeCheck (L_145, _stringLiteral7F9B2509C5F1EA43473F31D593986A52C1EF6259);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral7F9B2509C5F1EA43473F31D593986A52C1EF6259);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_146 = L_145;
		NullCheck(L_146);
		ArrayElementTypeCheck (L_146, _stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_147 = L_146;
		NullCheck(L_147);
		ArrayElementTypeCheck (L_147, _stringLiteral5BB8E181EF665F2000B8FB2DD838B17C18C8CC50);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral5BB8E181EF665F2000B8FB2DD838B17C18C8CC50);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_148 = L_147;
		NullCheck(L_148);
		ArrayElementTypeCheck (L_148, _stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_149 = L_148;
		NullCheck(L_149);
		ArrayElementTypeCheck (L_149, _stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		__this->set_channelName_nine_25(L_149);
		// private double[] subscriber_nine = {2792333.0, 700233.0, 719767.0, 599583.0, 608183.0, 629917.0, 764983.0, 556267.0, 581633.0, 995117.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_150 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_151 = L_150;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_152 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____B72DD60B38EBED8EE90EBCC0FD0DC3BEC77817D4BD3F6A9EA411AE4816C4AA07_8_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_151, L_152, /*hidden argument*/NULL);
		__this->set_subscriber_nine_26(L_151);
		// private int[] id_ten = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_153 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_154 = L_153;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_155 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_154, L_155, /*hidden argument*/NULL);
		__this->set_id_ten_27(L_154);
		// private string[] channelName_ten = {"I.C. Channel", "Kuro Channel", "Asuno Hikari Project", "Doco Ch. 本州ドコ", "Water Ch. 潜ウォーター", "Nekomu Ch. 狛犬ねこむ", "ドクロCh。骨下ドクロ", "Perori Ch. 食兎ぺろり", "炎ノ神馬", "Murano Osa Official"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_156 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_157 = L_156;
		NullCheck(L_157);
		ArrayElementTypeCheck (L_157, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_158 = L_157;
		NullCheck(L_158);
		ArrayElementTypeCheck (L_158, _stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA58418D43C5CB76CBD76AE11036C9C858A826F6C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_159 = L_158;
		NullCheck(L_159);
		ArrayElementTypeCheck (L_159, _stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77EB4A7EB45A1619DFF394218F0C4683B9D14C2F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_160 = L_159;
		NullCheck(L_160);
		ArrayElementTypeCheck (L_160, _stringLiteral51AE2B768FE553E03A8EBEDD446A5CD8E844F6EC);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral51AE2B768FE553E03A8EBEDD446A5CD8E844F6EC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_161 = L_160;
		NullCheck(L_161);
		ArrayElementTypeCheck (L_161, _stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_162 = L_161;
		NullCheck(L_162);
		ArrayElementTypeCheck (L_162, _stringLiteral7F9B2509C5F1EA43473F31D593986A52C1EF6259);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral7F9B2509C5F1EA43473F31D593986A52C1EF6259);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_163 = L_162;
		NullCheck(L_163);
		ArrayElementTypeCheck (L_163, _stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_164 = L_163;
		NullCheck(L_164);
		ArrayElementTypeCheck (L_164, _stringLiteral5BB8E181EF665F2000B8FB2DD838B17C18C8CC50);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral5BB8E181EF665F2000B8FB2DD838B17C18C8CC50);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_165 = L_164;
		NullCheck(L_165);
		ArrayElementTypeCheck (L_165, _stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral384D7850069BAFEA8DEB94378AE89AE610AABE15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_166 = L_165;
		NullCheck(L_166);
		ArrayElementTypeCheck (L_166, _stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		__this->set_channelName_ten_28(L_166);
		// private double[] subscriber_ten = {2831651.0, 702722.0, 716557.0, 641511.0, 694694.0, 814195.0, 882076.0, 698954.0, 612764.0, 996000.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_167 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_168 = L_167;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_169 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____943C52B694E4DC85247F4D32B7D3645DA67FA6D690EB5D3C32B258E5088E8741_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_168, L_169, /*hidden argument*/NULL);
		__this->set_subscriber_ten_29(L_168);
		// private int[] id_eleven = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_170 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_171 = L_170;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_172 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_171, L_172, /*hidden argument*/NULL);
		__this->set_id_eleven_30(L_171);
		// private string[] channelName_eleven = {"I.C. Channel", "Shark Show Ch. solosing-US", "solosing ソロシング - バーチューバーGroup", "Doco Ch. 本州ドコ", "Water Ch. 潜ウォーター", "Nekomu Ch. 狛犬ねこむ", "ドクロCh。骨下ドクロ", "Perori Ch. 食兎ぺろり", "KEYTAN Ch. 鍵多きいろ", "Murano Osa Official"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_173 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_174 = L_173;
		NullCheck(L_174);
		ArrayElementTypeCheck (L_174, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_175 = L_174;
		NullCheck(L_175);
		ArrayElementTypeCheck (L_175, _stringLiteralE7C83AA7E91C6D7A72796E34EBF38E5903E6B862);
		(L_175)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE7C83AA7E91C6D7A72796E34EBF38E5903E6B862);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_176 = L_175;
		NullCheck(L_176);
		ArrayElementTypeCheck (L_176, _stringLiteral13FAE4F0DC77A2C061CB9B4B37F4D1E9178C633A);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral13FAE4F0DC77A2C061CB9B4B37F4D1E9178C633A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_177 = L_176;
		NullCheck(L_177);
		ArrayElementTypeCheck (L_177, _stringLiteral51AE2B768FE553E03A8EBEDD446A5CD8E844F6EC);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral51AE2B768FE553E03A8EBEDD446A5CD8E844F6EC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_178 = L_177;
		NullCheck(L_178);
		ArrayElementTypeCheck (L_178, _stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_179 = L_178;
		NullCheck(L_179);
		ArrayElementTypeCheck (L_179, _stringLiteral7F9B2509C5F1EA43473F31D593986A52C1EF6259);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral7F9B2509C5F1EA43473F31D593986A52C1EF6259);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_180 = L_179;
		NullCheck(L_180);
		ArrayElementTypeCheck (L_180, _stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_181 = L_180;
		NullCheck(L_181);
		ArrayElementTypeCheck (L_181, _stringLiteral5BB8E181EF665F2000B8FB2DD838B17C18C8CC50);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral5BB8E181EF665F2000B8FB2DD838B17C18C8CC50);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_182 = L_181;
		NullCheck(L_182);
		ArrayElementTypeCheck (L_182, _stringLiteral57C795C522102EFADCB37455610FBCEAF945174B);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral57C795C522102EFADCB37455610FBCEAF945174B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_183 = L_182;
		NullCheck(L_183);
		ArrayElementTypeCheck (L_183, _stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7C2211C7C3BD2A6443C019E51714DEF98F4F1E19);
		__this->set_channelName_eleven_31(L_183);
		// private double[] subscriber_eleven = {2870056.0, 1541710.0, 791759.0, 827148.0, 886370.0, 1135370.0, 1081528.0, 1006750.0, 818069.0, 989819.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_184 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_185 = L_184;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_186 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____7C01692703AF8F0BA26E53CC63ABDDFCE5E9FABF8AC1BD2A89DB45E7C617A77C_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_185, L_186, /*hidden argument*/NULL);
		__this->set_subscriber_eleven_32(L_185);
		// private int[] id_twelve = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_187 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_188 = L_187;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_189 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____10B4796EAC59C7D81C33711F219BA227247A4E338ADAD078159BA01E87590841_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_188, L_189, /*hidden argument*/NULL);
		__this->set_id_twelve_33(L_188);
		// private string[] channelName_twelve = {"I.C. Channel", "Shark Show Ch. solosing-US", "solosing ソロシング - バーチューバーGroup", "Ikari Ch. 海釣イカリ", "Water Ch. 潜ウォーター", "Nekomu Ch. 狛犬ねこむ", "ドクロCh。骨下ドクロ", "Perori Ch. 食兎ぺろり", "KEYTAN Ch. 鍵多きいろ", "Hayashi Rom Ch. solosing-US"}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_190 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_191 = L_190;
		NullCheck(L_191);
		ArrayElementTypeCheck (L_191, _stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		(L_191)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralBD5534A788B10010030A9CD8E7CDD612510A3DD9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_192 = L_191;
		NullCheck(L_192);
		ArrayElementTypeCheck (L_192, _stringLiteralE7C83AA7E91C6D7A72796E34EBF38E5903E6B862);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE7C83AA7E91C6D7A72796E34EBF38E5903E6B862);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_193 = L_192;
		NullCheck(L_193);
		ArrayElementTypeCheck (L_193, _stringLiteral13FAE4F0DC77A2C061CB9B4B37F4D1E9178C633A);
		(L_193)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral13FAE4F0DC77A2C061CB9B4B37F4D1E9178C633A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_194 = L_193;
		NullCheck(L_194);
		ArrayElementTypeCheck (L_194, _stringLiteral054EA21FBB9C768DD9E8B5F5B96C34E13BBFDBE2);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral054EA21FBB9C768DD9E8B5F5B96C34E13BBFDBE2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_195 = L_194;
		NullCheck(L_195);
		ArrayElementTypeCheck (L_195, _stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralBEC25A30C6195417E52C789BD81FAEF4A13DC374);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_196 = L_195;
		NullCheck(L_196);
		ArrayElementTypeCheck (L_196, _stringLiteral7F9B2509C5F1EA43473F31D593986A52C1EF6259);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral7F9B2509C5F1EA43473F31D593986A52C1EF6259);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_197 = L_196;
		NullCheck(L_197);
		ArrayElementTypeCheck (L_197, _stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral905BFEB724EC0AD5665638895AE68C272D15E8F8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_198 = L_197;
		NullCheck(L_198);
		ArrayElementTypeCheck (L_198, _stringLiteral5BB8E181EF665F2000B8FB2DD838B17C18C8CC50);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral5BB8E181EF665F2000B8FB2DD838B17C18C8CC50);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_199 = L_198;
		NullCheck(L_199);
		ArrayElementTypeCheck (L_199, _stringLiteral57C795C522102EFADCB37455610FBCEAF945174B);
		(L_199)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral57C795C522102EFADCB37455610FBCEAF945174B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_200 = L_199;
		NullCheck(L_200);
		ArrayElementTypeCheck (L_200, _stringLiteralA9672B10DCAB95710622770CD57DDFFAB3410A5E);
		(L_200)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralA9672B10DCAB95710622770CD57DDFFAB3410A5E);
		__this->set_channelName_twelve_34(L_200);
		// private double[] subscriber_twelve = {2942533.0, 3000000.0, 1134625.0, 1213998.0, 1163500.0, 1429191.0, 1333551.0, 1353719.0, 1071104.0, 1229668.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_201 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_202 = L_201;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_203 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____B63352A4EA4275C8D99EDEC992C0B840C9F251CDFD316760F8F42A1CC13A4386_7_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_202, L_203, /*hidden argument*/NULL);
		__this->set_subscriber_twelve_35(L_202);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void constmethod.ConstMethod::Save(constdata.ConstData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstMethod_Save_mFAB6D8C11A00708903196EB50DE71A5EE47C3F4B (ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * __this, ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * ___constData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E1BDC42E956C39EDD69B0A8265D46F6EC4C8A4D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// ConstMethod data = new ConstMethod();
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_0 = (ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 *)il2cpp_codegen_object_new(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_il2cpp_TypeInfo_var);
		ConstMethod__ctor_mF234FD132E3F3971A6708EF8BDA15410B02DDE7F(L_0, /*hidden argument*/NULL);
		// data.id_one = constData.Id_one;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_1 = L_0;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_2 = ___constData0;
		NullCheck(L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3;
		L_3 = ConstData_get_Id_one_mF4F92125696C21CCA0B205298F38406EECF494C0_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_id_one_0(L_3);
		// data.channelName_one = constData.ChannelName_one;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_4 = L_1;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_5 = ___constData0;
		NullCheck(L_5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6;
		L_6 = ConstData_get_ChannelName_one_m701DBE14D02ADDE3F0ED2659AD868557BE340F53_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_channelName_one_1(L_6);
		// data.subscriber_one = constData.Subscriber_one;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_7 = L_4;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_8 = ___constData0;
		NullCheck(L_8);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_9;
		L_9 = ConstData_get_Subscriber_one_m384CDD6A237A322C27259A17436E21F42927AF34_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_subscriber_one_2(L_9);
		// data.id_two = constData.Id_two;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_10 = L_7;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_11 = ___constData0;
		NullCheck(L_11);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12;
		L_12 = ConstData_get_Id_two_m5EB605B715F51E3327350C022534A9CFBD6E598F_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_id_two_3(L_12);
		// data.channelName_two = constData.ChannelName_two;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_13 = L_10;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_14 = ___constData0;
		NullCheck(L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15;
		L_15 = ConstData_get_ChannelName_two_mA05F9834C00D027AEB1471BA575CEF40C58C4950_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->set_channelName_two_4(L_15);
		// data.subscriber_two = constData.Subscriber_two;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_16 = L_13;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_17 = ___constData0;
		NullCheck(L_17);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_18;
		L_18 = ConstData_get_Subscriber_two_m239639A08E7276E3E12B1F209B6320AE06DA23F6_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_subscriber_two_5(L_18);
		// data.id_three = constData.Id_three;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_19 = L_16;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_20 = ___constData0;
		NullCheck(L_20);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21;
		L_21 = ConstData_get_Id_three_m1CB3EE23C49735AA0F197B846D38D464C3C56958_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->set_id_three_6(L_21);
		// data.channelName_three = constData.ChannelName_three;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_22 = L_19;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_23 = ___constData0;
		NullCheck(L_23);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24;
		L_24 = ConstData_get_ChannelName_three_m2E6999DB1DD99B0AA0C0C78A5B4299192206F811_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		L_22->set_channelName_three_7(L_24);
		// data.subscriber_three = constData.Subscriber_three;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_25 = L_22;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_26 = ___constData0;
		NullCheck(L_26);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_27;
		L_27 = ConstData_get_Subscriber_three_mC1D0E7A6CB2B3B5C32D06551765AF0BE2A894DD2_inline(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->set_subscriber_three_8(L_27);
		// data.id_four = constData.Id_four;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_28 = L_25;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_29 = ___constData0;
		NullCheck(L_29);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30;
		L_30 = ConstData_get_Id_four_mE2D73D3ECDEC8D1D4758C13D2766F32DEE8055B1_inline(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		L_28->set_id_four_9(L_30);
		// data.channelName_four = constData.ChannelName_four;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_31 = L_28;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_32 = ___constData0;
		NullCheck(L_32);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33;
		L_33 = ConstData_get_ChannelName_four_mA8CEF565F16B85135A16EB300D20DAB97769EF9B_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		L_31->set_channelName_four_10(L_33);
		// data.subscriber_four = constData.Subscriber_four;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_34 = L_31;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_35 = ___constData0;
		NullCheck(L_35);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_36;
		L_36 = ConstData_get_Subscriber_four_m86ECA679D4B2CCB344571495BA12F8A12424D17E_inline(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		L_34->set_subscriber_four_11(L_36);
		// data.id_five = constData.Id_five;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_37 = L_34;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_38 = ___constData0;
		NullCheck(L_38);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39;
		L_39 = ConstData_get_Id_five_mDF1EB6254B9AA9913FA994DD23180AEF2782CDA7_inline(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		L_37->set_id_five_12(L_39);
		// data.channelName_five = constData.ChannelName_five;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_40 = L_37;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_41 = ___constData0;
		NullCheck(L_41);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42;
		L_42 = ConstData_get_ChannelName_five_mC464A3EF07234D743F53E49B8BD0AE0EA45E19C7_inline(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		L_40->set_channelName_five_13(L_42);
		// data.subscriber_five = constData.Subscriber_five;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_43 = L_40;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_44 = ___constData0;
		NullCheck(L_44);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_45;
		L_45 = ConstData_get_Subscriber_five_m0809A571FF8CF669E67FEF125C3F632D73036F8F_inline(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		L_43->set_subscriber_five_14(L_45);
		// data.id_six = constData.Id_six;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_46 = L_43;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_47 = ___constData0;
		NullCheck(L_47);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48;
		L_48 = ConstData_get_Id_six_mCF05A896A65C3101E27CEC3ABB32111B3DFA018D_inline(L_47, /*hidden argument*/NULL);
		NullCheck(L_46);
		L_46->set_id_six_15(L_48);
		// data.channelName_six = constData.ChannelName_six;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_49 = L_46;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_50 = ___constData0;
		NullCheck(L_50);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_51;
		L_51 = ConstData_get_ChannelName_six_m5D1A49C0E51AD6A7A9526EBC11FC099422D288CC_inline(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		L_49->set_channelName_six_16(L_51);
		// data.subscriber_six = constData.Subscriber_six;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_52 = L_49;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_53 = ___constData0;
		NullCheck(L_53);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_54;
		L_54 = ConstData_get_Subscriber_six_m5496E5CB9344F601DD7879523D8B517A3F166B1A_inline(L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		L_52->set_subscriber_six_17(L_54);
		// data.id_seven = constData.Id_seven;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_55 = L_52;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_56 = ___constData0;
		NullCheck(L_56);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_57;
		L_57 = ConstData_get_Id_seven_m8FFED31E586E338FACE6BB8348FF8C06F0921384_inline(L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		L_55->set_id_seven_18(L_57);
		// data.channelName_seven = constData.ChannelName_seven;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_58 = L_55;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_59 = ___constData0;
		NullCheck(L_59);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60;
		L_60 = ConstData_get_ChannelName_seven_mE2833926A630C7155BDA120A379E603554F7964D_inline(L_59, /*hidden argument*/NULL);
		NullCheck(L_58);
		L_58->set_channelName_seven_19(L_60);
		// data.subscriber_seven = constData.Subscriber_seven;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_61 = L_58;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_62 = ___constData0;
		NullCheck(L_62);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_63;
		L_63 = ConstData_get_Subscriber_seven_m129BA17538D9120D3EE93B0F2D352BAE6C28561D_inline(L_62, /*hidden argument*/NULL);
		NullCheck(L_61);
		L_61->set_subscriber_seven_20(L_63);
		// data.id_eight = constData.Id_eight;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_64 = L_61;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_65 = ___constData0;
		NullCheck(L_65);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_66;
		L_66 = ConstData_get_Id_eight_m8E976D19EBC2DA6617E490870B5BF7B97719B44E_inline(L_65, /*hidden argument*/NULL);
		NullCheck(L_64);
		L_64->set_id_eight_21(L_66);
		// data.channelName_eight = constData.ChannelName_eight;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_67 = L_64;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_68 = ___constData0;
		NullCheck(L_68);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_69;
		L_69 = ConstData_get_ChannelName_eight_mE5CACD7765C7D3D36670F3BE636F6E8CD99E1688_inline(L_68, /*hidden argument*/NULL);
		NullCheck(L_67);
		L_67->set_channelName_eight_22(L_69);
		// data.subscriber_eight = constData.Subscriber_eight;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_70 = L_67;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_71 = ___constData0;
		NullCheck(L_71);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_72;
		L_72 = ConstData_get_Subscriber_eight_m1DAB86A514BC8A29940C126FEFE247A958F8EAB2_inline(L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		L_70->set_subscriber_eight_23(L_72);
		// data.id_nine = constData.Id_nine;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_73 = L_70;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_74 = ___constData0;
		NullCheck(L_74);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75;
		L_75 = ConstData_get_Id_nine_mDAAE2ED6106E3DC257FF153E1710914203813EED_inline(L_74, /*hidden argument*/NULL);
		NullCheck(L_73);
		L_73->set_id_nine_24(L_75);
		// data.channelName_nine = constData.ChannelName_nine;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_76 = L_73;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_77 = ___constData0;
		NullCheck(L_77);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_78;
		L_78 = ConstData_get_ChannelName_nine_m9E19D3011E84D756CC7A48A5DC9FDB5F120F5EF1_inline(L_77, /*hidden argument*/NULL);
		NullCheck(L_76);
		L_76->set_channelName_nine_25(L_78);
		// data.subscriber_nine = constData.Subscriber_nine;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_79 = L_76;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_80 = ___constData0;
		NullCheck(L_80);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_81;
		L_81 = ConstData_get_Subscriber_nine_m2E3266D471AB05B7583023515E240E9C3AB75369_inline(L_80, /*hidden argument*/NULL);
		NullCheck(L_79);
		L_79->set_subscriber_nine_26(L_81);
		// data.id_ten = constData.Id_ten;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_82 = L_79;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_83 = ___constData0;
		NullCheck(L_83);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_84;
		L_84 = ConstData_get_Id_ten_m1497B160EFFCEE7713805E06E7CCEBB14E1B16E7_inline(L_83, /*hidden argument*/NULL);
		NullCheck(L_82);
		L_82->set_id_ten_27(L_84);
		// data.channelName_ten = constData.ChannelName_ten;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_85 = L_82;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_86 = ___constData0;
		NullCheck(L_86);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_87;
		L_87 = ConstData_get_ChannelName_ten_m5E20878776B0283D420BA8D59EE606A7208D879C_inline(L_86, /*hidden argument*/NULL);
		NullCheck(L_85);
		L_85->set_channelName_ten_28(L_87);
		// data.subscriber_ten = constData.Subscriber_ten;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_88 = L_85;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_89 = ___constData0;
		NullCheck(L_89);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_90;
		L_90 = ConstData_get_Subscriber_ten_mB21FD6268AEAEDBB022EFA0192C25606CB553DF1_inline(L_89, /*hidden argument*/NULL);
		NullCheck(L_88);
		L_88->set_subscriber_ten_29(L_90);
		// data.id_eleven = constData.Id_eleven;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_91 = L_88;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_92 = ___constData0;
		NullCheck(L_92);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_93;
		L_93 = ConstData_get_Id_eleven_mDEC48EEC09729F642A0EDEFD4FB271ACD8810195_inline(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		L_91->set_id_eleven_30(L_93);
		// data.channelName_eleven = constData.ChannelName_eleven;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_94 = L_91;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_95 = ___constData0;
		NullCheck(L_95);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_96;
		L_96 = ConstData_get_ChannelName_eleven_mDE83346CAA6CE6DA6D5E39D5D97F18EE6AD192C3_inline(L_95, /*hidden argument*/NULL);
		NullCheck(L_94);
		L_94->set_channelName_eleven_31(L_96);
		// data.subscriber_eleven = constData.Subscriber_eleven;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_97 = L_94;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_98 = ___constData0;
		NullCheck(L_98);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_99;
		L_99 = ConstData_get_Subscriber_eleven_m7F08C2B2C5DD884E34B1C6EB92CF10D87ED035B3_inline(L_98, /*hidden argument*/NULL);
		NullCheck(L_97);
		L_97->set_subscriber_eleven_32(L_99);
		// data.id_twelve = constData.Id_twelve;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_100 = L_97;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_101 = ___constData0;
		NullCheck(L_101);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_102;
		L_102 = ConstData_get_Id_twelve_m9BDB6BFEE9F557A05D45B87519542327C87BDB1E_inline(L_101, /*hidden argument*/NULL);
		NullCheck(L_100);
		L_100->set_id_twelve_33(L_102);
		// data.channelName_twelve = constData.ChannelName_twelve;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_103 = L_100;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_104 = ___constData0;
		NullCheck(L_104);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_105;
		L_105 = ConstData_get_ChannelName_twelve_m9B26C7961685096F8FE9BA3608FDE5BE95F639D8_inline(L_104, /*hidden argument*/NULL);
		NullCheck(L_103);
		L_103->set_channelName_twelve_34(L_105);
		// data.subscriber_twelve = constData.Subscriber_twelve;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_106 = L_103;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_107 = ___constData0;
		NullCheck(L_107);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_108;
		L_108 = ConstData_get_Subscriber_twelve_mDA24C3F8E90EE6B6287A4F7508DE7B0B36F795D7_inline(L_107, /*hidden argument*/NULL);
		NullCheck(L_106);
		L_106->set_subscriber_twelve_35(L_108);
		// string jsonData = JsonUtility.ToJson(data);
		String_t* L_109;
		L_109 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_106, /*hidden argument*/NULL);
		V_0 = L_109;
		// writer = new StreamWriter(Application.persistentDataPath + "/constdata.json", false); // trueで追記、falseで上書き
		String_t* L_110;
		L_110 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_111;
		L_111 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_110, _stringLiteral5E1BDC42E956C39EDD69B0A8265D46F6EC4C8A4D, /*hidden argument*/NULL);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_112 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m6A81CE9EDAB3AAB4270E88539EA83D945954CD0E(L_112, L_111, (bool)0, /*hidden argument*/NULL);
		// writer.Write(jsonData);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_113 = L_112;
		String_t* L_114 = V_0;
		NullCheck(L_113);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_113, L_114);
		// writer.Flush();
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_115 = L_113;
		NullCheck(L_115);
		VirtActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, L_115);
		// writer.Close();
		NullCheck(L_115);
		VirtActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_115);
		// }
		return;
	}
}
// constdata.ConstData constmethod.ConstMethod::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * ConstMethod_Load_m0D22DBCEC6A3AC67C2FEE5E1BFBEFB3DAC74B6DA (ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_mD76433A17104869E4691012479D1CCD6BFC799BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E1BDC42E956C39EDD69B0A8265D46F6EC4C8A4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// ConstMethod data = new ConstMethod();
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_0 = (ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 *)il2cpp_codegen_object_new(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_il2cpp_TypeInfo_var);
		ConstMethod__ctor_mF234FD132E3F3971A6708EF8BDA15410B02DDE7F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// string readdata = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// reader = new StreamReader(Application.persistentDataPath + "/constdata.json");
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, _stringLiteral5E1BDC42E956C39EDD69B0A8265D46F6EC4C8A4D, /*hidden argument*/NULL);
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_3 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		StreamReader__ctor_m1F07D64A9881F3A6B755881210B4E88F8E63849B(L_3, L_2, /*hidden argument*/NULL);
		// readdata = reader.ReadToEnd();
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_4 = L_3;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_4);
		V_1 = L_5;
		// reader.Close();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_4);
		// data = JsonUtility.FromJson<ConstMethod>(readdata);
		String_t* L_6 = V_1;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_7;
		L_7 = JsonUtility_FromJson_TisConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_mD76433A17104869E4691012479D1CCD6BFC799BA(L_6, /*hidden argument*/JsonUtility_FromJson_TisConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_mD76433A17104869E4691012479D1CCD6BFC799BA_RuntimeMethod_var);
		V_0 = L_7;
		// ConstData constData = new ConstData();
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_8 = (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 *)il2cpp_codegen_object_new(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059_il2cpp_TypeInfo_var);
		ConstData__ctor_mCDB0658C26F83558C54CAFB5AE5885AF0A52BF4F(L_8, /*hidden argument*/NULL);
		// constData.Id_one = data.id_one;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_9 = L_8;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_10 = V_0;
		NullCheck(L_10);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = L_10->get_id_one_0();
		NullCheck(L_9);
		ConstData_set_Id_one_mB4BFFCC226EA9913A75DA7ECB2B86CFE7EF408BC_inline(L_9, L_11, /*hidden argument*/NULL);
		// constData.ChannelName_one = data.channelName_one;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_12 = L_9;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_13 = V_0;
		NullCheck(L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13->get_channelName_one_1();
		NullCheck(L_12);
		ConstData_set_ChannelName_one_mB1DDF691595244247A6A1E443A043F138CD5D75B_inline(L_12, L_14, /*hidden argument*/NULL);
		// constData.Subscriber_one = data.subscriber_one;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_15 = L_12;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_16 = V_0;
		NullCheck(L_16);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_17 = L_16->get_subscriber_one_2();
		NullCheck(L_15);
		ConstData_set_Subscriber_one_mA588CF7DCFD6751FC329C8353AD855BB82867EA2_inline(L_15, L_17, /*hidden argument*/NULL);
		// constData.Id_two = data.id_two;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_18 = L_15;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_19 = V_0;
		NullCheck(L_19);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = L_19->get_id_two_3();
		NullCheck(L_18);
		ConstData_set_Id_two_m00ED2007794D851D2C5731EA6BF42C82F30CE6CB_inline(L_18, L_20, /*hidden argument*/NULL);
		// constData.ChannelName_two = data.channelName_two;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_21 = L_18;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_22 = V_0;
		NullCheck(L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22->get_channelName_two_4();
		NullCheck(L_21);
		ConstData_set_ChannelName_two_m59F681510F7545E30C6692FEDB9F50803DD89E0B_inline(L_21, L_23, /*hidden argument*/NULL);
		// constData.Subscriber_two = data.subscriber_two;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_24 = L_21;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_25 = V_0;
		NullCheck(L_25);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_26 = L_25->get_subscriber_two_5();
		NullCheck(L_24);
		ConstData_set_Subscriber_two_mC03DA19DC13FF295F568F566797FB25849548F7D_inline(L_24, L_26, /*hidden argument*/NULL);
		// constData.Id_three = data.id_three;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_27 = L_24;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_28 = V_0;
		NullCheck(L_28);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = L_28->get_id_three_6();
		NullCheck(L_27);
		ConstData_set_Id_three_m78B9421EC80F2EDABB979D85E6417C0B5EFD0475_inline(L_27, L_29, /*hidden argument*/NULL);
		// constData.ChannelName_three = data.channelName_three;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_30 = L_27;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_31 = V_0;
		NullCheck(L_31);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31->get_channelName_three_7();
		NullCheck(L_30);
		ConstData_set_ChannelName_three_m4B060CA2A008741E19C3714ECFE62986EF557692_inline(L_30, L_32, /*hidden argument*/NULL);
		// constData.Subscriber_three = data.subscriber_three;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_33 = L_30;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_34 = V_0;
		NullCheck(L_34);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_35 = L_34->get_subscriber_three_8();
		NullCheck(L_33);
		ConstData_set_Subscriber_three_m1FE6B4DEEBD90026EF7755828E007D3C95B97DA4_inline(L_33, L_35, /*hidden argument*/NULL);
		// constData.Id_four = data.id_four;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_36 = L_33;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_37 = V_0;
		NullCheck(L_37);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = L_37->get_id_four_9();
		NullCheck(L_36);
		ConstData_set_Id_four_m4FBECD5865A8F7DDD8B82E31C42618AA6A0D7279_inline(L_36, L_38, /*hidden argument*/NULL);
		// constData.ChannelName_four = data.channelName_four;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_39 = L_36;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_40 = V_0;
		NullCheck(L_40);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40->get_channelName_four_10();
		NullCheck(L_39);
		ConstData_set_ChannelName_four_m3A35324D28E39A6F1BDD5A9833E14B9F9AB9E88F_inline(L_39, L_41, /*hidden argument*/NULL);
		// constData.Subscriber_four = data.subscriber_four;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_42 = L_39;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_43 = V_0;
		NullCheck(L_43);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_44 = L_43->get_subscriber_four_11();
		NullCheck(L_42);
		ConstData_set_Subscriber_four_m2B84BE27645C611B6F1E5C8987D49FAC63B341C6_inline(L_42, L_44, /*hidden argument*/NULL);
		// constData.Id_five = data.id_five;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_45 = L_42;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_46 = V_0;
		NullCheck(L_46);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_47 = L_46->get_id_five_12();
		NullCheck(L_45);
		ConstData_set_Id_five_mC51F779DB5E7B6DAC120A75EF2640EF0829C197B_inline(L_45, L_47, /*hidden argument*/NULL);
		// constData.ChannelName_five = data.channelName_five;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_48 = L_45;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_49 = V_0;
		NullCheck(L_49);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = L_49->get_channelName_five_13();
		NullCheck(L_48);
		ConstData_set_ChannelName_five_mBD1F0D93B6C040A629850CFBE9FEBF61F48455BC_inline(L_48, L_50, /*hidden argument*/NULL);
		// constData.Subscriber_five = data.subscriber_five;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_51 = L_48;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_52 = V_0;
		NullCheck(L_52);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53 = L_52->get_subscriber_five_14();
		NullCheck(L_51);
		ConstData_set_Subscriber_five_mD2483B90160205F9FCB7C7C2E26A19581F3725E2_inline(L_51, L_53, /*hidden argument*/NULL);
		// constData.Id_six = data.id_six;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_54 = L_51;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_55 = V_0;
		NullCheck(L_55);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = L_55->get_id_six_15();
		NullCheck(L_54);
		ConstData_set_Id_six_mFB7F01EDA1C25EC8D6CF2C2B33B0EEB1F613A813_inline(L_54, L_56, /*hidden argument*/NULL);
		// constData.ChannelName_six = data.channelName_six;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_57 = L_54;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_58 = V_0;
		NullCheck(L_58);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = L_58->get_channelName_six_16();
		NullCheck(L_57);
		ConstData_set_ChannelName_six_m835A095C57675B77AC2B96A5876920622C376596_inline(L_57, L_59, /*hidden argument*/NULL);
		// constData.Subscriber_six = data.subscriber_six;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_60 = L_57;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_61 = V_0;
		NullCheck(L_61);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_62 = L_61->get_subscriber_six_17();
		NullCheck(L_60);
		ConstData_set_Subscriber_six_mB80A7152228CCDE617EBF090E94C634A5489978D_inline(L_60, L_62, /*hidden argument*/NULL);
		// constData.Id_seven = data.id_seven;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_63 = L_60;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_64 = V_0;
		NullCheck(L_64);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_65 = L_64->get_id_seven_18();
		NullCheck(L_63);
		ConstData_set_Id_seven_m914B1236C3B3A04199C5F684C13B3971964474C9_inline(L_63, L_65, /*hidden argument*/NULL);
		// constData.ChannelName_seven = data.channelName_seven;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_66 = L_63;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_67 = V_0;
		NullCheck(L_67);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_67->get_channelName_seven_19();
		NullCheck(L_66);
		ConstData_set_ChannelName_seven_m23132ECCC9345254637D667EE15B298A6EAB4F43_inline(L_66, L_68, /*hidden argument*/NULL);
		// constData.Subscriber_seven = data.subscriber_seven;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_69 = L_66;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_70 = V_0;
		NullCheck(L_70);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_71 = L_70->get_subscriber_seven_20();
		NullCheck(L_69);
		ConstData_set_Subscriber_seven_m8612A8A8AE67D739A39B6AF19E4E2A8E46C84248_inline(L_69, L_71, /*hidden argument*/NULL);
		// constData.Id_eight = data.id_eight;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_72 = L_69;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_73 = V_0;
		NullCheck(L_73);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_74 = L_73->get_id_eight_21();
		NullCheck(L_72);
		ConstData_set_Id_eight_m83D2EC6FE379BC8B029903B4F10545FEE5BF7F8A_inline(L_72, L_74, /*hidden argument*/NULL);
		// constData.ChannelName_eight = data.channelName_eight;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_75 = L_72;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_76 = V_0;
		NullCheck(L_76);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_77 = L_76->get_channelName_eight_22();
		NullCheck(L_75);
		ConstData_set_ChannelName_eight_mCEC2802820A2C1199CDE6D4D4E7E6B93BBC1862D_inline(L_75, L_77, /*hidden argument*/NULL);
		// constData.Subscriber_eight = data.subscriber_eight;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_78 = L_75;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_79 = V_0;
		NullCheck(L_79);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_80 = L_79->get_subscriber_eight_23();
		NullCheck(L_78);
		ConstData_set_Subscriber_eight_m7CEB7556ECD0493D6B9863EE7324983082645902_inline(L_78, L_80, /*hidden argument*/NULL);
		// constData.Id_nine = data.id_nine;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_81 = L_78;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_82 = V_0;
		NullCheck(L_82);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_83 = L_82->get_id_nine_24();
		NullCheck(L_81);
		ConstData_set_Id_nine_m00D6592B6CA14F0C8C320D2E03B58812E73BA12D_inline(L_81, L_83, /*hidden argument*/NULL);
		// constData.ChannelName_nine = data.channelName_nine;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_84 = L_81;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_85 = V_0;
		NullCheck(L_85);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_86 = L_85->get_channelName_nine_25();
		NullCheck(L_84);
		ConstData_set_ChannelName_nine_mEFEB2A50C483342CB039F646643EDDEF4027404F_inline(L_84, L_86, /*hidden argument*/NULL);
		// constData.Subscriber_nine = data.subscriber_nine;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_87 = L_84;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_88 = V_0;
		NullCheck(L_88);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_89 = L_88->get_subscriber_nine_26();
		NullCheck(L_87);
		ConstData_set_Subscriber_nine_m2256B5E90EE1C3A66DB72AFDDC3A1F3CE9B8D76A_inline(L_87, L_89, /*hidden argument*/NULL);
		// constData.Id_ten = data.id_ten;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_90 = L_87;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_91 = V_0;
		NullCheck(L_91);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_92 = L_91->get_id_ten_27();
		NullCheck(L_90);
		ConstData_set_Id_ten_mFBBD8C797888602272B767A769C655D0D94B7025_inline(L_90, L_92, /*hidden argument*/NULL);
		// constData.ChannelName_ten = data.channelName_ten;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_93 = L_90;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_94 = V_0;
		NullCheck(L_94);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_95 = L_94->get_channelName_ten_28();
		NullCheck(L_93);
		ConstData_set_ChannelName_ten_m5570A58692EDB9B3B5338E13A92D7FB04385695D_inline(L_93, L_95, /*hidden argument*/NULL);
		// constData.Subscriber_ten = data.subscriber_ten;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_96 = L_93;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_97 = V_0;
		NullCheck(L_97);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_98 = L_97->get_subscriber_ten_29();
		NullCheck(L_96);
		ConstData_set_Subscriber_ten_mACF123D0172048F41F25DA0302684F9D94E091CC_inline(L_96, L_98, /*hidden argument*/NULL);
		// constData.Id_eleven = data.id_eleven;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_99 = L_96;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_100 = V_0;
		NullCheck(L_100);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_101 = L_100->get_id_eleven_30();
		NullCheck(L_99);
		ConstData_set_Id_eleven_m735F99B5186DF309B8C2B7381B7155ADED9CF9FB_inline(L_99, L_101, /*hidden argument*/NULL);
		// constData.ChannelName_eleven = data.channelName_eleven;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_102 = L_99;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_103 = V_0;
		NullCheck(L_103);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_104 = L_103->get_channelName_eleven_31();
		NullCheck(L_102);
		ConstData_set_ChannelName_eleven_m0AD7E9CF632EAB63B849EF288F7F64800C479C78_inline(L_102, L_104, /*hidden argument*/NULL);
		// constData.Subscriber_eleven = data.subscriber_eleven;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_105 = L_102;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_106 = V_0;
		NullCheck(L_106);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_107 = L_106->get_subscriber_eleven_32();
		NullCheck(L_105);
		ConstData_set_Subscriber_eleven_m1B468ADCAA30F5CE18C40C60642B1BA3921A5997_inline(L_105, L_107, /*hidden argument*/NULL);
		// constData.Id_twelve = data.id_twelve;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_108 = L_105;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_109 = V_0;
		NullCheck(L_109);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_110 = L_109->get_id_twelve_33();
		NullCheck(L_108);
		ConstData_set_Id_twelve_m179E11F1EBA086E44450AEA2672F6C2978A7495C_inline(L_108, L_110, /*hidden argument*/NULL);
		// constData.ChannelName_twelve = data.channelName_twelve;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_111 = L_108;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_112 = V_0;
		NullCheck(L_112);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113 = L_112->get_channelName_twelve_34();
		NullCheck(L_111);
		ConstData_set_ChannelName_twelve_m94B312947861EEF6B06011B35648003D53506AE6_inline(L_111, L_113, /*hidden argument*/NULL);
		// constData.Subscriber_twelve = data.subscriber_twelve;
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_114 = L_111;
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_115 = V_0;
		NullCheck(L_115);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_116 = L_115->get_subscriber_twelve_35();
		NullCheck(L_114);
		ConstData_set_Subscriber_twelve_m558826EB7E276A0D2A8CD42D6A812435F9BEABA2_inline(L_114, L_116, /*hidden argument*/NULL);
		// return constData;
		return L_114;
	}
}
// System.Void constmethod.ConstMethod::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstMethod_Delete_mBC54DF1A69A953C73FEEE2147415FCF497C0BA04 (ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E1BDC42E956C39EDD69B0A8265D46F6EC4C8A4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// System.IO.File.Delete(Application.persistentDataPath + "/constdata.json");
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral5E1BDC42E956C39EDD69B0A8265D46F6EC4C8A4D, /*hidden argument*/NULL);
		File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void constmethod.ConstMethod::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstMethod__ctor_mF234FD132E3F3971A6708EF8BDA15410B02DDE7F (ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] id_one = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_one_0(L_0);
		// private string[] channelName_one = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_one_1(L_11);
		// private double[] subscriber_one = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_12 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_one_2(L_12);
		// private int[] id_two = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_two_3(L_13);
		// private string[] channelName_two = {"", "", "", "", "", "", "", "", "", ""};
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_two_4(L_24);
		// private double[] subscriber_two = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_25 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_two_5(L_25);
		// private int[] id_three = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_three_6(L_26);
		// private string[] channelName_three = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_three_7(L_37);
		// private double[] subscriber_three = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_38 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_three_8(L_38);
		// private int[] id_four = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_four_9(L_39);
		// private string[] channelName_four = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_42;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = L_44;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = L_45;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = L_47;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_48;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = L_49;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_four_10(L_50);
		// private double[] subscriber_four = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_51 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_four_11(L_51);
		// private int[] id_five = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_five_12(L_52);
		// private string[] channelName_five = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_54 = L_53;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = L_54;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_55;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_56;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = L_57;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = L_58;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_59;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = L_60;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = L_61;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = L_62;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_five_13(L_63);
		// private double[] subscriber_five = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_64 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_five_14(L_64);
		// private int[] id_six = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_65 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_six_15(L_65);
		// private string[] channelName_six = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_66 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_66;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_67;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_69 = L_68;
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_70 = L_69;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = L_70;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_72 = L_71;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_73 = L_72;
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_74 = L_73;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_75 = L_74;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76 = L_75;
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_six_16(L_76);
		// private double[] subscriber_six = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_77 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_six_17(L_77);
		// private int[] id_seven = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_78 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_seven_18(L_78);
		// private string[] channelName_seven = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_79 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = L_79;
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_81 = L_80;
		NullCheck(L_81);
		ArrayElementTypeCheck (L_81, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_82 = L_81;
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_83 = L_82;
		NullCheck(L_83);
		ArrayElementTypeCheck (L_83, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_84 = L_83;
		NullCheck(L_84);
		ArrayElementTypeCheck (L_84, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_85 = L_84;
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_86 = L_85;
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_87 = L_86;
		NullCheck(L_87);
		ArrayElementTypeCheck (L_87, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_88 = L_87;
		NullCheck(L_88);
		ArrayElementTypeCheck (L_88, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_89 = L_88;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_seven_19(L_89);
		// private double[] subscriber_seven = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_90 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_seven_20(L_90);
		// private int[] id_eight = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_91 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_eight_21(L_91);
		// private string[] channelName_eight = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_92 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_93 = L_92;
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_94 = L_93;
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_95 = L_94;
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_96 = L_95;
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_97 = L_96;
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_98 = L_97;
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_99 = L_98;
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_100 = L_99;
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_101 = L_100;
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_102 = L_101;
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_eight_22(L_102);
		// private double[] subscriber_eight = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_103 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_eight_23(L_103);
		// private int[] id_nine = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_104 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_nine_24(L_104);
		// private string[] channelName_nine = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_105 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_106 = L_105;
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_107 = L_106;
		NullCheck(L_107);
		ArrayElementTypeCheck (L_107, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_108 = L_107;
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_109 = L_108;
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_110 = L_109;
		NullCheck(L_110);
		ArrayElementTypeCheck (L_110, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_111 = L_110;
		NullCheck(L_111);
		ArrayElementTypeCheck (L_111, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_112 = L_111;
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_113 = L_112;
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_114 = L_113;
		NullCheck(L_114);
		ArrayElementTypeCheck (L_114, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_115 = L_114;
		NullCheck(L_115);
		ArrayElementTypeCheck (L_115, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_nine_25(L_115);
		// private double[] subscriber_nine = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_116 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_nine_26(L_116);
		// private int[] id_ten = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_117 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_ten_27(L_117);
		// private string[] channelName_ten = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_118 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_119 = L_118;
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_120 = L_119;
		NullCheck(L_120);
		ArrayElementTypeCheck (L_120, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_121 = L_120;
		NullCheck(L_121);
		ArrayElementTypeCheck (L_121, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_122 = L_121;
		NullCheck(L_122);
		ArrayElementTypeCheck (L_122, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_123 = L_122;
		NullCheck(L_123);
		ArrayElementTypeCheck (L_123, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_124 = L_123;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_125 = L_124;
		NullCheck(L_125);
		ArrayElementTypeCheck (L_125, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_126 = L_125;
		NullCheck(L_126);
		ArrayElementTypeCheck (L_126, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_127 = L_126;
		NullCheck(L_127);
		ArrayElementTypeCheck (L_127, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_128 = L_127;
		NullCheck(L_128);
		ArrayElementTypeCheck (L_128, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_ten_28(L_128);
		// private double[] subscriber_ten = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_129 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_ten_29(L_129);
		// private int[] id_eleven = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_130 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_eleven_30(L_130);
		// private string[] channelName_eleven = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_131 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_132 = L_131;
		NullCheck(L_132);
		ArrayElementTypeCheck (L_132, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_133 = L_132;
		NullCheck(L_133);
		ArrayElementTypeCheck (L_133, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_134 = L_133;
		NullCheck(L_134);
		ArrayElementTypeCheck (L_134, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_135 = L_134;
		NullCheck(L_135);
		ArrayElementTypeCheck (L_135, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_136 = L_135;
		NullCheck(L_136);
		ArrayElementTypeCheck (L_136, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_137 = L_136;
		NullCheck(L_137);
		ArrayElementTypeCheck (L_137, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_138 = L_137;
		NullCheck(L_138);
		ArrayElementTypeCheck (L_138, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_138)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_139 = L_138;
		NullCheck(L_139);
		ArrayElementTypeCheck (L_139, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_140 = L_139;
		NullCheck(L_140);
		ArrayElementTypeCheck (L_140, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_141 = L_140;
		NullCheck(L_141);
		ArrayElementTypeCheck (L_141, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_eleven_31(L_141);
		// private double[] subscriber_eleven = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_142 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_eleven_32(L_142);
		// private int[] id_twelve = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_143 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_id_twelve_33(L_143);
		// private string[] channelName_twelve = {"", "", "", "", "", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_144 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_145 = L_144;
		NullCheck(L_145);
		ArrayElementTypeCheck (L_145, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_146 = L_145;
		NullCheck(L_146);
		ArrayElementTypeCheck (L_146, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_147 = L_146;
		NullCheck(L_147);
		ArrayElementTypeCheck (L_147, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_148 = L_147;
		NullCheck(L_148);
		ArrayElementTypeCheck (L_148, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_149 = L_148;
		NullCheck(L_149);
		ArrayElementTypeCheck (L_149, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_150 = L_149;
		NullCheck(L_150);
		ArrayElementTypeCheck (L_150, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_151 = L_150;
		NullCheck(L_151);
		ArrayElementTypeCheck (L_151, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_152 = L_151;
		NullCheck(L_152);
		ArrayElementTypeCheck (L_152, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_153 = L_152;
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_154 = L_153;
		NullCheck(L_154);
		ArrayElementTypeCheck (L_154, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_twelve_34(L_154);
		// private double[] subscriber_twelve = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_155 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->set_subscriber_twelve_35(L_155);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Date::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Date_Start_m092FB3DDE94A09F1F06B26AA4A677EA304ADE44B (Date_t28D15A2DFB20BEE5DDCDC0277F8F1AC90FBDEA6C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Date::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Date_Update_m893064393838BDC01ACF7F4EFD790707D27BF97A (Date_t28D15A2DFB20BEE5DDCDC0277F8F1AC90FBDEA6C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// saveData = saveMethod.Load();
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_0 = __this->get_saveMethod_5();
		NullCheck(L_0);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_1;
		L_1 = SaveMethod_Load_m2ADB27ECA0FC592161B76E2769EE7EC05AF0D8CB(L_0, /*hidden argument*/NULL);
		__this->set_saveData_4(L_1);
		// yearText.text = saveData.Year.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_yearText_6();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_3 = __this->get_saveData_4();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SaveData_get_Year_mBE411FC1E50D2D10BD4C6017741D415B60CD20D1_inline(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// monthText.text = saveData.Month.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_monthText_7();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_7 = __this->get_saveData_4();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = SaveData_get_Month_m604A37495CCDED028F24C3F7B4BD8A0DC472FF7F_inline(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// weekText.text = saveData.Week.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_weekText_8();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_11 = __this->get_saveData_4();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SaveData_get_Week_m27B5C5912B0D4014C9D9C2EFD64B8A2A366AA938_inline(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13;
		L_13 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// }
		return;
	}
}
// System.Void Date::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Date__ctor_m23170DF108AFCA9B7FFCBBC56219B988930F2DB3 (Date_t28D15A2DFB20BEE5DDCDC0277F8F1AC90FBDEA6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveData saveData = new SaveData();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_0 = (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D *)il2cpp_codegen_object_new(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D_il2cpp_TypeInfo_var);
		SaveData__ctor_m78E26F642D513F242E6B8BBDDEFF416C5656851E(L_0, /*hidden argument*/NULL);
		__this->set_saveData_4(L_0);
		// SaveMethod saveMethod = new SaveMethod();
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_1 = (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB *)il2cpp_codegen_object_new(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		SaveMethod__ctor_m9C88F839226E35D2DE9B64CFE8070B0C40D8FA70(L_1, /*hidden argument*/NULL);
		__this->set_saveMethod_5(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Ending::OnTapScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ending_OnTapScreen_m8577167687002C30808AF3D1B95DA16B7AD8688E (Ending_t7861303E64C500F150F830DD1804D849512B0576 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BF22E36C5F3E3FBFAAE4C45B6293AB3F25901DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral339FA48A9FBD1C15908DC5DC509972A1E9011210);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F84049596B448CEDCA17F101AB53DB4484565B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral534327745AD91CDB7BD25CB5EC5E8B60E3A2D58D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DEB2211C12E6E0ABDBF4D44B5B26B8010C11481);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// counter += 1;
		int32_t L_0 = __this->get_counter_5();
		__this->set_counter_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// switch (counter)
		int32_t L_1 = __this->get_counter_5();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0062;
			}
		}
	}
	{
		goto IL_006d;
	}

IL_002f:
	{
		// infomationText.text = "今年度終了時点で、最もチャンネル登録者数が多かったバーチューバーのランキングが発表されます。";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_infomationText_4();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral534327745AD91CDB7BD25CB5EC5E8B60E3A2D58D);
		// break;
		return;
	}

IL_0040:
	{
		// infomationText.text = "果たして、私たちの事務所のバーチューバーはランクインしているのでしょうか・・・。";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_infomationText_4();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral5DEB2211C12E6E0ABDBF4D44B5B26B8010C11481);
		// break;
		return;
	}

IL_0051:
	{
		// infomationText.text = "たった今、発表されたようです！早速見てみましょう！";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_infomationText_4();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral2BF22E36C5F3E3FBFAAE4C45B6293AB3F25901DD);
		// break;
		return;
	}

IL_0062:
	{
		// SceneManager.LoadScene("Ranking");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral339FA48A9FBD1C15908DC5DC509972A1E9011210, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_006d:
	{
		// Debug.Log("Error/Infomation.cs");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3F84049596B448CEDCA17F101AB53DB4484565B2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ending::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ending__ctor_mB8BF11A3D970060A97439D90A5267B201ACD467A (Ending_t7861303E64C500F150F830DD1804D849512B0576 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Main::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Awake_mA7DE5347ABC4BF35513FF991824C737E07BFC578 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78BC4DD92B77F5C14DD7FC018155905B806E65C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (System.IO.File.Exists(Application.persistentDataPath + "/savedata.json") == false)
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral78BC4DD92B77F5C14DD7FC018155905B806E65C3, /*hidden argument*/NULL);
		bool L_2;
		L_2 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		// saveMethod.Save(saveData);
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_3 = __this->get_saveMethod_5();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_4 = __this->get_saveData_4();
		NullCheck(L_3);
		SaveMethod_Save_m8BCB5E04C5B31132B22481F3804F02A6740D439D(L_3, L_4, /*hidden argument*/NULL);
		// constMethod.Save(constData);
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_5 = __this->get_constMethod_7();
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_6 = __this->get_constData_6();
		NullCheck(L_5);
		ConstMethod_Save_mFAB6D8C11A00708903196EB50DE71A5EE47C3F4B(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Main::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Start_m3F24386331750B440050C96242A7E4040149232D (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Main::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Update_mEC0515850D95675261C9ACB5F339441BE5CE2211 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE14B5CF98221AA69533306F461EEDFCFD3A9A28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// saveData = saveMethod.Load();
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_0 = __this->get_saveMethod_5();
		NullCheck(L_0);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_1;
		L_1 = SaveMethod_Load_m2ADB27ECA0FC592161B76E2769EE7EC05AF0D8CB(L_0, /*hidden argument*/NULL);
		__this->set_saveData_4(L_1);
		// timer += Time.deltaTime;
		double L_2 = __this->get_timer_8();
		float L_3;
		L_3 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timer_8(((double)il2cpp_codegen_add((double)L_2, (double)((double)((double)L_3)))));
		// if (timer >= border)
		double L_4 = __this->get_timer_8();
		if ((!(((double)L_4) >= ((double)(0.10000000000000001)))))
		{
			goto IL_00e8;
		}
	}
	{
		// saveData.NowTime += border;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_5 = __this->get_saveData_4();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_6 = L_5;
		NullCheck(L_6);
		double L_7;
		L_7 = SaveData_get_NowTime_mC47E74D4557DD65CBEBB9B048B95677CB907A0D3_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_6);
		SaveData_set_NowTime_m0527D96F449BD4D6D5C75610AC08A68B07127C0C_inline(L_6, ((double)il2cpp_codegen_add((double)L_7, (double)(0.10000000000000001))), /*hidden argument*/NULL);
		// saveData.Week += 1;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_8 = __this->get_saveData_4();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SaveData_get_Week_m27B5C5912B0D4014C9D9C2EFD64B8A2A366AA938_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_9);
		SaveData_set_Week_mC88EF20417E942D94883F9B554B8EB27000EFDEA_inline(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		// if (saveData.Week == 5) // 5週目で月+1 週→1
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_11 = __this->get_saveData_4();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SaveData_get_Week_m27B5C5912B0D4014C9D9C2EFD64B8A2A366AA938_inline(L_11, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)5))))
		{
			goto IL_00c8;
		}
	}
	{
		// saveData.Month += 1;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_13 = __this->get_saveData_4();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_14 = L_13;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = SaveData_get_Month_m604A37495CCDED028F24C3F7B4BD8A0DC472FF7F_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_14);
		SaveData_set_Month_m3D05B1B5D46AF162BF12F422FE88EC7C03CC83A2_inline(L_14, ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		// saveData.Week = 1;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_16 = __this->get_saveData_4();
		NullCheck(L_16);
		SaveData_set_Week_mC88EF20417E942D94883F9B554B8EB27000EFDEA_inline(L_16, 1, /*hidden argument*/NULL);
		// if (saveData.Month == 13) // 13月→1月
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_17 = __this->get_saveData_4();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = SaveData_get_Month_m604A37495CCDED028F24C3F7B4BD8A0DC472FF7F_inline(L_17, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b0;
		}
	}
	{
		// saveData.Month = 1;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_19 = __this->get_saveData_4();
		NullCheck(L_19);
		SaveData_set_Month_m3D05B1B5D46AF162BF12F422FE88EC7C03CC83A2_inline(L_19, 1, /*hidden argument*/NULL);
		// }
		goto IL_00c8;
	}

IL_00b0:
	{
		// else if (saveData.Month == 4) // 4月1週→エンディングへ
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_20 = __this->get_saveData_4();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = SaveData_get_Month_m604A37495CCDED028F24C3F7B4BD8A0DC472FF7F_inline(L_20, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)4))))
		{
			goto IL_00c8;
		}
	}
	{
		// SceneManager.LoadScene("Ending");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralBE14B5CF98221AA69533306F461EEDFCFD3A9A28, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// saveMethod.Save(saveData);
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_22 = __this->get_saveMethod_5();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_23 = __this->get_saveData_4();
		NullCheck(L_22);
		SaveMethod_Save_m8BCB5E04C5B31132B22481F3804F02A6740D439D(L_22, L_23, /*hidden argument*/NULL);
		// timer = 0.0;
		__this->set_timer_8((0.0));
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Void Main::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main__ctor_m4FD44116A25A9FD4D598F84273F9E9E69B9B7302 (Main_tDB418C89D33CD2699713F36E95C4373C8892C046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveData saveData = new SaveData();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_0 = (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D *)il2cpp_codegen_object_new(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D_il2cpp_TypeInfo_var);
		SaveData__ctor_m78E26F642D513F242E6B8BBDDEFF416C5656851E(L_0, /*hidden argument*/NULL);
		__this->set_saveData_4(L_0);
		// SaveMethod saveMethod = new SaveMethod();
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_1 = (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB *)il2cpp_codegen_object_new(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		SaveMethod__ctor_m9C88F839226E35D2DE9B64CFE8070B0C40D8FA70(L_1, /*hidden argument*/NULL);
		__this->set_saveMethod_5(L_1);
		// ConstData constData = new ConstData();
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_2 = (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 *)il2cpp_codegen_object_new(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059_il2cpp_TypeInfo_var);
		ConstData__ctor_mCDB0658C26F83558C54CAFB5AE5885AF0A52BF4F(L_2, /*hidden argument*/NULL);
		__this->set_constData_6(L_2);
		// ConstMethod constMethod = new ConstMethod();
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_3 = (ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 *)il2cpp_codegen_object_new(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_il2cpp_TypeInfo_var);
		ConstMethod__ctor_mF234FD132E3F3971A6708EF8BDA15410B02DDE7F(L_3, /*hidden argument*/NULL);
		__this->set_constMethod_7(L_3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Ranking::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ranking_Start_m0EAC43EAA4562881479FACC34DAC278F62FA8EDD (Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Reverse_mB2B4C1FD2957F967431B503FA3A594ECD4BBBD55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mB7E22A7FFC2F7C7989CCFE06FC9870523317C979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// saveData = saveMethod.Load();
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_0 = __this->get_saveMethod_5();
		NullCheck(L_0);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_1;
		L_1 = SaveMethod_Load_m2ADB27ECA0FC592161B76E2769EE7EC05AF0D8CB(L_0, /*hidden argument*/NULL);
		__this->set_saveData_4(L_1);
		// constData = constMethod.Load();
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_2 = __this->get_constMethod_7();
		NullCheck(L_2);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_3;
		L_3 = ConstMethod_Load_m0D22DBCEC6A3AC67C2FEE5E1BFBEFB3DAC74B6DA(L_2, /*hidden argument*/NULL);
		__this->set_constData_6(L_3);
		// int element = 0; // 自ライバーの数
		V_0 = 0;
		// AddList(ref subscriberList, ref element, constData, saveData); // if: readonly out: write ref: both
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_4 = __this->get_address_of_subscriberList_8();
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_5 = __this->get_constData_6();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_6 = __this->get_saveData_4();
		Ranking_AddList_mF759FC99E07298BDE382AB6209709FC21EC01F3F(__this, (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_4, (int32_t*)(&V_0), L_5, L_6, /*hidden argument*/NULL);
		// subscriberList.Sort();
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_7 = __this->get_subscriberList_8();
		NullCheck(L_7);
		List_1_Sort_mB7E22A7FFC2F7C7989CCFE06FC9870523317C979(L_7, /*hidden argument*/List_1_Sort_mB7E22A7FFC2F7C7989CCFE06FC9870523317C979_RuntimeMethod_var);
		// subscriberList.Reverse();
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_8 = __this->get_subscriberList_8();
		NullCheck(L_8);
		List_1_Reverse_mB2B4C1FD2957F967431B503FA3A594ECD4BBBD55(L_8, /*hidden argument*/List_1_Reverse_mB2B4C1FD2957F967431B503FA3A594ECD4BBBD55_RuntimeMethod_var);
		// DisplayRanking(subscriberList, element);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_9 = __this->get_subscriberList_8();
		int32_t L_10 = V_0;
		Ranking_DisplayRanking_m540D01679988533330AEC6FE8D98CF912CBB641C(__this, L_9, L_10, /*hidden argument*/NULL);
		// subscriberList.Clear(); // Listの消去
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_11 = __this->get_subscriberList_8();
		NullCheck(L_11);
		List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F(L_11, /*hidden argument*/List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Ranking::AddList(System.Collections.Generic.List`1<System.Double>&,System.Int32&,constdata.ConstData,savedata.SaveData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ranking_AddList_mF759FC99E07298BDE382AB6209709FC21EC01F3F (Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B * __this, List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** ___subscriberList0, int32_t* ___element1, ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * ___constData2, SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * ___saveData3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C4B5BECFF2C39E52330CB8204E2FA0245E8A65F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (saveData.Year)
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_0 = ___saveData3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SaveData_get_Year_mBE411FC1E50D2D10BD4C6017741D415B60CD20D1_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_0069;
			}
			case 3:
			{
				goto IL_007b;
			}
			case 4:
			{
				goto IL_008d;
			}
			case 5:
			{
				goto IL_009c;
			}
			case 6:
			{
				goto IL_00ab;
			}
			case 7:
			{
				goto IL_00ba;
			}
			case 8:
			{
				goto IL_00c9;
			}
			case 9:
			{
				goto IL_00d8;
			}
			case 10:
			{
				goto IL_00e7;
			}
			case 11:
			{
				goto IL_00f6;
			}
		}
	}
	{
		goto IL_0105;
	}

IL_0045:
	{
		// subscriberList.AddRange(constData.Subscriber_one);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_3 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_4 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_3);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_5 = ___constData2;
		NullCheck(L_5);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_6;
		L_6 = ConstData_get_Subscriber_one_m384CDD6A237A322C27259A17436E21F42927AF34_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_4, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_0057:
	{
		// subscriberList.AddRange(constData.Subscriber_two);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_7 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_8 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_7);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_9 = ___constData2;
		NullCheck(L_9);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_10;
		L_10 = ConstData_get_Subscriber_two_m239639A08E7276E3E12B1F209B6320AE06DA23F6_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_8, (RuntimeObject*)(RuntimeObject*)L_10, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_0069:
	{
		// subscriberList.AddRange(constData.Subscriber_three);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_11 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_12 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_11);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_13 = ___constData2;
		NullCheck(L_13);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_14;
		L_14 = ConstData_get_Subscriber_three_mC1D0E7A6CB2B3B5C32D06551765AF0BE2A894DD2_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_12, (RuntimeObject*)(RuntimeObject*)L_14, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_007b:
	{
		// subscriberList.AddRange(constData.Subscriber_four);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_15 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_16 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_15);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_17 = ___constData2;
		NullCheck(L_17);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_18;
		L_18 = ConstData_get_Subscriber_four_m86ECA679D4B2CCB344571495BA12F8A12424D17E_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_16, (RuntimeObject*)(RuntimeObject*)L_18, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_008d:
	{
		// subscriberList.AddRange(constData.Subscriber_five);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_19 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_20 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_19);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_21 = ___constData2;
		NullCheck(L_21);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_22;
		L_22 = ConstData_get_Subscriber_five_m0809A571FF8CF669E67FEF125C3F632D73036F8F_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_20, (RuntimeObject*)(RuntimeObject*)L_22, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_009c:
	{
		// subscriberList.AddRange(constData.Subscriber_six);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_23 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_24 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_23);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_25 = ___constData2;
		NullCheck(L_25);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_26;
		L_26 = ConstData_get_Subscriber_six_m5496E5CB9344F601DD7879523D8B517A3F166B1A_inline(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_24, (RuntimeObject*)(RuntimeObject*)L_26, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_00ab:
	{
		// subscriberList.AddRange(constData.Subscriber_seven);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_27 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_28 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_27);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_29 = ___constData2;
		NullCheck(L_29);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_30;
		L_30 = ConstData_get_Subscriber_seven_m129BA17538D9120D3EE93B0F2D352BAE6C28561D_inline(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_28, (RuntimeObject*)(RuntimeObject*)L_30, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_00ba:
	{
		// subscriberList.AddRange(constData.Subscriber_eight);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_31 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_32 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_31);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_33 = ___constData2;
		NullCheck(L_33);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_34;
		L_34 = ConstData_get_Subscriber_eight_m1DAB86A514BC8A29940C126FEFE247A958F8EAB2_inline(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_32, (RuntimeObject*)(RuntimeObject*)L_34, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_00c9:
	{
		// subscriberList.AddRange(constData.Subscriber_nine);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_35 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_36 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_35);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_37 = ___constData2;
		NullCheck(L_37);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_38;
		L_38 = ConstData_get_Subscriber_nine_m2E3266D471AB05B7583023515E240E9C3AB75369_inline(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_36, (RuntimeObject*)(RuntimeObject*)L_38, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_00d8:
	{
		// subscriberList.AddRange(constData.Subscriber_ten);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_39 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_40 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_39);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_41 = ___constData2;
		NullCheck(L_41);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_42;
		L_42 = ConstData_get_Subscriber_ten_mB21FD6268AEAEDBB022EFA0192C25606CB553DF1_inline(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_40, (RuntimeObject*)(RuntimeObject*)L_42, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_00e7:
	{
		// subscriberList.AddRange(constData.Subscriber_eleven);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_43 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_44 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_43);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_45 = ___constData2;
		NullCheck(L_45);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_46;
		L_46 = ConstData_get_Subscriber_eleven_m7F08C2B2C5DD884E34B1C6EB92CF10D87ED035B3_inline(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_44, (RuntimeObject*)(RuntimeObject*)L_46, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_00f6:
	{
		// subscriberList.AddRange(constData.Subscriber_twelve);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_47 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_48 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_47);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_49 = ___constData2;
		NullCheck(L_49);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_50;
		L_50 = ConstData_get_Subscriber_twelve_mDA24C3F8E90EE6B6287A4F7508DE7B0B36F795D7_inline(L_49, /*hidden argument*/NULL);
		NullCheck(L_48);
		List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425(L_48, (RuntimeObject*)(RuntimeObject*)L_50, /*hidden argument*/List_1_AddRange_m84A5DC51954BDE88AA3314C79B04A158366BD425_RuntimeMethod_var);
		// break;
		goto IL_010f;
	}

IL_0105:
	{
		// Debug.Log("Over Year /Ranking");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6C4B5BECFF2C39E52330CB8204E2FA0245E8A65F, /*hidden argument*/NULL);
	}

IL_010f:
	{
		// for (int i = 0; i < 6; i++)
		V_1 = 0;
		goto IL_0138;
	}

IL_0113:
	{
		// if (saveData.Id[i] != 0)
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_51 = ___saveData3;
		NullCheck(L_51);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52;
		L_52 = SaveData_get_Id_mB39E206950FF941E1DF9DAC2F682BEEADFBFC54F_inline(L_51, /*hidden argument*/NULL);
		int32_t L_53 = V_1;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		if (!L_55)
		{
			goto IL_0134;
		}
	}
	{
		// subscriberList.Add(saveData.Subscriber[i]);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** L_56 = ___subscriberList0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_57 = *((List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC **)L_56);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_58 = ___saveData3;
		NullCheck(L_58);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_59;
		L_59 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_58, /*hidden argument*/NULL);
		int32_t L_60 = V_1;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		double L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_57);
		List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929(L_57, L_62, /*hidden argument*/List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var);
		// element++;
		int32_t* L_63 = ___element1;
		int32_t* L_64 = ___element1;
		int32_t L_65 = *((int32_t*)L_64);
		*((int32_t*)L_63) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_0134:
	{
		// for (int i = 0; i < 6; i++)
		int32_t L_66 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_0138:
	{
		// for (int i = 0; i < 6; i++)
		int32_t L_67 = V_1;
		if ((((int32_t)L_67) < ((int32_t)6)))
		{
			goto IL_0113;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Ranking::DisplayRanking(System.Collections.Generic.List`1<System.Double>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ranking_DisplayRanking_m540D01679988533330AEC6FE8D98CF912CBB641C (Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B * __this, List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * ___subscriberlist0, int32_t ___element1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41DE41B3053F5F8036C1B5510E5737C04FA57166);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	int32_t V_35 = 0;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	{
		// saveData = saveMethod.Load();
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_0 = __this->get_saveMethod_5();
		NullCheck(L_0);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_1;
		L_1 = SaveMethod_Load_m2ADB27ECA0FC592161B76E2769EE7EC05AF0D8CB(L_0, /*hidden argument*/NULL);
		__this->set_saveData_4(L_1);
		// int countRank = 0; // 順位を記録する
		V_0 = 0;
		// switch (saveData.Year)
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_2 = __this->get_saveData_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SaveData_get_Year_mBE411FC1E50D2D10BD4C6017741D415B60CD20D1_inline(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)))
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_00f9;
			}
			case 2:
			{
				goto IL_01a4;
			}
			case 3:
			{
				goto IL_024f;
			}
			case 4:
			{
				goto IL_02fa;
			}
			case 5:
			{
				goto IL_03a5;
			}
			case 6:
			{
				goto IL_0450;
			}
			case 7:
			{
				goto IL_04fb;
			}
			case 8:
			{
				goto IL_05a6;
			}
			case 9:
			{
				goto IL_0651;
			}
			case 10:
			{
				goto IL_06fc;
			}
			case 11:
			{
				goto IL_07a7;
			}
		}
	}
	{
		goto IL_0852;
	}

IL_005c:
	{
		// for (int i = 0; i < 10; i++)
		V_2 = 0;
		goto IL_00f0;
	}

IL_0063:
	{
		// for (int k = 0; k < 10; k++)
		V_3 = 0;
		goto IL_00a0;
	}

IL_0067:
	{
		// if (subscriberlist[i] == constData.Subscriber_one[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_5 = ___subscriberlist0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		double L_7;
		L_7 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_8 = __this->get_constData_6();
		NullCheck(L_8);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_9;
		L_9 = ConstData_get_Subscriber_one_m384CDD6A237A322C27259A17436E21F42927AF34_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		double L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((double)L_7) == ((double)L_12))))
		{
			goto IL_009c;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_one[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_13 = __this->get_constData_6();
		NullCheck(L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14;
		L_14 = ConstData_get_ChannelName_one_m701DBE14D02ADDE3F0ED2659AD868557BE340F53_inline(L_13, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_18 = ___subscriberlist0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		double L_20;
		L_20 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_21 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_17, L_20, L_21, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_009c:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00a0:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)10))))
		{
			goto IL_0067;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_4 = 0;
		goto IL_00e7;
	}

IL_00aa:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_25 = ___subscriberlist0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		double L_27;
		L_27 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_25, L_26, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_28 = __this->get_saveData_4();
		NullCheck(L_28);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_29;
		L_29 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_28, /*hidden argument*/NULL);
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		double L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if ((!(((double)L_27) == ((double)L_32))))
		{
			goto IL_00e1;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_33 = __this->get_saveData_4();
		NullCheck(L_33);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34;
		L_34 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_33, /*hidden argument*/NULL);
		int32_t L_35 = V_4;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		String_t* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_38 = ___subscriberlist0;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		double L_40;
		L_40 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_41 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_37, L_40, L_41, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00e1:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00e7:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_44 = V_4;
		int32_t L_45 = ___element1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_00aa;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00f0:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_47 = V_2;
		if ((((int32_t)L_47) < ((int32_t)((int32_t)10))))
		{
			goto IL_0063;
		}
	}
	{
		// break;
		return;
	}

IL_00f9:
	{
		// for (int i = 0; i < 10; i++)
		V_5 = 0;
		goto IL_019a;
	}

IL_0101:
	{
		// for (int k = 0; k < 10; k++)
		V_6 = 0;
		goto IL_0145;
	}

IL_0106:
	{
		// if (subscriberlist[i] == constData.Subscriber_two[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_48 = ___subscriberlist0;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		double L_50;
		L_50 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_48, L_49, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_51 = __this->get_constData_6();
		NullCheck(L_51);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_52;
		L_52 = ConstData_get_Subscriber_two_m239639A08E7276E3E12B1F209B6320AE06DA23F6_inline(L_51, /*hidden argument*/NULL);
		int32_t L_53 = V_6;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		double L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		if ((!(((double)L_50) == ((double)L_55))))
		{
			goto IL_013f;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_two[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_56 = __this->get_constData_6();
		NullCheck(L_56);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57;
		L_57 = ConstData_get_ChannelName_two_mA05F9834C00D027AEB1471BA575CEF40C58C4950_inline(L_56, /*hidden argument*/NULL);
		int32_t L_58 = V_6;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		String_t* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_61 = ___subscriberlist0;
		int32_t L_62 = V_5;
		NullCheck(L_61);
		double L_63;
		L_63 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_61, L_62, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_64 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_60, L_63, L_64, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_65 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_013f:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_0145:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_67 = V_6;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)10))))
		{
			goto IL_0106;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_7 = 0;
		goto IL_018f;
	}

IL_0150:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_68 = ___subscriberlist0;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		double L_70;
		L_70 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_68, L_69, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_71 = __this->get_saveData_4();
		NullCheck(L_71);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_72;
		L_72 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_71, /*hidden argument*/NULL);
		int32_t L_73 = V_7;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		double L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		if ((!(((double)L_70) == ((double)L_75))))
		{
			goto IL_0189;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_76 = __this->get_saveData_4();
		NullCheck(L_76);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_77;
		L_77 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_76, /*hidden argument*/NULL);
		int32_t L_78 = V_7;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		String_t* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_81 = ___subscriberlist0;
		int32_t L_82 = V_5;
		NullCheck(L_81);
		double L_83;
		L_83 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_81, L_82, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_84 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_80, L_83, L_84, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_85 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_0189:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_86 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_018f:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_87 = V_7;
		int32_t L_88 = ___element1;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_0150;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_89 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_019a:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_90 = V_5;
		if ((((int32_t)L_90) < ((int32_t)((int32_t)10))))
		{
			goto IL_0101;
		}
	}
	{
		// break;
		return;
	}

IL_01a4:
	{
		// for (int i = 0; i < 10; i++)
		V_8 = 0;
		goto IL_0245;
	}

IL_01ac:
	{
		// for (int k = 0; k < 10; k++)
		V_9 = 0;
		goto IL_01f0;
	}

IL_01b1:
	{
		// if (subscriberlist[i] == constData.Subscriber_three[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_91 = ___subscriberlist0;
		int32_t L_92 = V_8;
		NullCheck(L_91);
		double L_93;
		L_93 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_91, L_92, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_94 = __this->get_constData_6();
		NullCheck(L_94);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_95;
		L_95 = ConstData_get_Subscriber_three_mC1D0E7A6CB2B3B5C32D06551765AF0BE2A894DD2_inline(L_94, /*hidden argument*/NULL);
		int32_t L_96 = V_9;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		double L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		if ((!(((double)L_93) == ((double)L_98))))
		{
			goto IL_01ea;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_three[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_99 = __this->get_constData_6();
		NullCheck(L_99);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_100;
		L_100 = ConstData_get_ChannelName_three_m2E6999DB1DD99B0AA0C0C78A5B4299192206F811_inline(L_99, /*hidden argument*/NULL);
		int32_t L_101 = V_9;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		String_t* L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_104 = ___subscriberlist0;
		int32_t L_105 = V_8;
		NullCheck(L_104);
		double L_106;
		L_106 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_104, L_105, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_107 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_103, L_106, L_107, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_108 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
	}

IL_01ea:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_109 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)1));
	}

IL_01f0:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_110 = V_9;
		if ((((int32_t)L_110) < ((int32_t)((int32_t)10))))
		{
			goto IL_01b1;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_10 = 0;
		goto IL_023a;
	}

IL_01fb:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_111 = ___subscriberlist0;
		int32_t L_112 = V_8;
		NullCheck(L_111);
		double L_113;
		L_113 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_111, L_112, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_114 = __this->get_saveData_4();
		NullCheck(L_114);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_115;
		L_115 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_114, /*hidden argument*/NULL);
		int32_t L_116 = V_10;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		double L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		if ((!(((double)L_113) == ((double)L_118))))
		{
			goto IL_0234;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_119 = __this->get_saveData_4();
		NullCheck(L_119);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_120;
		L_120 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_119, /*hidden argument*/NULL);
		int32_t L_121 = V_10;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		String_t* L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_124 = ___subscriberlist0;
		int32_t L_125 = V_8;
		NullCheck(L_124);
		double L_126;
		L_126 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_124, L_125, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_127 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_123, L_126, L_127, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_128 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1));
	}

IL_0234:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_129 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_129, (int32_t)1));
	}

IL_023a:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_130 = V_10;
		int32_t L_131 = ___element1;
		if ((((int32_t)L_130) < ((int32_t)L_131)))
		{
			goto IL_01fb;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_132 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1));
	}

IL_0245:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_133 = V_8;
		if ((((int32_t)L_133) < ((int32_t)((int32_t)10))))
		{
			goto IL_01ac;
		}
	}
	{
		// break;
		return;
	}

IL_024f:
	{
		// for (int i = 0; i < 10; i++)
		V_11 = 0;
		goto IL_02f0;
	}

IL_0257:
	{
		// for (int k = 0; k < 10; k++)
		V_12 = 0;
		goto IL_029b;
	}

IL_025c:
	{
		// if (subscriberlist[i] == constData.Subscriber_four[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_134 = ___subscriberlist0;
		int32_t L_135 = V_11;
		NullCheck(L_134);
		double L_136;
		L_136 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_134, L_135, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_137 = __this->get_constData_6();
		NullCheck(L_137);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_138;
		L_138 = ConstData_get_Subscriber_four_m86ECA679D4B2CCB344571495BA12F8A12424D17E_inline(L_137, /*hidden argument*/NULL);
		int32_t L_139 = V_12;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		double L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		if ((!(((double)L_136) == ((double)L_141))))
		{
			goto IL_0295;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_four[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_142 = __this->get_constData_6();
		NullCheck(L_142);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_143;
		L_143 = ConstData_get_ChannelName_four_mA8CEF565F16B85135A16EB300D20DAB97769EF9B_inline(L_142, /*hidden argument*/NULL);
		int32_t L_144 = V_12;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		String_t* L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_147 = ___subscriberlist0;
		int32_t L_148 = V_11;
		NullCheck(L_147);
		double L_149;
		L_149 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_147, L_148, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_150 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_146, L_149, L_150, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_151 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1));
	}

IL_0295:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_152 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1));
	}

IL_029b:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_153 = V_12;
		if ((((int32_t)L_153) < ((int32_t)((int32_t)10))))
		{
			goto IL_025c;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_13 = 0;
		goto IL_02e5;
	}

IL_02a6:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_154 = ___subscriberlist0;
		int32_t L_155 = V_11;
		NullCheck(L_154);
		double L_156;
		L_156 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_154, L_155, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_157 = __this->get_saveData_4();
		NullCheck(L_157);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_158;
		L_158 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_157, /*hidden argument*/NULL);
		int32_t L_159 = V_13;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		double L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		if ((!(((double)L_156) == ((double)L_161))))
		{
			goto IL_02df;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_162 = __this->get_saveData_4();
		NullCheck(L_162);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_163;
		L_163 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_162, /*hidden argument*/NULL);
		int32_t L_164 = V_13;
		NullCheck(L_163);
		int32_t L_165 = L_164;
		String_t* L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_167 = ___subscriberlist0;
		int32_t L_168 = V_11;
		NullCheck(L_167);
		double L_169;
		L_169 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_167, L_168, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_170 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_166, L_169, L_170, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_171 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_171, (int32_t)1));
	}

IL_02df:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_172 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_172, (int32_t)1));
	}

IL_02e5:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_173 = V_13;
		int32_t L_174 = ___element1;
		if ((((int32_t)L_173) < ((int32_t)L_174)))
		{
			goto IL_02a6;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_175 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_175, (int32_t)1));
	}

IL_02f0:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_176 = V_11;
		if ((((int32_t)L_176) < ((int32_t)((int32_t)10))))
		{
			goto IL_0257;
		}
	}
	{
		// break;
		return;
	}

IL_02fa:
	{
		// for (int i = 0; i < 10; i++)
		V_14 = 0;
		goto IL_039b;
	}

IL_0302:
	{
		// for (int k = 0; k < 10; k++)
		V_15 = 0;
		goto IL_0346;
	}

IL_0307:
	{
		// if (subscriberlist[i] == constData.Subscriber_five[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_177 = ___subscriberlist0;
		int32_t L_178 = V_14;
		NullCheck(L_177);
		double L_179;
		L_179 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_177, L_178, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_180 = __this->get_constData_6();
		NullCheck(L_180);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_181;
		L_181 = ConstData_get_Subscriber_five_m0809A571FF8CF669E67FEF125C3F632D73036F8F_inline(L_180, /*hidden argument*/NULL);
		int32_t L_182 = V_15;
		NullCheck(L_181);
		int32_t L_183 = L_182;
		double L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		if ((!(((double)L_179) == ((double)L_184))))
		{
			goto IL_0340;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_five[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_185 = __this->get_constData_6();
		NullCheck(L_185);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_186;
		L_186 = ConstData_get_ChannelName_five_mC464A3EF07234D743F53E49B8BD0AE0EA45E19C7_inline(L_185, /*hidden argument*/NULL);
		int32_t L_187 = V_15;
		NullCheck(L_186);
		int32_t L_188 = L_187;
		String_t* L_189 = (L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_190 = ___subscriberlist0;
		int32_t L_191 = V_14;
		NullCheck(L_190);
		double L_192;
		L_192 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_190, L_191, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_193 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_189, L_192, L_193, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_194 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_194, (int32_t)1));
	}

IL_0340:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_195 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_195, (int32_t)1));
	}

IL_0346:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_196 = V_15;
		if ((((int32_t)L_196) < ((int32_t)((int32_t)10))))
		{
			goto IL_0307;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_16 = 0;
		goto IL_0390;
	}

IL_0351:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_197 = ___subscriberlist0;
		int32_t L_198 = V_14;
		NullCheck(L_197);
		double L_199;
		L_199 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_197, L_198, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_200 = __this->get_saveData_4();
		NullCheck(L_200);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_201;
		L_201 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_200, /*hidden argument*/NULL);
		int32_t L_202 = V_16;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		double L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		if ((!(((double)L_199) == ((double)L_204))))
		{
			goto IL_038a;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_205 = __this->get_saveData_4();
		NullCheck(L_205);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_206;
		L_206 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_205, /*hidden argument*/NULL);
		int32_t L_207 = V_16;
		NullCheck(L_206);
		int32_t L_208 = L_207;
		String_t* L_209 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_210 = ___subscriberlist0;
		int32_t L_211 = V_14;
		NullCheck(L_210);
		double L_212;
		L_212 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_210, L_211, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_213 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_209, L_212, L_213, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_214 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_214, (int32_t)1));
	}

IL_038a:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_215 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_215, (int32_t)1));
	}

IL_0390:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_216 = V_16;
		int32_t L_217 = ___element1;
		if ((((int32_t)L_216) < ((int32_t)L_217)))
		{
			goto IL_0351;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_218 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_218, (int32_t)1));
	}

IL_039b:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_219 = V_14;
		if ((((int32_t)L_219) < ((int32_t)((int32_t)10))))
		{
			goto IL_0302;
		}
	}
	{
		// break;
		return;
	}

IL_03a5:
	{
		// for (int i = 0; i < 10; i++)
		V_17 = 0;
		goto IL_0446;
	}

IL_03ad:
	{
		// for (int k = 0; k < 10; k++)
		V_18 = 0;
		goto IL_03f1;
	}

IL_03b2:
	{
		// if (subscriberlist[i] == constData.Subscriber_six[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_220 = ___subscriberlist0;
		int32_t L_221 = V_17;
		NullCheck(L_220);
		double L_222;
		L_222 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_220, L_221, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_223 = __this->get_constData_6();
		NullCheck(L_223);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_224;
		L_224 = ConstData_get_Subscriber_six_m5496E5CB9344F601DD7879523D8B517A3F166B1A_inline(L_223, /*hidden argument*/NULL);
		int32_t L_225 = V_18;
		NullCheck(L_224);
		int32_t L_226 = L_225;
		double L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		if ((!(((double)L_222) == ((double)L_227))))
		{
			goto IL_03eb;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_six[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_228 = __this->get_constData_6();
		NullCheck(L_228);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_229;
		L_229 = ConstData_get_ChannelName_six_m5D1A49C0E51AD6A7A9526EBC11FC099422D288CC_inline(L_228, /*hidden argument*/NULL);
		int32_t L_230 = V_18;
		NullCheck(L_229);
		int32_t L_231 = L_230;
		String_t* L_232 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_233 = ___subscriberlist0;
		int32_t L_234 = V_17;
		NullCheck(L_233);
		double L_235;
		L_235 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_233, L_234, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_236 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_232, L_235, L_236, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_237 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_237, (int32_t)1));
	}

IL_03eb:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_238 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_238, (int32_t)1));
	}

IL_03f1:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_239 = V_18;
		if ((((int32_t)L_239) < ((int32_t)((int32_t)10))))
		{
			goto IL_03b2;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_19 = 0;
		goto IL_043b;
	}

IL_03fc:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_240 = ___subscriberlist0;
		int32_t L_241 = V_17;
		NullCheck(L_240);
		double L_242;
		L_242 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_240, L_241, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_243 = __this->get_saveData_4();
		NullCheck(L_243);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_244;
		L_244 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_243, /*hidden argument*/NULL);
		int32_t L_245 = V_19;
		NullCheck(L_244);
		int32_t L_246 = L_245;
		double L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		if ((!(((double)L_242) == ((double)L_247))))
		{
			goto IL_0435;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_248 = __this->get_saveData_4();
		NullCheck(L_248);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_249;
		L_249 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_248, /*hidden argument*/NULL);
		int32_t L_250 = V_19;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		String_t* L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_253 = ___subscriberlist0;
		int32_t L_254 = V_17;
		NullCheck(L_253);
		double L_255;
		L_255 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_253, L_254, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_256 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_252, L_255, L_256, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_257 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_257, (int32_t)1));
	}

IL_0435:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_258 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_258, (int32_t)1));
	}

IL_043b:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_259 = V_19;
		int32_t L_260 = ___element1;
		if ((((int32_t)L_259) < ((int32_t)L_260)))
		{
			goto IL_03fc;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_261 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_261, (int32_t)1));
	}

IL_0446:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_262 = V_17;
		if ((((int32_t)L_262) < ((int32_t)((int32_t)10))))
		{
			goto IL_03ad;
		}
	}
	{
		// break;
		return;
	}

IL_0450:
	{
		// for (int i = 0; i < 10; i++)
		V_20 = 0;
		goto IL_04f1;
	}

IL_0458:
	{
		// for (int k = 0; k < 10; k++)
		V_21 = 0;
		goto IL_049c;
	}

IL_045d:
	{
		// if (subscriberlist[i] == constData.Subscriber_seven[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_263 = ___subscriberlist0;
		int32_t L_264 = V_20;
		NullCheck(L_263);
		double L_265;
		L_265 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_263, L_264, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_266 = __this->get_constData_6();
		NullCheck(L_266);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_267;
		L_267 = ConstData_get_Subscriber_seven_m129BA17538D9120D3EE93B0F2D352BAE6C28561D_inline(L_266, /*hidden argument*/NULL);
		int32_t L_268 = V_21;
		NullCheck(L_267);
		int32_t L_269 = L_268;
		double L_270 = (L_267)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		if ((!(((double)L_265) == ((double)L_270))))
		{
			goto IL_0496;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_seven[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_271 = __this->get_constData_6();
		NullCheck(L_271);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_272;
		L_272 = ConstData_get_ChannelName_seven_mE2833926A630C7155BDA120A379E603554F7964D_inline(L_271, /*hidden argument*/NULL);
		int32_t L_273 = V_21;
		NullCheck(L_272);
		int32_t L_274 = L_273;
		String_t* L_275 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_276 = ___subscriberlist0;
		int32_t L_277 = V_20;
		NullCheck(L_276);
		double L_278;
		L_278 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_276, L_277, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_279 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_275, L_278, L_279, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_280 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_280, (int32_t)1));
	}

IL_0496:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_281 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_281, (int32_t)1));
	}

IL_049c:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_282 = V_21;
		if ((((int32_t)L_282) < ((int32_t)((int32_t)10))))
		{
			goto IL_045d;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_22 = 0;
		goto IL_04e6;
	}

IL_04a7:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_283 = ___subscriberlist0;
		int32_t L_284 = V_20;
		NullCheck(L_283);
		double L_285;
		L_285 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_283, L_284, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_286 = __this->get_saveData_4();
		NullCheck(L_286);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_287;
		L_287 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_286, /*hidden argument*/NULL);
		int32_t L_288 = V_22;
		NullCheck(L_287);
		int32_t L_289 = L_288;
		double L_290 = (L_287)->GetAt(static_cast<il2cpp_array_size_t>(L_289));
		if ((!(((double)L_285) == ((double)L_290))))
		{
			goto IL_04e0;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_291 = __this->get_saveData_4();
		NullCheck(L_291);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_292;
		L_292 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_291, /*hidden argument*/NULL);
		int32_t L_293 = V_22;
		NullCheck(L_292);
		int32_t L_294 = L_293;
		String_t* L_295 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_296 = ___subscriberlist0;
		int32_t L_297 = V_20;
		NullCheck(L_296);
		double L_298;
		L_298 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_296, L_297, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_299 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_295, L_298, L_299, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_300 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_300, (int32_t)1));
	}

IL_04e0:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_301 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_301, (int32_t)1));
	}

IL_04e6:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_302 = V_22;
		int32_t L_303 = ___element1;
		if ((((int32_t)L_302) < ((int32_t)L_303)))
		{
			goto IL_04a7;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_304 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_304, (int32_t)1));
	}

IL_04f1:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_305 = V_20;
		if ((((int32_t)L_305) < ((int32_t)((int32_t)10))))
		{
			goto IL_0458;
		}
	}
	{
		// break;
		return;
	}

IL_04fb:
	{
		// for (int i = 0; i < 10; i++)
		V_23 = 0;
		goto IL_059c;
	}

IL_0503:
	{
		// for (int k = 0; k < 10; k++)
		V_24 = 0;
		goto IL_0547;
	}

IL_0508:
	{
		// if (subscriberlist[i] == constData.Subscriber_eight[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_306 = ___subscriberlist0;
		int32_t L_307 = V_23;
		NullCheck(L_306);
		double L_308;
		L_308 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_306, L_307, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_309 = __this->get_constData_6();
		NullCheck(L_309);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_310;
		L_310 = ConstData_get_Subscriber_eight_m1DAB86A514BC8A29940C126FEFE247A958F8EAB2_inline(L_309, /*hidden argument*/NULL);
		int32_t L_311 = V_24;
		NullCheck(L_310);
		int32_t L_312 = L_311;
		double L_313 = (L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		if ((!(((double)L_308) == ((double)L_313))))
		{
			goto IL_0541;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_eight[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_314 = __this->get_constData_6();
		NullCheck(L_314);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_315;
		L_315 = ConstData_get_ChannelName_eight_mE5CACD7765C7D3D36670F3BE636F6E8CD99E1688_inline(L_314, /*hidden argument*/NULL);
		int32_t L_316 = V_24;
		NullCheck(L_315);
		int32_t L_317 = L_316;
		String_t* L_318 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_319 = ___subscriberlist0;
		int32_t L_320 = V_23;
		NullCheck(L_319);
		double L_321;
		L_321 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_319, L_320, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_322 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_318, L_321, L_322, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_323 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_323, (int32_t)1));
	}

IL_0541:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_324 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add((int32_t)L_324, (int32_t)1));
	}

IL_0547:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_325 = V_24;
		if ((((int32_t)L_325) < ((int32_t)((int32_t)10))))
		{
			goto IL_0508;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_25 = 0;
		goto IL_0591;
	}

IL_0552:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_326 = ___subscriberlist0;
		int32_t L_327 = V_23;
		NullCheck(L_326);
		double L_328;
		L_328 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_326, L_327, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_329 = __this->get_saveData_4();
		NullCheck(L_329);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_330;
		L_330 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_329, /*hidden argument*/NULL);
		int32_t L_331 = V_25;
		NullCheck(L_330);
		int32_t L_332 = L_331;
		double L_333 = (L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		if ((!(((double)L_328) == ((double)L_333))))
		{
			goto IL_058b;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_334 = __this->get_saveData_4();
		NullCheck(L_334);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_335;
		L_335 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_334, /*hidden argument*/NULL);
		int32_t L_336 = V_25;
		NullCheck(L_335);
		int32_t L_337 = L_336;
		String_t* L_338 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_339 = ___subscriberlist0;
		int32_t L_340 = V_23;
		NullCheck(L_339);
		double L_341;
		L_341 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_339, L_340, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_342 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_338, L_341, L_342, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_343 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_343, (int32_t)1));
	}

IL_058b:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_344 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_344, (int32_t)1));
	}

IL_0591:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_345 = V_25;
		int32_t L_346 = ___element1;
		if ((((int32_t)L_345) < ((int32_t)L_346)))
		{
			goto IL_0552;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_347 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_347, (int32_t)1));
	}

IL_059c:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_348 = V_23;
		if ((((int32_t)L_348) < ((int32_t)((int32_t)10))))
		{
			goto IL_0503;
		}
	}
	{
		// break;
		return;
	}

IL_05a6:
	{
		// for (int i = 0; i < 10; i++)
		V_26 = 0;
		goto IL_0647;
	}

IL_05ae:
	{
		// for (int k = 0; k < 10; k++)
		V_27 = 0;
		goto IL_05f2;
	}

IL_05b3:
	{
		// if (subscriberlist[i] == constData.Subscriber_nine[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_349 = ___subscriberlist0;
		int32_t L_350 = V_26;
		NullCheck(L_349);
		double L_351;
		L_351 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_349, L_350, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_352 = __this->get_constData_6();
		NullCheck(L_352);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_353;
		L_353 = ConstData_get_Subscriber_nine_m2E3266D471AB05B7583023515E240E9C3AB75369_inline(L_352, /*hidden argument*/NULL);
		int32_t L_354 = V_27;
		NullCheck(L_353);
		int32_t L_355 = L_354;
		double L_356 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_355));
		if ((!(((double)L_351) == ((double)L_356))))
		{
			goto IL_05ec;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_nine[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_357 = __this->get_constData_6();
		NullCheck(L_357);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_358;
		L_358 = ConstData_get_ChannelName_nine_m9E19D3011E84D756CC7A48A5DC9FDB5F120F5EF1_inline(L_357, /*hidden argument*/NULL);
		int32_t L_359 = V_27;
		NullCheck(L_358);
		int32_t L_360 = L_359;
		String_t* L_361 = (L_358)->GetAt(static_cast<il2cpp_array_size_t>(L_360));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_362 = ___subscriberlist0;
		int32_t L_363 = V_26;
		NullCheck(L_362);
		double L_364;
		L_364 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_362, L_363, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_365 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_361, L_364, L_365, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_366 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_366, (int32_t)1));
	}

IL_05ec:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_367 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_367, (int32_t)1));
	}

IL_05f2:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_368 = V_27;
		if ((((int32_t)L_368) < ((int32_t)((int32_t)10))))
		{
			goto IL_05b3;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_28 = 0;
		goto IL_063c;
	}

IL_05fd:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_369 = ___subscriberlist0;
		int32_t L_370 = V_26;
		NullCheck(L_369);
		double L_371;
		L_371 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_369, L_370, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_372 = __this->get_saveData_4();
		NullCheck(L_372);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_373;
		L_373 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_372, /*hidden argument*/NULL);
		int32_t L_374 = V_28;
		NullCheck(L_373);
		int32_t L_375 = L_374;
		double L_376 = (L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_375));
		if ((!(((double)L_371) == ((double)L_376))))
		{
			goto IL_0636;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_377 = __this->get_saveData_4();
		NullCheck(L_377);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_378;
		L_378 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_377, /*hidden argument*/NULL);
		int32_t L_379 = V_28;
		NullCheck(L_378);
		int32_t L_380 = L_379;
		String_t* L_381 = (L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_380));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_382 = ___subscriberlist0;
		int32_t L_383 = V_26;
		NullCheck(L_382);
		double L_384;
		L_384 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_382, L_383, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_385 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_381, L_384, L_385, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_386 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_386, (int32_t)1));
	}

IL_0636:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_387 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_387, (int32_t)1));
	}

IL_063c:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_388 = V_28;
		int32_t L_389 = ___element1;
		if ((((int32_t)L_388) < ((int32_t)L_389)))
		{
			goto IL_05fd;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_390 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add((int32_t)L_390, (int32_t)1));
	}

IL_0647:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_391 = V_26;
		if ((((int32_t)L_391) < ((int32_t)((int32_t)10))))
		{
			goto IL_05ae;
		}
	}
	{
		// break;
		return;
	}

IL_0651:
	{
		// for (int i = 0; i < 10; i++)
		V_29 = 0;
		goto IL_06f2;
	}

IL_0659:
	{
		// for (int k = 0; k < 10; k++)
		V_30 = 0;
		goto IL_069d;
	}

IL_065e:
	{
		// if (subscriberlist[i] == constData.Subscriber_ten[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_392 = ___subscriberlist0;
		int32_t L_393 = V_29;
		NullCheck(L_392);
		double L_394;
		L_394 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_392, L_393, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_395 = __this->get_constData_6();
		NullCheck(L_395);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_396;
		L_396 = ConstData_get_Subscriber_ten_mB21FD6268AEAEDBB022EFA0192C25606CB553DF1_inline(L_395, /*hidden argument*/NULL);
		int32_t L_397 = V_30;
		NullCheck(L_396);
		int32_t L_398 = L_397;
		double L_399 = (L_396)->GetAt(static_cast<il2cpp_array_size_t>(L_398));
		if ((!(((double)L_394) == ((double)L_399))))
		{
			goto IL_0697;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_ten[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_400 = __this->get_constData_6();
		NullCheck(L_400);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_401;
		L_401 = ConstData_get_ChannelName_ten_m5E20878776B0283D420BA8D59EE606A7208D879C_inline(L_400, /*hidden argument*/NULL);
		int32_t L_402 = V_30;
		NullCheck(L_401);
		int32_t L_403 = L_402;
		String_t* L_404 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_403));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_405 = ___subscriberlist0;
		int32_t L_406 = V_29;
		NullCheck(L_405);
		double L_407;
		L_407 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_405, L_406, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_408 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_404, L_407, L_408, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_409 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_409, (int32_t)1));
	}

IL_0697:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_410 = V_30;
		V_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_410, (int32_t)1));
	}

IL_069d:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_411 = V_30;
		if ((((int32_t)L_411) < ((int32_t)((int32_t)10))))
		{
			goto IL_065e;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_31 = 0;
		goto IL_06e7;
	}

IL_06a8:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_412 = ___subscriberlist0;
		int32_t L_413 = V_29;
		NullCheck(L_412);
		double L_414;
		L_414 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_412, L_413, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_415 = __this->get_saveData_4();
		NullCheck(L_415);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_416;
		L_416 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_415, /*hidden argument*/NULL);
		int32_t L_417 = V_31;
		NullCheck(L_416);
		int32_t L_418 = L_417;
		double L_419 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_418));
		if ((!(((double)L_414) == ((double)L_419))))
		{
			goto IL_06e1;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_420 = __this->get_saveData_4();
		NullCheck(L_420);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_421;
		L_421 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_420, /*hidden argument*/NULL);
		int32_t L_422 = V_31;
		NullCheck(L_421);
		int32_t L_423 = L_422;
		String_t* L_424 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_423));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_425 = ___subscriberlist0;
		int32_t L_426 = V_29;
		NullCheck(L_425);
		double L_427;
		L_427 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_425, L_426, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_428 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_424, L_427, L_428, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_429 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_429, (int32_t)1));
	}

IL_06e1:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_430 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_430, (int32_t)1));
	}

IL_06e7:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_431 = V_31;
		int32_t L_432 = ___element1;
		if ((((int32_t)L_431) < ((int32_t)L_432)))
		{
			goto IL_06a8;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_433 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add((int32_t)L_433, (int32_t)1));
	}

IL_06f2:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_434 = V_29;
		if ((((int32_t)L_434) < ((int32_t)((int32_t)10))))
		{
			goto IL_0659;
		}
	}
	{
		// break;
		return;
	}

IL_06fc:
	{
		// for (int i = 0; i < 10; i++)
		V_32 = 0;
		goto IL_079d;
	}

IL_0704:
	{
		// for (int k = 0; k < 10; k++)
		V_33 = 0;
		goto IL_0748;
	}

IL_0709:
	{
		// if (subscriberlist[i] == constData.Subscriber_eleven[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_435 = ___subscriberlist0;
		int32_t L_436 = V_32;
		NullCheck(L_435);
		double L_437;
		L_437 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_435, L_436, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_438 = __this->get_constData_6();
		NullCheck(L_438);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_439;
		L_439 = ConstData_get_Subscriber_eleven_m7F08C2B2C5DD884E34B1C6EB92CF10D87ED035B3_inline(L_438, /*hidden argument*/NULL);
		int32_t L_440 = V_33;
		NullCheck(L_439);
		int32_t L_441 = L_440;
		double L_442 = (L_439)->GetAt(static_cast<il2cpp_array_size_t>(L_441));
		if ((!(((double)L_437) == ((double)L_442))))
		{
			goto IL_0742;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_eleven[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_443 = __this->get_constData_6();
		NullCheck(L_443);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_444;
		L_444 = ConstData_get_ChannelName_eleven_mDE83346CAA6CE6DA6D5E39D5D97F18EE6AD192C3_inline(L_443, /*hidden argument*/NULL);
		int32_t L_445 = V_33;
		NullCheck(L_444);
		int32_t L_446 = L_445;
		String_t* L_447 = (L_444)->GetAt(static_cast<il2cpp_array_size_t>(L_446));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_448 = ___subscriberlist0;
		int32_t L_449 = V_32;
		NullCheck(L_448);
		double L_450;
		L_450 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_448, L_449, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_451 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_447, L_450, L_451, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_452 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_452, (int32_t)1));
	}

IL_0742:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_453 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_453, (int32_t)1));
	}

IL_0748:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_454 = V_33;
		if ((((int32_t)L_454) < ((int32_t)((int32_t)10))))
		{
			goto IL_0709;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_34 = 0;
		goto IL_0792;
	}

IL_0753:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_455 = ___subscriberlist0;
		int32_t L_456 = V_32;
		NullCheck(L_455);
		double L_457;
		L_457 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_455, L_456, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_458 = __this->get_saveData_4();
		NullCheck(L_458);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_459;
		L_459 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_458, /*hidden argument*/NULL);
		int32_t L_460 = V_34;
		NullCheck(L_459);
		int32_t L_461 = L_460;
		double L_462 = (L_459)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		if ((!(((double)L_457) == ((double)L_462))))
		{
			goto IL_078c;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_463 = __this->get_saveData_4();
		NullCheck(L_463);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_464;
		L_464 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_463, /*hidden argument*/NULL);
		int32_t L_465 = V_34;
		NullCheck(L_464);
		int32_t L_466 = L_465;
		String_t* L_467 = (L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_466));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_468 = ___subscriberlist0;
		int32_t L_469 = V_32;
		NullCheck(L_468);
		double L_470;
		L_470 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_468, L_469, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_471 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_467, L_470, L_471, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_472 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_472, (int32_t)1));
	}

IL_078c:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_473 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_473, (int32_t)1));
	}

IL_0792:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_474 = V_34;
		int32_t L_475 = ___element1;
		if ((((int32_t)L_474) < ((int32_t)L_475)))
		{
			goto IL_0753;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_476 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_476, (int32_t)1));
	}

IL_079d:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_477 = V_32;
		if ((((int32_t)L_477) < ((int32_t)((int32_t)10))))
		{
			goto IL_0704;
		}
	}
	{
		// break;
		return;
	}

IL_07a7:
	{
		// for (int i = 0; i < 10; i++)
		V_35 = 0;
		goto IL_0848;
	}

IL_07af:
	{
		// for (int k = 0; k < 10; k++)
		V_36 = 0;
		goto IL_07f3;
	}

IL_07b4:
	{
		// if (subscriberlist[i] == constData.Subscriber_twelve[k])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_478 = ___subscriberlist0;
		int32_t L_479 = V_35;
		NullCheck(L_478);
		double L_480;
		L_480 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_478, L_479, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_481 = __this->get_constData_6();
		NullCheck(L_481);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_482;
		L_482 = ConstData_get_Subscriber_twelve_mDA24C3F8E90EE6B6287A4F7508DE7B0B36F795D7_inline(L_481, /*hidden argument*/NULL);
		int32_t L_483 = V_36;
		NullCheck(L_482);
		int32_t L_484 = L_483;
		double L_485 = (L_482)->GetAt(static_cast<il2cpp_array_size_t>(L_484));
		if ((!(((double)L_480) == ((double)L_485))))
		{
			goto IL_07ed;
		}
	}
	{
		// DisplayIndividual(constData.ChannelName_twelve[k], subscriberlist[i], countRank);
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_486 = __this->get_constData_6();
		NullCheck(L_486);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_487;
		L_487 = ConstData_get_ChannelName_twelve_m9B26C7961685096F8FE9BA3608FDE5BE95F639D8_inline(L_486, /*hidden argument*/NULL);
		int32_t L_488 = V_36;
		NullCheck(L_487);
		int32_t L_489 = L_488;
		String_t* L_490 = (L_487)->GetAt(static_cast<il2cpp_array_size_t>(L_489));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_491 = ___subscriberlist0;
		int32_t L_492 = V_35;
		NullCheck(L_491);
		double L_493;
		L_493 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_491, L_492, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_494 = V_0;
		Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B(__this, L_490, L_493, L_494, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_495 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_495, (int32_t)1));
	}

IL_07ed:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_496 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_496, (int32_t)1));
	}

IL_07f3:
	{
		// for (int k = 0; k < 10; k++)
		int32_t L_497 = V_36;
		if ((((int32_t)L_497) < ((int32_t)((int32_t)10))))
		{
			goto IL_07b4;
		}
	}
	{
		// for (int j = 0; j < element; j++)
		V_37 = 0;
		goto IL_083d;
	}

IL_07fe:
	{
		// if (subscriberlist[i] == saveData.Subscriber[j])
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_498 = ___subscriberlist0;
		int32_t L_499 = V_35;
		NullCheck(L_498);
		double L_500;
		L_500 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_498, L_499, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_501 = __this->get_saveData_4();
		NullCheck(L_501);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_502;
		L_502 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_501, /*hidden argument*/NULL);
		int32_t L_503 = V_37;
		NullCheck(L_502);
		int32_t L_504 = L_503;
		double L_505 = (L_502)->GetAt(static_cast<il2cpp_array_size_t>(L_504));
		if ((!(((double)L_500) == ((double)L_505))))
		{
			goto IL_0837;
		}
	}
	{
		// DisplayIndividualMine(saveData.ChannelName[j], subscriberlist[i], countRank);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_506 = __this->get_saveData_4();
		NullCheck(L_506);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_507;
		L_507 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_506, /*hidden argument*/NULL);
		int32_t L_508 = V_37;
		NullCheck(L_507);
		int32_t L_509 = L_508;
		String_t* L_510 = (L_507)->GetAt(static_cast<il2cpp_array_size_t>(L_509));
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_511 = ___subscriberlist0;
		int32_t L_512 = V_35;
		NullCheck(L_511);
		double L_513;
		L_513 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_511, L_512, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		int32_t L_514 = V_0;
		Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284(__this, L_510, L_513, L_514, /*hidden argument*/NULL);
		// countRank++; // 順位を一つ上げる
		int32_t L_515 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_515, (int32_t)1));
	}

IL_0837:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_516 = V_37;
		V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_516, (int32_t)1));
	}

IL_083d:
	{
		// for (int j = 0; j < element; j++)
		int32_t L_517 = V_37;
		int32_t L_518 = ___element1;
		if ((((int32_t)L_517) < ((int32_t)L_518)))
		{
			goto IL_07fe;
		}
	}
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_519 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_519, (int32_t)1));
	}

IL_0848:
	{
		// for (int i = 0; i < 10; i++)
		int32_t L_520 = V_35;
		if ((((int32_t)L_520) < ((int32_t)((int32_t)10))))
		{
			goto IL_07af;
		}
	}
	{
		// break;
		return;
	}

IL_0852:
	{
		// Debug.Log("Error/Ranking/RankingDisplay");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral41DE41B3053F5F8036C1B5510E5737C04FA57166, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ranking::DisplayIndividual(System.String,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ranking_DisplayIndividual_m5C9B2718EE53F8B6C52546E5B897BF647D0E1F3B (Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B * __this, String_t* ___name0, double ___subscriber1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55B2E96F13573B81733E1B384F71787214A19B91);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___count2;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_0052;
			}
			case 2:
			{
				goto IL_0071;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00af;
			}
			case 5:
			{
				goto IL_00ce;
			}
			case 6:
			{
				goto IL_00ed;
			}
			case 7:
			{
				goto IL_010c;
			}
			case 8:
			{
				goto IL_012b;
			}
			case 9:
			{
				goto IL_014a;
			}
		}
	}
	{
		goto IL_0169;
	}

IL_0033:
	{
		// channelText_One.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_channelText_One_9();
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// subscriberText_One.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_subscriberText_One_10();
		String_t* L_4;
		L_4 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// break;
		return;
	}

IL_0052:
	{
		// channelText_Two.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_channelText_Two_11();
		String_t* L_6 = ___name0;
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// subscriberText_Two.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_subscriberText_Two_12();
		String_t* L_8;
		L_8 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_8);
		// break;
		return;
	}

IL_0071:
	{
		// channelText_Three.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_channelText_Three_13();
		String_t* L_10 = ___name0;
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_10);
		// subscriberText_Three.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_subscriberText_Three_14();
		String_t* L_12;
		L_12 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
		// break;
		return;
	}

IL_0090:
	{
		// channelText_Four.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_channelText_Four_15();
		String_t* L_14 = ___name0;
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_14);
		// subscriberText_Four.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_subscriberText_Four_16();
		String_t* L_16;
		L_16 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_16);
		// break;
		return;
	}

IL_00af:
	{
		// channelText_Five.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_channelText_Five_17();
		String_t* L_18 = ___name0;
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_18);
		// subscriberText_Five.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_subscriberText_Five_18();
		String_t* L_20;
		L_20 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_20);
		// break;
		return;
	}

IL_00ce:
	{
		// channelText_Six.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_channelText_Six_19();
		String_t* L_22 = ___name0;
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_22);
		// subscriberText_Six.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_subscriberText_Six_20();
		String_t* L_24;
		L_24 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_24);
		// break;
		return;
	}

IL_00ed:
	{
		// channelText_Seven.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = __this->get_channelText_Seven_21();
		String_t* L_26 = ___name0;
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_26);
		// subscriberText_Seven.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = __this->get_subscriberText_Seven_22();
		String_t* L_28;
		L_28 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_28);
		// break;
		return;
	}

IL_010c:
	{
		// channelText_Eight.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = __this->get_channelText_Eight_23();
		String_t* L_30 = ___name0;
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_30);
		// subscriberText_Eight.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_31 = __this->get_subscriberText_Eight_24();
		String_t* L_32;
		L_32 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_32);
		// break;
		return;
	}

IL_012b:
	{
		// channelText_Nine.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_33 = __this->get_channelText_Nine_25();
		String_t* L_34 = ___name0;
		NullCheck(L_33);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_34);
		// subscriberText_Nine.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_35 = __this->get_subscriberText_Nine_26();
		String_t* L_36;
		L_36 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_35);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_36);
		// break;
		return;
	}

IL_014a:
	{
		// channelText_Ten.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = __this->get_channelText_Ten_27();
		String_t* L_38 = ___name0;
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_38);
		// subscriberText_Ten.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_39 = __this->get_subscriberText_Ten_28();
		String_t* L_40;
		L_40 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_40);
		// break;
		return;
	}

IL_0169:
	{
		// Debug.Log("Error/Ranking/DisplayIndividual()");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral55B2E96F13573B81733E1B384F71787214A19B91, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ranking::DisplayIndividualMine(System.String,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ranking_DisplayIndividualMine_m78C93B223D42A41E747A99105D23DE04C6859284 (Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B * __this, String_t* ___name0, double ___subscriber1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55B2E96F13573B81733E1B384F71787214A19B91);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___count2;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_00c0;
			}
			case 4:
			{
				goto IL_00ef;
			}
			case 5:
			{
				goto IL_011e;
			}
			case 6:
			{
				goto IL_014d;
			}
			case 7:
			{
				goto IL_017c;
			}
			case 8:
			{
				goto IL_01ab;
			}
			case 9:
			{
				goto IL_01da;
			}
		}
	}
	{
		goto IL_0209;
	}

IL_0033:
	{
		// channelText_One.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_channelText_One_9();
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// subscriberText_One.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_subscriberText_One_10();
		String_t* L_4;
		L_4 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// channelBoxOne.color = Color.yellow;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_channelBoxOne_29();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// break;
		return;
	}

IL_0062:
	{
		// channelText_Two.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_channelText_Two_11();
		String_t* L_8 = ___name0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_8);
		// subscriberText_Two.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_subscriberText_Two_12();
		String_t* L_10;
		L_10 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_10);
		// channelBoxTwo.color = Color.yellow;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = __this->get_channelBoxTwo_30();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// break;
		return;
	}

IL_0091:
	{
		// channelText_Three.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_channelText_Three_13();
		String_t* L_14 = ___name0;
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_14);
		// subscriberText_Three.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_subscriberText_Three_14();
		String_t* L_16;
		L_16 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_16);
		// channelBoxThree.color = Color.yellow;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = __this->get_channelBoxThree_31();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// break;
		return;
	}

IL_00c0:
	{
		// channelText_Four.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_channelText_Four_15();
		String_t* L_20 = ___name0;
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_20);
		// subscriberText_Four.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_subscriberText_Four_16();
		String_t* L_22;
		L_22 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_22);
		// channelBoxFour.color = Color.yellow;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_23 = __this->get_channelBoxFour_32();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_24;
		L_24 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
		// break;
		return;
	}

IL_00ef:
	{
		// channelText_Five.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_25 = __this->get_channelText_Five_17();
		String_t* L_26 = ___name0;
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_26);
		// subscriberText_Five.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_27 = __this->get_subscriberText_Five_18();
		String_t* L_28;
		L_28 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_28);
		// channelBoxFive.color = Color.yellow;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_29 = __this->get_channelBoxFive_33();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_30);
		// break;
		return;
	}

IL_011e:
	{
		// channelText_Six.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_31 = __this->get_channelText_Six_19();
		String_t* L_32 = ___name0;
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_32);
		// subscriberText_Six.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_33 = __this->get_subscriberText_Six_20();
		String_t* L_34;
		L_34 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_33);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_34);
		// channelBoxSix.color = Color.yellow;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = __this->get_channelBoxSix_34();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_36;
		L_36 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_35);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_36);
		// break;
		return;
	}

IL_014d:
	{
		// channelText_Seven.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_37 = __this->get_channelText_Seven_21();
		String_t* L_38 = ___name0;
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_38);
		// subscriberText_Seven.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_39 = __this->get_subscriberText_Seven_22();
		String_t* L_40;
		L_40 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_40);
		// channelBoxSeven.color = Color.yellow;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = __this->get_channelBoxSeven_35();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42;
		L_42 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_41);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_42);
		// break;
		return;
	}

IL_017c:
	{
		// channelText_Eight.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_43 = __this->get_channelText_Eight_23();
		String_t* L_44 = ___name0;
		NullCheck(L_43);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, L_44);
		// subscriberText_Eight.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_45 = __this->get_subscriberText_Eight_24();
		String_t* L_46;
		L_46 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_45);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, L_46);
		// channelBoxEight.color = Color.yellow;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_47 = __this->get_channelBoxEight_36();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_48;
		L_48 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_47);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_47, L_48);
		// break;
		return;
	}

IL_01ab:
	{
		// channelText_Nine.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_49 = __this->get_channelText_Nine_25();
		String_t* L_50 = ___name0;
		NullCheck(L_49);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, L_50);
		// subscriberText_Nine.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_51 = __this->get_subscriberText_Nine_26();
		String_t* L_52;
		L_52 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, L_52);
		// channelBoxNine.color = Color.yellow;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_53 = __this->get_channelBoxNine_37();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_54;
		L_54 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_53);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_53, L_54);
		// break;
		return;
	}

IL_01da:
	{
		// channelText_Ten.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_55 = __this->get_channelText_Ten_27();
		String_t* L_56 = ___name0;
		NullCheck(L_55);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_55, L_56);
		// subscriberText_Ten.text = subscriber.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_57 = __this->get_subscriberText_Ten_28();
		String_t* L_58;
		L_58 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)(&___subscriber1), /*hidden argument*/NULL);
		NullCheck(L_57);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_57, L_58);
		// channelBoxTen.color = Color.yellow;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_59 = __this->get_channelBoxTen_38();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60;
		L_60 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(/*hidden argument*/NULL);
		NullCheck(L_59);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_59, L_60);
		// break;
		return;
	}

IL_0209:
	{
		// Debug.Log("Error/Ranking/DisplayIndividual()");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral55B2E96F13573B81733E1B384F71787214A19B91, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ranking::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ranking__ctor_m48092E93DA629CE4718BBEBB2DFED818107B347C (Ranking_t71047233E260ADC4351B6B0F7857041D0A69BC7B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveData saveData = new SaveData();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_0 = (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D *)il2cpp_codegen_object_new(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D_il2cpp_TypeInfo_var);
		SaveData__ctor_m78E26F642D513F242E6B8BBDDEFF416C5656851E(L_0, /*hidden argument*/NULL);
		__this->set_saveData_4(L_0);
		// SaveMethod saveMethod = new SaveMethod();
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_1 = (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB *)il2cpp_codegen_object_new(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		SaveMethod__ctor_m9C88F839226E35D2DE9B64CFE8070B0C40D8FA70(L_1, /*hidden argument*/NULL);
		__this->set_saveMethod_5(L_1);
		// ConstData constData = new ConstData();
		ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * L_2 = (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 *)il2cpp_codegen_object_new(ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059_il2cpp_TypeInfo_var);
		ConstData__ctor_mCDB0658C26F83558C54CAFB5AE5885AF0A52BF4F(L_2, /*hidden argument*/NULL);
		__this->set_constData_6(L_2);
		// ConstMethod constMethod = new ConstMethod();
		ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 * L_3 = (ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8 *)il2cpp_codegen_object_new(ConstMethod_t1E6944CB411FE03B215A3F815A16684FBC5223F8_il2cpp_TypeInfo_var);
		ConstMethod__ctor_mF234FD132E3F3971A6708EF8BDA15410B02DDE7F(L_3, /*hidden argument*/NULL);
		__this->set_constMethod_7(L_3);
		// private List<double> subscriberList = new List<double>();
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_4 = (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)il2cpp_codegen_object_new(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var);
		List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31(L_4, /*hidden argument*/List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var);
		__this->set_subscriberList_8(L_4);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RankingAd::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankingAd_Start_m5E4CD948AB70B1E2690D9ED4B7E92F6B25C385DF (RankingAd_t6630582BC1073C047D6880539E299522AD813666 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.AddListener(this);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var);
		Advertisement_AddListener_m1548B00420180351DF863FBB372C0264AAE49C44(__this, /*hidden argument*/NULL);
		// Advertisement.Initialize(gameId, testMode);
		String_t* L_0 = __this->get_gameId_6();
		bool L_1 = __this->get_testMode_7();
		Advertisement_Initialize_m50E5DCFAC318D93B37B03C454C0B6648428A109F(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RankingAd::OnTapScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankingAd_OnTapScreen_mF5B82878644372375AF982E22B572A1E73E84AA9 (RankingAd_t6630582BC1073C047D6880539E299522AD813666 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// saveData = saveMethod.Load();
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_0 = __this->get_saveMethod_5();
		NullCheck(L_0);
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_1;
		L_1 = SaveMethod_Load_m2ADB27ECA0FC592161B76E2769EE7EC05AF0D8CB(L_0, /*hidden argument*/NULL);
		__this->set_saveData_4(L_1);
		// saveData.Week = 1;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_2 = __this->get_saveData_4();
		NullCheck(L_2);
		SaveData_set_Week_mC88EF20417E942D94883F9B554B8EB27000EFDEA_inline(L_2, 1, /*hidden argument*/NULL);
		// saveData.Month = 4;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_3 = __this->get_saveData_4();
		NullCheck(L_3);
		SaveData_set_Month_m3D05B1B5D46AF162BF12F422FE88EC7C03CC83A2_inline(L_3, 4, /*hidden argument*/NULL);
		// saveData.Year += 1;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_4 = __this->get_saveData_4();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SaveData_get_Year_mBE411FC1E50D2D10BD4C6017741D415B60CD20D1_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_5);
		SaveData_set_Year_m3CA1BA5D3C21F81E1644F3BC9A53AE68018F4B67_inline(L_5, ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		// saveMethod.Save(saveData);
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_7 = __this->get_saveMethod_5();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_8 = __this->get_saveData_4();
		NullCheck(L_7);
		SaveMethod_Save_m8BCB5E04C5B31132B22481F3804F02A6740D439D(L_7, L_8, /*hidden argument*/NULL);
		// Advertisement.Show(mySurfacingId);
		String_t* L_9 = __this->get_mySurfacingId_8();
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t049C3D5BE2CA5B376B1AEC9E88408AD0B2494D84_il2cpp_TypeInfo_var);
		Advertisement_Show_m8B3BB4A04BD6822D5B0A8CE6E675E6CDEDFDCEED(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RankingAd::OnUnityAdsReady(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankingAd_OnUnityAdsReady_mD2EDEE999BB585D36E136CBB541CD50ACF8787DB (RankingAd_t6630582BC1073C047D6880539E299522AD813666 * __this, String_t* ___surfacingId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62D10116F0CA4066BB7303553EA7440BF2D4B7EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Ranking/OnUnityAdsReady");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral62D10116F0CA4066BB7303553EA7440BF2D4B7EE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RankingAd::OnUnityAdsDidFinish(System.String,UnityEngine.Advertisements.ShowResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankingAd_OnUnityAdsDidFinish_mE96869E91B7EFDADE568B0B313A10A6B1D102D83 (RankingAd_t6630582BC1073C047D6880539E299522AD813666 * __this, String_t* ___surfacingId0, int32_t ___showResult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6EB3D5CD29DBA088A5C4098BEF4A22C4F4D34BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (showResult == ShowResult.Failed)
		int32_t L_0 = ___showResult1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Debug.Log("Failed Ranking/OnUnityAdsDidFinish");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF6EB3D5CD29DBA088A5C4098BEF4A22C4F4D34BB, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_000e:
	{
		// SceneManager.LoadScene("Main");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RankingAd::OnUnityAdsDidError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankingAd_OnUnityAdsDidError_m3255D26D152DF9B88A30FD40119AD9501CAC10A3 (RankingAd_t6630582BC1073C047D6880539E299522AD813666 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73D555A6934CAE0E6C86173C1A620F17304B90CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Ranking/OnUnityAdsDidError");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral73D555A6934CAE0E6C86173C1A620F17304B90CC, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RankingAd::OnUnityAdsDidStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankingAd_OnUnityAdsDidStart_m01B6ADB8136577A5717DB2AB8F15CF5EC82ABE9F (RankingAd_t6630582BC1073C047D6880539E299522AD813666 * __this, String_t* ___surfacingId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4183F9C9D34AF9464222E41150C802EE0FB1BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Ranking/OnUnityAdsDidStart");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralAF4183F9C9D34AF9464222E41150C802EE0FB1BD, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RankingAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RankingAd__ctor_mAB8F05DFCB994549F70F47FB893F3B82381006E5 (RankingAd_t6630582BC1073C047D6880539E299522AD813666 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B416EC272EB1FCD8DA23849E9A0C8D11CFC97B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveData saveData = new SaveData();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_0 = (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D *)il2cpp_codegen_object_new(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D_il2cpp_TypeInfo_var);
		SaveData__ctor_m78E26F642D513F242E6B8BBDDEFF416C5656851E(L_0, /*hidden argument*/NULL);
		__this->set_saveData_4(L_0);
		// SaveMethod saveMethod = new SaveMethod();
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_1 = (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB *)il2cpp_codegen_object_new(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		SaveMethod__ctor_m9C88F839226E35D2DE9B64CFE8070B0C40D8FA70(L_1, /*hidden argument*/NULL);
		__this->set_saveMethod_5(L_1);
		// private string gameId = "4064216";
		__this->set_gameId_6(_stringLiteral4B416EC272EB1FCD8DA23849E9A0C8D11CFC97B4);
		// private bool testMode = true;
		__this->set_testMode_7((bool)1);
		// public string mySurfacingId = "Rewarded_iOS";
		__this->set_mySurfacingId_8(_stringLiteral7448DA4EC902B839EDD3A227224DAD14507F22B5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Double savedata.SaveData::get_NowTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SaveData_get_NowTime_mC47E74D4557DD65CBEBB9B048B95677CB907A0D3 (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return nowTime;}
		double L_0 = __this->get_nowTime_0();
		return L_0;
	}
}
// System.Void savedata.SaveData::set_NowTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData_set_NowTime_m0527D96F449BD4D6D5C75610AC08A68B07127C0C (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set {nowTime = value;}
		double L_0 = ___value0;
		__this->set_nowTime_0(L_0);
		// set {nowTime = value;}
		return;
	}
}
// System.Int32 savedata.SaveData::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveData_get_Year_mBE411FC1E50D2D10BD4C6017741D415B60CD20D1 (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return year;}
		int32_t L_0 = __this->get_year_1();
		return L_0;
	}
}
// System.Void savedata.SaveData::set_Year(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData_set_Year_m3CA1BA5D3C21F81E1644F3BC9A53AE68018F4B67 (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set {year = value;}
		int32_t L_0 = ___value0;
		__this->set_year_1(L_0);
		// set {year = value;}
		return;
	}
}
// System.Int32 savedata.SaveData::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveData_get_Month_m604A37495CCDED028F24C3F7B4BD8A0DC472FF7F (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return month;}
		int32_t L_0 = __this->get_month_2();
		return L_0;
	}
}
// System.Void savedata.SaveData::set_Month(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData_set_Month_m3D05B1B5D46AF162BF12F422FE88EC7C03CC83A2 (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set {month = value;}
		int32_t L_0 = ___value0;
		__this->set_month_2(L_0);
		// set {month = value;}
		return;
	}
}
// System.Int32 savedata.SaveData::get_Week()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SaveData_get_Week_m27B5C5912B0D4014C9D9C2EFD64B8A2A366AA938 (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return week;}
		int32_t L_0 = __this->get_week_3();
		return L_0;
	}
}
// System.Void savedata.SaveData::set_Week(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData_set_Week_mC88EF20417E942D94883F9B554B8EB27000EFDEA (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set {week = value;}
		int32_t L_0 = ___value0;
		__this->set_week_3(L_0);
		// set {week = value;}
		return;
	}
}
// System.Int32[] savedata.SaveData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* SaveData_get_Id_mB39E206950FF941E1DF9DAC2F682BEEADFBFC54F (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return id;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_4();
		return L_0;
	}
}
// System.Void savedata.SaveData::set_Id(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData_set_Id_mE6DAE156580DAF7299EB62D6D63AF2EEE4E3036E (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_4(L_0);
		// set {id = value;}
		return;
	}
}
// System.String[] savedata.SaveData::get_ChannelName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759 (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_5();
		return L_0;
	}
}
// System.Void savedata.SaveData::set_ChannelName(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData_set_ChannelName_m59135D13CA150372440C6A076878453010A132B5 (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_5(L_0);
		// set {channelName = value;}
		return;
	}
}
// System.Double[] savedata.SaveData::get_Subscriber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54 (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_6();
		return L_0;
	}
}
// System.Void savedata.SaveData::set_Subscriber(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData_set_Subscriber_mB433431AC84B7A65CA677F598EDBABC9B2A0A6AB (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_6(L_0);
		// set {subscriber = value;}
		return;
	}
}
// System.Void savedata.SaveData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveData__ctor_m78E26F642D513F242E6B8BBDDEFF416C5656851E (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32EFB11ADF7CE51983B21374384F6C0F68D19D6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int year = 1; // 年
		__this->set_year_1(1);
		// private int month = 4; // 月
		__this->set_month_2(4);
		// private int week = 1; // 週
		__this->set_week_3(1);
		// private int[] id = {1, 0, 0, 0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)6);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		__this->set_id_4(L_1);
		// private string[] channelName = {"Sample Channel", "", "", "", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral32EFB11ADF7CE51983B21374384F6C0F68D19D6A);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral32EFB11ADF7CE51983B21374384F6C0F68D19D6A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_5(L_8);
		// private double[] subscriber = {1.0, 0.0, 0.0, 0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_9 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)6);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(1.0));
		__this->set_subscriber_6(L_10);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void savemethod.SaveMethod::Save(savedata.SaveData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveMethod_Save_m8BCB5E04C5B31132B22481F3804F02A6740D439D (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * __this, SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * ___saveData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78BC4DD92B77F5C14DD7FC018155905B806E65C3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// SaveMethod data = new SaveMethod();
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_0 = (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB *)il2cpp_codegen_object_new(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		SaveMethod__ctor_m9C88F839226E35D2DE9B64CFE8070B0C40D8FA70(L_0, /*hidden argument*/NULL);
		// data.nowTime = saveData.NowTime;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_1 = L_0;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_2 = ___saveData0;
		NullCheck(L_2);
		double L_3;
		L_3 = SaveData_get_NowTime_mC47E74D4557DD65CBEBB9B048B95677CB907A0D3_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_nowTime_0(L_3);
		// data.year = saveData.Year;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_4 = L_1;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_5 = ___saveData0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = SaveData_get_Year_mBE411FC1E50D2D10BD4C6017741D415B60CD20D1_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_year_1(L_6);
		// data.month = saveData.Month;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_7 = L_4;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_8 = ___saveData0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SaveData_get_Month_m604A37495CCDED028F24C3F7B4BD8A0DC472FF7F_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_month_2(L_9);
		// data.week = saveData.Week;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_10 = L_7;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_11 = ___saveData0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SaveData_get_Week_m27B5C5912B0D4014C9D9C2EFD64B8A2A366AA938_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_week_3(L_12);
		// data.id = saveData.Id;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_13 = L_10;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_14 = ___saveData0;
		NullCheck(L_14);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15;
		L_15 = SaveData_get_Id_mB39E206950FF941E1DF9DAC2F682BEEADFBFC54F_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		L_13->set_id_4(L_15);
		// data.channelName = saveData.ChannelName;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_16 = L_13;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_17 = ___saveData0;
		NullCheck(L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18;
		L_18 = SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->set_channelName_5(L_18);
		// data.subscriber = saveData.Subscriber;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_19 = L_16;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_20 = ___saveData0;
		NullCheck(L_20);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_21;
		L_21 = SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		L_19->set_subscriber_6(L_21);
		// string jsonData = JsonUtility.ToJson(data);
		String_t* L_22;
		L_22 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_19, /*hidden argument*/NULL);
		V_0 = L_22;
		// writer = new StreamWriter(Application.persistentDataPath + "/savedata.json", false); // trueで追記、falseで上書き
		String_t* L_23;
		L_23 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_23, _stringLiteral78BC4DD92B77F5C14DD7FC018155905B806E65C3, /*hidden argument*/NULL);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_25 = (StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 *)il2cpp_codegen_object_new(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6_il2cpp_TypeInfo_var);
		StreamWriter__ctor_m6A81CE9EDAB3AAB4270E88539EA83D945954CD0E(L_25, L_24, (bool)0, /*hidden argument*/NULL);
		// writer.Write(jsonData);
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_26 = L_25;
		String_t* L_27 = V_0;
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_26, L_27);
		// writer.Flush();
		StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * L_28 = L_26;
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(10 /* System.Void System.IO.TextWriter::Flush() */, L_28);
		// writer.Close();
		NullCheck(L_28);
		VirtActionInvoker0::Invoke(8 /* System.Void System.IO.TextWriter::Close() */, L_28);
		// }
		return;
	}
}
// savedata.SaveData savemethod.SaveMethod::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * SaveMethod_Load_m2ADB27ECA0FC592161B76E2769EE7EC05AF0D8CB (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_m0979464994C7D37A91E273FABAF78239C15DDE41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78BC4DD92B77F5C14DD7FC018155905B806E65C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// SaveMethod data = new SaveMethod();
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_0 = (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB *)il2cpp_codegen_object_new(SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_il2cpp_TypeInfo_var);
		SaveMethod__ctor_m9C88F839226E35D2DE9B64CFE8070B0C40D8FA70(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// string readdata = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// reader = new StreamReader(Application.persistentDataPath + "/savedata.json");
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, _stringLiteral78BC4DD92B77F5C14DD7FC018155905B806E65C3, /*hidden argument*/NULL);
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_3 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		StreamReader__ctor_m1F07D64A9881F3A6B755881210B4E88F8E63849B(L_3, L_2, /*hidden argument*/NULL);
		// readdata = reader.ReadToEnd();
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_4 = L_3;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_4);
		V_1 = L_5;
		// reader.Close();
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_4);
		// data = JsonUtility.FromJson<SaveMethod>(readdata);
		String_t* L_6 = V_1;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_7;
		L_7 = JsonUtility_FromJson_TisSaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_m0979464994C7D37A91E273FABAF78239C15DDE41(L_6, /*hidden argument*/JsonUtility_FromJson_TisSaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB_m0979464994C7D37A91E273FABAF78239C15DDE41_RuntimeMethod_var);
		V_0 = L_7;
		// SaveData saveData = new SaveData();
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_8 = (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D *)il2cpp_codegen_object_new(SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D_il2cpp_TypeInfo_var);
		SaveData__ctor_m78E26F642D513F242E6B8BBDDEFF416C5656851E(L_8, /*hidden argument*/NULL);
		// saveData.NowTime = data.nowTime;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_9 = L_8;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_10 = V_0;
		NullCheck(L_10);
		double L_11 = L_10->get_nowTime_0();
		NullCheck(L_9);
		SaveData_set_NowTime_m0527D96F449BD4D6D5C75610AC08A68B07127C0C_inline(L_9, L_11, /*hidden argument*/NULL);
		// saveData.Year = data.year;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_12 = L_9;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_year_1();
		NullCheck(L_12);
		SaveData_set_Year_m3CA1BA5D3C21F81E1644F3BC9A53AE68018F4B67_inline(L_12, L_14, /*hidden argument*/NULL);
		// saveData.Month = data.month;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_15 = L_12;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_month_2();
		NullCheck(L_15);
		SaveData_set_Month_m3D05B1B5D46AF162BF12F422FE88EC7C03CC83A2_inline(L_15, L_17, /*hidden argument*/NULL);
		// saveData.Week = data.week;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_18 = L_15;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_week_3();
		NullCheck(L_18);
		SaveData_set_Week_mC88EF20417E942D94883F9B554B8EB27000EFDEA_inline(L_18, L_20, /*hidden argument*/NULL);
		// saveData.Id = data.id;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_21 = L_18;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_22 = V_0;
		NullCheck(L_22);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = L_22->get_id_4();
		NullCheck(L_21);
		SaveData_set_Id_mE6DAE156580DAF7299EB62D6D63AF2EEE4E3036E_inline(L_21, L_23, /*hidden argument*/NULL);
		// saveData.ChannelName = data.channelName;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_24 = L_21;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_25 = V_0;
		NullCheck(L_25);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25->get_channelName_5();
		NullCheck(L_24);
		SaveData_set_ChannelName_m59135D13CA150372440C6A076878453010A132B5_inline(L_24, L_26, /*hidden argument*/NULL);
		// saveData.Subscriber = data.subscriber;
		SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * L_27 = L_24;
		SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * L_28 = V_0;
		NullCheck(L_28);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_29 = L_28->get_subscriber_6();
		NullCheck(L_27);
		SaveData_set_Subscriber_mB433431AC84B7A65CA677F598EDBABC9B2A0A6AB_inline(L_27, L_29, /*hidden argument*/NULL);
		// return saveData;
		return L_27;
	}
}
// System.Void savemethod.SaveMethod::Delete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveMethod_Delete_mDAB3969D6658D47B4543CD5F2BA9A2DB9D982541 (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78BC4DD92B77F5C14DD7FC018155905B806E65C3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// System.IO.File.Delete(Application.persistentDataPath + "/savedata.json");
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral78BC4DD92B77F5C14DD7FC018155905B806E65C3, /*hidden argument*/NULL);
		File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void savemethod.SaveMethod::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveMethod__ctor_m9C88F839226E35D2DE9B64CFE8070B0C40D8FA70 (SaveMethod_t0EB4356AC9F01E10E7DFF7AD3B88D823571678BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int[] id = {0, 0, 0}; // ID
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_id_4(L_0);
		// private string[] channelName = {"", "", ""}; // チャンネル名
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->set_channelName_5(L_4);
		// private double[] subscriber = {0.0, 0.0, 0.0}; // チャンネル登録者数
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_5 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_subscriber_6(L_5);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_one_mF4F92125696C21CCA0B205298F38406EECF494C0_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_one;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_one_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_one_m701DBE14D02ADDE3F0ED2659AD868557BE340F53_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_one;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_one_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_one_m384CDD6A237A322C27259A17436E21F42927AF34_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_one;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_one_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_two_m5EB605B715F51E3327350C022534A9CFBD6E598F_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_two;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_two_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_two_mA05F9834C00D027AEB1471BA575CEF40C58C4950_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_two;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_two_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_two_m239639A08E7276E3E12B1F209B6320AE06DA23F6_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_two;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_two_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_three_m1CB3EE23C49735AA0F197B846D38D464C3C56958_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_three;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_three_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_three_m2E6999DB1DD99B0AA0C0C78A5B4299192206F811_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_three;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_three_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_three_mC1D0E7A6CB2B3B5C32D06551765AF0BE2A894DD2_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_three;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_three_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_four_mE2D73D3ECDEC8D1D4758C13D2766F32DEE8055B1_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_four;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_four_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_four_mA8CEF565F16B85135A16EB300D20DAB97769EF9B_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_four;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_four_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_four_m86ECA679D4B2CCB344571495BA12F8A12424D17E_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_four;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_four_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_five_mDF1EB6254B9AA9913FA994DD23180AEF2782CDA7_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_five;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_five_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_five_mC464A3EF07234D743F53E49B8BD0AE0EA45E19C7_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_five;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_five_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_five_m0809A571FF8CF669E67FEF125C3F632D73036F8F_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_five;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_five_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_six_mCF05A896A65C3101E27CEC3ABB32111B3DFA018D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_six;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_six_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_six_m5D1A49C0E51AD6A7A9526EBC11FC099422D288CC_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_six;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_six_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_six_m5496E5CB9344F601DD7879523D8B517A3F166B1A_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_six;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_six_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_seven_m8FFED31E586E338FACE6BB8348FF8C06F0921384_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_seven;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_seven_18();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_seven_mE2833926A630C7155BDA120A379E603554F7964D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_seven;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_seven_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_seven_m129BA17538D9120D3EE93B0F2D352BAE6C28561D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_seven;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_seven_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_eight_m8E976D19EBC2DA6617E490870B5BF7B97719B44E_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_eight;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_eight_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_eight_mE5CACD7765C7D3D36670F3BE636F6E8CD99E1688_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_eight;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_eight_22();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_eight_m1DAB86A514BC8A29940C126FEFE247A958F8EAB2_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_eight;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_eight_23();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_nine_mDAAE2ED6106E3DC257FF153E1710914203813EED_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_nine;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_nine_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_nine_m9E19D3011E84D756CC7A48A5DC9FDB5F120F5EF1_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_nine;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_nine_25();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_nine_m2E3266D471AB05B7583023515E240E9C3AB75369_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_nine;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_nine_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_ten_m1497B160EFFCEE7713805E06E7CCEBB14E1B16E7_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_ten;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_ten_27();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_ten_m5E20878776B0283D420BA8D59EE606A7208D879C_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_ten;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_ten_28();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_ten_mB21FD6268AEAEDBB022EFA0192C25606CB553DF1_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_ten;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_ten_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_eleven_mDEC48EEC09729F642A0EDEFD4FB271ACD8810195_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_eleven;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_eleven_30();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_eleven_mDE83346CAA6CE6DA6D5E39D5D97F18EE6AD192C3_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_eleven;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_eleven_31();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_eleven_m7F08C2B2C5DD884E34B1C6EB92CF10D87ED035B3_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_eleven;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_eleven_32();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ConstData_get_Id_twelve_m9BDB6BFEE9F557A05D45B87519542327C87BDB1E_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return id_twelve;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_twelve_33();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ConstData_get_ChannelName_twelve_m9B26C7961685096F8FE9BA3608FDE5BE95F639D8_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName_twelve;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_twelve_34();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ConstData_get_Subscriber_twelve_mDA24C3F8E90EE6B6287A4F7508DE7B0B36F795D7_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber_twelve;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_twelve_35();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_one_mB4BFFCC226EA9913A75DA7ECB2B86CFE7EF408BC_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_one = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_one_0(L_0);
		// set {id_one = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_one_mB1DDF691595244247A6A1E443A043F138CD5D75B_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_one = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_one_1(L_0);
		// set {channelName_one = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_one_mA588CF7DCFD6751FC329C8353AD855BB82867EA2_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_one = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_one_2(L_0);
		// set {subscriber_one = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_two_m00ED2007794D851D2C5731EA6BF42C82F30CE6CB_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_two = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_two_3(L_0);
		// set {id_two = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_two_m59F681510F7545E30C6692FEDB9F50803DD89E0B_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_two = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_two_4(L_0);
		// set {channelName_two = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_two_mC03DA19DC13FF295F568F566797FB25849548F7D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_two = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_two_5(L_0);
		// set {subscriber_two = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_three_m78B9421EC80F2EDABB979D85E6417C0B5EFD0475_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_three = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_three_6(L_0);
		// set {id_three = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_three_m4B060CA2A008741E19C3714ECFE62986EF557692_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_three = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_three_7(L_0);
		// set {channelName_three = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_three_m1FE6B4DEEBD90026EF7755828E007D3C95B97DA4_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_three = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_three_8(L_0);
		// set {subscriber_three = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_four_m4FBECD5865A8F7DDD8B82E31C42618AA6A0D7279_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_four = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_four_9(L_0);
		// set {id_four = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_four_m3A35324D28E39A6F1BDD5A9833E14B9F9AB9E88F_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_four = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_four_10(L_0);
		// set {channelName_four = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_four_m2B84BE27645C611B6F1E5C8987D49FAC63B341C6_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_four = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_four_11(L_0);
		// set {subscriber_four = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_five_mC51F779DB5E7B6DAC120A75EF2640EF0829C197B_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_five = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_five_12(L_0);
		// set {id_five = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_five_mBD1F0D93B6C040A629850CFBE9FEBF61F48455BC_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_five = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_five_13(L_0);
		// set {channelName_five = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_five_mD2483B90160205F9FCB7C7C2E26A19581F3725E2_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_five = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_five_14(L_0);
		// set {subscriber_five = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_six_mFB7F01EDA1C25EC8D6CF2C2B33B0EEB1F613A813_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_six = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_six_15(L_0);
		// set {id_six = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_six_m835A095C57675B77AC2B96A5876920622C376596_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_six = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_six_16(L_0);
		// set {channelName_six = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_six_mB80A7152228CCDE617EBF090E94C634A5489978D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_six = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_six_17(L_0);
		// set {subscriber_six = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_seven_m914B1236C3B3A04199C5F684C13B3971964474C9_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_seven = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_seven_18(L_0);
		// set {id_seven = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_seven_m23132ECCC9345254637D667EE15B298A6EAB4F43_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_seven = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_seven_19(L_0);
		// set {channelName_seven = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_seven_m8612A8A8AE67D739A39B6AF19E4E2A8E46C84248_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_seven = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_seven_20(L_0);
		// set {subscriber_seven = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_eight_m83D2EC6FE379BC8B029903B4F10545FEE5BF7F8A_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_eight = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_eight_21(L_0);
		// set {id_eight = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_eight_mCEC2802820A2C1199CDE6D4D4E7E6B93BBC1862D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_eight = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_eight_22(L_0);
		// set {channelName_eight = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_eight_m7CEB7556ECD0493D6B9863EE7324983082645902_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_eight = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_eight_23(L_0);
		// set {subscriber_eight = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_nine_m00D6592B6CA14F0C8C320D2E03B58812E73BA12D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_nine = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_nine_24(L_0);
		// set {id_nine = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_nine_mEFEB2A50C483342CB039F646643EDDEF4027404F_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_nine = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_nine_25(L_0);
		// set {channelName_nine = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_nine_m2256B5E90EE1C3A66DB72AFDDC3A1F3CE9B8D76A_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_nine = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_nine_26(L_0);
		// set {subscriber_nine = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_ten_mFBBD8C797888602272B767A769C655D0D94B7025_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_ten = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_ten_27(L_0);
		// set {id_ten = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_ten_m5570A58692EDB9B3B5338E13A92D7FB04385695D_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_ten = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_ten_28(L_0);
		// set {channelName_ten = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_ten_mACF123D0172048F41F25DA0302684F9D94E091CC_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_ten = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_ten_29(L_0);
		// set {subscriber_ten = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_eleven_m735F99B5186DF309B8C2B7381B7155ADED9CF9FB_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_eleven = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_eleven_30(L_0);
		// set {id_eleven = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_eleven_m0AD7E9CF632EAB63B849EF288F7F64800C479C78_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_eleven = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_eleven_31(L_0);
		// set {channelName_eleven = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_eleven_m1B468ADCAA30F5CE18C40C60642B1BA3921A5997_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_eleven = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_eleven_32(L_0);
		// set {subscriber_eleven = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Id_twelve_m179E11F1EBA086E44450AEA2672F6C2978A7495C_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id_twelve = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_twelve_33(L_0);
		// set {id_twelve = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_ChannelName_twelve_m94B312947861EEF6B06011B35648003D53506AE6_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName_twelve = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_twelve_34(L_0);
		// set {channelName_twelve = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConstData_set_Subscriber_twelve_m558826EB7E276A0D2A8CD42D6A812435F9BEABA2_inline (ConstData_t3B379CBE570EE61EFDF03C0425E1C54CD5B88059 * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber_twelve = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_twelve_35(L_0);
		// set {subscriber_twelve = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SaveData_get_Year_mBE411FC1E50D2D10BD4C6017741D415B60CD20D1_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return year;}
		int32_t L_0 = __this->get_year_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SaveData_get_Month_m604A37495CCDED028F24C3F7B4BD8A0DC472FF7F_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return month;}
		int32_t L_0 = __this->get_month_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SaveData_get_Week_m27B5C5912B0D4014C9D9C2EFD64B8A2A366AA938_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return week;}
		int32_t L_0 = __this->get_week_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double SaveData_get_NowTime_mC47E74D4557DD65CBEBB9B048B95677CB907A0D3_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return nowTime;}
		double L_0 = __this->get_nowTime_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_NowTime_m0527D96F449BD4D6D5C75610AC08A68B07127C0C_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set {nowTime = value;}
		double L_0 = ___value0;
		__this->set_nowTime_0(L_0);
		// set {nowTime = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_Week_mC88EF20417E942D94883F9B554B8EB27000EFDEA_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set {week = value;}
		int32_t L_0 = ___value0;
		__this->set_week_3(L_0);
		// set {week = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_Month_m3D05B1B5D46AF162BF12F422FE88EC7C03CC83A2_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set {month = value;}
		int32_t L_0 = ___value0;
		__this->set_month_2(L_0);
		// set {month = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* SaveData_get_Id_mB39E206950FF941E1DF9DAC2F682BEEADFBFC54F_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return id;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_id_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* SaveData_get_Subscriber_m0D440D22E202ACC21E2863EF5F9339C9B1BDFA54_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return subscriber;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get_subscriber_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* SaveData_get_ChannelName_m06895ACCB5DE6B1D7FAA239AB8BFBD7F5DD4A759_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, const RuntimeMethod* method)
{
	{
		// get {return channelName;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_channelName_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_Year_m3CA1BA5D3C21F81E1644F3BC9A53AE68018F4B67_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set {year = value;}
		int32_t L_0 = ___value0;
		__this->set_year_1(L_0);
		// set {year = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_Id_mE6DAE156580DAF7299EB62D6D63AF2EEE4E3036E_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method)
{
	{
		// set {id = value;}
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___value0;
		__this->set_id_4(L_0);
		// set {id = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_ChannelName_m59135D13CA150372440C6A076878453010A132B5_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// set {channelName = value;}
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_channelName_5(L_0);
		// set {channelName = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SaveData_set_Subscriber_mB433431AC84B7A65CA677F598EDBABC9B2A0A6AB_inline (SaveData_t1A23260659F1E9CC24AEEBBFE8C1A1FFC1F5BD3D * __this, DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___value0, const RuntimeMethod* method)
{
	{
		// set {subscriber = value;}
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = ___value0;
		__this->set_subscriber_6(L_0);
		// set {subscriber = value;}
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_gshared_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get__items_1();
		int32_t L_3 = ___index0;
		double L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_2, (int32_t)L_3);
		return (double)L_4;
	}
}
