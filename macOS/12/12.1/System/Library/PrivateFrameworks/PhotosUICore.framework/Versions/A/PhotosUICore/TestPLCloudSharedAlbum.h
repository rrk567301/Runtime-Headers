@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)localizedTitle;
- (id)cloudGUID;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerLastName;
- (id)cloudOwnerEmail;
- (BOOL)cloudOwnerIsWhitelisted;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)a0 allowsEmail:(BOOL)a1;

@end
