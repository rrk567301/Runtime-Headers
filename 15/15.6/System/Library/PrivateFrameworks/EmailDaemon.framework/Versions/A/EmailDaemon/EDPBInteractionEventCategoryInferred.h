@class EDPBModelFeaturesPromotion, EDPBModelFeaturesImportant;

@interface EDPBInteractionEventCategoryInferred : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying> {
    struct { unsigned char accountId : 1; unsigned char conversationId : 1; unsigned char mailboxId : 1; unsigned char messageId : 1; unsigned char score : 1; unsigned char categoryType : 1; unsigned char mailboxType : 1; unsigned char modelId : 1; unsigned char modelVersion : 1; unsigned char positive : 1; } _has;
}

@property (nonatomic) long long accountId;
@property (nonatomic) long long mailboxId;
@property (nonatomic) int mailboxType;
@property (nonatomic) long long conversationId;
@property (nonatomic) long long messageId;
@property (nonatomic) char hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) char hasMailboxId;
@property (nonatomic) long long mailboxId;
@property (nonatomic) char hasMailboxType;
@property (nonatomic) int mailboxType;
@property (nonatomic) char hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) char hasMessageId;
@property (nonatomic) long long messageId;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (nonatomic) char hasPositive;
@property (nonatomic) char positive;
@property (nonatomic) char hasCategoryType;
@property (nonatomic) int categoryType;
@property (nonatomic) char hasModelId;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) char hasModelVersion;
@property (nonatomic) unsigned int modelVersion;
@property (readonly, nonatomic) char hasFeaturesImportant;
@property (retain, nonatomic) EDPBModelFeaturesImportant *featuresImportant;
@property (readonly, nonatomic) char hasFeaturesPromotion;
@property (retain, nonatomic) EDPBModelFeaturesPromotion *featuresPromotion;

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
- (int)StringAsCategoryType:(id)a0;
- (id)categoryTypeAsString:(int)a0;
- (int)StringAsMailboxType:(id)a0;
- (id)mailboxTypeAsString:(int)a0;
- (void)withHasher:(id)a0 setMessage:(id)a1 data:(id)a2;

@end
