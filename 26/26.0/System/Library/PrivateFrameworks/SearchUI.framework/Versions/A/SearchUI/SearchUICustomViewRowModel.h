@class NSString;

@interface SearchUICustomViewRowModel : SearchUICardSectionRowModel

@property (nonatomic, readonly) NSString *accessibilityIdentifier;
@property (nonatomic, readonly) NSString *reuseIdentifier;

- (id)init;
- (id)initWithResults:(id)a0 itemIdentifier:(id)a1;
- (id)initWithCardSection:(id)a0 queryId:(unsigned long long)a1 itemIdentifier:(id)a2;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3 itemIdentifier:(id)a4;
- (id)initWithResult:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2 itemIdentifier:(id)a3;
- (id)initWithResult:(id)a0 itemIdentifier:(id)a1;

@end
