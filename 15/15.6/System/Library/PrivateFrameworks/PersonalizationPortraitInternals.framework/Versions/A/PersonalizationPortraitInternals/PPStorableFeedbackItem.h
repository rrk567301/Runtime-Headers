@class NSString;

@interface PPStorableFeedbackItem : PBCodable <NSCopying> {
    struct { unsigned char feedbackType : 1; } _has;
}

@property (nonatomic) char hasFeedbackType;
@property (nonatomic) unsigned int feedbackType;
@property (readonly, nonatomic) char hasItemString;
@property (retain, nonatomic) NSString *itemString;

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
