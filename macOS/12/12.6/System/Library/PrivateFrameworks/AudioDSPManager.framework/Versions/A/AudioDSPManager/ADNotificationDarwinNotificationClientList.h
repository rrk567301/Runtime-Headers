@class NSString, NSMutableArray;

@interface ADNotificationDarwinNotificationClientList : NSObject {
    int mRegistrationToken;
}

@property (retain, nonatomic) NSString *notificationName;
@property (retain, nonatomic) NSMutableArray *clientList;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)signal;

@end
