@class NSArray;

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions

@property (nonatomic) char completeDataPromise;
@property (nonatomic) char createAsMobileBackup;
@property (readonly, nonatomic) NSArray *items;

- (id)init;
- (void).cxx_destruct;
- (id)initWithApplicationMetadata:(id)a0;

@end
