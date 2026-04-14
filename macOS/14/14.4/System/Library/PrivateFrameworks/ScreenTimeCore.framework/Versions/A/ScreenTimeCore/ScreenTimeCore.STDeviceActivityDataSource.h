@class NSDictionary, NSArray;

@interface ScreenTimeCore.STDeviceActivityDataSource : NSObject

@property (class, nonatomic, readonly) NSDictionary *deviceIdentifiersByUserAltDSID;
@property (class, nonatomic, readonly) NSDictionary *deviceIdentifierByCoreDuetIdentifier;
@property (class, nonatomic, readonly) NSArray *allLocallyUsedBundleIdentifiers;

+ (void)setGenesisDate:(id)a0;
+ (void)downloadRemoteData;
+ (id)lastUpdatedDateFor:(id)a0;
+ (void)refreshAndUploadLocalDataSinceDate:(id)a0 completionHandler:(id /* block */)a1;
+ (id)totalWeeklyUsageDuringDateInterval:(id)a0 userAltDSID:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;

@end
