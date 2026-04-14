@class NSString;

@interface GKFamiliarPlayerInternal : GKPlayerInternal {
    NSString *_firstName;
    NSString *_lastName;
    NSString *_compositeName;
    BOOL allowReceivingFriendInvites;
    BOOL _allowReceivingFriendInvites;
}

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)setLastName:(id)a0;
- (void)setFirstName:(id)a0;
- (id)firstName;
- (id)lastName;
- (void).cxx_destruct;
- (id)compositeName;
- (void)setCompositeName:(id)a0;
- (void)setAllowReceivingFriendInvites:(BOOL)a0;
- (BOOL)allowReceivingFriendInvites;

@end
