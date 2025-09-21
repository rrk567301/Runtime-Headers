@class NSString;

@interface WFRunActionEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *shortcutSource;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *externalBundleIdentifier;
@property (copy, nonatomic) NSString *externalActionIdentifier;
@property (nonatomic) char completed;
@property (nonatomic) char didRunRemotely;
@property (copy, nonatomic) NSString *automationType;
@property (nonatomic) char isInvalidatedSystemAction;
@property (copy, nonatomic) NSString *galleryIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
