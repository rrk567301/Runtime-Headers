@class AVAssetIdentifier;

@interface AVTrackIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) AVAssetIdentifier *assetID;
@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)identifierForTrack:(id)a0;
+ (id)invalidTrackIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTrack:(id)a0;
- (BOOL)matchesTrack:(id)a0;

@end
