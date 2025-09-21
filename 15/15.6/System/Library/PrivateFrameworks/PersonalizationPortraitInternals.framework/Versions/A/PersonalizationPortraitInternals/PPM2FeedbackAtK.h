@class NSString;

@interface PPM2FeedbackAtK : PBCodable <NSCopying> {
    struct { unsigned char bucket : 1; unsigned char domain : 1; unsigned char evaluatedCount : 1; unsigned char feedbackType : 1; unsigned char k : 1; } _has;
}

@property (nonatomic) char hasK;
@property (nonatomic) unsigned int k;
@property (nonatomic) char hasEvaluatedCount;
@property (nonatomic) unsigned int evaluatedCount;
@property (nonatomic) char hasDomain;
@property (nonatomic) int domain;
@property (nonatomic) char hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (readonly, nonatomic) char hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) char hasBucket;
@property (nonatomic) unsigned int bucket;

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
- (int)StringAsFeedbackType:(id)a0;
- (id)feedbackTypeAsString:(int)a0;
- (int)StringAsDomain:(id)a0;
- (id)domainAsString:(int)a0;

@end
