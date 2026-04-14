@class NSString, NSURL, NSDate;

@interface WFWorkflowRunningContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *workflowIdentifier;
@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *progressCategory;
@property (nonatomic) BOOL allowsDialogNotifications;
@property (nonatomic) unsigned long long outputBehavior;
@property (retain, nonatomic) NSURL *outputRootIfRunningInFinder;
@property (readonly, nonatomic) BOOL isShortcutsApp;
@property (copy, nonatomic) NSString *automationType;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *originatingBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)removeProgressSubscriber:(id)a0;
- (id)initWithWorkflowIdentifier:(id)a0;
- (id)addProgressSubscriberUsingPublishingHandler:(id /* block */)a0;
- (id)progressForPublishingWithTotalUnitCount:(long long)a0 cancellationHandler:(id /* block */)a1;

@end
