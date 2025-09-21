@class NSString, NSData;

@interface VCCCMessage : PBCodable <NSCopying>

@property (nonatomic) unsigned long long transactionID;
@property (retain, nonatomic) NSString *topic;
@property (readonly, nonatomic) char hasPayload;
@property (retain, nonatomic) NSData *payload;

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
