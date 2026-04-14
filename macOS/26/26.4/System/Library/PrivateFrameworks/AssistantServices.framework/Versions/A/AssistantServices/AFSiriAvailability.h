@class NSString;

@interface AFSiriAvailability : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct AFSiriAllCapabilities { unsigned long long fullUODCapabilities; unsigned long long hybridCapabilities; unsigned long long saeCapabilities; } allCapabilities;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly, copy, nonatomic) NSString *siriLocale;
@property (readonly, nonatomic) unsigned long long desiredOrchestrationMode;
@property (readonly, nonatomic) unsigned long long unavailabilityReasons;

+ (id)fromDictionary:(id)a0;
+ (id)fromPreferences;

- (id)debugDescription;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithIsAvailable:(BOOL)a0 siriLocale:(id)a1 desiredOrchestrationMode:(unsigned long long)a2 unavailabilityReasons:(unsigned long long)a3;
- (id)initWithIsAvailable:(BOOL)a0 siriLocale:(id)a1 desiredOrchestrationMode:(unsigned long long)a2 unavailabilityReasons:(unsigned long long)a3 allCapabilities:(struct AFSiriAllCapabilities { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4;
- (BOOL)isEqualToAvailability:(id)a0;
- (id)missingDesiredCapabilitiesFor:(unsigned long long)a0;

@end
