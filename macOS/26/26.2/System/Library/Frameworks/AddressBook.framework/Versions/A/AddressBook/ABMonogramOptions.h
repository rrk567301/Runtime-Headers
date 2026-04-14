@interface ABMonogramOptions : NSObject {
    id _impl;
}

+ (id)defaultOptions;
+ (id)optionsWithDiameter:(double)a0 backgroundStyle:(long long)a1;
+ (id)optionsWithDiameter:(double)a0;

- (id)foregroundColor;
- (id)initWithImpl:(id)a0;
- (id)borderColor;
- (id)impl;
- (void).cxx_destruct;
- (double)diameter;
- (id)backgroundColor;
- (BOOL)isVibrant;

@end
