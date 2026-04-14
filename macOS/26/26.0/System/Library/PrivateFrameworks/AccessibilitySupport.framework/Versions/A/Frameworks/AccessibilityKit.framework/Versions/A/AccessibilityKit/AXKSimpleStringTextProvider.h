@class NSString, AXFTextRange;

@interface AXKSimpleStringTextProvider : NSObject <AXKTextProviding>

@property (copy, nonatomic) NSString *_content;
@property (readonly, nonatomic) AXFTextRange *contentRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)substringWithRange:(id)a0;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;

@end
