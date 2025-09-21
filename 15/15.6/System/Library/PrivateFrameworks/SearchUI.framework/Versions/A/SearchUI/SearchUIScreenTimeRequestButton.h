@protocol NSObject;

@interface SearchUIScreenTimeRequestButton : SearchUIRequestButton

@property (retain, nonatomic) id<NSObject> screentimeRequestStatusObserver;

+ (char)supportsRowModel:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)requestIdentifier;
- (void)setupSubscription;
- (int)getRequestState;
- (void)updateWithRowModel:(id)a0;

@end
