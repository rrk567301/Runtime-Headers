@class NSString;

@interface BMPBRemindersContentEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char completionDateTimestamp : 1; unsigned char dueDateTimestamp : 1; unsigned char priority : 1; unsigned char isAllDay : 1; } _has;
}

@property (readonly, nonatomic) char hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) char hasDomainId;
@property (retain, nonatomic) NSString *domainId;
@property (nonatomic) char hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasNotes;
@property (retain, nonatomic) NSString *notes;
@property (nonatomic) char hasIsAllDay;
@property (nonatomic) char isAllDay;
@property (nonatomic) char hasCompletionDateTimestamp;
@property (nonatomic) double completionDateTimestamp;
@property (nonatomic) char hasDueDateTimestamp;
@property (nonatomic) double dueDateTimestamp;
@property (nonatomic) char hasPriority;
@property (nonatomic) int priority;
@property (readonly, nonatomic) char hasContentProtection;
@property (retain, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) char hasPersonaId;
@property (retain, nonatomic) NSString *personaId;

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

@end
