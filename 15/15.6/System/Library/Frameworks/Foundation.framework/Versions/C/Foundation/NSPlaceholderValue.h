@interface NSPlaceholderValue : NSNumber {
    struct _NSZone { } *zoneForInstance;
}

+ (char)supportsSecureCoding;

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (id)autorelease;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (const char *)objCType;
- (void)getValue:(void *)a0;
- (id)initWithCoder:(id)a0;
- (void)getValue:(void *)a0 size:(unsigned long long)a1;
- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;

@end
