@class NSString, CCQuicklookContext;
@protocol MTLTexture;

@interface CCTextureQuicklook : NSObject <CCVisitable, NSCopying> {
    CCQuicklookContext *_context;
}

@property (retain, nonatomic) id<MTLTexture> texture;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *filename;
@property (nonatomic) long long colorSpace;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long colorLUT;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedBlitter;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fileExtension;
- (void).cxx_destruct;
- (id)initWithTexture:(id)a0 colorSpace:(long long)a1 format:(unsigned long long)a2 colorLUT:(unsigned long long)a3 name:(id)a4 context:(id)a5;
- (id)textureHTML;
- (void)visitTextureMetadata:(id)a0;

@end
