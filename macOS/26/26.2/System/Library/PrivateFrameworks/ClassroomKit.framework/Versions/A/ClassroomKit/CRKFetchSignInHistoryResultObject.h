@class NSArray, NSString;

@interface CRKFetchSignInHistoryResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *history;
@property (nonatomic) BOOL isTruncated;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long historyVersion;
@property (copy, nonatomic) NSString *ownerAppleID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
