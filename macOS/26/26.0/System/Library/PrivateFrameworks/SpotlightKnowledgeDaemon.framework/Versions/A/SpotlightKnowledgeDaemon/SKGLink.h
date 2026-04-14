@class NSString;

@interface SKGLink : SKGEntity

@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *domain;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
