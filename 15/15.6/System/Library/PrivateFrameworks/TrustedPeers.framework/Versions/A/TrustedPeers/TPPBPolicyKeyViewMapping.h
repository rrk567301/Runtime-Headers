@class NSString, TPPBDictionaryMatchingRule;

@interface TPPBPolicyKeyViewMapping : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasMatchingRule;
@property (retain, nonatomic) TPPBDictionaryMatchingRule *matchingRule;
@property (readonly, nonatomic) char hasView;
@property (retain, nonatomic) NSString *view;

+ (id)TPPBPolicyKeyViewMappingWithView:(id)a0 matchingRule:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
