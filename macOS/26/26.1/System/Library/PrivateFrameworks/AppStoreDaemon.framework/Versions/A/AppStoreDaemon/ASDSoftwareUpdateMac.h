@class NSArray, NSDictionary, NSDate;

@interface ASDSoftwareUpdateMac : ASDSoftwareUpdate

@property (copy, nonatomic) NSArray *blockedBy;
@property (copy, nonatomic) NSDate *installDate;
@property (copy, nonatomic) NSDictionary *metrics;
@property (nonatomic, getter=isDownloaded) BOOL downloaded;
@property (nonatomic, getter=isPerDevice) BOOL perDevice;
@property (nonatomic, getter=isProfileValidated) BOOL profileValidated;
@property (copy, nonatomic) NSDictionary *rawUpdateDictionary;
@property (nonatomic) long long rawUpdateState;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) long long updateState;

+ (BOOL)supportsSecureCoding;

- (id)releaseDate;
- (id)initWithPlistDictionary:(id)a0;
- (id)plistDictionary;
- (long long)storeItemIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundleIdentifier;
- (id)externalVersionIdentifier;
- (id)buyParams;
- (id)updateDictionary;
- (id)initWithUpdateDictionary:(id)a0;

@end
