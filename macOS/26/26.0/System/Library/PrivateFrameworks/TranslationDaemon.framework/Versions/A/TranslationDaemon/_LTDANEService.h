@interface _LTDANEService : NSObject

@property (class, retain) Class dataProvider;

+ (long long)capability;
+ (void)initialize;
+ (long long)capabilityForSubType:(id)a0 error:(id *)a1;

@end
