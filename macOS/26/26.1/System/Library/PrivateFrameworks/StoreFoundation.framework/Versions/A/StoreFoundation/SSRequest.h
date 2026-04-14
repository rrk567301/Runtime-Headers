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

- (void)_finish;
- (BOOL)send;
- (BOOL)start;
- (void)cancel;
- (void)_failWithError:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)messageName;
- (id)init;
- (id)requestInfo;
- (BOOL)issueRequestForIdentifier:(id)a0 error:(id *)a1;
- (void)callback:(id)a0 connectionIsValid:(BOOL)a1;
- (void)handleDaemonExit;
- (BOOL)handleFinishResponse:(id)a0 error:(id *)a1;
- (id)requestQueueSelectorName;

@end
