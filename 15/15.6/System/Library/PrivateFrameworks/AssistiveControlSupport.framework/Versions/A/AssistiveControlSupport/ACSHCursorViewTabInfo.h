@class NSImage;

@interface ACSHCursorViewTabInfo : NSObject

@property (retain, nonatomic) NSImage *normalImage;
@property (retain, nonatomic) NSImage *selectedImage;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) char isSelected;
@property (nonatomic) char isAvailable;

- (id)description;
- (void).cxx_destruct;

@end
