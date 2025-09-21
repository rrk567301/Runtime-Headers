@class NSArray;

@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions

@property (nonatomic) char completeDataPromise;
@property (nonatomic) char createsPlaceholders;
@property (nonatomic) char createAsMobileBackup;
@property (nonatomic) char skipCoordinatorCompletion;
@property (nonatomic) char restoreApplicationData;
@property (readonly, nonatomic) NSArray *items;

- (id)init;
- (void).cxx_destruct;
- (id)initWithApplicationMetadata:(id)a0;

@end
