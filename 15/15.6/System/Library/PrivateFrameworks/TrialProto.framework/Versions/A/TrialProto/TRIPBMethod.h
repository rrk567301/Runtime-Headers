@class NSString, NSMutableArray;

@interface TRIPBMethod : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *requestTypeURL;
@property (nonatomic) char requestStreaming;
@property (copy, nonatomic) NSString *responseTypeURL;
@property (nonatomic) char responseStreaming;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (readonly, nonatomic) unsigned long long optionsArray_Count;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
