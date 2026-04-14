@class NSString, NSMutableArray, OADBlip;

@interface OADBlipRef : NSObject <NSCopying> {
    int mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}

+ (id)blipRefWithIndex:(int)a0 name:(id)a1 blip:(id)a2;
+ (int)blipTypeForContentType:(id)a0;
+ (int)blipTypeForExtension:(id)a0;
+ (int)blipTypeForImageData:(id)a0;
+ (id)blipRefWithIndex:(int)a0 name:(id)a1 blip:(id)a2 effects:(id)a3;
+ (id)inflatedExtensionForGzippedExtension:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (int)index;
- (void)setIndex:(int)a0;
- (unsigned long long)effectCount;
- (BOOL)isNull;
- (void)addEffect:(id)a0;
- (id)effectAtIndex:(unsigned long long)a0;
- (void)setEffects:(id)a0;
- (id)initWithIndex:(int)a0 name:(id)a1 blip:(id)a2;
- (id)effects;
- (id)initWithIndex:(int)a0 name:(id)a1 blip:(id)a2 effects:(id)a3;
- (id)blip;
- (void)setBlip:(id)a0;
- (void)removeEffectAtIndex:(unsigned long long)a0;

@end
