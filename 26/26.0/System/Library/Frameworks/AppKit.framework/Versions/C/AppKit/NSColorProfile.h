@class NSURL, NSString;

@interface NSColorProfile : NSObject <NSCoding> {
    void *_profile;
    void *_header;
    NSURL *_location;
    void *_md5;
    NSString *_name;
    void *_reserved;
}

+ (id)availableProfiles;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)description;
- (id)localizedName;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void *)MD5;
- (id)ICCProfileData;
- (long long)_appropriateColorPanelSliderPane;
- (unsigned int)_colorSyncProfileClass;
- (unsigned int)_colorSyncProfileSpace;
- (long long)_isGenericProfile;
- (void *)colorSyncProfile;
- (id)initWithColorSyncInfo:(void *)a0;
- (id)initWithColorSyncProfile:(void *)a0;
- (id)initWithICCProfileData:(id)a0;

@end
