@interface AVTPresentationConfiguration : NSObject {
    unsigned long long _style;
}

- (id)init;
- (id)_initWithStyle:(unsigned long long)a0;
- (unsigned long long)internalStyle;
- (char)usesAR;

@end
