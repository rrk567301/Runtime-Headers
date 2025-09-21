@class NSString;

@interface MAMsuDownloadOptions : MADownloadOptions

@property (retain, nonatomic) NSString *requestedProductVersion;
@property (nonatomic) long long delayPeriod;
@property (nonatomic) char supervised;
@property (nonatomic) char allowSameVersion;
@property (retain, nonatomic) NSString *prerequisiteBuildVersion;
@property (retain, nonatomic) NSString *prerequisiteProductVersion;
@property (retain, nonatomic) NSString *prerequisiteReleaseType;
@property (nonatomic) char prerequisiteReleaseTypeIsOverridden;
@property (retain, nonatomic) NSString *liveAssetAudienceUUID;
@property (retain, nonatomic) NSString *purpose;

+ (char)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlist:(id)a0;
- (id)encodeAsPlist;

@end
