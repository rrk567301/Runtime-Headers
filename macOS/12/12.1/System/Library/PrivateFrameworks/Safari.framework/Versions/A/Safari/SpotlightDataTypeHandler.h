@class NSString, NSArray;
@protocol OldSpotlightDataWriter, OldSpotlightDataSource;

@interface SpotlightDataTypeHandler : NSObject {
    NSString *_type;
    id<OldSpotlightDataSource> _dataSource;
    id<OldSpotlightDataWriter> _dataWriter;
    NSArray *_itemsToDelete;
    NSArray *_itemsToAdd;
    BOOL _fullUpdatePending;
    BOOL _deleteOldCacheFiles;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)type;
- (id)dataSource;
- (void)setFullUpdatePending:(BOOL)a0;
- (id)initWithDataSource:(id)a0 writer:(id)a1 type:(id)a2;
- (id)dataWriter;
- (BOOL)isFullUpdatePending;
- (void)setShouldDeleteOldCacheFiles:(BOOL)a0;
- (void)setItemsToAdd:(id)a0;
- (void)setItemsToDelete:(id)a0;
- (id)itemsToDelete;
- (id)itemsToAdd;
- (BOOL)shouldDeleteOldCacheFiles;

@end
