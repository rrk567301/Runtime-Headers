@class NSString, NSImage, NSURL, NSArray;

@interface FRTabBarItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *icon;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) double width;
@property (retain, nonatomic) NSArray *badgedIcons;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
