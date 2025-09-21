@class QCTextRenderer, QCImagePort, QCNumberPort, QCStringPort, QCIndexPort;

@interface QCTextImage : QCPatch {
    QCStringPort *inputString;
    QCStringPort *inputFontName;
    QCNumberPort *inputGlyphSize;
    QCNumberPort *inputLeading;
    QCNumberPort *inputKerning;
    QCNumberPort *inputWidth;
    QCNumberPort *inputHeight;
    QCImagePort *outputImage;
    QCNumberPort *outputWidth;
    QCNumberPort *outputHeight;
    QCIndexPort *outputLineCount;
    QCIndexPort *outputGlyphCount;
    char _pixelUnits;
    QCTextRenderer *_renderer;
    unsigned int _target;
    unsigned long long _mipmapLevels;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (int)horizontalAlignment;
- (void)setFontName:(id)a0;
- (void)setHorizontalAlignment:(int)a0;
- (void)setVerticalAlignment:(int)a0;
- (int)verticalAlignment;
- (char)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setUsePixels:(char)a0;
- (char)usePixels;

@end
