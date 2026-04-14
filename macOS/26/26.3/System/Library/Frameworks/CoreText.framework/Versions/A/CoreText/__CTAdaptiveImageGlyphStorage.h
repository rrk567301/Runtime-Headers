@class NSData, NSString;

@interface __CTAdaptiveImageGlyphStorage : NSObject {
    NSData *_fallbackImageData;
    NSData *_RTFDImageData;
}

@property (readonly) NSData *imageContent;
@property (readonly) NSString *contentIdentifier;
@property (readonly) NSString *imageDescription;
@property (readonly) struct CGImageSource { } *imageSourceRef;
@property (readonly) NSData *_fallbackImageData;
@property (readonly) NSData *_RTFDImageData;
@property (retain, nonatomic, setter=_setNominalTextAttachment:) id _nominalTextAttachment;

+ (id)adaptiveImageGlyphStorageWithContentIdentifier:(id)a0 imageContent:(id)a1;
+ (void)flushInstanceCache;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImageContent:(id)a0;

@end
