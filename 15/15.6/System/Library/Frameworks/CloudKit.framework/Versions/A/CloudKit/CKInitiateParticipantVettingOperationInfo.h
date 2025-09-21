@class NSString, CKShareMetadata;

@interface CKInitiateParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (copy, nonatomic) NSString *participantID;
@property (copy, nonatomic) NSString *address;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
