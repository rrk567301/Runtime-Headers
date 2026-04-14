@class NSString, NSArray;

@interface MLLayerPath : NSObject <NSCopying>

@property (copy, nonatomic) NSString *layerName;
@property (copy, nonatomic) NSArray *scopedModelNames;

- (void)appendPathComponent:(id)a0;
- (id)initWithScopedModelAndLayerName:(id)a0 layerName:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToMLLayerPath:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;

@end
