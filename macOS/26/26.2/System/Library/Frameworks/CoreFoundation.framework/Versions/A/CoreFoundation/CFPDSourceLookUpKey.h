@interface CFPDSourceLookUpKey : NSObject {
    struct __CFString { } *uncanonicalizedPath;
    struct __CFString { } *cloudPath;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;

@end
