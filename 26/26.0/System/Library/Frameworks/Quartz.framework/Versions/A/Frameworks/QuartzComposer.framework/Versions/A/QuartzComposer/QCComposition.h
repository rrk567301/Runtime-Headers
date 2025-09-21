@class NSArray, NSDictionary, NSString;

@interface QCComposition : NSObject <NSCopying> {
    NSArray *_protocols;
    NSDictionary *_attributes;
    NSArray *_inputKeys;
    NSArray *_outputKeys;
    id _backing;
    NSString *_identifier;
    double _timestamp;
    BOOL _stateOK;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)compositionWithData:(id)a0;
+ (id)compositionWithFile:(id)a0;
+ (id)compositionWithURL:(id)a0;
+ (BOOL)isCompositionIdentity:(id)a0;

- (id)filePath;
- (id)identifier;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)composition;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)inputKeys;
- (id)outputKeys;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)attributes;
- (double)_timestamp;
- (id)_backing;
- (id)protocols;
- (id)_initWithBacking:(id)a0;
- (id)_makePatch;
- (void)_reclaimResources;
- (BOOL)_stateOK;
- (id)defaultInputParameters;
- (id)initWithComposition:(id)a0;
- (id)initWithCompositionFile:(id)a0 safeMode:(BOOL)a1 requiredProtocol:(id)a2;
- (id)initWithPatchName:(id)a0;
- (id)patch;

@end
