@class NSString;

@interface NSFilePresenterOperationRecord : NSObject {
    NSString *reactorID;
}

@property (readonly) NSString *operationDescription;
@property (readonly) long long state;
@property (readonly, weak) id reactor;

+ (id)operationRecordWithDescription:(id)a0 reactor:(id)a1;

- (void)didEnd;
- (id)description;
- (void)dealloc;
- (id)_reactorQueue;
- (void).cxx_destruct;
- (void)didBegin;
- (void)willEnd;

@end
