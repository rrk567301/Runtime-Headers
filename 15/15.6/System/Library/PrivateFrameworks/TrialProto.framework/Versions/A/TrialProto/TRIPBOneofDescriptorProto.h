@class NSString, TRIPBOneofOptions;

@interface TRIPBOneofDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (retain, nonatomic) TRIPBOneofOptions *options;
@property (nonatomic) char hasOptions;

+ (id)descriptor;

@end
