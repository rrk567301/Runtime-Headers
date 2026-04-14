@class NSString;

@interface SKGCurrency : SKGEntity

@property (copy, nonatomic) NSString *amount;
@property (nonatomic) double value;
@property (nonatomic) unsigned long long code;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
