@class NSString, NSImage;

@interface WBSStartPageCustomizationItem : NSObject

@property (readonly, nonatomic) id identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSImage *icon;
@property (readonly, nonatomic, getter=isEnabled) char enabled;

+ (id)itemWithIdentifier:(id)a0 enabled:(char)a1;
+ (id)itemWithIdentifier:(id)a0 title:(id)a1 icon:(id)a2 enabled:(char)a3;

- (id)description;
- (void).cxx_destruct;
- (id)itemWithEnabled:(char)a0;

@end
