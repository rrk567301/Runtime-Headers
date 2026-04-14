@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (BOOL)supportsSecureCoding;

- (void)getValue:(void *)a0;
- (const char *)objCType;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)retain;
- (id)init;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)initWithCoder:(id)a0;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (void)dealloc;
- (oneway void)release;

@end
