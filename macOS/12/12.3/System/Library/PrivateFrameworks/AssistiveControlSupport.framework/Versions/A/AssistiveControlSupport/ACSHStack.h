@class NSMutableArray;

@interface ACSHStack : NSObject <NSCopying>

@property (retain) NSMutableArray *_queue;
@property (nonatomic) BOOL pushMovesDuplicatesToTop;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (void).cxx_destruct;
- (void)clear;
- (id)peek;
- (void)push:(id)a0;
- (id)pop;

@end
