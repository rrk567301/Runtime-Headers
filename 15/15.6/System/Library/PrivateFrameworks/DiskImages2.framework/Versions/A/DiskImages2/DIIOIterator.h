@interface DIIOIterator : DIIOObject

@property (nonatomic) char startedOver;

- (unsigned int)copyNextObject;
- (id)initWithIOIterator:(unsigned int)a0 retain:(char)a1;

@end
