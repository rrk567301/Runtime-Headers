@class FCPrivateChannelMembershipController;
@protocol FCPaidAccessCheckerType;

@interface FCIssueAccessChecker : FCMultiAccessChecker

@property (readonly, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)initWithPaidAccessChecker:(id)a0 privateChannelMembershipController:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAccessCheckers:(id)a0;

@end
