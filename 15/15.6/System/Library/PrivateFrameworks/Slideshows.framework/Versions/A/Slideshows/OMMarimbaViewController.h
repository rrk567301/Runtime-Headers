@class MPDocument, MRMarimbaView;

@interface OMMarimbaViewController : OFNSViewController

@property (retain) MPDocument *document;
@property (readonly) MRMarimbaView *marimbaView;
@property char stretchableWithoutReauthoring;

+ (void)initialize;

- (void)dealloc;
- (id)init;

@end
