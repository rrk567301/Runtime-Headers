@class NSString;
@protocol AVTimeRangeMarkUIProvider;

@interface AVTimeRangeMark : NSObject

@property (readonly, nonatomic) float startValue;
@property (readonly, nonatomic) float endValue;
@property (readonly, nonatomic) NSString *identifer;
@property (readonly, weak, nonatomic) id<AVTimeRangeMarkUIProvider> markUIProvider;

+ (id)bufferedTimeRangeMarkWithStartValue:(float)a0 endValue:(float)a1;

- (void).cxx_destruct;
- (id)initWithStartValue:(float)a0 endValue:(float)a1 identifier:(id)a2;
- (id)initWithStartValue:(float)a0 endValue:(float)a1 identifier:(id)a2 markUIProvider:(id)a3;

@end
