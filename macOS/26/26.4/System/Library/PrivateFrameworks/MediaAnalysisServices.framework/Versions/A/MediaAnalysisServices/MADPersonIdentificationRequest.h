@interface MADPersonIdentificationRequest : MADRequest

@property (nonatomic) unsigned long long faceDetectorVisionRevision;
@property (nonatomic) BOOL allowOnDemand;
@property (nonatomic) BOOL allowUnverifiedIdentity;
@property (nonatomic) BOOL useLowResolutionPicture;
@property (nonatomic) BOOL useVIPModel;
@property (nonatomic) BOOL includePets;
@property (nonatomic) unsigned long long maximumFaceCount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
