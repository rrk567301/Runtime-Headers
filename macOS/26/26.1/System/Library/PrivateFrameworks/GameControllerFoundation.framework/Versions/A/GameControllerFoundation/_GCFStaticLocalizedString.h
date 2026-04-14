@class NSString;

@interface _GCFStaticLocalizedString : GCFLocalizedString {
    NSString *_key;
    NSString *__realizedString;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)bundle;
- (id)retain;
- (oneway void)release;
- (id)key;
- (unsigned long long)retainCount;
- (id)table;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)autorelease;
- (id)redactedDescription;
- (id)_realizedString;

@end
