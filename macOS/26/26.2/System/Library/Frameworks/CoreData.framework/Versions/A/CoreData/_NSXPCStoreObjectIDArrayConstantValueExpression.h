@interface _NSXPCStoreObjectIDArrayConstantValueExpression : NSObject <NSSecureCoding, NSCoding> {
    id _constantValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;

@end
