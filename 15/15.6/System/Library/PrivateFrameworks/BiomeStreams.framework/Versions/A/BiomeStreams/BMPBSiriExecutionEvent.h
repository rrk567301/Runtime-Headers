@class NSString;

@interface BMPBSiriExecutionEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char taskStep : 1; } _has;
}

@property (readonly, nonatomic) char hasTaskId;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) char hasTaskStep;
@property (nonatomic) int taskStep;
@property (readonly, nonatomic) char hasStatusReason;
@property (retain, nonatomic) NSString *statusReason;
@property (readonly, nonatomic) char hasSlotValue;
@property (retain, nonatomic) NSString *slotValue;
@property (readonly, nonatomic) char hasIntentName;
@property (retain, nonatomic) NSString *intentName;
@property (readonly, nonatomic) char hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) char hasInteractionId;
@property (retain, nonatomic) NSString *interactionId;
@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;

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
- (int)StringAsTaskStep:(id)a0;
- (id)taskStepAsString:(int)a0;

@end
