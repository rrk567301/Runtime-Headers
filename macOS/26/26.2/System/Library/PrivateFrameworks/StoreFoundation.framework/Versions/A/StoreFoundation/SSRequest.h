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

- (void)cancel;
- (void)_failWithError:(id)a0;
- (BOOL)send;
- (void)_finish;
- (void).cxx_destruct;
- (BOOL)start;
- (id)messageName;
- (id)init;
- (void)dealloc;
- (id)requestInfo;
- (BOOL)issueRequestForIdentifier:(id)a0 error:(id *)a1;
- (void)callback:(id)a0 connectionIsValid:(BOOL)a1;
- (void)handleDaemonExit;
- (BOOL)handleFinishResponse:(id)a0 error:(id *)a1;
- (id)requestQueueSelectorName;

@end
