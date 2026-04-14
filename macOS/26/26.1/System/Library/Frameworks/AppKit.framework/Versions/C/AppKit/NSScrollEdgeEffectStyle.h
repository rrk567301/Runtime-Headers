@interface NSScrollEdgeEffectStyle : NSObject

@property (class, nonatomic, readonly) NSScrollEdgeEffectStyle *automaticStyle;
@property (class, nonatomic, readonly) NSScrollEdgeEffectStyle *softStyle;
@property (class, nonatomic, readonly) NSScrollEdgeEffectStyle *hardStyle;

@property (nonatomic, readonly) unsigned long long _equivalentAccessoryBarBackgroundValue;

+ (id)fromAccessoryBarBackgroundValue:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)init;

@end
