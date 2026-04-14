@class NSString;

@interface VFXFileAsset : VFXCoreAsset {
    NSString *_filename;
}

@property (readonly, nonatomic) NSString *filename;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setFileName:(id)a0;
- (id)absolutePath;
- (void)dealloc;
- (void)setAbsolutePath:(id)a0;
- (id)initWithFileNamed:(id)a0 entityObject:(id)a1;
- (void)copyTo:(id)a0 withContext:(id)a1;
- (id)copyWithFilename:(id)a0;

@end
