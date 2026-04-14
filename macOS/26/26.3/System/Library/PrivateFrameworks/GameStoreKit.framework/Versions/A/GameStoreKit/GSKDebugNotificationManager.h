@class NSMutableArray;

@interface GSKDebugNotificationManager : NSObject

@property (readonly, nonatomic) NSMutableArray *messages;

+ (id)sharedInstance;

- (id)init;
- (void)notify:(id)a0;
- (void).cxx_destruct;
- (void)removeNotification:(id)a0;

@end
