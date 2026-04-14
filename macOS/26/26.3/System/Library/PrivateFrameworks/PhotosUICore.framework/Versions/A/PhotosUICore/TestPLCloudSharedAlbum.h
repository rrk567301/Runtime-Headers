@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)cloudOwnerEmail;
- (id)cloudOwnerFirstName;
- (id)localizedTitle;
- (id)cloudOwnerLastName;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)a0 allowsEmail:(BOOL)a1;
- (BOOL)cloudOwnerIsWhitelisted;
- (id)cloudGUID;

@end
