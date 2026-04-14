@protocol NSObject;

@interface SearchUIPurchaseRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> purchaseRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (id)requestIdentifier;
- (unsigned long long)type;
- (void).cxx_destruct;
- (void)setupSubscription;
- (void)dealloc;
- (int)getRequestState;
- (void)updateWithRowModel:(id)a0;

@end
