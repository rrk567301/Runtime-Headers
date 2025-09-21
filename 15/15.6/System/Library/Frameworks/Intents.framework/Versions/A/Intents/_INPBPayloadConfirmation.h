@class NSString, _INPBSelectionItem;

@interface _INPBPayloadConfirmation : PBCodable <_INPBPayloadConfirmation, NSSecureCoding, NSCopying> {
    struct { unsigned char sendAnnouncementIntentAnnouncementConfirmationReason : 1; unsigned char startCallIntentContactsConfirmationReason : 1; unsigned char reason : 1; unsigned char addTasksIntentTargetTaskListConfirmationReason : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int sendAnnouncementIntentAnnouncementConfirmationReason;
@property (nonatomic) char hasSendAnnouncementIntentAnnouncementConfirmationReason;
@property (retain, nonatomic) _INPBSelectionItem *confirmationItem;
@property (readonly, nonatomic) char hasConfirmationItem;
@property (nonatomic) int startCallIntentContactsConfirmationReason;
@property (nonatomic) char hasStartCallIntentContactsConfirmationReason;
@property (nonatomic) int reason;
@property (nonatomic) char hasReason;
@property (nonatomic) int addTasksIntentTargetTaskListConfirmationReason;
@property (nonatomic) char hasAddTasksIntentTargetTaskListConfirmationReason;
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
- (int)StringAsReason:(id)a0;
- (id)reasonAsString:(int)a0;
- (int)StringAsStartCallIntentContactsConfirmationReason:(id)a0;
- (int)StringAsAddTasksIntentTargetTaskListConfirmationReason:(id)a0;
- (int)StringAsSendAnnouncementIntentAnnouncementConfirmationReason:(id)a0;
- (id)addTasksIntentTargetTaskListConfirmationReasonAsString:(int)a0;
- (id)sendAnnouncementIntentAnnouncementConfirmationReasonAsString:(int)a0;
- (id)startCallIntentContactsConfirmationReasonAsString:(int)a0;

@end
