@interface TRIPersistedTaskCapabilityModifier : TRIPBMessage

@property (nonatomic) unsigned long long add;
@property (nonatomic) char hasAdd;
@property (nonatomic) unsigned long long remove;
@property (nonatomic) char hasRemove;

+ (id)descriptor;

@end
