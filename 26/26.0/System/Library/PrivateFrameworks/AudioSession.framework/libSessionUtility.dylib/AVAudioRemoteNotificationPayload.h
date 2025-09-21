@class NSString, NSArray, NSDictionary;

@interface AVAudioRemoteNotificationPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *notification;
@property (copy, nonatomic) NSArray *subscribedDelegates;
@property (copy, nonatomic) NSDictionary *delegatePayload;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotification:(id)a0 forSubscribers:(id)a1 withPayload:(id)a2;

@end
