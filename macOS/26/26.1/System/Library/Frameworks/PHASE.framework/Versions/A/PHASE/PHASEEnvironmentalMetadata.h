@class NSArray, NSMutableArray;

@interface PHASEEnvironmentalMetadata : NSObject

@property (retain, nonatomic) NSMutableArray *internalDirectionalElements;
@property (retain, nonatomic) NSArray *directionalElements;

- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addDirectionalElement:(id)a0;
- (void)removeDirectionalElement:(id)a0;
- (id)serializeToFormat:(long long)a0;

@end
