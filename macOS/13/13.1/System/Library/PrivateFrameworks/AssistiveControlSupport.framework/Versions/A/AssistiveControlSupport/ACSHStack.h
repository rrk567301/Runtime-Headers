@class NSMutableArray;

@interface ACSHStack : NSObject <NSCopying>

@property (retain) NSMutableArray *_queue;
@property (nonatomic) BOOL pushMovesDuplicatesToTop;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)peek;
- (void)clear;
- (void)push:(id)a0;
- (id)pop;

@end
