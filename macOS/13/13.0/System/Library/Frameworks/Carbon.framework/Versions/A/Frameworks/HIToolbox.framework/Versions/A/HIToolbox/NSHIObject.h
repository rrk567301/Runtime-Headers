@interface NSHIObject : NSObject {
    unsigned char buffer[24];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)_cfTypeID;

@end
