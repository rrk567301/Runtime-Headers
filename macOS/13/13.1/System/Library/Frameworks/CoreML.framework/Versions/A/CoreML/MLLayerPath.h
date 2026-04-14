@class NSString, NSArray;

@interface MLLayerPath : NSObject <NSCopying>

@property (copy, nonatomic) NSString *layerName;
@property (copy, nonatomic) NSArray *scopedModelNames;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithScopedModelAndLayerName:(id)a0 layerName:(id)a1;
- (void)appendPathComponent:(id)a0;
- (BOOL)isEqualToMLLayerPath:(id)a0;

@end
