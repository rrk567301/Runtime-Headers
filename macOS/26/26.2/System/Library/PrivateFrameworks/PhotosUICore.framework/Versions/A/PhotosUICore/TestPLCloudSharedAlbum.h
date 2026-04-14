@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)localizedTitle;
- (BOOL)cloudOwnerIsWhitelisted;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)a0 allowsEmail:(BOOL)a1;
- (id)cloudOwnerLastName;
- (id)cloudOwnerEmail;
- (id)cloudOwnerFirstName;
- (id)cloudGUID;

@end
