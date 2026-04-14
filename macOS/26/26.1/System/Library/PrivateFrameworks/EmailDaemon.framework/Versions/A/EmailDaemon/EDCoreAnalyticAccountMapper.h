@class NSArray, NSDate;

@interface EDCoreAnalyticAccountMapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSDate *date;
@property (retain, nonatomic) NSArray *accounts;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)indexOfAccountId:(id)a0;

@end
