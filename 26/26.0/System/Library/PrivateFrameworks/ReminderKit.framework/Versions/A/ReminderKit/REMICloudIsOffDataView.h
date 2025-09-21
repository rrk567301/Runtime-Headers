@class REMStore;

@interface REMICloudIsOffDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)fetchHasAnyDirtyCloudObjectInAccount:(id)a0 error:(id *)a1;
- (id)fetchICloudIsOffCloudConfigurationPropertiesWithError:(id *)a0;

@end
