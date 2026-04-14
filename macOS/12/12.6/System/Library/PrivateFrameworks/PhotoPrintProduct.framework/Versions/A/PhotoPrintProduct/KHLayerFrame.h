@class KHFrame, NSString, NSBundle, KHThemeDatabase;

@interface KHLayerFrame : KHFrame {
    KHFrame *_parentFrame;
    NSString *_layerFrameKey;
    NSBundle *_themeBundle;
    KHThemeDatabase *_themeDatabase;
}

- (void)dealloc;
- (id)attributes;
- (id)database;
- (BOOL)isPersisted;
- (id)parentFrame;
- (id)treatment;
- (void)persist;
- (id)parentLayout;
- (void)setParentFrame:(id)a0;
- (id)themeDB;
- (void)writeValue:(id)a0 toField:(id)a1;
- (id)themeBundle;
- (BOOL)enableDefaultLeading;
- (void)deleteModel;
- (void)loadAttributes;
- (id)setValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (id)addAttributeValue:(id)a0 forKey:(id)a1 type:(id)a2;
- (void)setPrototypeValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (id)prototypeAttributeForKey:(id)a0;
- (id)initWithParentFrame:(id)a0 masterTreatmentLayer:(id)a1 layerFrameKey:(id)a2;
- (id)layerFrameForKey:(id)a0;
- (id)parentKeyFromLayerFrameAttributeKey:(id)a0;
- (id)layerFrameAttributeKeyFromParentKey:(id)a0;
- (id)layerFrameKey;

@end
