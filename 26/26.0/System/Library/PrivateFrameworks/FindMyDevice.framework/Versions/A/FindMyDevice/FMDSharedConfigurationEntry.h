@class NSString;

@interface FMDSharedConfigurationEntry : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *disclaimer;

- (id)init;
- (void).cxx_destruct;

@end
