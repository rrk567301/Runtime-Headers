@interface BRInodeObjectID : BRFileObjectID {
    unsigned long long _ino;
}

+ (char)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned char)type;
- (id)initWithFileID:(unsigned long long)a0;
- (id)asString;
- (id)folderID;
- (char)isFolderOrAliasID;
- (char)isFpfsItem;
- (unsigned long long)rawID;

@end
