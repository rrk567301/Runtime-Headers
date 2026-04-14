@class NSMutableArray;

@interface ACSHStack : NSObject <NSCopying>

@property (retain) NSMutableArray *_queue;
@property (nonatomic) BOOL pushMovesDuplicatesToTop;

- (void)push:(id)a0;
- (void)clear;
- (id)peek;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)init;
- (id)pop;
- (id)description;
- (void).cxx_destruct;

@end
