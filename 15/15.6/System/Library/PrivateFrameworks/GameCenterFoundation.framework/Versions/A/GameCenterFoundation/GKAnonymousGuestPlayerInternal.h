@class NSString, GKPlayerInternal;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {
    NSString *_guestIdentifier;
}

@property (retain, nonatomic) GKPlayerInternal *hostPlayerInternal;

+ (char)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)playerID;
- (id)guestIdentifier;
- (id)initWithHostPlayerInternal:(id)a0 guestIdentifier:(id)a1;
- (char)isGuestPlayer;
- (void)setGuestIdentifier:(id)a0;

@end
