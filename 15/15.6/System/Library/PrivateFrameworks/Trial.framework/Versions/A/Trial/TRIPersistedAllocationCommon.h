@class TRIPBTimestamp;

@interface TRIPersistedAllocationCommon : TRIPBMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) char hasType;
@property (retain, nonatomic) TRIPBTimestamp *timestamp;
@property (nonatomic) char hasTimestamp;

+ (id)descriptor;

@end
