@class NSArray, NSDictionary, NSString, NSDate, NSNumber;

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long deviceFamilies;
@property (nonatomic, getter=isIOSBinaryMacOSCompatible) char iOSBinaryMacOSCompatible;
@property (copy, nonatomic) NSArray *blockedBy;
@property (copy, nonatomic) NSDate *installDate;
@property (copy, nonatomic) NSDictionary *metrics;
@property (nonatomic, getter=isDownloaded) char downloaded;
@property (nonatomic, getter=isPerDevice) char perDevice;
@property (nonatomic, getter=isProfileValidated) char profileValidated;
@property (nonatomic) long long rawUpdateState;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) long long updateState;
@property (nonatomic) char autoUpdateEnabled;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *buyParams;
@property (readonly, nonatomic) NSNumber *externalVersionIdentifier;
@property (readonly, nonatomic, getter=isArcade) char arcade;
@property (nonatomic, getter=packageType) long long packageType;
@property (readonly, nonatomic) long long parentalControlsRank;
@property (readonly, nonatomic) NSDictionary *rawUpdateDictionary;
@property (readonly, nonatomic) char requiresRosetta;
@property (readonly, nonatomic) char runsOnIntel;
@property (readonly, nonatomic) char runsOnAppleSilicon;
@property (readonly, nonatomic) long long storeItemIdentifier;
@property (readonly, nonatomic) NSDictionary *updateDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)releaseDate;
- (id)initWithUpdateDictionary:(id)a0;

@end
