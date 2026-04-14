@class DNDConfiguration, NSArray, NSString, DNDMode, NSDate;

@interface DNDModeConfiguration : NSObject <DNDDiffBuilding, NSCopying, NSMutableCopying, NSSecureCoding> {
    BOOL _hasSecureData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) DNDMode *mode;
@property (readonly, copy) DNDConfiguration *configuration;
@property (readonly, copy) NSArray *triggers;
@property (readonly) unsigned long long impactsAvailability;
@property (readonly) unsigned long long dimsLockScreen;
@property (readonly) unsigned long long allowSmartEntry;
@property (readonly, copy) NSDate *lastModified;
@property (readonly, copy) NSDate *created;
@property (readonly, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated;
@property (readonly, getter=isSupportedConfiguration) BOOL supportedConfiguration;
@property (readonly) long long compatibilityVersion;
@property (readonly) long long resolvedCompatibilityVersion;
@property (readonly) long long rawResolvedCompatibilityVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultModeConfiguration;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (void)diffAgainstObject:(id)a0 usingDiffBuilder:(id)a1 withDescription:(id)a2;
- (BOOL)hasSecureData;
- (id)initWithMode:(id)a0 configuration:(id)a1 triggers:(id)a2;
- (id)initWithMode:(id)a0 configuration:(id)a1 triggers:(id)a2 impactsAvailability:(unsigned long long)a3 dimsLockScreen:(unsigned long long)a4 created:(id)a5 lastModified:(id)a6 automaticallyGenerated:(BOOL)a7 compatibilityVersion:(long long)a8;
- (id)_initWithModeConfiguration:(id)a0;
- (unsigned long long)allowSmartEntry;
- (id)mergeDecision:(id)a0 reason:(id)a1;
- (id)mergeWithRemoteModeConfiguration:(id)a0;
- (void)log:(id)a0 withMessage:(id)a1;
- (BOOL)_containsSecureTriggers:(id)a0;
- (long long)_maxTriggerCompatibilityVersion:(id)a0;

@end
