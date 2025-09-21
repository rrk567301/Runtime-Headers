@class _MRTextEditingAttributesProtobuf, NSData;

@interface _MRKeyboardMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char state : 1; } _has;
}

@property (nonatomic) char hasState;
@property (nonatomic) int state;
@property (readonly, nonatomic) char hasAttributes;
@property (retain, nonatomic) _MRTextEditingAttributesProtobuf *attributes;
@property (readonly, nonatomic) char hasEncryptedTextCyphertext;
@property (retain, nonatomic) NSData *encryptedTextCyphertext;

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
- (int)StringAsState:(id)a0;
- (id)stateAsString:(int)a0;

@end
