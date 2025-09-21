@class NSTableRowData, NSMutableDictionary;

@interface NSTableViewRecycledViews : NSObject {
    NSTableRowData *_rowData;
    NSMutableDictionary *_viewPools;
    unsigned long long _maxPoolSize;
    char _cullingDisabled;
}

- (void)dealloc;

@end
