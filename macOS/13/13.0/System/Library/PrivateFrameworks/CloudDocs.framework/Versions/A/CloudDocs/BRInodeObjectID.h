@interface BRInodeObjectID : BRFileObjectID {
    unsigned long long _ino;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned char)type;
- (id)folderID;
- (id)asString;
- (unsigned long long)rawID;
- (BOOL)isFpfsItem;
- (id)initWithFileID:(unsigned long long)a0;
- (BOOL)isFolderOrAliasID;

@end
