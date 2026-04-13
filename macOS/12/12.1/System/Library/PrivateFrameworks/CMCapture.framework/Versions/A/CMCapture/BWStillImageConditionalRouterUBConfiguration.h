@class NSArray;

@interface BWStillImageConditionalRouterUBConfiguration : BWStillImageConditionalRouterConfiguration

@property (readonly, nonatomic) NSArray *portTypes;

+ (id)configurationWithPortTypes:(id)a0;

- (void)dealloc;
- (id)initWithPortTypes:(id)a0;
- (unsigned long long)outputIndexForPortType:(id)a0;

@end
