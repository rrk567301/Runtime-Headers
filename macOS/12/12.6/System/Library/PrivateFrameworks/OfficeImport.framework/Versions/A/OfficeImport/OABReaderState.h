@class ESDContainer, NSMutableDictionary, NSMutableArray;
@protocol OADColorPalette;

@interface OABReaderState : NSObject {
    Class mClient;
    NSMutableDictionary *mShapeIdMap;
    NSMutableDictionary *mEshContentIdMap;
    id<OADColorPalette> mColorPalette;
    NSMutableArray *mGroupStack;
}

@property (retain, nonatomic) ESDContainer *bstoreContainerHolder;

- (id)init;
- (void).cxx_destruct;
- (Class)client;
- (id)initWithClient:(Class)a0;
- (id)peekGroup;
- (id)drawableForShapeId:(int)a0;
- (void)setDrawable:(id)a0 forShapeId:(unsigned int)a1;
- (void)resetForNewDrawing;
- (void)pushGroup:(id)a0;
- (id)popGroup;
- (BOOL)isInsideGroup;
- (id)groupStackReference;
- (BOOL)useXmlBlobs;
- (id)contentObjectForId:(int)a0;
- (void)setContentObject:(id)a0 forId:(int)a1;
- (id)colorPalette;
- (void)setColorPalette:(id)a0;
- (int)groupDepth;
- (id)xmlDrawingState;

@end
