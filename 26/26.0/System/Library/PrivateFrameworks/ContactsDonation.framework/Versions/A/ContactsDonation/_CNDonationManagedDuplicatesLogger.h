@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationManagedDuplicatesLogger : NSObject <CNDonationManagedDuplicatesLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSkipRefreshDuplicates:(id)a0;
- (void)managedDuplicateServiceCriteria:(id)a0;
- (id)init;
- (void)managedDuplicateServiceCheckingIn;
- (void)willRefreshDuplicates;
- (void)didFailRefreshingDuplicates:(id)a0;
- (void)didRefreshDuplicates;
- (void).cxx_destruct;

@end
