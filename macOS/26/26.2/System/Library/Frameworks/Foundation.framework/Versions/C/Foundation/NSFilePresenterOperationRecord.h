@class NSString;

@interface NSFilePresenterOperationRecord : NSObject {
    NSString *reactorID;
}

@property (readonly) NSString *operationDescription;
@property (readonly) long long state;
@property (readonly, weak) id reactor;

+ (id)operationRecordWithDescription:(id)a0 reactor:(id)a1;

- (id)_reactorQueue;
- (void)didEnd;
- (void).cxx_destruct;
- (id)description;
- (void)willEnd;
- (void)didBegin;
- (void)dealloc;

@end
