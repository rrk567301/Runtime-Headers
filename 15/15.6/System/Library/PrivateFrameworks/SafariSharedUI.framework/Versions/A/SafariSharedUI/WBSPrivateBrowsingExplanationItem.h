@class NSImage, NSString;

@interface WBSPrivateBrowsingExplanationItem : NSObject

@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic, getter=isLimitedToPrivateBrowsing) char limitedToPrivateBrowsing;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *title;

+ (id)itemsForConfiguration:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithImage:(id)a0 title:(id)a1 message:(id)a2 limitedToPrivateBrowsing:(char)a3;
- (id)_initWithSymbolName:(id)a0 title:(id)a1 message:(id)a2 limitedToPrivateBrowsing:(char)a3;

@end
