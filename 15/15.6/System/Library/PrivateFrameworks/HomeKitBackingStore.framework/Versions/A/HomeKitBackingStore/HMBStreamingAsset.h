@class NSString, CKStreamingAsset;

@interface HMBStreamingAsset : HMFObject <NSSecureCoding, HMBModelNativeCKWrapper, HMBModelObjectMerging>

@property (class, readonly) char supportsSecureCoding;
@property (class, readonly, nonatomic) char includeInModelEncoding;

@property (retain, nonatomic) CKStreamingAsset *uploadStreamingAsset;
@property (retain, nonatomic) CKStreamingAsset *downloadStreamingAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyNativeCKValue:(id)a0 fromSource:(unsigned long long)a1 associatingWith:(id)a2 toModel:(id)a3 propertyNamed:(id)a4;
+ (id)hmbDecodeData:(id)a0 fromStorageLocation:(unsigned long long)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attributeDescriptions;
- (id)hmbEncodeForStorageLocation:(unsigned long long)a0 error:(id *)a1;
- (id)hmbObjectByMergingFromObject:(id)a0;
- (id)initWithUploadStreamingAsset:(id)a0;
- (id)initWithUploadStreamingAsset:(id)a0 downloadStreamingAsset:(id)a1;
- (id)nativeCKValueWithEncodingContext:(id)a0 error:(id *)a1;

@end
