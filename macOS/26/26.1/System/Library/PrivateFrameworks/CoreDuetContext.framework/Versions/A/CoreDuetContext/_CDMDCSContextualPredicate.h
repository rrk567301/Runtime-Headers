@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *parameters;

+ (id)predicateForForegroundApp;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)a0 states:(id)a1;
+ (BOOL)supportsSecureCoding;
+ (id)predicateForNetworkQualityFair;
+ (id)predicateForIsConnectedToCar;
+ (id)predicateForNextAlarm;
+ (id)_predicateForKeyPath:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicates;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)andPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForUserIsLeavingHome;
+ (id)orPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1 identifier:(id)a2;
+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicateWithIdentifier:(id)a0;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicateForNetworkQualityBad;
+ (id)_predicateForChangeAtKeyPath:(id)a0 identifier:(id)a1;
+ (id)notPredicateWithSubpredicate:(id)a0 identifier:(id)a1;
+ (id)predicateForBacklightOnStatus;

- (id)initWithPlistDictionary:(id)a0;
- (id)plistDictionary;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
