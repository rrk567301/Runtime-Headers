@class PXRecipientSearchDataSource, NSString, NSSet;

@interface PXRecipientSearchDataSourceManager : PXSectionedDataSourceManager

@property (nonatomic) unsigned long long searchState;
@property (readonly, nonatomic) PXRecipientSearchDataSource *dataSource;
@property (copy, nonatomic) NSString *queryString;
@property (copy, nonatomic) NSSet *usedAddresses;

- (void).cxx_destruct;
- (id)init;
- (void)queryStringDidChange;

@end
