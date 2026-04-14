@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (const char *)objCType;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (void)getValue:(void *)a0;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (id)initWithCoder:(id)a0;
- (oneway void)release;

@end
