@class NSString;

@interface AMSSetItem : NSObject

@property (readonly) id object;
@property (readonly) NSString *hashKey;

+ (id)setItemWithObject:(id)a0 hashKey:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithObject:(id)a0 hashKey:(id)a1;

@end
