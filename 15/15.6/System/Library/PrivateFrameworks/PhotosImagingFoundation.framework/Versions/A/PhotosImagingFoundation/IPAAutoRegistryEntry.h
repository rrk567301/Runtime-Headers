@interface IPAAutoRegistryEntry : NSObject

@property (retain, nonatomic) Class autoSettingsClass;
@property (nonatomic) char persistable;

- (void).cxx_destruct;

@end
