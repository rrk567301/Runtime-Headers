@class TRIPBExtensionRangeOptions;

@interface TRIPBDescriptorProto_ExtensionRange : TRIPBMessage

@property (nonatomic) int start;
@property (nonatomic) char hasStart;
@property (nonatomic) int end;
@property (nonatomic) char hasEnd;
@property (retain, nonatomic) TRIPBExtensionRangeOptions *options;
@property (nonatomic) char hasOptions;

+ (id)descriptor;

@end
