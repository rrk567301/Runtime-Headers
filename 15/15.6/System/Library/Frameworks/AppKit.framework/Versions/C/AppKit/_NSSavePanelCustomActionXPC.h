@interface _NSSavePanelCustomActionXPC : NSSavePanelCustomAction <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
