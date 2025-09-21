@interface ABMonogramOptions : NSObject {
    id _impl;
}

+ (id)defaultOptions;
+ (id)optionsWithDiameter:(double)a0 backgroundStyle:(long long)a1;
+ (id)optionsWithDiameter:(double)a0;

- (id)impl;
- (id)foregroundColor;
- (id)borderColor;
- (id)backgroundColor;
- (id)initWithImpl:(id)a0;
- (double)diameter;
- (BOOL)isVibrant;
- (void).cxx_destruct;

@end
