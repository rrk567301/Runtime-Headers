@class SEMSpanInfo, NSArray, NSObject;
@protocol SEMEntityInfo;

@interface SEMSpanMatchResult : NSObject <NSCopying, NSSecureCoding> {
    NSObject<SEMEntityInfo> *_entityInfo;
    SEMSpanInfo *_spanInfo;
    NSArray *_fieldMatches;
    float _score;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int duplicateIndex;

+ (id)prettyPrintedResults:(id)a0;

- (void)setScore:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (float)score;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)entityInfo;
- (id)spanInfo;
- (id)spanValue;
- (id)toOntologyGraph:(id *)a0;
- (id)fieldMatches;
- (id)toOntologyGraphData:(id *)a0;
- (BOOL)isEqualToSpanMatchResult:(id)a0;
- (id)initWithEntityInfo:(id)a0 spanInfo:(id)a1 fieldMatches:(id)a2 duplicateIndex:(unsigned int)a3;

@end
