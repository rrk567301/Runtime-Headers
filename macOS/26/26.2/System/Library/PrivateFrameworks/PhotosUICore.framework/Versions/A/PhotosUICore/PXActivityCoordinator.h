@class NSString, NSMutableArray;

@interface PXActivityCoordinator : NSObject {
    NSMutableArray *_records;
    NSString *_activityName;
}

+ (id)coordinatorForActivity:(id)a0;

- (void)_update;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)unregisterItem:(id)a0;
- (id)initWithActivityName:(id)a0;
- (void)registerItem:(id)a0;

@end
