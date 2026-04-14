@class NSString;

@interface MRNowPlayingAudioFormatApplication : NSObject

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *displayName;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleID:(id)a0 displayName:(id)a1;

@end
