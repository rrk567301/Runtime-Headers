@protocol NSObject;

@interface SearchUIScreenTimeRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> screentimeRequestStatusObserver;

+ (BOOL)supportsRowModel:(id)a0;

- (id)requestIdentifier;
- (unsigned long long)type;
- (void)setupSubscription;
- (void)dealloc;
- (void).cxx_destruct;
- (int)getRequestState;
- (void)updateWithRowModel:(id)a0;

@end
