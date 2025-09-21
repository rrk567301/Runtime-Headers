@class NSString, NSArray;

@interface SKGEmailAddress : SKGEntity

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSArray *components;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
