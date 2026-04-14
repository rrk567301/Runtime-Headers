@class NSString;

@interface PPStorableFeedbackItem : PBCodable <NSCopying> {
    struct { unsigned char feedbackType : 1; } _has;
}

@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) unsigned int feedbackType;
@property (readonly, nonatomic) BOOL hasItemString;
@property (retain, nonatomic) NSString *itemString;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
