@class BKIdentity;

@interface BKMatchResultInfo : NSObject

@property (retain, nonatomic) BKIdentity *identity;
@property (nonatomic) long long lockoutState;
@property (nonatomic) char unlocked;
@property (nonatomic) char credentialAdded;
@property (readonly, nonatomic) char resultIgnored;

- (void).cxx_destruct;
- (id)initWithServerIdentity:(id)a0 details:(id)a1 device:(id)a2;

@end
