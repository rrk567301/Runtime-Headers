@class NSString, NSDictionary;

@interface ASDAUStripInfo : ASDDSPItemInfo

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSDictionary *value;

+ (char)containsOnlyAUStrips:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 resourcePath:(id)a1;

@end
