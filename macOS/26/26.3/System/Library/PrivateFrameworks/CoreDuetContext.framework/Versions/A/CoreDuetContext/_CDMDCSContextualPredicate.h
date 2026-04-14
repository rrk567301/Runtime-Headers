@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *parameters;

+ (BOOL)supportsSecureCoding;
+ (id)predicateWithIdentifier:(id)a0;
+ (id)_predicateForKeyPath:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicates;
+ (id)predicateForIsConnectedToCar;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)andPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicateForNetworkQualityFair;
+ (id)_predicateForChangeAtKeyPath:(id)a0 identifier:(id)a1;
+ (id)predicateForNetworkQualityBad;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)a0 states:(id)a1;
+ (id)notPredicateWithSubpredicate:(id)a0 identifier:(id)a1;
+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1 identifier:(id)a2;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForUserIsLeavingHome;
+ (id)orPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForNextAlarm;
+ (id)predicateForForegroundApp;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1 identifier:(id)a2;

- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;

@end
