@class EDPBInteractionEventCategoryMarked, EDPBInteractionEventReadChanged, EDPBInteractionEventForwardSent, EDPBInteractionEventLinkClicked, EDPBInteractionEventMessageCopied, EDPBInteractionEventReplyDraftStarted, EDPBInteractionEventMarkedMuteThread, EDPBInteractionEventMessageFetched, EDPBInteractionEventForwardDraftStarted, EDPBInteractionEventMessageSent, EDPBInteractionEventMessageMoved, EDPBInteractionEventFlagChanged, EDPBInteractionEventAppResume, EDPBInteractionEventMessageViewEnd, EDPBInteractionEventMessageViewStart, EDPBInteractionEventReplySent, EDPBInteractionEventAppLaunch, EDPBInteractionEventCategoryInferred, EDPBInteractionEventAppBackground;

@interface EDPBInteractionEvent : PBCodable <EDPETMessageFrameTypeIntrospectable, EDPBDataSetters, NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char eventName : 1; unsigned char sequenceNumber : 1; } _has;
}

@property (nonatomic) char hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasEventName;
@property (nonatomic) int eventName;
@property (readonly, nonatomic) char hasMessageFetched;
@property (retain, nonatomic) EDPBInteractionEventMessageFetched *messageFetched;
@property (readonly, nonatomic) char hasMessageSent;
@property (retain, nonatomic) EDPBInteractionEventMessageSent *messageSent;
@property (readonly, nonatomic) char hasMessageMoved;
@property (retain, nonatomic) EDPBInteractionEventMessageMoved *messageMoved;
@property (readonly, nonatomic) char hasMessageCopied;
@property (retain, nonatomic) EDPBInteractionEventMessageCopied *messageCopied;
@property (readonly, nonatomic) char hasLinkClicked;
@property (retain, nonatomic) EDPBInteractionEventLinkClicked *linkClicked;
@property (readonly, nonatomic) char hasAppLaunch;
@property (retain, nonatomic) EDPBInteractionEventAppLaunch *appLaunch;
@property (readonly, nonatomic) char hasAppBackground;
@property (retain, nonatomic) EDPBInteractionEventAppBackground *appBackground;
@property (readonly, nonatomic) char hasAppResume;
@property (retain, nonatomic) EDPBInteractionEventAppResume *appResume;
@property (readonly, nonatomic) char hasFlagChanged;
@property (retain, nonatomic) EDPBInteractionEventFlagChanged *flagChanged;
@property (readonly, nonatomic) char hasReadChanged;
@property (retain, nonatomic) EDPBInteractionEventReadChanged *readChanged;
@property (readonly, nonatomic) char hasMessageViewStart;
@property (retain, nonatomic) EDPBInteractionEventMessageViewStart *messageViewStart;
@property (readonly, nonatomic) char hasMessageViewEnd;
@property (retain, nonatomic) EDPBInteractionEventMessageViewEnd *messageViewEnd;
@property (readonly, nonatomic) char hasReplyDraftStarted;
@property (retain, nonatomic) EDPBInteractionEventReplyDraftStarted *replyDraftStarted;
@property (readonly, nonatomic) char hasForwardDraftStarted;
@property (retain, nonatomic) EDPBInteractionEventForwardDraftStarted *forwardDraftStarted;
@property (readonly, nonatomic) char hasReplySent;
@property (retain, nonatomic) EDPBInteractionEventReplySent *replySent;
@property (readonly, nonatomic) char hasForwardSent;
@property (retain, nonatomic) EDPBInteractionEventForwardSent *forwardSent;
@property (readonly, nonatomic) char hasMarkedMuteThread;
@property (retain, nonatomic) EDPBInteractionEventMarkedMuteThread *markedMuteThread;
@property (readonly, nonatomic) char hasCategoryMarked;
@property (retain, nonatomic) EDPBInteractionEventCategoryMarked *categoryMarked;
@property (readonly, nonatomic) char hasCategoryInferred;
@property (retain, nonatomic) EDPBInteractionEventCategoryInferred *categoryInferred;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsEventName:(id)a0;
- (id)ed_oneOfConcreteEvent;
- (id)eventNameAsString:(int)a0;
- (int)messageFrameType;

@end
