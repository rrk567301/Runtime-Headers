@class NSString;

@interface CAREFeatureFlag : NSObject

@property (nonatomic) void /* function */ *setter;
@property (nonatomic) void /* function */ *getter;
@property (copy, nonatomic) NSString *customOutputWhenEnabled;
@property (copy, nonatomic) NSString *customOutputWhenDisabled;

+ (id)featureFlagWithSetter:(void /* function */ *)a0 andGetter:(void /* function */ *)a1;
+ (id)featureFlagWithSetter:(void /* function */ *)a0 andGetter:(void /* function */ *)a1 andCustomOutputWhenEnabled:(id)a2 andCustomOutputWhenDisabled:(id)a3;

- (void).cxx_destruct;

@end
