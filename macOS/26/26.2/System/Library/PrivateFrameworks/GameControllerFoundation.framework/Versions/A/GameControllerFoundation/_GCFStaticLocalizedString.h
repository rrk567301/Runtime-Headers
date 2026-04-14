@class NSString;

@interface _GCFStaticLocalizedString : GCFLocalizedString {
    NSString *_key;
    NSString *__realizedString;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)redactedDescription;
- (id)retain;
- (BOOL)_isDeallocating;
- (id)bundle;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)table;
- (id)key;
- (void)dealloc;
- (id)_realizedString;

@end
