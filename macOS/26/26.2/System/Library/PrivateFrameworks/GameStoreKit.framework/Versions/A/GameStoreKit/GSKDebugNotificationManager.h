@class NSMutableArray;

@interface GSKDebugNotificationManager : NSObject

@property (readonly, nonatomic) NSMutableArray *messages;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)notify:(id)a0;
- (void)removeNotification:(id)a0;

@end
