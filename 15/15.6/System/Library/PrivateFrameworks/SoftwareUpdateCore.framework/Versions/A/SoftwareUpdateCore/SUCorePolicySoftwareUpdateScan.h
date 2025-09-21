@class NSString, NSDictionary;

@interface SUCorePolicySoftwareUpdateScan : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property long long specifiedFields;
@property (nonatomic) char allowsCellular;
@property (nonatomic) char discretionary;
@property (nonatomic) char disableUI;
@property (nonatomic) char requiresPowerPluggedIn;
@property (nonatomic) char restrictToIncremental;
@property (nonatomic) char restrictToFull;
@property (nonatomic) char allowSameVersion;
@property (nonatomic) int downloadTimeoutSecs;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *rampingScanType;
@property (nonatomic) long long scanUpdateType;
@property (nonatomic) char liveServerCatalogOnly;
@property (retain, nonatomic) NSDictionary *additionalServerParams;
@property (retain, nonatomic) NSDictionary *additionalOptions;

+ (id)nameForScanUpdateType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (char)shouldScanForMajorUpdates;
- (char)shouldScanForMinorUpdates;
- (void)backToDefaults;

@end
