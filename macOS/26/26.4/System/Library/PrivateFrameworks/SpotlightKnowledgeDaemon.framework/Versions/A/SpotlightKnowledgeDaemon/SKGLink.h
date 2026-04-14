@class NSString;

@interface SKGLink : SKGEntity

@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *domain;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
