@class AVSearchPredicate, AVSearchMatchDescription;

@interface AVSearchCursor : NSObject <NSCopying> {
    AVSearchPredicate *_predicate;
}

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;
@property (readonly, nonatomic) AVSearchMatchDescription *matchDescription;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)predicate;
- (id)initAbstract;
- (long long)stepMatchesByCount:(long long)a0;

@end
