@class NSString, NSMutableArray;

@interface ABTableEntry : NSObject

@property (readonly, copy) NSString *recordIdentifier;
@property (retain, nonatomic) NSMutableArray *children;

- (id)init;
- (void).cxx_destruct;
- (char)canSelect;
- (char)hasChildren;
- (char)canDrag;
- (char)canSwipeToDelete;

@end
