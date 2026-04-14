@class NSString, NSDictionary;

@interface PXGShaderSource : NSObject <NSCopying> {
    NSDictionary *_sourceByShaderFunction;
}

@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) NSString *otherSource;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) long long length;

- (id)initWithSource:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (void)_parseShader;
- (id)sourceForShaderFunction:(id)a0;

@end
