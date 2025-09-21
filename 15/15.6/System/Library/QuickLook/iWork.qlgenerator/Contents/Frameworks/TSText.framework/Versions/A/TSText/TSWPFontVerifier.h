@class NSString;

@interface TSWPFontVerifier : NSObject

@property (class, readonly, nonatomic) NSString *missingFontName;

+ (id)sharedInstance;

- (char)isCloudKitDownloadableFontName:(id)a0;
- (char)isCoreTextDownloadableFontName:(id)a0;
- (char)isDownloadableFontName:(id)a0;
- (char)isFontWithPostscriptNameInstalled:(id)a0;

@end
