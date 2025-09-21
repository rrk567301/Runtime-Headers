@interface AMActionPropertyListXPCToken : AMXPCToken

@property (retain) id propertyList;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPropertyList:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
