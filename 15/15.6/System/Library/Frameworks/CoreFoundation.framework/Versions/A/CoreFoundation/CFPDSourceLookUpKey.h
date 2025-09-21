@interface CFPDSourceLookUpKey : NSObject {
    struct __CFString { } *uncanonicalizedPath;
    struct __CFString { } *cloudPath;
}

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;

@end
