@class NSString, TRIPBEnumValueOptions;

@interface TRIPBEnumValueDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (nonatomic) int number;
@property (nonatomic) char hasNumber;
@property (retain, nonatomic) TRIPBEnumValueOptions *options;
@property (nonatomic) char hasOptions;

+ (id)descriptor;

@end
