@class NSString;

@interface DOMHTMLScriptElement : DOMHTMLElement

@property (copy) NSString *text;
@property (copy) NSString *htmlFor;
@property (copy) NSString *event;
@property (copy) NSString *charset;
@property char defer;
@property (copy) NSString *src;
@property (copy) NSString *type;

- (id)nonce;
- (void)setNonce:(id)a0;
- (void)setCrossOrigin:(id)a0;
- (char)async;
- (id)crossOrigin;
- (void)setAsync:(char)a0;

@end
