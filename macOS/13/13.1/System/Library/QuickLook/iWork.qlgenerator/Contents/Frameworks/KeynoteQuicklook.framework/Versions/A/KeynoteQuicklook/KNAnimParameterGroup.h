@class NSString, KNAnimParameterSavedGroup;

@interface KNAnimParameterGroup : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) KNAnimParameterSavedGroup *savedGroup;
@property (copy, nonatomic) NSString *fileName;

+ (id)parameterGroupForName:(id)a0;
+ (void)p_loadAllParametersIfNecessary;
+ (id)mediaTimingFunctionForPath:(id)a0 reversed:(BOOL)a1;
+ (id)linearPath;
+ (id)easeInEaseOutPath;
+ (id)easeInPath;
+ (id)easeOutPath;

- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)initWithFileName:(id)a0;
- (double)doubleForAnimationCurve:(id)a0 atPercent:(double)a1;
- (id)pathForAnimationCurve:(id)a0;
- (id)mediaTimingFunctionForAnimationCurve:(id)a0;
- (id)mediaTimingFunctionForAnimationCurve:(id)a0 reversed:(BOOL)a1;
- (void)p_loadParameters;

@end
