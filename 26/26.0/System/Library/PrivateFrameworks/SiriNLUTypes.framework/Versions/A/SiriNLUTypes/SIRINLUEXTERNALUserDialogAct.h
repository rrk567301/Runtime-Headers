@class SIRINLUEXTERNALUtteranceAlignment, SIRINLUEXTERNALDelegatedUserDialogAct, SIRINLUEXTERNALUserAcknowledged, SIRINLUEXTERNALUserRejected, SIRINLUEXTERNALUserWantedToProceed, SIRINLUEXTERNALUserWantedToPause, SIRINLUEXTERNALUserWantedToRepeat, SIRINLUEXTERNALUserAccepted, SIRINLUEXTERNALUserCancelled, SIRINLUEXTERNALUserStatedTask, SIRINLUEXTERNALUserWantedToUndo;

@interface SIRINLUEXTERNALUserDialogAct : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAccepted;
@property (retain, nonatomic) SIRINLUEXTERNALUserAccepted *accepted;
@property (readonly, nonatomic) BOOL hasRejected;
@property (retain, nonatomic) SIRINLUEXTERNALUserRejected *rejected;
@property (readonly, nonatomic) BOOL hasCancelled;
@property (retain, nonatomic) SIRINLUEXTERNALUserCancelled *cancelled;
@property (readonly, nonatomic) BOOL hasWantedToRepeat;
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToRepeat *wantedToRepeat;
@property (readonly, nonatomic) BOOL hasAcknowledged;
@property (retain, nonatomic) SIRINLUEXTERNALUserAcknowledged *acknowledged;
@property (readonly, nonatomic) BOOL hasWantedToProceed;
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToProceed *wantedToProceed;
@property (readonly, nonatomic) BOOL hasWantedToPause;
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToPause *wantedToPause;
@property (readonly, nonatomic) BOOL hasDelegated;
@property (retain, nonatomic) SIRINLUEXTERNALDelegatedUserDialogAct *delegated;
@property (readonly, nonatomic) BOOL hasUserStatedTask;
@property (retain, nonatomic) SIRINLUEXTERNALUserStatedTask *userStatedTask;
@property (readonly, nonatomic) BOOL hasWantedToUndo;
@property (retain, nonatomic) SIRINLUEXTERNALUserWantedToUndo *wantedToUndo;
@property (readonly, nonatomic) BOOL hasAlignment;
@property (retain, nonatomic) SIRINLUEXTERNALUtteranceAlignment *alignment;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
