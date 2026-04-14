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
+ (BOOL)isCompositionIdentity:(id)a0;
+ (id)compositionWithFile:(id)a0;
+ (id)compositionWithData:(id)a0;
+ (id)compositionWithURL:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (id)filePath;
- (double)_timestamp;
- (id)attributes;
- (id)_backing;
- (id)protocols;
- (id)inputKeys;
- (id)outputKeys;
- (id)composition;
- (id)patch;
- (id)initWithCompositionFile:(id)a0 safeMode:(BOOL)a1 requiredProtocol:(id)a2;
- (BOOL)_stateOK;
- (void)_reclaimResources;
- (id)initWithComposition:(id)a0;
- (id)_makePatch;
- (id)_initWithBacking:(id)a0;
- (id)initWithPatchName:(id)a0;
- (id)defaultInputParameters;

@end
