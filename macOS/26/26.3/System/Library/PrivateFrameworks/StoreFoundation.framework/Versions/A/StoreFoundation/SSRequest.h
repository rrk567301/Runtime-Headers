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
- (BOOL)start;
- (id)init;
- (void).cxx_destruct;
- (BOOL)send;
- (void)dealloc;
- (void)_failWithError:(id)a0;
- (id)messageName;
- (void)_finish;
- (id)requestInfo;
- (BOOL)issueRequestForIdentifier:(id)a0 error:(id *)a1;
- (void)callback:(id)a0 connectionIsValid:(BOOL)a1;
- (void)handleDaemonExit;
- (BOOL)handleFinishResponse:(id)a0 error:(id *)a1;
- (id)requestQueueSelectorName;

@end
