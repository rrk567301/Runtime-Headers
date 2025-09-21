@class NSString;

@interface AMUnknownXPCToken : AMXPCToken

@property (retain) NSString *objectDescription;
@property (retain) NSString *classDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
