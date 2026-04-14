@class PKVerificationChannel, NSString, NSArray, PKPassVerificationMethodGroup, NSDate, NSDictionary, NSMutableSet;

@interface PKVerificationRequestRecord : NSObject <NSSecureCoding> {
    NSDictionary *_requiredFieldData;
    NSMutableSet *_startedMethodIdentifiers;
    NSMutableSet *_completedMethodIdentifiers;
    NSDate *_inProgressMethodStart;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *currentStepIdentifier;
@property (copy, nonatomic) NSString *previousStepIdentifier;
@property (nonatomic) long long verificationStatus;
@property (copy, nonatomic) NSString *passUniqueID;
@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) NSArray *methodGroups;
@property (retain, nonatomic) PKPassVerificationMethodGroup *activeMethodGroup;
@property (copy, nonatomic) PKVerificationChannel *channel;
@property (copy, nonatomic) NSArray *allChannels;

+ (id)verificationRequestRecordForPass:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMethodInProgressMethodExpired;
- (BOOL)hasCompletedMethod:(id)a0;
- (BOOL)isMethodInProgress:(id)a0;
- (BOOL)isVerificationInProgress;
- (BOOL)isVerificationInProgressWithCompletedMethods;
- (void)recordCompletedMethodForMethodIdentifier:(id)a0;
- (void)recordCompletedMethods:(id)a0;
- (void)recordStartedMethods:(id)a0;
- (id)requiredVerificationFields;
- (void)setRequiredFieldData:(id)a0;

@end
