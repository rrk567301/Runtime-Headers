@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *parameters;

+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (BOOL)supportsSecureCoding;
+ (id)predicates;
+ (id)_predicateForKeyPath:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicateForIsConnectedToCar;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)orPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)andPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicateForNextAlarm;
+ (id)predicateForNetworkQualityFair;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)a0 states:(id)a1;
+ (id)notPredicateWithSubpredicate:(id)a0 identifier:(id)a1;
+ (id)predicateForForegroundApp;
+ (id)predicateForUserIsLeavingHome;
+ (id)predicateForNetworkQualityBad;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)predicateWithIdentifier:(id)a0;
+ (id)_predicateForChangeAtKeyPath:(id)a0 identifier:(id)a1;
+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1 identifier:(id)a2;

- (id)plistDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (id)initWithPlistDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
