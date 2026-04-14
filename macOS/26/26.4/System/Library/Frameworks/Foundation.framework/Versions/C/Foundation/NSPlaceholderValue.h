@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;

- (void)getValue:(void *)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (BOOL)_tryRetain;
- (const char *)objCType;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (id)retain;
- (id)init;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (unsigned long long)retainCount;

@end
