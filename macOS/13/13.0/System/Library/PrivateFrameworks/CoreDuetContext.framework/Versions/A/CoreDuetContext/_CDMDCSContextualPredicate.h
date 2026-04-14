@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *parameters;

+ (BOOL)supportsSecureCoding;
+ (id)predicates;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)a0 states:(id)a1;
+ (id)_predicateForChangeAtKeyPath:(id)a0 identifier:(id)a1;
+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1 identifier:(id)a2;
+ (id)_predicateForKeyPath:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)notPredicateWithSubpredicate:(id)a0 identifier:(id)a1;
+ (id)andPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)orPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForUserIsLeavingHome;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)predicateForNetworkQualityFair;
+ (id)predicateForNetworkQualityBad;
+ (id)predicateForIsConnectedToCar;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicateForNextAlarm;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForForegroundApp;
+ (id)predicateWithIdentifier:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;

@end
