@class NSString;

@interface SKGLink : SKGEntity

@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *domain;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
