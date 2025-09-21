@class NSMutableArray, NSString, CCQuicklookContext, CCTextureQuicklook;

@interface CCTextureGroup : NSObject <CCVisitable, NSCopying> {
    CCQuicklookContext *_context;
    CCTextureQuicklook *_mainTexture;
    NSMutableArray *_textures;
    NSMutableArray *_buttonNames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addMainTexture:(id)a0 buttonName:(id)a1;
- (void)addTexture:(id)a0 buttonName:(id)a1;
- (id)initWithContext:(id)a0 textures:(id)a1 buttons:(id)a2;

@end
