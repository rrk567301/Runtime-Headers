@class NSString, NSDate, WFWorkflowReference;

@interface WFWorkflowRunEvent : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) WFWorkflowReference *workflow;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *triggerID;
@property (readonly, nonatomic) long long outcome;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 workflow:(id)a1 source:(id)a2 date:(id)a3 triggerID:(id)a4 outcome:(long long)a5;

@end
