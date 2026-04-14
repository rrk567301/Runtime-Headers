@class NSArray, NSString, CalDateRange;
@protocol CalFreeBusyCacheDelegate;

@interface CalFreeBusyOperationInfo : NSObject

@property (readonly) NSArray *addresses;
@property (readonly) NSString *eventSharedUid;
@property (readonly) CalDateRange *timeRange;
@property BOOL cancelled;
@property (weak, nonatomic) id<CalFreeBusyCacheDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithAddresses:(id)a0 forEventSharedUid:(id)a1 inTimeRange:(id)a2 withDelegate:(id)a3;
- (BOOL)matchesSharedUid:(id)a0 andTimeRange:(id)a1;
- (BOOL)containsAddress:(id)a0;
- (void)notifyFreeBusyOperationWithResponseInfo:(id)a0;

@end
