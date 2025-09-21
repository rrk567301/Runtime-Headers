@class NSString, NSMutableArray, TRIPBServiceOptions;

@interface TRIPBServiceDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (retain, nonatomic) NSMutableArray *methodArray;
@property (readonly, nonatomic) unsigned long long methodArray_Count;
@property (retain, nonatomic) TRIPBServiceOptions *options;
@property (nonatomic) char hasOptions;

+ (id)descriptor;

@end
