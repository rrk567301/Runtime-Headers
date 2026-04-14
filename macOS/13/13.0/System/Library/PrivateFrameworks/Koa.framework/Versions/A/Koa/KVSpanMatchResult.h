@class KVItemInfo, KVSpanInfo, NSArray;

@interface KVSpanMatchResult : NSObject <NSCopying> {
    KVItemInfo *_itemInfo;
    KVSpanInfo *_spanInfo;
    NSArray *_fieldMatches;
    float _score;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (float)score;
- (void)setScore:(float)a0;
- (id)itemInfo;
- (id)fieldMatches;
- (id)spanInfo;
- (id)spanValue;
- (id)initWithItemInfo:(id)a0 spanInfo:(id)a1 fieldMatches:(id)a2;
- (id)initWithItemInfo:(id)a0 spanInfo:(id)a1 fieldMatches:(id)a2 score:(float)a3;
- (BOOL)isEqualToSpanMatchResult:(id)a0;

@end
