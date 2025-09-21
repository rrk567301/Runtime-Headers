@class WFContextualAction, NSString, WFWorkflowRunViewSource, NSURL, NSDate, WFContextualActionContext, NSLocale;

@interface WFWorkflowRunningContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *workflowIdentifier;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *progressCategory;
@property (nonatomic) char allowsDialogNotifications;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) unsigned long long outputBehavior;
@property (retain, nonatomic) NSURL *outputRootIfRunningInFinder;
@property (retain, nonatomic) WFContextualAction *contextualAction;
@property (retain, nonatomic) WFContextualActionContext *contextualActionContext;
@property (readonly, nonatomic) char isShortcutsApp;
@property (copy, nonatomic) NSString *automationType;
@property (copy, nonatomic) NSString *rootWorkflowIdentifier;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *runKind;
@property (nonatomic, getter=isStepwise) char stepwise;
@property (nonatomic) char shouldForwardSiriActionRequests;
@property (nonatomic) char shouldForwardDialogRequests;
@property (copy, nonatomic) WFWorkflowRunViewSource *runViewSource;
@property (copy, nonatomic) NSString *originatingBundleIdentifier;
@property (copy, nonatomic) NSLocale *locale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeProgressSubscriber:(id)a0;
- (id)addProgressSubscriberUsingPublishingHandler:(id /* block */)a0;
- (id)copyWithCustomIdentity:(id)a0;
- (id)copyWithNewIdentity;
- (id)initWithWorkflowIdentifier:(id)a0;
- (id)progressForPublishingWithTotalUnitCount:(long long)a0 cancellationHandler:(id /* block */)a1;

@end
