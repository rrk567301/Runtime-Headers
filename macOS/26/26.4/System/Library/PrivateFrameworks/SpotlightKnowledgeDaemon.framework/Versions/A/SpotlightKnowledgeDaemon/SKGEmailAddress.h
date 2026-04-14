@class NSString, NSArray;

@interface SKGEmailAddress : SKGEntity

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSArray *components;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
