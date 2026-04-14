@class NSString, NSArray;

@interface SKGEmailAddress : SKGEntity

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSArray *components;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
