@class NSString, NSMutableDictionary, NSDictionary, NSError;

@interface CPSStatusChangeRequest : NSObject

@property (retain) NSString *identifier;
@property (retain) NSMutableDictionary *stateChangeMap;
@property long long stateChangeRequestStatus;
@property (retain) NSError *stateChangeError;
@property (retain) NSMutableDictionary *preferenceChangeMap;
@property long long preferenceChangeRequestStatus;
@property (retain) NSError *preferenceChangeError;
@property (retain) NSDictionary *requestOptions;

- (id)allErrors;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setPreferencesValue:(id)a0 forKey:(id)a1 serviceIdentifier:(id)a2;
- (BOOL)hasServicePreferenceChanges;
- (BOOL)hasServiceStateChanges;
- (void)setTargetState:(long long)a0 forServiceIdentifier:(id)a1;
- (long long)targetStateForServiceIdentifier:(id)a0;

@end
