@class NSString;

@interface SGM2EventInBanner : PBCodable <NSCopying> {
    struct { unsigned char app : 1; unsigned char category : 1; unsigned char extracted : 1; unsigned char state : 1; } _has;
}

@property (readonly, nonatomic) char hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) char hasApp;
@property (nonatomic) int app;
@property (nonatomic) char hasCategory;
@property (nonatomic) int category;
@property (nonatomic) char hasExtracted;
@property (nonatomic) int extracted;
@property (nonatomic) char hasState;
@property (nonatomic) int state;

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
- (int)StringAsCategory:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsState:(id)a0;
- (id)stateAsString:(int)a0;
- (int)StringAsApp:(id)a0;
- (int)StringAsExtracted:(id)a0;
- (id)appAsString:(int)a0;
- (id)extractedAsString:(int)a0;

@end
