@class NSString, NSObject;
@protocol OS_os_transaction, NSObject;

@interface CKBackgroundTask : NSObject <CKPropertiesDescription> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_transaction> *_transaction;
    id<NSObject> _activity;
}

@property (readonly, copy) NSString *identifier;
@property (readonly) long long state;
@property (readonly) long long priority;
@property (readonly) double interval;
@property (readonly) BOOL requiresNetworkConnectivity;
@property (readonly, getter=isDataBudgeted) BOOL dataBudgeted;
@property (readonly) BOOL requiresInexpensiveNetworkConnectivity;
@property (readonly) BOOL requiresSignificantUserInactivity;
@property (copy) id /* block */ expirationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)CKShortDescriptionRedact:(BOOL)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void)complete;
- (void)start;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)_useExpiringActivity;
- (BOOL)expiredWithRetryAfter:(double)a0 error:(id *)a1;

@end
