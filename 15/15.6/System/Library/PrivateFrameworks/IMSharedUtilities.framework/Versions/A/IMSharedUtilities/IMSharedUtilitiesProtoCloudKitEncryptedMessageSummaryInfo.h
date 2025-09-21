@class NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageSummaryInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasMessageSummaryInfo;
@property (retain, nonatomic) NSData *messageSummaryInfo;
@property (readonly, nonatomic) char hasPadding;
@property (retain, nonatomic) NSData *padding;

- (void)dealloc;
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
