@class NSString;

@interface SKGCurrency : SKGEntity

@property (copy, nonatomic) NSString *amount;
@property (nonatomic) double value;
@property (nonatomic) unsigned long long code;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
