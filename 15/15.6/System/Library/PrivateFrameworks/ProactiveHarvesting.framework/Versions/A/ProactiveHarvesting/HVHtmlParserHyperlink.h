@class NSURL;

@interface HVHtmlParserHyperlink : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (char)isEqualToHtmlParserHyperlink:(id)a0;

@end
