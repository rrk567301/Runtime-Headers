@class NSString;

@interface FMDSharedConfigurationEntry : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *disclaimer;

- (void).cxx_destruct;
- (id)init;

@end
