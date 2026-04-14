@class NSString, NSArray;

@interface _PHPickerShareAlbumSheetConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *defaultAlbumIdentifier;
@property (copy, nonatomic) NSArray *itemIdentifiers;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_initWithDefaultAlbumIdentifier:(id)a0 itemIdentifiers:(id)a1;

@end
