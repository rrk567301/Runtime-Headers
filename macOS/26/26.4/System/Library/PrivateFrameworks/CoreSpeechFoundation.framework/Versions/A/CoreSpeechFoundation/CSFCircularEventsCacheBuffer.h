@class NSMutableArray;

@interface CSFCircularEventsCacheBuffer : NSObject {
    long long _lastEventIndex;
}

@property (readonly, nonatomic) NSMutableArray *eventsArray;

- (void).cxx_destruct;
- (id)init;
- (void)clearBuffer;
- (void)addEventToCacheBuffer:(id)a0;

@end
