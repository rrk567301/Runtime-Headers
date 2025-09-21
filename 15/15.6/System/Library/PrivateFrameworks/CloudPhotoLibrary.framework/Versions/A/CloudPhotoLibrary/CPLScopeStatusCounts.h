@class NSDictionary;

@interface CPLScopeStatusCounts : NSObject <NSSecureCoding> {
    char _hasCachedSummaries;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *countPerFlags;
@property (readonly, nonatomic) unsigned long long countOfSharingRecords;
@property (readonly, nonatomic) unsigned long long countOfUnsharingRecords;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_computeSummariesIfNecessary;
- (id)initWithFlagsCounts:(id)a0;

@end
