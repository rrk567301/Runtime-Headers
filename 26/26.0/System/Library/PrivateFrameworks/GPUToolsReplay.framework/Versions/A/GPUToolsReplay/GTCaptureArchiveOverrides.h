@class NSDictionary, NSArray;

@interface GTCaptureArchiveOverrides : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *filenameOverrides;
@property (retain) NSDictionary *heapTextureRestoreOverrides;
@property (retain) NSArray *heapExtractedTextures;
@property (retain) NSDictionary *reverseAliasMap;
@property (retain) NSDictionary *heapAccelerationStructures;
@property (readonly) BOOL isEmpty;

+ (id)allowedClasses;

- (id)jsonDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
