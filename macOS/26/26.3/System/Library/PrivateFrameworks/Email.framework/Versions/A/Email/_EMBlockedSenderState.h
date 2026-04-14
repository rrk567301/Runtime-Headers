@class EAEmailAddressSet;

@interface _EMBlockedSenderState : NSObject

@property (retain, nonatomic) EAEmailAddressSet *blockedSenders;
@property (nonatomic) BOOL valid;

- (void).cxx_destruct;

@end
