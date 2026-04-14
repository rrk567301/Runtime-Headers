@class NSString, NSArray, NSNumber;

@interface MTRContentLauncherClusterTrackPreferenceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSArray *characteristics;
@property (copy, nonatomic) NSNumber *audioOutputIndex;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
