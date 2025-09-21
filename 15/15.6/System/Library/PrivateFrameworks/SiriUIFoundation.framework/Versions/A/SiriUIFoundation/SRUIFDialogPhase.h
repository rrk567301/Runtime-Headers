@class NSString;

@interface SRUIFDialogPhase : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=_type) long long type;
@property (readonly, nonatomic, getter=isTemporary) char temporary;
@property (readonly, nonatomic, getter=isExpository) char expository;
@property (readonly, nonatomic, getter=isConfirmationDialogPhase) char confirmationDialogPhase;
@property (readonly, nonatomic, getter=isReflectionDialogPhase) char reflectionDialogPhase;
@property (readonly, nonatomic, getter=isClarificationDialogPhase) char clarificationDialogPhase;
@property (readonly, nonatomic, getter=isConfirmedDialogPhase) char confirmedDialogPhase;
@property (readonly, nonatomic, getter=isCancelledDialogPhase) char cancelledDialogPhase;
@property (readonly, nonatomic, getter=isUserRequestDialogPhase) char userRequestDialogPhase;
@property (readonly, nonatomic, getter=isErrorDialogPhase) char errorDialogPhase;
@property (readonly, nonatomic, getter=isCompletionDialogPhase) char completionDialogPhase;
@property (readonly, nonatomic, getter=isSummaryDialogPhase) char summaryDialogPhase;
@property (readonly, nonatomic) NSString *aceDialogPhaseValue;

+ (id)_dialogPhaseWithType:(long long)a0;
+ (id)acknowledgementDialogPhase;
+ (id)cancelledDialogPhase;
+ (id)clarificationDialogPhase;
+ (id)completionDialogPhase;
+ (id)confirmationDialogPhase;
+ (id)confirmedDialogPhase;
+ (id)dialogPhaseForAceDialogPhase:(id)a0;
+ (id)errorDialogPhase;
+ (id)reflectionDialogPhase;
+ (id)statusDialogPhase;
+ (id)summaryDialogPhase;
+ (id)userRequestDialogPhase;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithType:(long long)a0;
- (char)replacesPreviousSnippetContents;
- (char)isEqualToDialogPhase:(id)a0;
- (char)isPossiblyPartOfMultiTurnRequest;

@end
