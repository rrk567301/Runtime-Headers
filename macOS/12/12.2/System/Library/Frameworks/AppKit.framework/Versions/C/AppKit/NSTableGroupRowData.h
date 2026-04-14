@class NSTableRowView, NSMutableDictionary, NSMutableIndexSet;

@interface NSTableGroupRowData : NSObject <NSCopying> {
    NSMutableIndexSet *_groupRowIndexes;
    NSMutableIndexSet *_cachedRowIndexes;
    long long _floatingGroupRow;
    NSTableRowView *_floatingGroupRowView;
    NSMutableDictionary *_groupViewBackgrounds;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;

@end
