@class NSMutableDictionary;

@interface VUIUpNextRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingCanonicalIDOperationDictionary;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (void)sendRequestForCanonicalID:(id)a0 action:(unsigned long long)a1 confirmationShouldWaitCompletion:(BOOL)a2;
- (void)_displayConfirmationForAction:(unsigned long long)a0;
- (void)_postUpNextRequestFinishedNotificationForCanonicalId:(id)a0 userInfo:(id)a1;

@end
