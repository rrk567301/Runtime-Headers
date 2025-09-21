@class NSString, BMPBRankableSocialHighlight;

@interface BMPBSocialHighlightFeedbackEvent : PBCodable <NSCopying> {
    struct { unsigned char feedbackCreationSecondsSinceReferenceDate : 1; unsigned char feedbackType : 1; } _has;
}

@property (readonly, nonatomic) char hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) char hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (nonatomic) char hasFeedbackCreationSecondsSinceReferenceDate;
@property (nonatomic) double feedbackCreationSecondsSinceReferenceDate;
@property (readonly, nonatomic) char hasHighlight;
@property (retain, nonatomic) BMPBRankableSocialHighlight *highlight;
@property (readonly, nonatomic) char hasClientVariant;
@property (retain, nonatomic) NSString *clientVariant;

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

@end
