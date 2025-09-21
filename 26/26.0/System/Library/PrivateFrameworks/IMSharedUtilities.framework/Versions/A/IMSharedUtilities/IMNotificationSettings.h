@class NSNumber, NSArray;

@interface IMNotificationSettings : NSObject

@property (class, nonatomic, readonly) BOOL isTextMessageExtensionEnabled;
@property (class, nonatomic, readonly) BOOL hideUnknownSenders;
@property (class, nonatomic, readonly) BOOL hidePromotionalMessages;
@property (class, nonatomic, readonly) BOOL hideTransactionalMessages;
@property (class, nonatomic, readonly) BOOL isFilterUnknownSendersEnabled;
@property (class, nonatomic, readonly) BOOL isSpamFilteringEnabled;
@property (class, nonatomic, readonly) BOOL timeSensitivePriorityEnabled;
@property (class, nonatomic, readonly) BOOL verificationCodesPriorityEnabled;
@property (class, nonatomic, readonly) BOOL personalPriorityEnabled;
@property (class, nonatomic, readonly) BOOL transactionsPriorityEnabled;
@property (class, nonatomic, readonly) BOOL promotionsPriorityEnabled;
@property (class, nonatomic, readonly) NSNumber *filteringKeySet;
@property (class, nonatomic, readonly) NSArray *excludedFilterActions;

- (id)init;
- (void).cxx_destruct;

@end
