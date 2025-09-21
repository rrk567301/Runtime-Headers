@class NSNumber;

@interface STRestrictions : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    BOOL _isEnabled;
    long long _allowInstallingApps;
    long long _allowDeletingApps;
    long long _allowInAppPurchases;
    long long _allowMusicVideos;
    long long _allowMusicProfiles;
    NSNumber *_tvShowsRating;
    NSNumber *_moviesRating;
    NSNumber *_appsRating;
    long long _allowExplicitBooks;
    long long _allowExplicitMediaContent;
    unsigned long long _webFilterState;
    long long _webContentFilterState;
    long long _allowPrivateMessaging;
    long long _allowAvatarAndNicknameChanges;
    long long _allowProfilePrivacyChanges;
    long long _allowWebContentSearchInSiri;
    long long _allowExplicitLanguageInSiri;
    long long _allowExternalIntelligenceIntegrations;
    long long _allowWritingTools;
    long long _allowImageCreation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) long long allowInstallingApps;
@property (readonly, nonatomic) long long allowDeletingApps;
@property (readonly, nonatomic) long long allowInAppPurchases;
@property (readonly, nonatomic) long long allowMusicVideos;
@property (readonly, nonatomic) long long allowMusicProfiles;
@property (readonly, nonatomic) NSNumber *tvShowsRating;
@property (readonly, nonatomic) NSNumber *moviesRating;
@property (readonly, nonatomic) NSNumber *appsRating;
@property (readonly, nonatomic) long long allowExplicitBooks;
@property (readonly, nonatomic) long long allowExplicitMediaContent;
@property (readonly, nonatomic) unsigned long long webFilterState;
@property (readonly, nonatomic) long long webContentFilterState;
@property (readonly, nonatomic) long long allowAvatarAndNicknameChanges;
@property (readonly, nonatomic) long long allowPrivateMessaging;
@property (readonly, nonatomic) long long allowProfilePrivacyChanges;
@property (readonly, nonatomic) long long allowWebContentSearchInSiri;
@property (readonly, nonatomic) long long allowExplicitLanguageInSiri;
@property (readonly, nonatomic) long long allowExternalIntelligenceIntegrations;
@property (readonly, nonatomic) long long allowWritingTools;
@property (readonly, nonatomic) long long allowImageCreation;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)new;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithCopyOf:(id)a0;
- (id)_initWithIsEnabled:(BOOL)a0;
- (id)restrictionsMutableCopy;

@end
