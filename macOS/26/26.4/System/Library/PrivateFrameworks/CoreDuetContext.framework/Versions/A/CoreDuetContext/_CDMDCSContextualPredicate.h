@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *parameters;

+ (BOOL)supportsSecureCoding;
+ (id)predicates;
+ (id)predicateForIsConnectedToCar;
+ (id)orPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForNetworkQualityFair;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)notPredicateWithSubpredicate:(id)a0 identifier:(id)a1;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)predicateForNextAlarm;
+ (id)_predicateForChangeAtKeyPath:(id)a0 identifier:(id)a1;
+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1 identifier:(id)a2;
+ (id)_predicateForKeyPath:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicateForForegroundApp;
+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)andPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)a0 states:(id)a1;
+ (id)predicateWithIdentifier:(id)a0;
+ (id)predicateForNetworkQualityBad;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicateForUserIsLeavingHome;

- (id)plistDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPlistDictionary:(id)a0;
- (id)initWithCoder:(id)a0;

@end
