@class NSMutableDictionary;

@interface CHSMutableDynamicColor : CHSDynamicColor {
    NSMutableDictionary *_mutableColors;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addColor:(id)a0 forColorScheme:(unsigned long long)a1 displayGamut:(unsigned long long)a2;

@end
