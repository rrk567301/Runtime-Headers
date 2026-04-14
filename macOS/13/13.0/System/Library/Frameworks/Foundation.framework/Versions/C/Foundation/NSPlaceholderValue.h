@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)autorelease;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (id)init;
- (const char *)objCType;
- (id)initWithCoder:(id)a0;
- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;

@end
