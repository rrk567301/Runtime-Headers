@interface TRIPBDescriptorProto_ReservedRange : TRIPBMessage

@property (nonatomic) int start;
@property (nonatomic) char hasStart;
@property (nonatomic) int end;
@property (nonatomic) char hasEnd;

+ (id)descriptor;

@end
