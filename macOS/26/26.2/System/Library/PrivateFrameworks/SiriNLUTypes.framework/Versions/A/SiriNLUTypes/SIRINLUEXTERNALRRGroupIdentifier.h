@class SIRICOMMONStringValue;

@interface SIRINLUEXTERNALRRGroupIdentifier : PBCodable <NSCopying> {
    struct { unsigned char seq : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGroupId;
@property (retain, nonatomic) SIRICOMMONStringValue *groupId;
@property (nonatomic) BOOL hasSeq;
@property (nonatomic) int seq;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
