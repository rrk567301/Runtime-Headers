@interface TYUsagePair : NSObject

@property (nonatomic) unsigned char usagePage;
@property (nonatomic) unsigned short usage;

+ (id)usagePairWithUsagePage:(unsigned char)a0 usage:(unsigned short)a1;

- (id)description;
- (id)initWithUsagePage:(unsigned char)a0 usage:(unsigned short)a1;

@end
