@class NSString;

@interface _GCFStaticLocalizedString : GCFLocalizedString {
    NSString *_key;
    NSString *__realizedString;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)autorelease;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)bundle;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (id)key;
- (id)initWithCoder:(id)a0;
- (oneway void)release;
- (id)table;
- (id)redactedDescription;
- (id)_realizedString;

@end
