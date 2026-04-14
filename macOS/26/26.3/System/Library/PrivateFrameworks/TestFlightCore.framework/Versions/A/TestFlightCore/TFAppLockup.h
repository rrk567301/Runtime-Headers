@class NSString, NSArray, TFIconArtwork;

@interface TFAppLockup : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *subtitles;
@property (readonly, nonatomic) TFIconArtwork *iconArtwork;
@property (nonatomic) BOOL iconNeedsMask;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitles:(id)a1 iconArtwork:(id)a2 iconNeedsMask:(BOOL)a3;

@end
