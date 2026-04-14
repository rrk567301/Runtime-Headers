@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationManagedDuplicatesLogger : NSObject <CNDonationManagedDuplicatesLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRefreshDuplicates;
- (id)init;
- (void)managedDuplicateServiceCriteria:(id)a0;
- (void)willRefreshDuplicates;
- (void).cxx_destruct;
- (void)didSkipRefreshDuplicates:(id)a0;
- (void)managedDuplicateServiceCheckingIn;
- (void)didFailRefreshingDuplicates:(id)a0;

@end
