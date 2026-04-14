@class NSString;

@interface SKGCurrency : SKGEntity

@property (copy, nonatomic) NSString *amount;
@property (nonatomic) double value;
@property (nonatomic) unsigned long long code;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
