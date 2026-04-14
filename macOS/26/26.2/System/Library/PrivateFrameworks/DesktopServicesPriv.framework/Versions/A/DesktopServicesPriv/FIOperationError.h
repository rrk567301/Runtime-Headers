@class NSURL, NSError, FINode;

@interface FIOperationError : NSObject

@property (readonly, nonatomic) FINode *node;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSError *error;

- (id)debugDescription;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithErrorRecord:(const struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a0;

@end
