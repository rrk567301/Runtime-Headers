@class NSString, NSArray;

@interface _PHPickerShareAlbumSheetConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *defaultAlbumIdentifier;
@property (copy, nonatomic) NSArray *itemIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_initWithDefaultAlbumIdentifier:(id)a0 itemIdentifiers:(id)a1;

@end
