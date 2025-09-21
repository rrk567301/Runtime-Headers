@class NSString, HDCodableRoutineLocationRequest, HDCodableRoutineScenarioTriggeredRequest;

@interface HDCodableRoutineRequestMessage : PBCodable <NSCopying> {
    struct { unsigned char requestType : 1; } _has;
}

@property (nonatomic) char hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) char hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) char hasFetchLocationRequest;
@property (retain, nonatomic) HDCodableRoutineLocationRequest *fetchLocationRequest;
@property (readonly, nonatomic) char hasScenarioTriggeredRequest;
@property (retain, nonatomic) HDCodableRoutineScenarioTriggeredRequest *scenarioTriggeredRequest;

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
- (int)StringAsRequestType:(id)a0;
- (id)requestTypeAsString:(int)a0;

@end
