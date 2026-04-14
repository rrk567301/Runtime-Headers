@class NSArray;

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL completeDataPromise;
@property (nonatomic) BOOL createAsMobileBackup;
@property (readonly, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)init;
- (id)initWithApplicationMetadata:(id)a0;

@end
