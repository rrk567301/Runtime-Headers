@class NSString;

@interface WFActionButtonConfigurationEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *intentIdentifier;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (nonatomic) char success;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
