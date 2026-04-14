@class NSMutableArray;

@interface GTReplayerOperationBatch : NSObject {
    NSMutableArray *_operations;
}

@property (readonly, nonatomic) unsigned long long uuid;

- (void)addOperation:(id)a0;
- (void)finish:(id)a0;
- (void)flush:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequestID:(unsigned long long)a0;

@end
