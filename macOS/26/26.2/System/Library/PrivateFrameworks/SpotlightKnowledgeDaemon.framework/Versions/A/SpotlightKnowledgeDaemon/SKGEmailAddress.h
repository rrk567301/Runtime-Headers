@class NSString, NSArray;

@interface SKGEmailAddress : SKGEntity

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSArray *components;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
