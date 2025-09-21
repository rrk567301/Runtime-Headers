@class AVSearchPredicate, AVSearchMatchDescription;

@interface AVSearchCursor : NSObject <NSCopying> {
    AVSearchPredicate *_predicate;
}

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;
@property (readonly, nonatomic) AVSearchMatchDescription *matchDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (id)predicate;
- (BOOL)isEqual:(id)a0;
- (id)initAbstract;
- (long long)stepMatchesByCount:(long long)a0;

@end
