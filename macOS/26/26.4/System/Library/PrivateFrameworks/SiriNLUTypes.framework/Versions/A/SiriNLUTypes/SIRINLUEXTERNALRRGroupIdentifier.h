@class SIRICOMMONStringValue;

@interface SIRINLUEXTERNALRRGroupIdentifier : PBCodable <NSCopying> {
    struct { unsigned char seq : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGroupId;
@property (retain, nonatomic) SIRICOMMONStringValue *groupId;
@property (nonatomic) BOOL hasSeq;
@property (nonatomic) int seq;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
