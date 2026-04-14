@class NSString;

@interface _GCFStaticLocalizedString : GCFLocalizedString {
    NSString *_key;
    NSString *__realizedString;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)bundle;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (id)key;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)table;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (oneway void)release;
- (id)_realizedString;

@end
