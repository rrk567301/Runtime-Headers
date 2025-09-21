@class NSString, NSMutableArray;

@interface TRIPBFileOptions : TRIPBMessage

@property (copy, nonatomic) NSString *javaPackage;
@property (nonatomic) char hasJavaPackage;
@property (copy, nonatomic) NSString *javaOuterClassname;
@property (nonatomic) char hasJavaOuterClassname;
@property (nonatomic) char javaMultipleFiles;
@property (nonatomic) char hasJavaMultipleFiles;
@property (nonatomic) char javaGenerateEqualsAndHash;
@property (nonatomic) char hasJavaGenerateEqualsAndHash;
@property (nonatomic) char javaStringCheckUtf8;
@property (nonatomic) char hasJavaStringCheckUtf8;
@property (nonatomic) int optimizeFor;
@property (nonatomic) char hasOptimizeFor;
@property (copy, nonatomic) NSString *goPackage;
@property (nonatomic) char hasGoPackage;
@property (nonatomic) char ccGenericServices;
@property (nonatomic) char hasCcGenericServices;
@property (nonatomic) char javaGenericServices;
@property (nonatomic) char hasJavaGenericServices;
@property (nonatomic) char pyGenericServices;
@property (nonatomic) char hasPyGenericServices;
@property (nonatomic) char phpGenericServices;
@property (nonatomic) char hasPhpGenericServices;
@property (nonatomic) char deprecated;
@property (nonatomic) char hasDeprecated;
@property (nonatomic) char ccEnableArenas;
@property (nonatomic) char hasCcEnableArenas;
@property (copy, nonatomic) NSString *objcClassPrefix;
@property (nonatomic) char hasObjcClassPrefix;
@property (copy, nonatomic) NSString *csharpNamespace;
@property (nonatomic) char hasCsharpNamespace;
@property (copy, nonatomic) NSString *swiftPrefix;
@property (nonatomic) char hasSwiftPrefix;
@property (copy, nonatomic) NSString *phpClassPrefix;
@property (nonatomic) char hasPhpClassPrefix;
@property (copy, nonatomic) NSString *phpNamespace;
@property (nonatomic) char hasPhpNamespace;
@property (copy, nonatomic) NSString *phpMetadataNamespace;
@property (nonatomic) char hasPhpMetadataNamespace;
@property (copy, nonatomic) NSString *rubyPackage;
@property (nonatomic) char hasRubyPackage;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
