@class NSString, HDCodableRoutineLocationRequest, HDCodableRoutineScenarioTriggeredRequest;

@interface HDCodableRoutineRequestMessage : PBCodable <NSCopying> {
    struct { unsigned char requestType : 1; } _has;
}

@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL hasFetchLocationRequest;
@property (retain, nonatomic) HDCodableRoutineLocationRequest *fetchLocationRequest;
@property (readonly, nonatomic) BOOL hasScenarioTriggeredRequest;
@property (retain, nonatomic) HDCodableRoutineScenarioTriggeredRequest *scenarioTriggeredRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)StringAsRequestType:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)requestTypeAsString:(int)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
