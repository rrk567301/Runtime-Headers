@class NSString, NSMutableArray;

@interface SIRINLUINTERNALRewriteInteraction : PBCodable <NSCopying> {
    struct { unsigned char startTimestamp : 1; unsigned char tap2edit : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *originalUtterances;
@property (retain, nonatomic) NSMutableArray *siriResponses;
@property (readonly, nonatomic) char hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) char hasTap2edit;
@property (nonatomic) char tap2edit;
@property (nonatomic) char hasStartTimestamp;
@property (nonatomic) unsigned long long startTimestamp;

+ (Class)originalUtterancesType;
+ (Class)siriResponseType;

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
- (void)addOriginalUtterances:(id)a0;
- (void)addSiriResponse:(id)a0;
- (void)clearOriginalUtterances;
- (void)clearSiriResponses;
- (id)originalUtterancesAtIndex:(unsigned long long)a0;
- (unsigned long long)originalUtterancesCount;
- (id)siriResponseAtIndex:(unsigned long long)a0;
- (unsigned long long)siriResponsesCount;

@end
