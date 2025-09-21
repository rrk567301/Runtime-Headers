@class NSString, NSData, NSURL, NSMutableArray, NSNumber;

@interface MLCompilerOptions : NSObject

@property (retain, nonatomic) NSMutableArray *warnings;
@property char trainWithMLCompute;
@property char dryRun;
@property (retain) NSString *platform;
@property (retain) NSString *platformVersion;
@property char containerIsCloud;
@property char allowsPixelBufferDirectBinding;
@property char encryptModel;
@property (copy) NSNumber *keyInfoVersion;
@property (copy) NSString *keyID;
@property (copy) NSData *key;
@property char usesCodeSigningIdentityForEncryption;
@property (copy) NSData *iv;
@property (copy) NSData *sinf;
@property (copy) NSData *mlsinf;
@property (copy) NSURL *specURL;
@property int mlProgramAddDuringCompilationMode;
@property char allowMultipleInputsWithEnumeratedShapes;

+ (id)defaultOptions;

- (id)init;
- (void).cxx_destruct;

@end
