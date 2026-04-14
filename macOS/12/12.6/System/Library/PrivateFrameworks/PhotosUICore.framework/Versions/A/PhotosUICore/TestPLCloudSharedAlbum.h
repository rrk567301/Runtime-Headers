@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)localizedTitle;
- (id)cloudGUID;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)a0 allowsEmail:(BOOL)a1;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerLastName;
- (id)cloudOwnerEmail;
- (BOOL)cloudOwnerIsWhitelisted;

@end
