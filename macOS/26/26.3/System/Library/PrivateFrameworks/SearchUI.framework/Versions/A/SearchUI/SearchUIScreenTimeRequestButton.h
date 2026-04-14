@protocol NSObject;

@interface SearchUIScreenTimeRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> screentimeRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (unsigned long long)type;
- (id)requestIdentifier;
- (void)setupSubscription;
- (void).cxx_destruct;
- (void)dealloc;
- (int)getRequestState;
- (void)updateWithRowModel:(id)a0;

@end
