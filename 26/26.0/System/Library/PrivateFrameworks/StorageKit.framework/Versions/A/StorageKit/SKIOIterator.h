@interface SKIOIterator : SKIOObject

@property (nonatomic) unsigned long long attempt;
@property (readonly, nonatomic) BOOL invalidated;

- (id)initWithClassName:(id)a0;
- (unsigned int)copyNextObject;

@end
