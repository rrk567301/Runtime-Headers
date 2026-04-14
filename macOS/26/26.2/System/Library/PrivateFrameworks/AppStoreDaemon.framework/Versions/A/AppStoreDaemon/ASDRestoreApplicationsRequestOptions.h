@class NSArray;

@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL completeDataPromise;
@property (nonatomic) BOOL createsPlaceholders;
@property (nonatomic) BOOL createAsMobileBackup;
@property (nonatomic) BOOL skipCoordinatorCompletion;
@property (nonatomic) BOOL restoreApplicationData;
@property (readonly, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)init;
- (id)initWithApplicationMetadata:(id)a0;

@end
