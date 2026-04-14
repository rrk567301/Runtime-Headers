@class NSDictionary;

@interface CPLScopeStatusCounts : NSObject <NSSecureCoding> {
    BOOL _hasCachedSummaries;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *countPerFlags;
@property (readonly, nonatomic) unsigned long long countOfSharingRecords;
@property (readonly, nonatomic) unsigned long long countOfUnsharingRecords;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFlagsCounts:(id)a0;
- (void)_computeSummariesIfNecessary;

@end
