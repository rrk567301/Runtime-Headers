@class NSString, NSDictionary;

@interface NotificationSender : NSObject

@property (readonly) NSString *name;
@property (retain) NSDictionary *userInfo;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
