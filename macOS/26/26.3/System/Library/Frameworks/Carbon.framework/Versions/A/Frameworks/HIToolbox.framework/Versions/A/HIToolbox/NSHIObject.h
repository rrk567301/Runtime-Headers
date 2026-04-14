@interface NSHIObject : NSObject {
    unsigned char buffer[24];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (id)retain;
- (BOOL)allowsWeakReference;
- (BOOL)retainWeakReference;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (oneway void)release;

@end
