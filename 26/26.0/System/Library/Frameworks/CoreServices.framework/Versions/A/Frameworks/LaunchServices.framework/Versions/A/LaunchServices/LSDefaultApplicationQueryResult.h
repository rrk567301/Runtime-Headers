@class NSDate;

@interface LSDefaultApplicationQueryResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) BOOL didRefresh;
@property (readonly, nonatomic) NSDate *refreshAfter;
@property (readonly, nonatomic, getter=isDefaultForCategory) BOOL defaultForCategory;

+ (id)queryResultForCategory:(unsigned long long)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithReferenceDate:(id)a0 didRefresh:(BOOL)a1 refreshAfter:(id)a2 defaultForCategory:(BOOL)a3;

@end
