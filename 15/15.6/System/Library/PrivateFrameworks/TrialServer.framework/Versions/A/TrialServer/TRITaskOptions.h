@interface TRITaskOptions : TRIPBMessage

@property (nonatomic) char isManuallyTargeted;
@property (nonatomic) char hasIsManuallyTargeted;

+ (id)descriptor;

@end
