@class NSImage, NSString, IAAListPlugin;

@interface IANewAccountTableItem : NSObject

@property (retain) NSImage *image;
@property (retain) NSString *title;
@property (retain) IAAListPlugin *plugin;
@property unsigned long long type;

+ (id)itemWithTitle:(id)a0;
+ (id)otherItem;

- (id)initWithTitle:(id)a0;
- (void).cxx_destruct;

@end
