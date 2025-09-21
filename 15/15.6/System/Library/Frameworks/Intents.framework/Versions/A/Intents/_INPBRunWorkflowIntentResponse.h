@class NSArray, _INPBArchivedObject, NSString;

@interface _INPBRunWorkflowIntentResponse : PBCodable <_INPBRunWorkflowIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char continueRunning : 1; unsigned char requestsIntentExecution : 1; unsigned char waitingForResume : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char continueRunning;
@property (nonatomic) char hasContinueRunning;
@property (nonatomic) char requestsIntentExecution;
@property (nonatomic) char hasRequestsIntentExecution;
@property (copy, nonatomic) NSArray *steps;
@property (readonly, nonatomic) unsigned long long stepsCount;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntent;
@property (readonly, nonatomic) char hasUnderlyingIntent;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse;
@property (readonly, nonatomic) char hasUnderlyingIntentResponse;
@property (copy, nonatomic) NSString *utterance;
@property (readonly, nonatomic) char hasUtterance;
@property (nonatomic) char waitingForResume;
@property (nonatomic) char hasWaitingForResume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)stepType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addStep:(id)a0;
- (void)clearSteps;
- (id)stepAtIndex:(unsigned long long)a0;

@end
