@class NSString, NSValue;
@protocol SSRequestDelegate;

@interface SSRequest : NSObject {
    long long _state;
    NSValue *_callbackID;
}

@property (weak, nonatomic) id<SSRequestDelegate> delegate;
@property (readonly) NSString *requestQueueSelectorName;
@property (readonly) NSString *identifier;

+ (id)_newIdentifier;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)start;
- (void)cancel;
- (id)messageName;
- (char)send;
- (void)_failWithError:(id)a0;
- (void)_finish;
- (id)requestInfo;
- (char)issueRequestForIdentifier:(id)a0 error:(id *)a1;
- (void)callback:(id)a0 connectionIsValid:(char)a1;
- (void)handleDaemonExit;
- (char)handleFinishResponse:(id)a0 error:(id *)a1;
- (id)requestQueueSelectorName;

@end
