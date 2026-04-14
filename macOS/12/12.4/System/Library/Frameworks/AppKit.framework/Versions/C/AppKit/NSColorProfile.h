@class NSURL, NSString;

@interface NSColorProfile : NSObject <NSCoding> {
    void *_profile;
    void *_header;
    NSURL *_location;
    void *_md5;
    NSString *_name;
    void *_dProfileRef;
    void *_reserved;
}

+ (id)availableProfiles;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedName;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)initWithICCProfileData:(id)a0;
- (id)ICCProfileData;
- (id)initWithColorSyncProfile:(void *)a0;
- (void *)colorSyncProfile;
- (unsigned int)_colorSyncProfileClass;
- (unsigned int)_colorSyncProfileSpace;
- (void *)MD5;
- (id)initWithColorSyncInfo:(void *)a0;
- (long long)_appropriateColorPanelSliderPane;
- (long long)_isGenericProfile;

@end
