@class NSString;

@interface PPM2FeedbackAtK : PBCodable <NSCopying> {
    struct { unsigned char bucket : 1; unsigned char domain : 1; unsigned char evaluatedCount : 1; unsigned char feedbackType : 1; unsigned char k : 1; } _has;
}

@property (nonatomic) BOOL hasK;
@property (nonatomic) unsigned int k;
@property (nonatomic) BOOL hasEvaluatedCount;
@property (nonatomic) unsigned int evaluatedCount;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) int domain;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) BOOL hasBucket;
@property (nonatomic) unsigned int bucket;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsFeedbackType:(id)a0;
- (id)feedbackTypeAsString:(int)a0;
- (id)domainAsString:(int)a0;
- (int)StringAsDomain:(id)a0;

@end
