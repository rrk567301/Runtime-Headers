@class NSString;

@interface PFParallaxLayer : NSObject

@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) double zPosition;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char isForeground;
@property (readonly, nonatomic) char isBackground;
@property (readonly, nonatomic) char isBackfill;
@property (readonly, nonatomic) char isInactive;
@property (readonly, nonatomic) char isDebug;
@property (readonly, nonatomic) char isSettlingEffect;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (char)saveToURL:(id)a0 error:(id *)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zPosition:(double)a1 identifier:(id)a2;
- (char)isBackgroundLandscape;
- (char)isForegroundLandscape;
- (id)layerByUpdatingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeUniqueFileNameWithFileNames:(id)a0 orientation:(long long)a1;

@end
