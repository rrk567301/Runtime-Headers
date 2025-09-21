@class NSString;

@interface UNSecurityScopedURL : NSURL {
    NSString *_sandboxExtensionClass;
}

+ (BOOL)supportsSecureCoding;

- (BOOL)_allowsDirectEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_issueSandboxExtension;
- (id)initFileURLWithPath:(id)a0 sandboxExtensionClass:(id)a1;

@end
