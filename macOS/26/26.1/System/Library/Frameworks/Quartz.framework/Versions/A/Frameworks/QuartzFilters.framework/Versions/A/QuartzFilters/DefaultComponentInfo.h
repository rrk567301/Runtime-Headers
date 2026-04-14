@class NSArray, NSMutableArray;

@interface DefaultComponentInfo : QComponentInfoTuple

@property (retain) NSArray *grayNames;
@property (retain) NSArray *rgbNames;
@property (retain) NSArray *cmykNames;
@property (retain) NSMutableArray *profileTuples;

- (void)dealloc;
- (void)reset;
- (id)init;

@end
