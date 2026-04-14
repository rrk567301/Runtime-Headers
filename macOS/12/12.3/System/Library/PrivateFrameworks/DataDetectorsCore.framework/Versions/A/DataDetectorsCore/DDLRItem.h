@class DDLocation, DDProduction;

@interface DDLRItem : NSObject

@property (retain) DDProduction *production;
@property int pos;
@property long long dotedProductionIndex;
@property int weight;
@property (readonly) DDLocation *location;
@property (readonly) long long productionIndex;

- (void)dealloc;
- (id)description;
- (id)initWithDotedProduction:(struct __DDDotedProduction { struct __DDProduction *x0; unsigned char x1; unsigned int x2; unsigned short x3; } *)a0;

@end
