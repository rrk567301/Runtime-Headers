@class NSString, NSURL, CLLocation, NSDate;

@interface PFSharingRemakerOptions : NSObject <NSCopying>

@property (nonatomic) char shouldStripLocation;
@property (nonatomic) char shouldStripAllMetadata;
@property (nonatomic) char shouldConvertToSRGB;
@property (copy, nonatomic) CLLocation *customLocation;
@property (copy, nonatomic) NSDate *customDate;
@property (nonatomic) char shouldStripCaption;
@property (copy, nonatomic) NSString *customCaption;
@property (nonatomic) char shouldStripAccessibilityDescription;
@property (copy, nonatomic) NSString *customAccessibilityLabel;
@property (copy, nonatomic) NSURL *outputDirectoryURL;
@property (copy, nonatomic) NSString *outputFilename;
@property (copy, nonatomic) NSString *exportPreset;
@property (copy, nonatomic) NSString *exportFileType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
