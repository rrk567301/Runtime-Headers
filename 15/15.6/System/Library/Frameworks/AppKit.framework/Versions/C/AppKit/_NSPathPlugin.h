@interface _NSPathPlugin : _NSValueBinderPlugin

+ (char)isUsableWithObject:(id)a0;

- (Class)_valueClass:(id)a0;
- (char)acceptsMarker:(id)a0 binding:(id)a1 overrideWithPlaceholderIfDefined:(char *)a2;
- (void)showValue:(id)a0 inObject:(id)a1;

@end
