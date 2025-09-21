@class NSImage, NSColor;

@interface CalDrawOccurrenceColorImage : NSObject

@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) NSColor *mainColor;
@property (readonly, nonatomic) NSColor *stripeColor;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 mainColor:(id)a1 stripeColor:(id)a2;

@end
