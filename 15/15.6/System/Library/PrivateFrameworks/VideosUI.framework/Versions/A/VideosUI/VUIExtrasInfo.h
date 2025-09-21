@class NSString, NSDictionary, NSURL, NSNumber;

@interface VUIExtrasInfo : NSObject <NSCopying> {
    NSDictionary *_extrasDict;
}

@property (readonly, nonatomic) NSNumber *contentRating;
@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSString *extrasURLString;
@property (readonly, nonatomic) NSString *previewURLString;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *actionParams;
@property (readonly, nonatomic) NSString *loadingImage;
@property (readonly, nonatomic) char isLightTheme;
@property (readonly, nonatomic) NSURL *tvAppDeeplinkURL;
@property (readonly, nonatomic) char isEntitledToPlay;

+ (char)isValidExtrasInfo:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)_initializeWithMPMediaItem:(id)a0;

@end
