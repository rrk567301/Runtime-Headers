@class NSString;

@interface PHMediaFormatConversionPlaceholderSource : PHMediaFormatConversionSource

@property (copy, nonatomic) NSString *fileType;

+ (id)imageSourceForFileType:(id)a0;
+ (id)videoSourceForFileType:(id)a0;

- (unsigned long long)length;
- (id)fileURL;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })imageDimensions;
- (id)initWithFileType:(id)a0 mediaType:(long long)a1;

@end
