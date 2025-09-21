@class NSImage, NSAttributedString;

@interface NSCandidateBarCompositeCandidate : NSObject <NSCopying> {
    NSImage *_image;
    NSAttributedString *_attributedString;
    double _spacing;
    unsigned char _flags;
}

@property (readonly, copy) NSImage *image;
@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly) double spacing;

- (BOOL)hasContent;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)string;
- (id)description;
- (id)initWithImage:(id)a0 attributedString:(id)a1;
- (id)initWithImage:(id)a0 attributedString:(id)a1 spacing:(double)a2;
- (id)initWithImage:(id)a0 attributedString:(id)a1 spacing:(double)a2 isSimpleCandidate:(BOOL)a3 isEmojiCandidate:(BOOL)a4;
- (BOOL)isEmojiCandidate;
- (BOOL)isSimpleCandidate;

@end
