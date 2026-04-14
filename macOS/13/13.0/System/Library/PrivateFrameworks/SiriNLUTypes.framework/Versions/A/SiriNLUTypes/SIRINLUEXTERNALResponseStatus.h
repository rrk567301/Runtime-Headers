@class NSString;

@interface SIRINLUEXTERNALResponseStatus : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (nonatomic) BOOL hasCode;
@property (nonatomic) int code;
@property (readonly, nonatomic) BOOL hasDescriptionA;
@property (retain, nonatomic) NSString *descriptionA;

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
- (id)codeAsString:(int)a0;
- (int)StringAsCode:(id)a0;

@end
