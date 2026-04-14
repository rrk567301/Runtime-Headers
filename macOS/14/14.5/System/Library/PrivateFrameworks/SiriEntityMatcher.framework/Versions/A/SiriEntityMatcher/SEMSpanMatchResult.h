@class SEMSpanInfo, NSArray, NSObject;
@protocol SEMEntityInfo;

@interface SEMSpanMatchResult : NSObject <NSCopying> {
    NSObject<SEMEntityInfo> *_entityInfo;
    SEMSpanInfo *_spanInfo;
    NSArray *_fieldMatches;
    float _score;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (float)score;
- (void)setScore:(float)a0;
- (id)entityInfo;
- (id)spanInfo;
- (id)spanValue;
- (id)toOntologyGraph:(id *)a0;
- (id)fieldMatches;
- (BOOL)isEqualToSpanMatchResult:(id)a0;
- (id)initWithEntityInfo:(id)a0 spanInfo:(id)a1 fieldMatches:(id)a2;

@end
