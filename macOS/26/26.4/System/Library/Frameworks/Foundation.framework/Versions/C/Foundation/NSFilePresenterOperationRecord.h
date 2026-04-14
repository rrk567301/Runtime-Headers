@class NSString;

@interface NSFilePresenterOperationRecord : NSObject {
    NSString *reactorID;
}

@property (readonly) NSString *operationDescription;
@property (readonly) long long state;
@property (readonly, weak) id reactor;

+ (id)operationRecordWithDescription:(id)a0 reactor:(id)a1;

- (void).cxx_destruct;
- (void)didEnd;
- (id)_reactorQueue;
- (void)didBegin;
- (id)description;
- (void)dealloc;
- (void)willEnd;

@end
