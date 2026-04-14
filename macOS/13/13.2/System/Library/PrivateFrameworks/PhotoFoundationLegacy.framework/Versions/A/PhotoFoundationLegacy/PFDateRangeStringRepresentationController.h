@class NSString, NSCalendar, NSTimer, NSDate;
@protocol PFDateRangeStringRepresentationControllerDelegate;

@interface PFDateRangeStringRepresentationController : NSObject <PFDateRangeSystemChangeReceiver> {
    id<PFDateRangeStringRepresentationControllerDelegate> _delegate;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimer *_expirationTimer;
    NSTimer *_updateTimer;
    NSString *_stringRepresentation;
    long long _autoUpdatingEnabledCount;
    long long _pendingConfigurationChangesRecursiveCount;
    unsigned char _listeningToTimeRelatedNotifications : 1;
    unsigned char _configurationChangesMade : 1;
}

@property (readonly, weak, nonatomic) id<PFDateRangeStringRepresentationControllerDelegate> delegate;
@property (readonly) NSCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)performUpdate:(id)a0;
+ (void)updateStringRepresentationInController:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)startDate;
- (id)endDate;
- (id)initWithDelegate:(id)a0;
- (void)setStartDate:(id)a0 endDate:(id)a1;
- (BOOL)isAutoUpdating;
- (void)_handleSystemDidChangeNotification:(id)a0;
- (void)_handleFiredTimer:(id)a0;
- (void)_cancelExpirationTimer;
- (BOOL)_prepareForExpirationAfterTimeInterval:(double)a0;
- (void)_prepareForExpirationOnDate:(id)a0;
- (void)_requestStringRepresentationUpdate;
- (void)_notifyDelegateDidUpdateStringRepresentation:(id)a0;
- (void)_updateStringRepresentation:(id)a0 startOfDisplayDateDay:(id)a1;
- (BOOL)_updateStartDate:(id)a0 endDate:(id)a1;
- (id)stringRepresentationForDisplayDate:(id)a0 startOfDisplayDateDay:(id)a1 expirationTimeInterval:(double *)a2;
- (id)stringRepresentationForRangeFromDate:(id)a0 toDate:(id)a1;
- (void)_enableAutoUpdating;
- (void)_disableAutoUpdating;
- (void)startAutoUpdating;
- (void)stopAutoUpdating;
- (void)performConfigurationChangeUsingBlock:(id /* block */)a0;

@end
