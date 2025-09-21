@class NSSet, NSString;

@interface PFPosterShuffleConfiguration : NSObject <NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char includePeople;
@property (nonatomic) char includePets;
@property (nonatomic) char includeLandscapes;
@property (nonatomic) char includeCityscapes;
@property (nonatomic) long long shuffleType;
@property (nonatomic) long long shuffleFrequency;
@property (retain, nonatomic) NSSet *personLocalIdentifiers;
@property (nonatomic) unsigned long long shuffleSmartAlbums;
@property (retain, nonatomic) NSSet *albumCloudIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)analyticsPayload;
- (id)initWithShuffleType:(long long)a0;

@end
