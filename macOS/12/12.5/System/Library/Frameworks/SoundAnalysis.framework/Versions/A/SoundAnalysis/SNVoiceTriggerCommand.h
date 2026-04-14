@class NSString;

@interface SNVoiceTriggerCommand : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long minDurationBlocks;
@property (readonly, nonatomic) double confidenceThreshold;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 error:(id *)a1;

@end
