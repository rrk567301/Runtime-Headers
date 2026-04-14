@interface _GCFLocalizedPlaceholderString : GCFLocalizedString

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (id)autorelease;
- (oneway void)release;
- (id)key;
- (id)_realizedString;

@end
