@class NSImage, NSString;

@interface SearchUI.SearchUIMontaraUtilities : NSObject

@property (class, nonatomic, readonly) NSImage *selectedModelIcon;
@property (class, nonatomic, readonly) NSString *selectedModelSymbolName;

- (id)init;

@end
