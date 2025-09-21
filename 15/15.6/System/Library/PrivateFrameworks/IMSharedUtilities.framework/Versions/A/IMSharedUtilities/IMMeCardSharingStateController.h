@interface IMMeCardSharingStateController : NSObject

@property (nonatomic) char sharingEnabled;
@property (nonatomic) unsigned long long sharingAudience;
@property (nonatomic) unsigned long long nameFormat;
@property (nonatomic) char nameForkedFromMeCard;
@property (nonatomic) char imageForkedFromMeCard;

+ (id)sharedInstance;

- (id)init;
- (void)_incrementSharingVersion;
- (void)_migrateMeCardDomains;
- (void)_syncPreferenceDidChange;
- (void)postNameFormatChangedNotification;
- (char)wasSharingEverEnabled;

@end
