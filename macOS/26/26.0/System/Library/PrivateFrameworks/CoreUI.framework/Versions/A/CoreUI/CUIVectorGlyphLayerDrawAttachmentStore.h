@class NSData;

@interface CUIVectorGlyphLayerDrawAttachmentStore : NSObject {
    NSData *_data;
}

@property (readonly, nonatomic) const struct CUIVectorGlyphLayerDrawAttachment **attachments;
@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (id)init;
- (void)_setupEmpty;
- (void)computeCapacity:(unsigned long long *)a0 numAttachments:(unsigned long long *)a1 withScanner:(id)a2 usingAttachmentDelimiter:(id)a3 fieldDelimiter:(id)a4 digits:(id)a5;
- (id)initFromSVGString:(id)a0 attachmentData:(id)a1;

@end
