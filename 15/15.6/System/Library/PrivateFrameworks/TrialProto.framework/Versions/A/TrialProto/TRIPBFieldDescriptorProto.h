@class NSString, TRIPBFieldOptions;

@interface TRIPBFieldDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) int number;
@property (nonatomic) char hasNumber;
@property (nonatomic) int label;
@property (nonatomic) char hasLabel;
@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (copy, nonatomic) NSString *typeName;
@property (nonatomic) char hasTypeName;
@property (copy, nonatomic) NSString *extendee;
@property (nonatomic) char hasExtendee;
@property (copy, nonatomic) NSString *defaultValue;
@property (nonatomic) char hasDefaultValue;
@property (nonatomic) int oneofIndex;
@property (nonatomic) char hasOneofIndex;
@property (copy, nonatomic) NSString *jsonName;
@property (nonatomic) char hasJsonName;
@property (retain, nonatomic) TRIPBFieldOptions *options;
@property (nonatomic) char hasOptions;

+ (id)descriptor;

@end
