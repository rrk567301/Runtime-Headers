@class NSString, CPMessagingConversationActivity;

@interface CPMessagingConversationActivitySession : PBCodable <NSCopying> {
    struct { unsigned char creationDateEpochTime : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifierUUIDString;
@property (retain, nonatomic) NSString *identifierUUIDString;
@property (readonly, nonatomic) BOOL hasActivity;
@property (retain, nonatomic) CPMessagingConversationActivity *activity;
@property (nonatomic) BOOL hasCreationDateEpochTime;
@property (nonatomic) double creationDateEpochTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
