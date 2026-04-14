@class NSManagedObjectContext, NSString;

@interface HMDHomeLocalOperationalCertificateDataStore : NSObject <HMFLogging>

@property (retain) NSManagedObjectContext *localMOC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)localOperationalCertDataStore;

- (void).cxx_destruct;
- (id)operationalCertDataForFabricID:(id)a0;
- (id)currentOperationalCertDataForFabric:(id)a0 withMOC:(id)a1 error:(id *)a2;
- (id)initWithMOC:(id)a0;
- (void)removeOperationalCertDataForFabricID:(id)a0;
- (void)saveOperationalCertData:(id)a0 forFabricID:(id)a1;

@end
