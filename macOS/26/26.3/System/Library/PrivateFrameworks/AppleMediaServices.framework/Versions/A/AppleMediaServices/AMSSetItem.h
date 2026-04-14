@class NSString;

@interface AMSSetItem : NSObject

@property (readonly) id object;
@property (readonly) NSString *hashKey;

+ (id)setItemWithObject:(id)a0 hashKey:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithObject:(id)a0 hashKey:(id)a1;

@end
