@class NSArray, NSTableView;

@interface CIMExpertDictionariesPreferencesModule : CIMPreferencesModule

@property (retain, nonatomic) NSArray *dictionaries;
@property (nonatomic) char didInitialized;
@property (retain, nonatomic) NSTableView *tableView;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
