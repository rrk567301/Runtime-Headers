@class NSString;

@interface ABCPbSigResponse : PBCodable <NSCopying> {
    struct { unsigned char caseCount : 1; unsigned char caseCountTarget : 1; unsigned char decision : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCaseIdentifier;
@property (retain, nonatomic) NSString *caseIdentifier;
@property (nonatomic) BOOL hasCaseCount;
@property (nonatomic) unsigned int caseCount;
@property (nonatomic) BOOL hasCaseCountTarget;
@property (nonatomic) unsigned int caseCountTarget;
@property (readonly, nonatomic) BOOL hasCaseStatus;
@property (retain, nonatomic) NSString *caseStatus;
@property (nonatomic) BOOL hasDecision;
@property (nonatomic) BOOL decision;

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
