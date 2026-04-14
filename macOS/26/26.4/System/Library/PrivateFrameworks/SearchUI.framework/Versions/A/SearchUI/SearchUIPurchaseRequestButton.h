@protocol NSObject;

@interface SearchUIPurchaseRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> purchaseRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (void).cxx_destruct;
- (void)setupSubscription;
- (unsigned long long)type;
- (id)requestIdentifier;
- (void)dealloc;
- (int)getRequestState;
- (void)updateWithRowModel:(id)a0;

@end
