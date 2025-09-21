@class TVRCMediaInfo, NSString, NSURL, NSNumber;

@interface TVRCUpNextInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) TVRCMediaInfo *mediaInfo;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) char isAppleOriginal;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *timeRemaining;
@property (retain, nonatomic) NSNumber *progress;
@property (retain, nonatomic) NSURL *actionURL;
@property (retain, nonatomic) NSURL *shareURL;
@property (retain, nonatomic) NSURL *shareShowURL;
@property (nonatomic) char artworkNeedsCornerBlur;

+ (char)isAppleOriginalFromDict:(id)a0;
+ (id)serviceNameFromDict:(id)a0;
+ (id)upNextInfoWithDictionary:(id)a0;
+ (id)upNextInfoWithMediaInfo:(id)a0 reason:(id)a1 service:(id)a2 isAppleOriginal:(char)a3 progress:(id)a4 timeRemaining:(id)a5 actionURL:(id)a6 shareURL:(id)a7 shareShowURL:(id)a8 artworkNeedsCornerBlur:(char)a9;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToUpNextInfo:(id)a0;

@end
