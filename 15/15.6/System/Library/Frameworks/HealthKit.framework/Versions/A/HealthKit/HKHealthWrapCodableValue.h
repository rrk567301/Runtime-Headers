@class NSData, NSString;

@interface HKHealthWrapCodableValue : PBCodable <NSCopying> {
    struct { unsigned char integer : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasBytes;
@property (retain, nonatomic) NSData *bytes;
@property (readonly, nonatomic) char hasString;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) char hasInteger;
@property (nonatomic) long long integer;

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
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
