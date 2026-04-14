@class NSString, NSArray;

@interface MLLayerPath : NSObject <NSCopying>

@property (copy, nonatomic) NSString *layerName;
@property (copy, nonatomic) NSArray *scopedModelNames;

- (id)initWithScopedModelAndLayerName:(id)a0 layerName:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqualToMLLayerPath:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendPathComponent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
