@class NSDebugTDViewHierarchyItem, NSMutableArray, NSMutableIndexSet;

@interface NSDebugTDInspectorResultsData : NSObject

@property (weak, nonatomic) NSDebugTDViewHierarchyItem *item;
@property (retain, nonatomic) NSMutableArray *resultLinesArray;
@property (retain, nonatomic) NSMutableIndexSet *indicesToUpdateOnTextChange;
@property (retain, nonatomic) NSMutableIndexSet *indicesToUpdateOnSelectionChange;
@property (retain, nonatomic) NSMutableIndexSet *indicesToUpdateOnBoundsChange;

- (void).cxx_destruct;
- (id)init;
- (void)populateInspectorResultsData;

@end
