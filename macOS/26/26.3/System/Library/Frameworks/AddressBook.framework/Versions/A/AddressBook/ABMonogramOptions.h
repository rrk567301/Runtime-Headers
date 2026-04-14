@interface ABMonogramOptions : NSObject {
    id _impl;
}

+ (id)defaultOptions;
+ (id)optionsWithDiameter:(double)a0 backgroundStyle:(long long)a1;
+ (id)optionsWithDiameter:(double)a0;

- (id)foregroundColor;
- (id)impl;
- (BOOL)isVibrant;
- (double)diameter;
- (id)borderColor;
- (id)backgroundColor;
- (id)initWithImpl:(id)a0;
- (void).cxx_destruct;

@end
