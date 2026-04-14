@class NSMutableArray;

@interface GSKDebugNotificationManager : NSObject

@property (readonly, nonatomic) NSMutableArray *messages;

+ (id)sharedInstance;

- (void)notify:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeNotification:(id)a0;

@end
