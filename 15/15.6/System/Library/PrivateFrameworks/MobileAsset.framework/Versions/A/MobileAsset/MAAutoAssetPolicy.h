@class NSDictionary;

@interface MAAutoAssetPolicy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char userInitiated;
@property (nonatomic) long long waitForNewestSecs;
@property (nonatomic) char interestAcrossTermination;
@property (nonatomic) char lockAcrossTermination;
@property (nonatomic) char lockAcrossReboot;
@property (nonatomic) char lockAcrossOTAUpdate;
@property (nonatomic) char lockInhibitsEmergencyRemoval;
@property (nonatomic) long long unlockAfterUsageSecs;
@property (nonatomic) long long preventGarbageCollectionSecs;
@property (retain, nonatomic) NSDictionary *additionalPolicyControl;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)newSummaryDictionary;

@end
