@class NSString, BDSServiceProxy;

@interface BDSReadingDataMigrationManagerClient : NSObject <BDSReadingDataMigrationService>

@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)mergeMovedReadingHistoryDataWithCompletionHandler:(id /* block */)a0;

@end
