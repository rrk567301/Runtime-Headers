@interface SGMIMetricsSubmodelAgeVector : PBCodable <NSCopying> {
    struct { unsigned char conversationAge : 1; unsigned char domainFromSenderAge : 1; unsigned char personCCRecipientsAge : 1; unsigned char personFromSenderAge : 1; unsigned char personFromSenderInDyadicConversationAge : 1; unsigned char personToRecipientsAge : 1; unsigned char subjectContentAge : 1; } _has;
}

@property (nonatomic) char hasPersonFromSenderAge;
@property (nonatomic) float personFromSenderAge;
@property (nonatomic) char hasPersonFromSenderInDyadicConversationAge;
@property (nonatomic) float personFromSenderInDyadicConversationAge;
@property (nonatomic) char hasSubjectContentAge;
@property (nonatomic) float subjectContentAge;
@property (nonatomic) char hasPersonToRecipientsAge;
@property (nonatomic) float personToRecipientsAge;
@property (nonatomic) char hasPersonCCRecipientsAge;
@property (nonatomic) float personCCRecipientsAge;
@property (nonatomic) char hasDomainFromSenderAge;
@property (nonatomic) float domainFromSenderAge;
@property (nonatomic) char hasConversationAge;
@property (nonatomic) float conversationAge;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
