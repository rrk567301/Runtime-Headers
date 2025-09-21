@class NSString;

@interface ABCPbSigResponse : PBCodable <NSCopying> {
    struct { unsigned char caseCount : 1; unsigned char caseCountTarget : 1; unsigned char decision : 1; } _has;
}

@property (readonly, nonatomic) char hasCaseIdentifier;
@property (retain, nonatomic) NSString *caseIdentifier;
@property (nonatomic) char hasCaseCount;
@property (nonatomic) unsigned int caseCount;
@property (nonatomic) char hasCaseCountTarget;
@property (nonatomic) unsigned int caseCountTarget;
@property (readonly, nonatomic) char hasCaseStatus;
@property (retain, nonatomic) NSString *caseStatus;
@property (nonatomic) char hasDecision;
@property (nonatomic) char decision;

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
