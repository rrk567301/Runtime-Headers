@class NSArray, NSError;

@interface FIAPResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *historicalDataRequests;
@property (readonly, nonatomic) NSError *error;

+ (id)new;
+ (id)success;
+ (id)resultWithHistoricalDataRequests:(id)a0 error:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHistoricalDataRequests:(id)a0 error:(id)a1;
- (BOOL)isEqualToResult:(id)a0;

@end
