@class NSArray;

@interface CKFetchShareParticipantsOperationInfo : CKOperationInfo <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *userIdentityLookupInfos;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
