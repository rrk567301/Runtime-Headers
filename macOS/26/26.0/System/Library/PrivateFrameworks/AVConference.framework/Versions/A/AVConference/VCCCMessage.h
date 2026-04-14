@class NSString, NSData;

@interface VCCCMessage : PBCodable <NSCopying>

@property (nonatomic) unsigned long long transactionID;
@property (retain, nonatomic) NSString *topic;
@property (readonly, nonatomic) BOOL hasPayload;
@property (retain, nonatomic) NSData *payload;

- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
