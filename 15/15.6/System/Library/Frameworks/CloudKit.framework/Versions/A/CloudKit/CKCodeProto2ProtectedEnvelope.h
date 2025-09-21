@class NSData, CKCodeProto2Any;

@interface CKCodeProto2ProtectedEnvelope : PBCodable <NSCopying> {
    struct { unsigned char contents : 1; } _has;
}

@property (readonly, nonatomic) char hasEncrypted;
@property (retain, nonatomic) NSData *encrypted;
@property (readonly, nonatomic) char hasValue;
@property (retain, nonatomic) CKCodeProto2Any *value;
@property (nonatomic) char hasContents;
@property (nonatomic) int contents;

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
- (int)StringAsContents:(id)a0;
- (void)clearOneofValuesForContents;
- (id)contentsAsString:(int)a0;

@end
