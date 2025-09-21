@class NSData;

@interface NWPBCommandMessage : PBCodable <NSCopying> {
    int _command;
    NSData *_messageData;
    struct { unsigned char command : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
