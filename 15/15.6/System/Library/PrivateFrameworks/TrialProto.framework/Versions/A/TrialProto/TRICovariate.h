@class NSString;

@interface TRICovariate : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (copy, nonatomic) NSString *typedAssignmentTreeName;
@property (nonatomic) char hasTypedAssignmentTreeName;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (nonatomic) unsigned int schemaVersion;
@property (nonatomic) char hasSchemaVersion;

+ (id)descriptor;

@end
