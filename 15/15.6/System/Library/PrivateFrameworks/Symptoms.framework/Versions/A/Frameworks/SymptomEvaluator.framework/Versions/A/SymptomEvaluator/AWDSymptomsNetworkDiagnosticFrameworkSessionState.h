@class NSString;

@interface AWDSymptomsNetworkDiagnosticFrameworkSessionState : PBCodable <NSCopying> {
    struct { unsigned char stateHeldForSecs : 1; unsigned char timestamp : 1; unsigned char inState : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasInState;
@property (nonatomic) int inState;
@property (nonatomic) char hasStateHeldForSecs;
@property (nonatomic) unsigned long long stateHeldForSecs;
@property (readonly, nonatomic) char hasSymptomName;
@property (retain, nonatomic) NSString *symptomName;

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
- (int)StringAsInState:(id)a0;
- (id)inStateAsString:(int)a0;

@end
