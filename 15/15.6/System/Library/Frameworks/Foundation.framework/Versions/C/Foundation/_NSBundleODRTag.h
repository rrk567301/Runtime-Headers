@interface _NSBundleODRTag : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property double preservationPriority;
@property char alwaysPreserved;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
