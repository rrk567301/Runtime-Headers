@class NSArray, NSMutableArray;

@interface PHASEEnvironmentalMetadata : NSObject

@property (retain, nonatomic) NSMutableArray *internalDirectionalElements;
@property (retain, nonatomic) NSArray *directionalElements;

- (id)initWithData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addDirectionalElement:(id)a0;
- (void)removeDirectionalElement:(id)a0;
- (id)serializeToFormat:(long long)a0;

@end
