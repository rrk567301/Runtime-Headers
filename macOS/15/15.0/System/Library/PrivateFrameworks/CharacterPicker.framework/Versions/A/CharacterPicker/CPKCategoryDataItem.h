@class NSString, NSImage;

@interface CPKCategoryDataItem : NSObject

@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSImage *image;
@property (copy, nonatomic) NSString *localizedIdentifier;

+ (id)itemWithAccessibilityIdentifier:(id)a0 identifier:(id)a1 image:(id)a2 localizedIdentifier:(id)a3;

- (void).cxx_destruct;

@end
