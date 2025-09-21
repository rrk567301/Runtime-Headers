@class WFWorkflowRunViewSource, NSString, WFContentCollection, NSData, NSDictionary, NSXPCListenerEndpoint, NSSet;

@interface WFWorkflowRunRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *archivedInput;
@property (retain, nonatomic) WFContentCollection *cachedInput;
@property (nonatomic) unsigned long long presentationMode;
@property (readonly, nonatomic) id queueIdentifier;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) WFWorkflowRunViewSource *runViewSource;
@property (copy, nonatomic) NSString *parentBundleIdentifier;
@property (copy, nonatomic) NSString *automationType;
@property (nonatomic) char isAutomationSuggestion;
@property (readonly, nonatomic, getter=isStepwise) char stepwise;
@property (copy, nonatomic) NSString *trialID;
@property (copy, nonatomic) NSDictionary *listenerEndpoints;
@property (nonatomic) unsigned long long outputBehavior;
@property (nonatomic) char allowsDialogNotifications;
@property (nonatomic) char allowsHandoff;
@property (nonatomic) char handlesDialogRequests;
@property (nonatomic) char handlesSiriActionRequests;
@property (nonatomic) char donateInteraction;
@property (nonatomic) char logRunEvent;
@property (retain, nonatomic) NSString *parentRunningContextIdentifier;
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteDialogPresenterEndpoint;
@property (copy, nonatomic) NSSet *extensionResourceClasses;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInput:(id)a0 presentationMode:(unsigned long long)a1;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)unableToDecodeInputError;

@end
