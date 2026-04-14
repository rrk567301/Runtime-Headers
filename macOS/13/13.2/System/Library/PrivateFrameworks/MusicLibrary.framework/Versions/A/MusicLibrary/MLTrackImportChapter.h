@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject <NSCopying>

@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imageCacheKey;
@property (nonatomic) unsigned long long startTimeInMilliseconds;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *URLTitle;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (void)normalizeProperties;
- (BOOL)isEqualIgnoringTimesAndTitle:(id)a0;

@end
