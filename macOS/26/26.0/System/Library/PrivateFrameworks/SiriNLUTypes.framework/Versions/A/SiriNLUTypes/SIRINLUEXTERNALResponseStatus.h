@class NSString;

@interface SIRINLUEXTERNALResponseStatus : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (nonatomic) BOOL hasCode;
@property (nonatomic) int code;
@property (readonly, nonatomic) BOOL hasDescriptionA;
@property (retain, nonatomic) NSString *descriptionA;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)codeAsString:(int)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsCode:(id)a0;

@end
