@class NSString;

@interface SKGLink : SKGEntity

@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *domain;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
