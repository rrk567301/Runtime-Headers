@interface TSAPdfTaggerParagraphContext : TSAPdfTaggerContext

@property (readonly, nonatomic) char needsSpans;

- (id)initWithStateOfTagger:(id)a0 needsSpans:(char)a1;

@end
