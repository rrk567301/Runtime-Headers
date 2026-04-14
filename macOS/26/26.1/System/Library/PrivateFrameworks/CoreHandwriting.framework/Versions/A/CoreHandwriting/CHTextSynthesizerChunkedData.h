@class NSArray, NSString;

@interface CHTextSynthesizerChunkedData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *dataChunks;
@property (readonly) NSString *originalString;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)chunkForOneShotRefine;
- (id)chunkForOneShotReplace;
- (id)initWithDataChunks:(id)a0 originalString:(id)a1;
- (id)koreanRefineUnsupportedCharacterSet;
- (id)latinVariantCharacterSet;

@end
