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

- (id)colorPalette;
- (id)initWithClient:(Class)a0;
- (Class)client;
- (void).cxx_destruct;
- (void)setColorPalette:(id)a0;
- (id)init;
- (id)xmlDrawingState;
- (id)contentObjectForId:(int)a0;
- (id)drawableForShapeId:(int)a0;
- (int)groupDepth;
- (id)groupStackReference;
- (BOOL)isInsideGroup;
- (id)peekGroup;
- (id)popGroup;
- (void)pushGroup:(id)a0;
- (void)resetForNewDrawing;
- (void)setContentObject:(id)a0 forId:(int)a1;
- (void)setDrawable:(id)a0 forShapeId:(unsigned int)a1;
- (BOOL)useXmlBlobs;

@end
