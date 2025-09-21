@interface WDSessionNotificationHandler : NSObject

@property (nonatomic) unsigned long long registrationID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ block;

+ (id)handlerForNotification:(unsigned long long)a0 withBlock:(id /* block */)a1;

- (void).cxx_destruct;

@end
