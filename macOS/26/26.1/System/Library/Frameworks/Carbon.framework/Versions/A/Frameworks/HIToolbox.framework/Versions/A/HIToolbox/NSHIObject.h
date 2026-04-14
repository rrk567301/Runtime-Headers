@interface NSHIObject : NSObject {
    unsigned char buffer[24];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)retain;
- (unsigned long long)hash;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)_cfTypeID;
- (BOOL)retainWeakReference;
- (void)encodeWithCoder:(id)a0;
- (BOOL)allowsWeakReference;
- (id)initWithCoder:(id)a0;

@end
