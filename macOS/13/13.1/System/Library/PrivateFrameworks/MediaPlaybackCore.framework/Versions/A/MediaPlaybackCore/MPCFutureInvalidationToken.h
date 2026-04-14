@class MPCFuture;

@interface MPCFutureInvalidationToken : NSObject <NSCopying>

@property (retain, nonatomic) MPCFuture *future;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
