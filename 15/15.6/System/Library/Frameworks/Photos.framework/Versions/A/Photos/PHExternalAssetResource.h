@class NSString, NSData, PHAssetResourceCreationOptions, NSURL;

@interface PHExternalAssetResource : NSObject <PHCPLAssetResource> {
    long long _sandboxExtensionHandle;
}

@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) PHAssetResourceCreationOptions *creationOptions;
@property (readonly, nonatomic) char isLibraryAssetResource;
@property (nonatomic, setter=_setDuplicateAllowsReadAccess:) char duplicateAllowsReadAccess;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) long long pixelWidth;
@property (nonatomic) long long pixelHeight;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) unsigned long long cplResourceType;

+ (id)assetResourceForDuplicatingAssetResource:(id)a0 asData:(char)a1 error:(id *)a2;
+ (id)assetResourceForDuplicatingAssetResource:(id)a0 newResourceType:(long long)a1 asData:(char)a2 error:(id *)a3;
+ (unsigned long long)probableCPLResourceTypeFromAssetResourceType:(long long)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (id)_issueSandboxExtension;
- (void)_consumeSandboxExtension:(id)a0;
- (void)_releaseSandboxExtension;
- (id)initWithResourceType:(long long)a0;

@end
