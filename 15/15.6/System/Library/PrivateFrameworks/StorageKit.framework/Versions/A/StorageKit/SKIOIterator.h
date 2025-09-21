@interface SKIOIterator : SKIOObject

@property (nonatomic) unsigned long long attempt;
@property (readonly, nonatomic) char invalidated;

- (unsigned int)copyNextObject;
- (id)initWithClassName:(id)a0;

@end
