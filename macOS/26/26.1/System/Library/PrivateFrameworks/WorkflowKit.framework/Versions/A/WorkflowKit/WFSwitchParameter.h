@class NSString;

@interface WFSwitchParameter : WFParameter

@property (class, readonly, nonatomic) NSString *defaultLocalizedOnDisplayName;
@property (class, readonly, nonatomic) NSString *defaultLocalizedOffDisplayName;

@property (readonly, nonatomic) NSString *localizedOnDisplayName;
@property (readonly, nonatomic) NSString *localizedOffDisplayName;

- (Class)singleStateClass;

@end
