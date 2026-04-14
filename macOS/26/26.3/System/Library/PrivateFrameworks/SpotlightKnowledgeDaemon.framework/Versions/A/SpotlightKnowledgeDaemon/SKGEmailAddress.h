@class NSString, NSArray;

@interface SKGEmailAddress : SKGEntity

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSArray *components;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
