@class FBProcessExecutableSlice, NSArray, NSDictionary, NSURL, NSString, RBSProcessIdentity;
@protocol FBProcessWatchdogProviding;

@interface FBProcessExecutionContext : NSObject <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSArray *arguments;
@property (copy, nonatomic) NSDictionary *environment;
@property (retain, nonatomic) NSURL *standardOutputURL;
@property (retain, nonatomic) NSURL *standardErrorURL;
@property (nonatomic) char waitForDebugger;
@property (nonatomic) char disableASLR;
@property (nonatomic) char checkForLeaks;
@property (nonatomic) char forSceneActivation;
@property (nonatomic) long long launchIntent;
@property (retain, nonatomic) id<FBProcessWatchdogProviding> watchdogProvider;
@property (nonatomic) double watchdogExtension;
@property (copy, nonatomic) NSString *overrideExecutablePath;
@property (retain, nonatomic) FBProcessExecutableSlice *overrideExecutableSlice;
@property (copy, nonatomic) RBSProcessIdentity *identity;
@property (copy, nonatomic) id /* block */ completion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0;
- (id)_initWithExecutionContext:(id)a0;
- (id)copyOrUpdateForSceneActivationWithSettings:(id)a0;

@end
