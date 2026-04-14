@class NSArray;

@interface ITLibRequest : NSObject

@property (nonatomic) unsigned long long libItemKind;
@property (nonatomic) unsigned long long libSectionKind;
@property (copy, nonatomic) NSArray *allowedItemIdentifiers;
@property (copy, nonatomic) NSArray *allowedSectionIdentifiers;
@property (copy, nonatomic) NSArray *scopedContainers;

- (void).cxx_destruct;
- (BOOL)_isSectioned;
- (id)_setupScopedContainers;
- (id)setupAMPLibRequest;
- (id)setupItemsAMPLibRequestWithItemIDs:(id)a0;

@end
