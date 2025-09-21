@class NSString, NSMutableArray;

@interface LAAnalytics : NSObject

@property (weak, nonatomic) NSMutableArray *storage;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) char wasSent;
@property (nonatomic) char allowsMultipleCollections;

- (void).cxx_destruct;
- (void)collectIfNeeded;
- (id)initWithEventName:(id)a0;
- (id)logLevel;
- (void)_collect;
- (id)buildPayload;
- (id)instanceToReplaceWithWhenRemovedFromStorage;
- (void)persistInStorage:(id)a0;
- (void)removeFromStorage;
- (char)shouldCollect;

@end
