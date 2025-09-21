@class _PHPickerShareAlbumSheetConfiguration;

@interface PHPickerUpdateConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _didSetEdgesWithoutContentMargins;
@property (readonly, nonatomic) BOOL _didSetSelectionLimit;
@property (readonly, nonatomic) BOOL _didSetMinimumSelectionLimit;
@property (readonly, nonatomic) BOOL _isValidConfiguration;
@property (copy, nonatomic) _PHPickerShareAlbumSheetConfiguration *_sharedAlbumSheetConfiguration;
@property (nonatomic) long long minimumSelectionLimit;
@property (nonatomic) long long selectionLimit;
@property (nonatomic) unsigned long long edgesWithoutContentMargins;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
