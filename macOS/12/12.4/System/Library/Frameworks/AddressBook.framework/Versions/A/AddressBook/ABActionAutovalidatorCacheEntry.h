@interface ABActionAutovalidatorCacheEntry : NSObject {
    BOOL _validation;
}

@property (readonly, nonatomic) unsigned long long hitCount;

- (id)description;
- (id)init;
- (BOOL)validateMenuItem:(id)a0 withTarget:(id)a1;
- (id)initWithValidation:(BOOL)a0;

@end
