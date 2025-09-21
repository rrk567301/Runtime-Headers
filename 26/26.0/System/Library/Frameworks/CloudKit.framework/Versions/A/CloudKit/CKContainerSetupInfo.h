@class CKContainerOptions, NSArray, CKContainerID, NSString, CKAccountOverrideInfo;

@interface CKContainerSetupInfo : NSObject <CKPropertiesDescription, NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>

@property (class, readonly, copy) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly) BOOL supportsSecureCoding;

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

- (void)CKDescribePropertiesUsing:(id)a0;
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithoutAccountInfo;
- (id)initWithContainerID:(id)a0 options:(id)a1;
- (id)hashString;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_stripAccountInfo;
- (id)redactedDescription;

@end
