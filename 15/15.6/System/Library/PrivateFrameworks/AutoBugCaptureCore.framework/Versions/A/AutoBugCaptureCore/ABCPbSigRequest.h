@class NSString;

@interface ABCPbSigRequest : PBRequest <NSCopying> {
    struct { unsigned char logSizeTotal : 1; } _has;
}

@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) char hasSubtype;
@property (retain, nonatomic) NSString *subtype;
@property (readonly, nonatomic) char hasSubtypeContext;
@property (retain, nonatomic) NSString *subtypeContext;
@property (readonly, nonatomic) char hasCaseIdentifier;
@property (retain, nonatomic) NSString *caseIdentifier;
@property (readonly, nonatomic) char hasProcess;
@property (retain, nonatomic) NSString *process;
@property (readonly, nonatomic) char hasBuild;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) char hasBuildVariant;
@property (retain, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) char hasCaseGroupIdentifier;
@property (retain, nonatomic) NSString *caseGroupIdentifier;
@property (nonatomic) char hasLogSizeTotal;
@property (nonatomic) unsigned int logSizeTotal;

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
