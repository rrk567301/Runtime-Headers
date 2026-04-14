@class NSString, NSMutableArray, OADBlip;

@interface OADBlipRef : NSObject <NSCopying> {
    int mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}

+ (id)blipRefWithIndex:(int)a0 name:(id)a1 blip:(id)a2 effects:(id)a3;
+ (id)blipRefWithIndex:(int)a0 name:(id)a1 blip:(id)a2;
+ (int)blipTypeForExtension:(id)a0;
+ (int)blipTypeForContentType:(id)a0;
+ (int)blipTypeForImageData:(id)a0;
+ (id)inflatedExtensionForGzippedExtension:(id)a0;

- (id)name;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setIndex:(int)a0;
- (int)index;
- (id)effects;
- (void)setEffects:(id)a0;
- (unsigned long long)effectCount;
- (BOOL)isNull;
- (void)addEffect:(id)a0;
- (id)initWithIndex:(int)a0 name:(id)a1 blip:(id)a2 effects:(id)a3;
- (id)initWithIndex:(int)a0 name:(id)a1 blip:(id)a2;
- (id)blip;
- (void)setBlip:(id)a0;
- (id)effectAtIndex:(unsigned long long)a0;
- (void)removeEffectAtIndex:(unsigned long long)a0;

@end
