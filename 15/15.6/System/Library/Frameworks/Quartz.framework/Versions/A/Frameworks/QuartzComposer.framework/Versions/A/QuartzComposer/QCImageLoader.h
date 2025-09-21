@class NSData, NSString, QCPort;

@interface QCImageLoader : QCPatch {
    char _allImages;
    char _fillBackground;
    QCPort *_outputPort;
    NSData *_imageData;
    char _colorCorrection;
    unsigned int _target;
    unsigned long long _mipmapLevels;
    NSString *_sourcePath;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (char)canInstantiateWithFile:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)instantiateWithFile:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (id)imageData;
- (char)_updateImage;
- (id)sourcePath;
- (void)setImageData:(id)a0;
- (void)setImagePath:(id)a0;
- (char)setup:(id)a0;
- (void)_configureImage:(id)a0;
- (void)reloadDataFromPath;
- (void)setAllImages:(char)a0;
- (void)setColorCorrection:(char)a0;
- (void)setFillBackground:(char)a0;

@end
