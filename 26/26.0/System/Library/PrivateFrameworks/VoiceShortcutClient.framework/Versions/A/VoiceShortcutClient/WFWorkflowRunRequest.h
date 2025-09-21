@class NSData, NSString, WFContentCollection, WFWorkflowRunViewSource, NSURL, NSXPCListenerEndpoint, NSDictionary, NSSet;

@interface WFWorkflowRunRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *archivedInput;
@property (retain, nonatomic) WFContentCollection *cachedInput;
@property (nonatomic) unsigned long long presentationMode;
@property (readonly, nonatomic) id queueIdentifier;
@property (retain, nonatomic) NSURL *urlNeedingAccess;
@property (nonatomic) unsigned long long presentationMode;
@property (readonly, nonatomic) id queueIdentifier;
@property (retain, nonatomic) NSURL *urlNeedingAccess;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) WFWorkflowRunViewSource *runViewSource;
@property (copy, nonatomic) NSString *parentBundleIdentifier;
@property (copy, nonatomic) NSString *automationType;
@property (copy, nonatomic) NSString *firingTriggerID;
@property (nonatomic) BOOL isAutomationSuggestion;
@property (readonly, nonatomic, getter=isStepwise) BOOL stepwise;
@property (copy, nonatomic) NSString *trialID;
@property (copy, nonatomic) NSDictionary *listenerEndpoints;
@property (nonatomic) unsigned long long outputBehavior;
@property (nonatomic) BOOL allowsDialogNotifications;
@property (nonatomic) BOOL allowsHandoff;
@property (nonatomic) BOOL handlesDialogRequests;
@property (nonatomic) BOOL handlesSiriActionRequests;
@property (nonatomic) BOOL donateInteraction;
@property (nonatomic) BOOL logRunEvent;
@property (retain, nonatomic) NSString *parentRunningContextIdentifier;
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteDialogPresenterEndpoint;
@property (copy, nonatomic) NSSet *extensionResourceClasses;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0 presentationMode:(unsigned long long)a1;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)unableToDecodeInputError;

@end
