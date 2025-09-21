@class NSArray, NSError;

@interface FIAPResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *historicalDataRequests;
@property (readonly, nonatomic) NSError *error;

+ (id)new;
+ (id)success;
+ (id)resultWithHistoricalDataRequests:(id)a0 error:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHistoricalDataRequests:(id)a0 error:(id)a1;
- (char)isEqualToResult:(id)a0;

@end
