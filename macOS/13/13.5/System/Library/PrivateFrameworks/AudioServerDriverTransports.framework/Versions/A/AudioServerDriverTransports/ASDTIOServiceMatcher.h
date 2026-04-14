@class NSString, NSObject;
@protocol OS_dispatch_queue, ASDTIOServiceMatchDelegate;

@interface ASDTIOServiceMatcher : NSObject {
    struct IONotificationPort { } *_notificationPort;
    unsigned int _matchingNotification;
}

@property (weak, nonatomic) id<ASDTIOServiceMatchDelegate> delegate;
@property (retain, nonatomic) NSString *ioServiceClassName;
@property (nonatomic) const char *ioServiceClassNameCStr;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *matcherQueue;

- (id)init;
- (void).cxx_destruct;
- (id)initForIOServiceWithClassName:(id)a0 withDelegate:(id)a1;

@end
