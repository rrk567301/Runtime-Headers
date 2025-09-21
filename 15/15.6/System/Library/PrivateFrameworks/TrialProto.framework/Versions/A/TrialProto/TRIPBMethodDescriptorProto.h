@class NSString, TRIPBMethodOptions;

@interface TRIPBMethodDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (copy, nonatomic) NSString *inputType;
@property (nonatomic) char hasInputType;
@property (copy, nonatomic) NSString *outputType;
@property (nonatomic) char hasOutputType;
@property (retain, nonatomic) TRIPBMethodOptions *options;
@property (nonatomic) char hasOptions;
@property (nonatomic) char clientStreaming;
@property (nonatomic) char hasClientStreaming;
@property (nonatomic) char serverStreaming;
@property (nonatomic) char hasServerStreaming;

+ (id)descriptor;

@end
