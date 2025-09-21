@class NSString;

@interface NSFilePresenterOperationRecord : NSObject {
    NSString *reactorID;
}

@property (readonly) NSString *operationDescription;
@property (readonly) long long state;
@property (readonly, weak) id reactor;

+ (id)operationRecordWithDescription:(id)a0 reactor:(id)a1;

- (void)dealloc;
- (void)willEnd;
- (void)didEnd;
- (id)description;
- (id)_reactorQueue;
- (void)didBegin;
- (void).cxx_destruct;

@end
