@class NSString, _INPBDateTimeRange, _INPBDataString, _INPBIntentMetadata, _INPBLocation;

@interface _INPBSearchForNotebookItemsIntent : PBCodable <_INPBSearchForNotebookItemsIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _temporalEventTriggerTypes;
    struct { unsigned char dateSearchType : 1; unsigned char includeAllNoteContents : 1; unsigned char itemType : 1; unsigned char locationSearchType : 1; unsigned char status : 1; unsigned char taskPriority : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *content;
@property (readonly, nonatomic) char hasContent;
@property (nonatomic) int dateSearchType;
@property (nonatomic) char hasDateSearchType;
@property (retain, nonatomic) _INPBDateTimeRange *dateTime;
@property (readonly, nonatomic) char hasDateTime;
@property (retain, nonatomic) _INPBDataString *groupName;
@property (readonly, nonatomic) char hasGroupName;
@property (nonatomic) char includeAllNoteContents;
@property (nonatomic) char hasIncludeAllNoteContents;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (nonatomic) int itemType;
@property (nonatomic) char hasItemType;
@property (retain, nonatomic) _INPBLocation *location;
@property (readonly, nonatomic) char hasLocation;
@property (nonatomic) int locationSearchType;
@property (nonatomic) char hasLocationSearchType;
@property (copy, nonatomic) NSString *notebookItemIdentifier;
@property (readonly, nonatomic) char hasNotebookItemIdentifier;
@property (nonatomic) int status;
@property (nonatomic) char hasStatus;
@property (nonatomic) int taskPriority;
@property (nonatomic) char hasTaskPriority;
@property (readonly, nonatomic) int *temporalEventTriggerTypes;
@property (readonly, nonatomic) unsigned long long temporalEventTriggerTypesCount;
@property (retain, nonatomic) _INPBDataString *title;
@property (readonly, nonatomic) char hasTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
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
- (int)StringAsDateSearchType:(id)a0;
- (int)StringAsItemType:(id)a0;
- (int)StringAsLocationSearchType:(id)a0;
- (int)StringAsTaskPriority:(id)a0;
- (int)StringAsTemporalEventTriggerTypes:(id)a0;
- (void)addTemporalEventTriggerType:(int)a0;
- (void)clearTemporalEventTriggerTypes;
- (id)dateSearchTypeAsString:(int)a0;
- (id)itemTypeAsString:(int)a0;
- (id)locationSearchTypeAsString:(int)a0;
- (void)setTemporalEventTriggerTypes:(int *)a0 count:(unsigned long long)a1;
- (id)taskPriorityAsString:(int)a0;
- (int)temporalEventTriggerTypeAtIndex:(unsigned long long)a0;
- (id)temporalEventTriggerTypesAsString:(int)a0;

@end
