@class NSDictionary, SmartStyleRendererTuning;

@interface SmartStyleRendererPlist : NSObject

@property (readonly, nonatomic) NSDictionary *tuningVariants;
@property (readonly, nonatomic) SmartStyleRendererTuning *defaultTuning;

- (void).cxx_destruct;
- (id)init;
- (int)readPlist:(id)a0;

@end
