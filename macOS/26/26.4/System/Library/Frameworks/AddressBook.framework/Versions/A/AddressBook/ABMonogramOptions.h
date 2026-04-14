@interface ABMonogramOptions : NSObject {
    id _impl;
}

+ (id)defaultOptions;
+ (id)optionsWithDiameter:(double)a0 backgroundStyle:(long long)a1;
+ (id)optionsWithDiameter:(double)a0;

- (id)foregroundColor;
- (id)initWithImpl:(id)a0;
- (id)impl;
- (BOOL)isVibrant;
- (void).cxx_destruct;
- (id)borderColor;
- (double)diameter;
- (id)backgroundColor;

@end
