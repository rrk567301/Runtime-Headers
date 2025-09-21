@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)localizedTitle;
- (id)cloudOwnerEmail;
- (id)cloudGUID;
- (id)cloudOwnerDisplayNameIncludingEmail:(char)a0 allowsEmail:(char)a1;
- (id)cloudOwnerFirstName;
- (char)cloudOwnerIsWhitelisted;
- (id)cloudOwnerLastName;

@end
