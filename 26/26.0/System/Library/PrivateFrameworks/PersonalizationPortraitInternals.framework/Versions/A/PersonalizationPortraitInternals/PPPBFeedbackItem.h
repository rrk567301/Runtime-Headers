@interface PPPBFeedbackItem : PBCodable <NSCopying> {
    struct { unsigned char feedbackType : 1; } _has;
}

@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) int feedbackType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
