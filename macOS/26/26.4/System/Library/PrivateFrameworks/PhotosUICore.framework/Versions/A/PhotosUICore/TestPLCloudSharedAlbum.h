@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)localizedTitle;
- (id)cloudOwnerLastName;
- (id)cloudOwnerEmail;
- (BOOL)cloudOwnerIsWhitelisted;
- (id)cloudGUID;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)a0 allowsEmail:(BOOL)a1;
- (id)cloudOwnerFirstName;

@end
