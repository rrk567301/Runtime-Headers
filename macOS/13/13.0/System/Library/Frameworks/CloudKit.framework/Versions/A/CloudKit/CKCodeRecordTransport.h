@class NSData;

@interface CKCodeRecordTransport : PBCodable <NSCopying> {
    struct { unsigned char contents : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLocalSerialization;
@property (retain, nonatomic) NSData *localSerialization;
@property (readonly, nonatomic) BOOL hasWireSerialization;
@property (retain, nonatomic) NSData *wireSerialization;
@property (nonatomic) BOOL hasContents;
@property (nonatomic) int contents;
@property (readonly, nonatomic) BOOL hasEncryptedMasterKey;
@property (retain, nonatomic) NSData *encryptedMasterKey;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithRecord:(id)a0;
- (id)contentsAsString:(int)a0;
- (int)StringAsContents:(id)a0;
- (void)clearOneofValuesForContents;

@end
