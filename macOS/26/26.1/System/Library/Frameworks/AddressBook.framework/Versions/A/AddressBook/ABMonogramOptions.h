@interface ABMonogramOptions : NSObject {
    id _impl;
}

+ (id)defaultOptions;
+ (id)optionsWithDiameter:(double)a0 backgroundStyle:(long long)a1;
+ (id)optionsWithDiameter:(double)a0;

- (id)borderColor;
- (id)initWithImpl:(id)a0;
- (id)impl;
- (id)backgroundColor;
- (id)foregroundColor;
- (double)diameter;
- (void).cxx_destruct;
- (BOOL)isVibrant;

@end
