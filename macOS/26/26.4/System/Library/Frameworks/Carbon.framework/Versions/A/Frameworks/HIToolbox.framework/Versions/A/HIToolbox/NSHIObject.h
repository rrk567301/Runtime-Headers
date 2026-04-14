@interface NSHIObject : NSObject {
    unsigned char buffer[24];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)encodeWithCoder:(id)a0;
- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (unsigned long long)retainCount;

@end
