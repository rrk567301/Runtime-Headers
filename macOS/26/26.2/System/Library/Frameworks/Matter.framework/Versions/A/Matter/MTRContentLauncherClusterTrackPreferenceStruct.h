@class NSString, NSArray, NSNumber;

@interface MTRContentLauncherClusterTrackPreferenceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSArray *characteristics;
@property (copy, nonatomic) NSNumber *audioOutputIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
