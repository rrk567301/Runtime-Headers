@class NSString;

@interface SGM2ContactDetailUsed : PBCodable <NSCopying> {
    struct { unsigned char app : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasApp;
@property (nonatomic) int app;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)typeAsString:(int)a0;
- (int)StringAsType:(id)a0;
- (id)appAsString:(int)a0;
- (int)StringAsApp:(id)a0;

@end
