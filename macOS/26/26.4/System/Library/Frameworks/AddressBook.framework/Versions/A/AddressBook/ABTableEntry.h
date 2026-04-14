@class NSString, NSMutableArray;

@interface ABTableEntry : NSObject

@property (readonly, copy) NSString *recordIdentifier;
@property (retain, nonatomic) NSMutableArray *children;

- (void).cxx_destruct;
- (id)init;
- (BOOL)canSelect;
- (BOOL)hasChildren;
- (BOOL)canDrag;
- (BOOL)canSwipeToDelete;

@end
