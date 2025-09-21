@class NSArray, NSString;

@interface CRKFetchSignInHistoryResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *history;
@property (nonatomic) char isTruncated;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long historyVersion;
@property (copy, nonatomic) NSString *ownerAppleID;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
