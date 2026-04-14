@class NSMutableDictionary;

@interface CHSMutableDynamicColor : CHSDynamicColor {
    NSMutableDictionary *_mutableColors;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)addColor:(id)a0 forColorScheme:(unsigned long long)a1 displayGamut:(unsigned long long)a2;

@end
