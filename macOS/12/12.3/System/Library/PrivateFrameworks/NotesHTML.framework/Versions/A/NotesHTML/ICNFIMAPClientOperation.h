@class NSString, NSMutableString, ICNFIMAPGateway;

@interface ICNFIMAPClientOperation : NSOperation

@property (readonly, copy) NSString *commandTypeString;
@property (readonly) BOOL alwaysAllowToComplete;
@property (readonly) BOOL completedSuccessfully;
@property (readonly) BOOL shouldSendAgainOnError;
@property (readonly) long long minRequiredConnectionState;
@property (readonly) long long maxAllowedConnectionState;
@property (readonly) long long composition;
@property (readonly) BOOL isWaitingToStart;
@property (readonly, copy) NSString *activityString;
@property (readonly, copy) NSString *detailsString;
@property (readonly, copy, nonatomic) NSString *shallowDescription;
@property (readonly, copy, nonatomic) NSMutableString *simpleDescriptionString;
@property (retain) ICNFIMAPGateway *gateway;
@property long long completionState;

+ (id)newIMAPQuotedString:(id)a0;
+ (id)IMAPNeedsLiteralCharacterSet;
+ (id)_IMAPNeedsQuoteCharacterSet;
+ (id)newIMAPStringForMailboxName:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)main;
- (void)increasePriority;
- (void)operationDidFinish;
- (BOOL)executeOnConnection:(id)a0;
- (void)cleanupAfterCompletion;

@end
