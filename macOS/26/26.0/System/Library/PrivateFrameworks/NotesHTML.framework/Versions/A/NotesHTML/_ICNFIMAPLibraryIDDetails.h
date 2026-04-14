@interface _ICNFIMAPLibraryIDDetails : ICNFIMAPMessageDetails {
    long long _libraryID;
}

- (id)description;
- (void)setLibraryID:(long long)a0;
- (long long)libraryID;
- (char)persistentIDType;

@end
