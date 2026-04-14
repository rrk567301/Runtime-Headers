@interface AMActionPropertyListXPCToken : AMXPCToken

@property (retain) id propertyList;

+ (BOOL)supportsSecureCoding;

- (id)initWithPropertyList:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
