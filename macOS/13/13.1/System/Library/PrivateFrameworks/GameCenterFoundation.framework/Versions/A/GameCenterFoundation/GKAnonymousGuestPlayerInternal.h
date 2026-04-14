@class NSString, GKPlayerInternal;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {
    NSString *_guestIdentifier;
}

@property (retain, nonatomic) GKPlayerInternal *hostPlayerInternal;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)playerID;
- (BOOL)isGuestPlayer;
- (id)guestIdentifier;
- (id)initWithHostPlayerInternal:(id)a0 guestIdentifier:(id)a1;
- (void)setGuestIdentifier:(id)a0;

@end
