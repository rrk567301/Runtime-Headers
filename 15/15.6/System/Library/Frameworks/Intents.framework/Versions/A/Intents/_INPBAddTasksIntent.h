@class NSString, _INPBContactEventTrigger, NSArray, _INPBIntent, _INPBTemporalEventTrigger, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTaskList;

@interface _INPBAddTasksIntent : PBCodable <_INPBAddTasksIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char priority : 1; unsigned char taskReference : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBContactEventTrigger *contactEventTrigger;
@property (readonly, nonatomic) char hasContactEventTrigger;
@property (retain, nonatomic) _INPBIntent *intent;
@property (readonly, nonatomic) char hasIntent;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) int priority;
@property (nonatomic) char hasPriority;
@property (retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (readonly, nonatomic) char hasSpatialEventTrigger;
@property (retain, nonatomic) _INPBTaskList *targetTaskList;
@property (readonly, nonatomic) char hasTargetTaskList;
@property (copy, nonatomic) NSArray *targetTaskListMembers;
@property (readonly, nonatomic) unsigned long long targetTaskListMembersCount;
@property (nonatomic) int taskReference;
@property (nonatomic) char hasTaskReference;
@property (copy, nonatomic) NSArray *taskTitles;
@property (readonly, nonatomic) unsigned long long taskTitlesCount;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) char hasTemporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)targetTaskListMembersType;
+ (Class)taskTitlesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTaskReference:(id)a0;
- (void)clearTaskTitles;
- (int)StringAsPriority:(id)a0;
- (void)addTargetTaskListMembers:(id)a0;
- (void)addTaskTitles:(id)a0;
- (void)clearTargetTaskListMembers;
- (id)priorityAsString:(int)a0;
- (id)targetTaskListMembersAtIndex:(unsigned long long)a0;
- (id)taskReferenceAsString:(int)a0;
- (id)taskTitlesAtIndex:(unsigned long long)a0;

@end
