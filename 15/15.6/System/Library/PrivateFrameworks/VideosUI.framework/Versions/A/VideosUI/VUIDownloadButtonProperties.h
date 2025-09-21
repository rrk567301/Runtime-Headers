@class NSImage, NSString;

@interface VUIDownloadButtonProperties : NSObject

@property (nonatomic) char hasBorder;
@property (nonatomic, getter=isEnabled) char enabled;
@property (nonatomic) char hasImage;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) char hasTitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isIndeterminate) char indeterminate;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long downloadState;

- (void).cxx_destruct;

@end
