@class CKVPriorInfo, CKVItemInfo, CKVSpanMatch;

@interface CKVSpanMatchRankInfo : NSObject

@property (readonly, nonatomic) CKVSpanMatch *spanMatch;
@property (readonly, nonatomic) CKVItemInfo *itemInfo;
@property (readonly, nonatomic) CKVPriorInfo *priorInfo;
@property (readonly, nonatomic) float rankScore;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCandidate:(id)a0 priorInfo:(id)a1 rankScore:(float)a2;
- (BOOL)isEqualToSpanMatchRankInfo:(id)a0;

@end
