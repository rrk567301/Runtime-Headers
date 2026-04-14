@class KHFrame, NSString, NSBundle, KHThemeDatabase;

@interface KHLayerFrame : KHFrame {
    KHFrame *_parentFrame;
    NSString *_layerFrameKey;
    NSBundle *_themeBundle;
    KHThemeDatabase *_themeDatabase;
}

- (void)dealloc;
- (id)database;
- (id)attributes;
- (BOOL)isPersisted;
- (id)parentFrame;
- (id)treatment;
- (void)persist;
- (id)parentLayout;
- (void)setParentFrame:(id)a0;
- (id)themeDB;
- (id)themeBundle;
- (void)writeValue:(id)a0 toField:(id)a1;
- (void)loadAttributes;
- (id)addAttributeValue:(id)a0 forKey:(id)a1 type:(id)a2;
- (id)setValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (void)setPrototypeValue:(id)a0 forKey:(id)a1 type:(id)a2 momentary:(BOOL)a3;
- (id)prototypeAttributeForKey:(id)a0;
- (BOOL)enableDefaultLeading;
- (void)deleteModel;
- (id)layerFrameForKey:(id)a0;
- (id)initWithParentFrame:(id)a0 masterTreatmentLayer:(id)a1 layerFrameKey:(id)a2;
- (id)layerFrameKey;
- (id)layerFrameAttributeKeyFromParentKey:(id)a0;
- (id)parentKeyFromLayerFrameAttributeKey:(id)a0;

@end
