@class NSSet;

@interface _EMBlockedSenderState : NSObject

@property (retain, nonatomic) NSSet *blockedSenders;
@property (nonatomic) char valid;

- (void).cxx_destruct;

@end
