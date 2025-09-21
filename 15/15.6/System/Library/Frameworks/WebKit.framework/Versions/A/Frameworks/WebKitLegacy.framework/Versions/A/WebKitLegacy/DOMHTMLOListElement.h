@class NSString;

@interface DOMHTMLOListElement : DOMHTMLElement

@property char compact;
@property int start;
@property (copy) NSString *type;

- (char)reversed;
- (void)setReversed:(char)a0;

@end
