@class NSString, _PHPickerShareAlbumSheetConfiguration;

@interface PHPickerUpdateConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL _didSetEdgesWithoutContentMargins;
@property (readonly, nonatomic) BOOL _didSetSelectionLimit;
@property (readonly, nonatomic) BOOL _didSetMinimumSelectionLimit;
@property (readonly, nonatomic) BOOL _didSetPrompt;
@property (readonly, nonatomic) BOOL _didSetTitle;
@property (readonly, nonatomic) BOOL _didSetPrimaryButtonType;
@property (readonly, nonatomic) BOOL _didSetSecondaryButtonType;
@property (readonly, nonatomic) BOOL _didSetSharedAlbumSheetConfiguration;
@property (readonly, nonatomic) BOOL _isValidConfiguration;
@property (copy, nonatomic, setter=_setSharedAlbumSheetConfiguration:) _PHPickerShareAlbumSheetConfiguration *_sharedAlbumSheetConfiguration;
@property (nonatomic) long long minimumSelectionLimit;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, setter=_setPrimaryButtonType:) long long _primaryButtonType;
@property (nonatomic, setter=_setSecondaryButtonType:) long long _secondaryButtonType;
@property (nonatomic) long long selectionLimit;
@property (nonatomic) unsigned long long edgesWithoutContentMargins;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
