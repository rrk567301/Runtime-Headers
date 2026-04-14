@class DNDMutableSenderConfiguration, NSSet, NSDictionary, NSMutableDictionary, NSMutableSet, DNDBypassSettings;

@interface DNDConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long suppressionType;
@property (readonly, nonatomic) unsigned long long minimumBreakthroughUrgency;
@property (readonly, nonatomic) unsigned long long hideApplicationBadges;
@property (readonly, getter=isSupportedConfiguration) BOOL supportedConfiguration;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly, nonatomic) long long rawCompatibilityVersion;
@property (readonly, nonatomic) unsigned long long applicationConfigurationType;
@property (readonly, copy, nonatomic) NSSet *applicationsWithExceptions;
@property (readonly, nonatomic) unsigned long long threadConfigurationType;
@property (readonly, copy, nonatomic) NSDictionary *threadsWithExceptions;
@property (readonly, nonatomic) unsigned long long senderConfigurationType;
@property (readonly, copy, nonatomic) NSSet *contactsWithExceptions;
@property (readonly, copy, nonatomic) DNDBypassSettings *phoneCallBypassSettings;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSMutableDictionary *allowedApplicationIdentifiers;
@property (readonly, copy, nonatomic) NSMutableSet *deniedApplicationIdentifiers;
@property (readonly, copy, nonatomic) DNDMutableSenderConfiguration *senderConfiguration;

+ (unsigned long long)defaultConfigurationType;
+ (unsigned long long)defaultSuppressionType;
+ (unsigned long long)defaultMinimumBreakthroughUrgency;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)_descriptionForRedacted:(BOOL)a0;
- (void)diffAgainstObject:(id)a0 usingDiffBuilder:(id)a1 withDescription:(id)a2;
- (id)_initWithConfigurationType:(unsigned long long)a0;
- (id)_initWithSuppressionType:(unsigned long long)a0 allowedApplicationIdentifiers:(id)a1 deniedApplicationIdentifiers:(id)a2 senderConfiguration:(id)a3 minimumBreakthroughUrgency:(unsigned long long)a4 hideApplicationBadges:(unsigned long long)a5 compatibilityVersion:(long long)a6 applicationConfigurationType:(unsigned long long)a7 senderConfigurationType:(unsigned long long)a8;
- (id)allowedApplications;
- (id)deniedApplications;
- (void)log:(id)a0 withPrefix:(id)a1;
- (unsigned long long)exceptionForApplication:(id)a0;
- (unsigned long long)exceptionForApplication:(id)a0 thread:(id)a1;
- (unsigned long long)exceptionForApplicationIdentifier:(id)a0;
- (unsigned long long)exceptionForApplicationIdentifier:(id)a0 thread:(id)a1;
- (unsigned long long)_exceptionForApplicationIdentifier:(id)a0 thread:(id)a1;
- (unsigned long long)exceptionForContact:(id)a0;
- (unsigned long long)exceptionForContactHandle:(id)a0;
- (unsigned long long)threadConfigurationType;

@end
