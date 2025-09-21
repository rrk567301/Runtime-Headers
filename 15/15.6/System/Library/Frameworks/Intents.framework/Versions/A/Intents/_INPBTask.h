@class _INPBSpatialEventTrigger, NSString, _INPBDateTime, _INPBContactEventTrigger, _INPBDataString, _INPBTemporalEventTrigger;

@interface _INPBTask : PBCodable <_INPBTask, NSSecureCoding, NSCopying> {
    struct { unsigned char priority : 1; unsigned char status : 1; unsigned char taskReference : 1; unsigned char taskType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger;
@property (readonly, nonatomic) char hasContactEventTrigger;
@property (retain, nonatomic) _INPBDateTime *createdDateTime;
@property (readonly, nonatomic) char hasCreatedDateTime;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) _INPBDateTime *modifiedDateTime;
@property (readonly, nonatomic) char hasModifiedDateTime;
@property (copy, nonatomic) NSString *parentIdentifier;
@property (readonly, nonatomic) char hasParentIdentifier;
@property (nonatomic) int priority;
@property (nonatomic) char hasPriority;
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (readonly, nonatomic) char hasSpatialEventTrigger;
@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
@property (nonatomic) int taskReference;
@property (nonatomic) char hasTaskReference;
@property (nonatomic) int taskType;
@property (nonatomic) char hasTaskType;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) char hasTemporalEventTrigger;
@property (retain, nonatomic) _INPBDataString *title;
@property (readonly, nonatomic) char hasTitle;
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
- (int)StringAsTaskReference:(id)a0;
- (int)StringAsPriority:(id)a0;
- (int)StringAsTaskType:(id)a0;
- (id)priorityAsString:(int)a0;
- (id)taskReferenceAsString:(int)a0;
- (id)taskTypeAsString:(int)a0;

@end
