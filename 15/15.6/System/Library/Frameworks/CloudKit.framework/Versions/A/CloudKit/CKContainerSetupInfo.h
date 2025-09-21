@class CKContainerOptions, NSArray, CKContainerID, NSString, CKAccountOverrideInfo;

@interface CKContainerSetupInfo : NSObject <CKPropertiesDescription, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>

@property (class, readonly, copy) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) CKAccountOverrideInfo *accountOverrideInfo;
@property (readonly, copy, nonatomic) CKAccountOverrideInfo *accountInfoOverride;
@property (readonly, copy, nonatomic) CKContainerOptions *containerOptions;
@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)initWithContainerID:(id)a0 options:(id)a1;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void)_stripAccountInfo;
- (id)copyWithoutAccountInfo;
- (id)hashString;

@end
