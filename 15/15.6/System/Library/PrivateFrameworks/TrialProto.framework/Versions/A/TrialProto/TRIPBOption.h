@class NSString, TRIPBAny;

@interface TRIPBOption : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TRIPBAny *value;
@property (nonatomic) char hasValue;

+ (id)descriptor;

@end
