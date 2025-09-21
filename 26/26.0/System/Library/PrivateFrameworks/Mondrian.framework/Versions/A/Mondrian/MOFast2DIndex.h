@interface MOFast2DIndex : NSNumber {
    unsigned long long _hash;
}

@property (readonly, nonatomic) unsigned int item;
@property (readonly, nonatomic) unsigned int section;

+ (id)numberWithUnsignedLongLong:(unsigned long long)a0;
+ (id)indexForItem:(unsigned int)a0 inSection:(unsigned int)a1;

- (id)initWithBytes:(const void *)a0 objCType:(const char *)a1;
- (const char *)objCType;
- (id)indexPath;
- (void)getValue:(void *)a0;
- (id)initWithUnsignedLongLong:(unsigned long long)a0;
- (unsigned long long)unsignedLongLongValue;
- (id)initWithItem:(unsigned int)a0 inSection:(unsigned int)a1;

@end
