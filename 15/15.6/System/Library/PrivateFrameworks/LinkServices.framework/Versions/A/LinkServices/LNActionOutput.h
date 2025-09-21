@class NSUUID, LNValue, LNDialog, NSArray, LNAttribution, LNAction, NSString, LNConfirmationActionName, LNUndoContext, LNViewSnippet;

@interface LNActionOutput : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) LNAction *showOutputAction;
@property (readonly, nonatomic) long long showOutputActionHint;
@property (readonly, nonatomic) unsigned long long showOutputActionOptions;
@property (readonly, nonatomic) LNDialog *dialog;
@property (readonly, nonatomic) LNViewSnippet *viewSnippet;
@property (readonly, nonatomic) LNAttribution *attribution;
@property (readonly, nonatomic) LNValue *value;
@property (readonly, nonatomic, getter=isDeferred) char deferred;
@property (readonly, nonatomic) LNAction *nextAction;
@property (readonly, nonatomic) NSArray *suggestedFollowUpActions;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, nonatomic) LNConfirmationActionName *confirmationActionName;
@property (readonly, nonatomic, getter=shouldShowPrompt) char showPrompt;
@property (readonly, nonatomic) long long confirmationConditions;
@property (readonly, nonatomic) LNUndoContext *undoContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 viewSnippet:(id)a2 attribution:(id)a3 value:(id)a4 showOutputAction:(id)a5 showOutputActionHint:(long long)a6 showOutputActionOptions:(unsigned long long)a7 deferred:(char)a8 nextAction:(id)a9 suggestedFollowUpActions:(id)a10 activityIdentifier:(id)a11 confirmationActionName:(id)a12 showPrompt:(char)a13 confirmationConditions:(long long)a14 undoContext:(id)a15;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 viewSnippet:(id)a2 value:(id)a3 showOutputAction:(id)a4 deferred:(char)a5 nextAction:(id)a6 confirmationActionName:(id)a7;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 viewSnippet:(id)a2 value:(id)a3 showOutputAction:(id)a4 deferred:(char)a5 nextAction:(id)a6 confirmationActionName:(id)a7 showPrompt:(char)a8;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 viewSnippet:(id)a2 value:(id)a3 showOutputAction:(id)a4 showOutputActionHint:(long long)a5 deferred:(char)a6 nextAction:(id)a7 activityIdentifier:(id)a8 confirmationActionName:(id)a9 showPrompt:(char)a10;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 viewSnippet:(id)a2 value:(id)a3 showOutputAction:(id)a4 showOutputActionHint:(long long)a5 deferred:(char)a6 nextAction:(id)a7 confirmationActionName:(id)a8 showPrompt:(char)a9 undoContext:(id)a10;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 viewSnippet:(id)a2 value:(id)a3 showOutputAction:(id)a4 showOutputActionHint:(long long)a5 deferred:(char)a6 nextAction:(id)a7 suggestedFollowUpActions:(id)a8 activityIdentifier:(id)a9 confirmationActionName:(id)a10 showPrompt:(char)a11 confirmationConditions:(long long)a12 undoContext:(id)a13;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 viewSnippet:(id)a2 value:(id)a3 showOutputAction:(id)a4 showOutputActionHint:(long long)a5 showOutputActionOptions:(unsigned long long)a6 deferred:(char)a7 nextAction:(id)a8 suggestedFollowUpActions:(id)a9 activityIdentifier:(id)a10 confirmationActionName:(id)a11 showPrompt:(char)a12 confirmationConditions:(long long)a13 undoContext:(id)a14;

@end
