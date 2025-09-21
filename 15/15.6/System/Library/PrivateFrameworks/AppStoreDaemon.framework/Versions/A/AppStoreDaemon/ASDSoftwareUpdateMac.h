@class NSArray, NSDictionary, NSDate;

@interface ASDSoftwareUpdateMac : ASDSoftwareUpdate

@property (copy, nonatomic) NSArray *blockedBy;
@property (copy, nonatomic) NSDate *installDate;
@property (copy, nonatomic) NSDictionary *metrics;
@property (nonatomic, getter=isDownloaded) char downloaded;
@property (nonatomic, getter=isPerDevice) char perDevice;
@property (nonatomic, getter=isProfileValidated) char profileValidated;
@property (copy, nonatomic) NSDictionary *rawUpdateDictionary;
@property (nonatomic) long long rawUpdateState;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) long long updateState;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bundleIdentifier;
- (id)externalVersionIdentifier;
- (long long)storeItemIdentifier;
- (id)plistDictionary;
- (id)releaseDate;
- (id)initWithPlistDictionary:(id)a0;
- (id)buyParams;
- (id)updateDictionary;
- (id)initWithUpdateDictionary:(id)a0;

@end
