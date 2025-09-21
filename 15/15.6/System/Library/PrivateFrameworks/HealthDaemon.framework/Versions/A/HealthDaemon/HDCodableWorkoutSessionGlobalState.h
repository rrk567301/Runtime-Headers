@class HDCodableWorkoutActivity, NSMutableArray;

@interface HDCodableWorkoutSessionGlobalState : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char sessionState : 1; unsigned char sessionStateChangeDate : 1; unsigned char sessionStateEvent : 1; unsigned char sessionStateEventDate : 1; unsigned char startDate : 1; } _has;
}

@property (nonatomic) char hasSessionState;
@property (nonatomic) long long sessionState;
@property (nonatomic) char hasSessionStateChangeDate;
@property (nonatomic) double sessionStateChangeDate;
@property (nonatomic) char hasSessionStateEvent;
@property (nonatomic) long long sessionStateEvent;
@property (nonatomic) char hasSessionStateEventDate;
@property (nonatomic) double sessionStateEventDate;
@property (nonatomic) char hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) char hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) char hasCurrentActivity;
@property (retain, nonatomic) HDCodableWorkoutActivity *currentActivity;
@property (retain, nonatomic) NSMutableArray *events;

+ (Class)eventsType;

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
- (void)addEvents:(id)a0;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;

@end
