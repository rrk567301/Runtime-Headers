@class NSString;

@interface _GCFStaticLocalizedString : GCFLocalizedString {
    NSString *_key;
    NSString *__realizedString;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)key;
- (BOOL)_tryRetain;
- (id)autorelease;
- (id)bundle;
- (BOOL)_isDeallocating;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (oneway void)release;
- (Class)classForCoder;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)table;
- (id)_realizedString;

@end
