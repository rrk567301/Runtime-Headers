@class NSString;

@interface WBSCyclerStatus : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *activeTestSuiteName;
@property (readonly, nonatomic) unsigned long long seed;
@property (readonly, nonatomic, getter=isConnectedToTestTarget) char connectedToTestTarget;
@property (readonly, nonatomic, getter=isRunning) char running;
@property (readonly, nonatomic) unsigned long long iterationCount;
@property (readonly, nonatomic) double executionTime;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActiveTestSuiteName:(id)a0 seed:(unsigned long long)a1 isConnectedToTestTarget:(char)a2 isRunning:(char)a3 iterationCount:(unsigned long long)a4 executionTime:(double)a5;

@end
