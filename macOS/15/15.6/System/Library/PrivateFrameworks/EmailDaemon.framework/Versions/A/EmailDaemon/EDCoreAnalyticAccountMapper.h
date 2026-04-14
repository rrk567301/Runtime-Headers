@class NSArray, NSDate;

@interface EDCoreAnalyticAccountMapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSDate *date;
@property (retain, nonatomic) NSArray *accounts;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)indexOfAccountId:(id)a0;

@end
