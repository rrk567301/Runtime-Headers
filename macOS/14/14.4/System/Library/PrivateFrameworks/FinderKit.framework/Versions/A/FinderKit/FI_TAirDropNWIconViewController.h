@class CNContact, NSString, CNAvatarViewController, CNAvatarCache;

@interface FI_TAirDropNWIconViewController : FI_TIconViewController {
    CNAvatarViewController *_avatarViewController;
}

@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNAvatarCache *sharedAvatarCache;
@property (retain, nonatomic) NSString *endpointIdentifier;

+ (id)itemIdentifier;
+ (id)nib;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)nibName;
- (void)setHighlightState:(long long)a0;
- (id)airDropIconView;
- (id)airDropIconViewNoLoad;

@end
