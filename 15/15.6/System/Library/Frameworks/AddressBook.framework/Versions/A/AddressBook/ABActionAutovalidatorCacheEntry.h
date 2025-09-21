@interface ABActionAutovalidatorCacheEntry : NSObject {
    char _validation;
}

@property (readonly, nonatomic) unsigned long long hitCount;

- (id)description;
- (id)init;
- (id)initWithValidation:(char)a0;
- (char)validateMenuItem:(id)a0 withTarget:(id)a1;

@end
