@class NSArray, NSDate;

@interface _PSSiriHandleRankerPredictionContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDate *suggestionDate;
@property (copy, nonatomic) NSArray *bundleIds;
@property long long domain;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
