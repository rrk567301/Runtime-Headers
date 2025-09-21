@class NSString;

@interface TRIProvisionalFactorpackMetadata : TRIPBMessage

@property (copy, nonatomic) NSString *factorPackId;
@property (nonatomic) char hasFactorPackId;
@property (nonatomic) char rejected;
@property (nonatomic) char hasRejected;
@property (nonatomic) unsigned int attempts;
@property (nonatomic) char hasAttempts;

+ (id)descriptor;

@end
