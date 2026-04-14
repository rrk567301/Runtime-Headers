@class NSString;

@interface PeopleSuggesterFeedbackMessage : PBCodable <NSCopying> {
    struct { unsigned char feedbackType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPrivatizedCandidateIdentifier;
@property (retain, nonatomic) NSString *privatizedCandidateIdentifier;
@property (readonly, nonatomic) BOOL hasPrivatizedTransportBundleId;
@property (retain, nonatomic) NSString *privatizedTransportBundleId;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) int feedbackType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsFeedbackType:(id)a0;
- (id)feedbackTypeAsString:(int)a0;

@end
