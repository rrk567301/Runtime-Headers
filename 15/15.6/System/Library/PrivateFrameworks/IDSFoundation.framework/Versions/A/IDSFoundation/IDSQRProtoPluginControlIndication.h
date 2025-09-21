@interface IDSQRProtoPluginControlIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; } _has;
}

@property (nonatomic) unsigned int pluginOperation;
@property (nonatomic) unsigned long long pluginParticipantId;
@property (nonatomic) char hasTxnId;
@property (nonatomic) unsigned long long txnId;

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
