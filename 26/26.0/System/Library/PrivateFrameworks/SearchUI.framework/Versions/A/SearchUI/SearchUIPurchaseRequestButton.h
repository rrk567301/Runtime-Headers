@protocol NSObject;

@interface SearchUIPurchaseRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> purchaseRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (id)requestIdentifier;
- (void)dealloc;
- (void)setupSubscription;
- (unsigned long long)type;
- (void).cxx_destruct;
- (int)getRequestState;
- (void)updateWithRowModel:(id)a0;

@end
