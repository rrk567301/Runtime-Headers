@class NSDate;

@interface LSDefaultApplicationQueryResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) char didRefresh;
@property (readonly, nonatomic) NSDate *refreshAfter;
@property (readonly, nonatomic, getter=isDefaultForCategory) char defaultForCategory;

+ (id)queryResultForCategory:(unsigned long long)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReferenceDate:(id)a0 didRefresh:(char)a1 refreshAfter:(id)a2 defaultForCategory:(char)a3;

@end
