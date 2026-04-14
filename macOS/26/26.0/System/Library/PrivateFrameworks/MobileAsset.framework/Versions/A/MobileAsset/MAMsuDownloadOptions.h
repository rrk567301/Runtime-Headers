@class NSString;

@interface MAMsuDownloadOptions : MADownloadOptions

@property (retain, nonatomic) NSString *requestedProductVersion;
@property (retain, nonatomic) NSString *requestedBuildVersion;
@property (nonatomic) long long delayPeriod;
@property (nonatomic) BOOL supervised;
@property (nonatomic) BOOL allowSameVersion;
@property (retain, nonatomic) NSString *prerequisiteBuildVersion;
@property (retain, nonatomic) NSString *prerequisiteProductVersion;
@property (retain, nonatomic) NSString *prerequisiteReleaseType;
@property (nonatomic) BOOL prerequisiteReleaseTypeIsOverridden;
@property (retain, nonatomic) NSString *liveAssetAudienceUUID;
@property (retain, nonatomic) NSString *purpose;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)encodeAsPlist;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPlist:(id)a0;
- (void).cxx_destruct;

@end
