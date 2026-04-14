@class NSString;

@interface ADMNetworkTimeServer : NSObject {
    NSString *_descriptiveName;
    NSString *_address;
}

+ (id)serverWithConfigurationString:(id)a0;

- (id)address;
- (void)setAddress:(id)a0;
- (id)description;
- (void)dealloc;
- (id)descriptiveName;
- (id)configurationString;
- (id)initWithConfigurationString:(id)a0;
- (void)setDescriptiveName:(id)a0;

@end
