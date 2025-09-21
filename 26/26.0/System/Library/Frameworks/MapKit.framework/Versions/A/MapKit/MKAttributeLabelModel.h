@class NSImage, NSString;

@interface MKAttributeLabelModel : NSObject

@property (retain, nonatomic) NSImage *logo;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double logoVerticalOffset;
@property (retain, nonatomic) NSString *providerName;

- (id)attributedString;
- (void).cxx_destruct;

@end
