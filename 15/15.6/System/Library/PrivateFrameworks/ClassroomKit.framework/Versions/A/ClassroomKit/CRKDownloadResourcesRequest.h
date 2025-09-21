@class DMFControlGroupIdentifier, NSArray, NSString, NSData;

@interface CRKDownloadResourcesRequest : CATTaskRequest

@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSArray *resources;
@property (copy, nonatomic) NSString *resourcesDescription;
@property (retain, nonatomic) NSData *previewImageData;
@property (nonatomic) char openAfterDownloadCompletes;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;

+ (char)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
