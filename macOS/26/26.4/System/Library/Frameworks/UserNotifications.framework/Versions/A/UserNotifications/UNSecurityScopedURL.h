@class NSString;

@interface UNSecurityScopedURL : NSURL {
    NSString *_sandboxExtensionClass;
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_allowsDirectEncoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_issueSandboxExtension;
- (id)initFileURLWithPath:(id)a0 sandboxExtensionClass:(id)a1;

@end
