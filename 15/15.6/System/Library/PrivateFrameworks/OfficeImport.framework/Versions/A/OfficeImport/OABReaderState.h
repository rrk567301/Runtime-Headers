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
- (id)colorPalette;
- (void)setColorPalette:(id)a0;
- (id)xmlDrawingState;
- (id)contentObjectForId:(int)a0;
- (id)drawableForShapeId:(int)a0;
- (int)groupDepth;
- (id)groupStackReference;
- (char)isInsideGroup;
- (id)peekGroup;
- (id)popGroup;
- (void)pushGroup:(id)a0;
- (void)resetForNewDrawing;
- (void)setContentObject:(id)a0 forId:(int)a1;
- (void)setDrawable:(id)a0 forShapeId:(unsigned int)a1;
- (char)useXmlBlobs;

@end
