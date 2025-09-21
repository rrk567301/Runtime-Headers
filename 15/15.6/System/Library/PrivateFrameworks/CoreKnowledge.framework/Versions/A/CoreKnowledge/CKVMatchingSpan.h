@class USOGraph, NSString, CKVMatchingSpanMetadata;

@interface CKVMatchingSpan : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) USOGraph *ontologyGraph;
@property (readonly, nonatomic) NSString *ontologyLabel;
@property (readonly, nonatomic) NSString *semanticValue;
@property (readonly, nonatomic) unsigned long long beginIndex;
@property (readonly, nonatomic) unsigned long long endIndex;
@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) NSString *originAppId;
@property (readonly, nonatomic) CKVMatchingSpanMetadata *metadata;
@property (readonly, nonatomic) float score;

+ (id)_extractOntologyLabelFromGraph:(id)a0;
+ (id)matchingSpanFromSpanMatchResult:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOntologyGraph:(id)a0 ontologyLabel:(id)a1 semanticValue:(id)a2 beginIndex:(unsigned long long)a3 endIndex:(unsigned long long)a4 itemId:(id)a5 originAppId:(id)a6 score:(float)a7 matchScore:(float)a8 priorInfo:(id)a9;
- (char)isEqualToMatchingSpan:(id)a0;
- (id)ontologyGraphData:(id *)a0;

@end
