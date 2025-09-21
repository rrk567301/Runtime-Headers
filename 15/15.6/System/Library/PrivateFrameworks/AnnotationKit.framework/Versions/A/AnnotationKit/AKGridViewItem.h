@class NSImage, NSString;

@interface AKGridViewItem : NSObject <AKUserInterfaceItem>

@property (nonatomic) char lastItem;
@property long long tag;
@property char enabled;
@property (retain) NSImage *image;
@property (retain) NSString *toolTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
