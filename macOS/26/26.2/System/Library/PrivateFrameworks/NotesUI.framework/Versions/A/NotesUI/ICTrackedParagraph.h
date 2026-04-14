@class ICTTParagraphStyle;

@interface ICTrackedParagraph : NSObject

@property (retain, nonatomic) ICTTParagraphStyle *paragraph;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;

- (void).cxx_destruct;
- (id)description;

@end
