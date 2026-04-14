@class NSString, NSUUID, NSArray;

@interface MADAutoAssetSoftwareUpdateSuspendResumeState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *build;
@property (readonly, nonatomic) BOOL suspendedSetConfigurationsFromPreviousOS;
@property (readonly, nonatomic) BOOL suspendedSetConfigurationsHasCurrentNonce;
@property (readonly, retain, nonatomic) NSUUID *nonce;
@property (nonatomic) long long status;
@property (readonly, retain, nonatomic) NSArray *setConfigurationsToEvict;

+ (BOOL)clear;
+ (id)_currentState;
+ (id)_nonceFileURL;
+ (id)_stateFileURL;
+ (long long)currentStatusWithStateHandle:(id *)a0;
+ (BOOL)writeNewSuspendingStateWithNonce:(id)a0 setConfigurationsToEvict:(id)a1;

- (BOOL)write;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)initWithCoder:(id)a0;
- (id)initWithNonce:(id)a0 status:(long long)a1 setConfigurationsToEvict:(id)a2;

@end
