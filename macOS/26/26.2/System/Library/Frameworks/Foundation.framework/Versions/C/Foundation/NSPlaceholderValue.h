@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;

- (void)getValue:(void *)a0;
- (const char *)objCType;
- (id)retain;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (oneway void)release;
- (id)init;
- (void)dealloc;

@end
