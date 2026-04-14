@class NSMutableArray;

@interface ACSHStack : NSObject <NSCopying>

@property (retain) NSMutableArray *_queue;
@property (nonatomic) BOOL pushMovesDuplicatesToTop;

- (id)pop;
- (id)peek;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)push:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (id)description;

@end
