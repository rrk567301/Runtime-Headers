@class NSString, UTType, WFImage, NSDictionary, NSArray;

@interface WFFileType : WFType

@property (readonly, nonatomic) WFImage *documentIcon;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) UTType *utType;
@property (readonly, nonatomic, getter=isDeclared) char declared;
@property (readonly, nonatomic, getter=isDynamic) char dynamic;
@property (readonly, nonatomic, getter=isCoreType) char coreType;
@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, nonatomic) NSDictionary *typeDeclaration;
@property (readonly, nonatomic) NSArray *typesConformedTo;
@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSString *pboardType;
@property (readonly, nonatomic) NSString *OSType;

+ (char)supportsSecureCoding;
+ (id)typeFromFileExtension:(id)a0;
+ (id)typeWithUTType:(id)a0;
+ (id)typeWithString:(id)a0;
+ (id)typeFromFilename:(id)a0;
+ (id)typeFromMIMEType:(id)a0;
+ (id)typeFromPasteboardType:(id)a0;
+ (id)typesFromStrings:(id)a0;
+ (id)typesFromUTTypes:(id)a0 excludingType:(id)a1;
+ (id)fileTypeCache;
+ (id)typeForTagClass:(id)a0 tag:(id)a1;
+ (id)typeWithUTType:(id)a0 string:(id)a1;
+ (id)typesForTagClass:(id)a0 tag:(id)a1 conformingToType:(id)a2;
+ (id)typesFromUTTypes:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToString:(id)a0;
- (char)conformsToType:(id)a0;
- (char)conformsToString:(id)a0;
- (char)conformsToUTType:(id)a0;
- (char)conformsToUTTypes:(id)a0;
- (char)isEqualToType:(id)a0;
- (char)isEqualToUTType:(id)a0;
- (id)initWithUTType:(id)a0;
- (id)conformingTypesWithFileExtension:(id)a0;
- (id)conformingTypesWithMIMEType:(id)a0;
- (id)conformingTypesWithTagClass:(id)a0 tag:(id)a1;
- (id)initWithUTType:(id)a0 string:(id)a1;

@end
