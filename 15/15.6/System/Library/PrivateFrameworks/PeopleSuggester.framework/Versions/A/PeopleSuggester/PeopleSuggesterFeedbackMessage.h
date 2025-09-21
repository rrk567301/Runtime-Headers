@class NSString;

@interface PeopleSuggesterFeedbackMessage : PBCodable <NSCopying> {
    struct { unsigned char feedbackType : 1; } _has;
}

@property (readonly, nonatomic) char hasPrivatizedCandidateIdentifier;
@property (retain, nonatomic) NSString *privatizedCandidateIdentifier;
@property (readonly, nonatomic) char hasPrivatizedTransportBundleId;
@property (retain, nonatomic) NSString *privatizedTransportBundleId;
@property (nonatomic) char hasFeedbackType;
@property (nonatomic) int feedbackType;

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
