@class LACSSecurePassword;

@interface ODLACSSecurePassword : NSObject {
    LACSSecurePassword *_underlying;
}

- (id)initWithData:(id)a0 error:(id *)a1;
- (void)dealloc;

@end
