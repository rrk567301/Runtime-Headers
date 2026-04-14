@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;

- (const char *)objCType;
- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (void)getValue:(void *)a0;
- (BOOL)_tryRetain;
- (void)dealloc;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)autorelease;
- (id)init;

@end
