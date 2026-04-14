@class CKVItemInfo, CKVSpanMatch;

@interface CKVSpanMatchCandidate : NSObject <NSCopying>

@property (readonly, nonatomic) CKVSpanMatch *spanMatch;
@property (readonly, nonatomic) CKVItemInfo *itemInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToSpanMatchCandidate:(id)a0;
- (id)initWithSpanMatch:(id)a0 itemInfo:(id)a1;

@end
