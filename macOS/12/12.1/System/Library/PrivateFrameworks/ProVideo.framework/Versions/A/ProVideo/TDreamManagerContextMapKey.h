@class NSOpenGLContext;

@interface TDreamManagerContextMapKey : NSObject <NSCopying> {
    NSOpenGLContext *_ctx;
}

+ (id)currentContextMapKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithCTX:(id)a0;

@end
