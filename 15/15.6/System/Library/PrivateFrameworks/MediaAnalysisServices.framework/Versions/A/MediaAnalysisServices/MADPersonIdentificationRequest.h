@interface MADPersonIdentificationRequest : MADRequest

@property (nonatomic) unsigned long long faceDetectorVisionRevision;
@property (nonatomic) char allowOnDemand;
@property (nonatomic) char allowUnverifiedIdentity;
@property (nonatomic) char useLowResolutionPicture;
@property (nonatomic) unsigned long long maximumFaceCount;

+ (char)supportsSecureCoding;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
