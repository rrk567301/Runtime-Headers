@class NSString;

@interface NetworkTimeServer : NSObject {
    NSString *_descriptiveName;
    NSString *_address;
}

+ (id)serverWithConfigurationString:(id)a0;

- (void)setAddress:(id)a0;
- (void)dealloc;
- (id)address;
- (id)description;
- (id)descriptiveName;
- (id)configurationString;
- (id)initWithConfigurationString:(id)a0;
- (void)setDescriptiveName:(id)a0;

@end
