@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)localizedTitle;
- (id)cloudOwnerLastName;
- (BOOL)cloudOwnerIsWhitelisted;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerEmail;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)a0 allowsEmail:(BOOL)a1;
- (id)cloudGUID;

@end
