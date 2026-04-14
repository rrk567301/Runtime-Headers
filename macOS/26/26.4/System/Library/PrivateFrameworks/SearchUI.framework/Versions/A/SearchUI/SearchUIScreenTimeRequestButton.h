@protocol NSObject;

@interface SearchUIScreenTimeRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> screentimeRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (void).cxx_destruct;
- (void)setupSubscription;
- (unsigned long long)type;
- (id)requestIdentifier;
- (void)dealloc;
- (int)getRequestState;
- (void)updateWithRowModel:(id)a0;

@end
