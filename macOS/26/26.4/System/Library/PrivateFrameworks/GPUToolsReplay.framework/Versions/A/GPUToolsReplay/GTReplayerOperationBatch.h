@class NSMutableArray;

@interface GTReplayerOperationBatch : NSObject {
    NSMutableArray *_operations;
}

@property (readonly, nonatomic) unsigned long long uuid;

- (id)initWithRequestID:(unsigned long long)a0;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (void)flush:(id)a0;
- (void)finish:(id)a0;

@end
