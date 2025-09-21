@class NSData;

@interface TRIAnyPersistedTask : TRIPBMessage

@property (nonatomic) int type;
@property (nonatomic) char hasType;
@property (copy, nonatomic) NSData *serialized;
@property (nonatomic) char hasSerialized;

+ (id)descriptor;

@end
