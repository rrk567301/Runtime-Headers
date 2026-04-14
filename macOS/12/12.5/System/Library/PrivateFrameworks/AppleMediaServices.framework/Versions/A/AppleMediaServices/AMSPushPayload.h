@class NSString, NSDictionary, ACAccount, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface AMSPushPayload : NSObject {
    ACAccount *_account;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly) ACAccount *account;
@property (readonly) NSNumber *accountIdentifier;
@property (readonly) NSString *actionType;
@property (readonly) long long alertType;
@property (readonly) NSDictionary *aps;
@property (readonly) NSString *clientIdentifier;
@property (readonly) NSString *logKey;
@property (readonly) NSDictionary *payload;
@property (readonly) long long priority;
@property (readonly) NSString *URLString;

+ (id)actionTypeFromPayload:(id)a0;

- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0;

@end
