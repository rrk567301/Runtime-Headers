@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *parameters;

+ (id)predicates;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)a0 states:(id)a1;
+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicateWithIdentifier:(id)a0;
+ (id)predicateForForegroundApp;
+ (BOOL)supportsSecureCoding;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForIsConnectedToCar;
+ (id)andPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)_predicateForChangeAtKeyPath:(id)a0 identifier:(id)a1;
+ (id)predicateForUserIsLeavingHome;
+ (id)predicateForNextAlarm;
+ (id)predicateForNetworkQualityFair;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)_predicateForKeyPath:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)notPredicateWithSubpredicate:(id)a0 identifier:(id)a1;
+ (id)orPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1 identifier:(id)a2;
+ (id)predicateForNetworkQualityBad;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPlistDictionary:(id)a0;
- (void).cxx_destruct;
- (id)plistDictionary;

@end
