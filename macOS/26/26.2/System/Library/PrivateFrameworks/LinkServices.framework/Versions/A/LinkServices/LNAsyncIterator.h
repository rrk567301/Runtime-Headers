@class LNConnection, LNAsyncIteratorReference;

@interface LNAsyncIterator : NSObject <NSCopying>

@property (readonly, copy, nonatomic) LNConnection *connection;
@property (readonly, copy, nonatomic) LNAsyncIteratorReference *reference;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (void)nextResultsWithCompletionHandler:(id /* block */)a0;
- (id)initWithReference:(id)a0 connection:(id)a1;

@end
