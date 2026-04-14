@class NSString;

@interface WFWorkflowDatabaseRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;

- (id)kind;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1;

@end
