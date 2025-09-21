@class _INPBSpatialEventTrigger, NSString, _INPBContactEventTrigger, _INPBDataString, _INPBTask, _INPBIntentMetadata, _INPBTemporalEventTrigger;

@interface _INPBSetTaskAttributeIntent : PBCodable <_INPBSetTaskAttributeIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char priority : 1; unsigned char status : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger;
@property (readonly, nonatomic) char hasContactEventTrigger;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) int priority;
@property (nonatomic) char hasPriority;
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (readonly, nonatomic) char hasSpatialEventTrigger;
@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
@property (retain, nonatomic) _INPBTask *targetTask;
@property (readonly, nonatomic) char hasTargetTask;
@property (retain, nonatomic) _INPBDataString *taskTitle;
@property (readonly, nonatomic) char hasTaskTitle;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) char hasTemporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (int)StringAsPriority:(id)a0;
- (id)priorityAsString:(int)a0;

@end
