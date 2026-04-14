@class LNConnection, LNAsyncIteratorReference;

@interface LNAsyncIterator : NSObject <NSCopying>

@property (readonly, copy, nonatomic) LNConnection *connection;
@property (readonly, copy, nonatomic) LNAsyncIteratorReference *reference;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)nextResultsWithCompletionHandler:(id /* block */)a0;
- (id)initWithReference:(id)a0 connection:(id)a1;

@end
