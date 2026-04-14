@class FCPrivateChannelMembershipController;
@protocol FCPaidAccessCheckerType;

@interface FCArticleAccessChecker : FCMultiAccessChecker

@property (readonly, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)initWithPaidAccessChecker:(id)a0 privateChannelMembershipController:(id)a1;
- (id)init;
- (id)initWithAccessCheckers:(id)a0;
- (void).cxx_destruct;

@end
