@class NSString, NSArray, NSNumber;

@interface MTRContentLauncherClusterTrackPreferenceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSArray *characteristics;
@property (copy, nonatomic) NSNumber *audioOutputIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
