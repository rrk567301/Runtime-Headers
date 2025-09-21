@class NSArray;

@interface WCAFetchSQLiteResponse : WCAFetchResponse

@property (copy, nonatomic) NSArray *records;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRecords:(id)a0;

@end
