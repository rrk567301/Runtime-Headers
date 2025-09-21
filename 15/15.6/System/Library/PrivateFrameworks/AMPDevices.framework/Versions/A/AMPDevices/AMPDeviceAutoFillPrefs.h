@interface AMPDeviceAutoFillPrefs : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char autoFillHigherRatedSongs;
@property (nonatomic) char autoFillRandomSongs;
@property (nonatomic) char autoFillReplaceSongs;
@property (nonatomic) unsigned long long autoFillSourcePlaylistID;
@property (nonatomic) unsigned long long autoFillReserveFreeBytes;
@property (nonatomic) unsigned long long autoFillTotalDiskBytes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
