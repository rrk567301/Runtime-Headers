@class NSSet, CKVItemInfo;

@interface CKVSpanMatchResult : NSObject <NSCopying>

@property (readonly, nonatomic) CKVItemInfo *itemInfo;
@property (readonly, nonatomic) NSSet *spanMatches;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithItemInfo:(id)a0 spanMatches:(id)a1;
- (BOOL)isEqualToSpanMatchResult:(id)a0;

@end
