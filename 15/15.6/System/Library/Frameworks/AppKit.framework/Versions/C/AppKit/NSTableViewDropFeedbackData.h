@class NSIndexSet, NSMutableArray;

@interface NSTableViewDropFeedbackData : NSObject

@property long long startRow;
@property char draggingAccepted;
@property char isExternalDrag;
@property (retain) NSMutableArray *dropFeedbackViews;
@property (retain) NSIndexSet *draggedRowIndexes;
@property char isTemporaryDrag;

- (void)dealloc;
- (id)init;

@end
