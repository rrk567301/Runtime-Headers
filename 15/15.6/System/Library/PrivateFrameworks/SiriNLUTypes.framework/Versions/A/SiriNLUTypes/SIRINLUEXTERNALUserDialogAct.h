@class SIRINLUEXTERNALUtteranceAlignment, SIRINLUEXTERNALDelegatedUserDialogAct, SIRINLUEXTERNALUserAcknowledged, SIRINLUEXTERNALUserRejected, SIRINLUEXTERNALUserWantedToProceed, SIRINLUEXTERNALUserWantedToPause, SIRINLUEXTERNALUserWantedToRepeat, SIRINLUEXTERNALUserAccepted, SIRINLUEXTERNALUserCancelled, SIRINLUEXTERNALUserStatedTask, SIRINLUEXTERNALUserWantedToUndo;

@interface SIRINLUEXTERNALUserDialogAct : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasAccepted;
@property (retain, nonatomic) SIRINLUEXTERNALUserAccepted *accepted;
@property (readonly, nonatomic) char hasRejected;
@property (retain, nonatomic) SIRINLUEXTERNALUserRejected *rejected;
@property (readonly, nonatomic) char hasCancelled;
@property (retain, nonatomic) SIRINLUEXTERNALUserCancelled *cancelled;
@property (readonly, nonatomic) char hasWantedToRepeat;
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToRepeat *wantedToRepeat;
@property (readonly, nonatomic) char hasAcknowledged;
@property (retain, nonatomic) SIRINLUEXTERNALUserAcknowledged *acknowledged;
@property (readonly, nonatomic) char hasWantedToProceed;
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToProceed *wantedToProceed;
@property (readonly, nonatomic) char hasWantedToPause;
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToPause *wantedToPause;
@property (readonly, nonatomic) char hasDelegated;
@property (retain, nonatomic) SIRINLUEXTERNALDelegatedUserDialogAct *delegated;
@property (readonly, nonatomic) char hasUserStatedTask;
@property (retain, nonatomic) SIRINLUEXTERNALUserStatedTask *userStatedTask;
@property (readonly, nonatomic) char hasWantedToUndo;
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToUndo *wantedToUndo;
@property (readonly, nonatomic) char hasAlignment;
@property (retain, nonatomic) SIRINLUEXTERNALUtteranceAlignment *alignment;

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
