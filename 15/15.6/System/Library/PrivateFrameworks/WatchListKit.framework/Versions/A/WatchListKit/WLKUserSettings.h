@class NSString, NSDictionary, WLKPostPlayAutoPlaySettings;

@interface WLKUserSettings : NSObject <NSCopying>

@property (nonatomic) char initWithFavoritesSync;
@property (nonatomic) char initWithBrandSidebarSetting;
@property (nonatomic) char initWithPostPlayAutoPlaySetting;
@property (nonatomic) unsigned long long postPlayAutoPlayType;
@property (retain, nonatomic) WLKPostPlayAutoPlaySettings *postPlayAutoPlaySettings;
@property (readonly, nonatomic) char activeUser;
@property (readonly, nonatomic) char ageVerified;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, nonatomic) char favoritesSyncEnabled;
@property (readonly, nonatomic) char recommendedItemsAutoPlayEnabled;
@property (readonly, nonatomic) char nextEpisodeAutoPlayEnabled;
@property (readonly, nonatomic) char globalAccountConsent;
@property (readonly, copy, nonatomic) NSDictionary *brandSidebarSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_patchData;
- (id)_patchJSONDictionary;
- (id)initWithBrandId:(id)a0 shouldHide:(char)a1;
- (id)initWithFavoritesSyncEnabled:(char)a0;
- (id)initWithPostPlayAutoPlaySettings:(id)a0;
- (id)initWithTabId:(id)a0 shouldPin:(char)a1;

@end
