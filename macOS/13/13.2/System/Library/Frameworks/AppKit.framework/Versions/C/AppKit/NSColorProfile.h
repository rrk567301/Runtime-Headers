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
- (id)initWithColorSyncProfile:(void *)a0;
- (id)initWithICCProfileData:(id)a0;
- (id)initWithColorSyncInfo:(void *)a0;
- (void *)colorSyncProfile;
- (id)ICCProfileData;
- (void *)MD5;
- (unsigned int)_colorSyncProfileSpace;
- (unsigned int)_colorSyncProfileClass;
- (long long)_appropriateColorPanelSliderPane;
- (long long)_isGenericProfile;

@end
