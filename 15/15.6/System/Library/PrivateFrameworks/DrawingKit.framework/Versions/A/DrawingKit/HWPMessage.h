@class NSString, NSData, PBUnknownFields;

@interface HWPMessage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char creationDate : 1; unsigned char version : 1; } _has;
}

@property (nonatomic) char hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) long long creationDate;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasDrawing;
@property (retain, nonatomic) NSData *drawing;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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

@end
