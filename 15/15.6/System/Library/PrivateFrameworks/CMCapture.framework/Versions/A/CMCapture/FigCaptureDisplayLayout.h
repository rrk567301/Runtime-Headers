@class NSArray, NSDate;

@interface FigCaptureDisplayLayout : NSObject

@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) long long displayType;
@property (retain, nonatomic) NSArray *foregroundApps;
@property (retain, nonatomic) NSArray *obscuredApps;
@property (retain, nonatomic) NSArray *transitioningApps;
@property (retain, nonatomic) NSArray *pipApps;
@property (nonatomic, getter=isOnHomeScreen) char onHomeScreen;
@property (nonatomic, getter=isOnLockScreen) char onLockScreen;
@property (nonatomic, getter=isSiriVisible) char siriVisible;
@property (nonatomic, getter=isPaymentServiceVisible) char paymentServiceVisible;

+ (void)initialize;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)_init;

@end
