@class NSString, NSMutableArray, WFREPBError;

@interface WFREPBAskWhenRunRequestResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *originatingRequestIdentifier;
@property (retain, nonatomic) NSMutableArray *inputtedStates;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) WFREPBError *error;

+ (Class)inputtedStatesType;

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
- (void)addInputtedStates:(id)a0;
- (void)clearInputtedStates;
- (id)inputtedStatesAtIndex:(unsigned long long)a0;
- (unsigned long long)inputtedStatesCount;

@end
