@class NSString, NSMutableDictionary;

@interface _CDPerfMetricFamily : NSObject

@property (readonly) NSMutableDictionary *perfMetrics;
@property (readonly) NSString *name;

+ (id)perfMetricFamilyWithName:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;
- (id)allPerfMetrics;
- (id)perfMetricWithName:(id)a0;
- (id)perfMetricWithName:(id)a0 string:(id)a1;

@end
