@class NSString;

@interface TRINSExpressionAssignmentLanguage : TRIPBMessage

@property (copy, nonatomic) NSString *assignmentExpression;
@property (nonatomic) char hasAssignmentExpression;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic) char hasSchemaVersion;

+ (id)descriptor;

@end
