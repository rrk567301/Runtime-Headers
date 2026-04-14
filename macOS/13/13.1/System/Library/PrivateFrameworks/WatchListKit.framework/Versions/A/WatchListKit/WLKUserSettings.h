@class NSString;

@interface WLKUserSettings : NSObject

@property (readonly, nonatomic) BOOL activeUser;
@property (readonly, nonatomic) BOOL ageVerified;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, nonatomic) BOOL favoritesSyncEnabled;
@property (readonly, nonatomic) BOOL globalAccountConsent;

- (id)_data;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_jsonDictionary;
- (id)initWithFavoritesSyncEnabled:(BOOL)a0;

@end
