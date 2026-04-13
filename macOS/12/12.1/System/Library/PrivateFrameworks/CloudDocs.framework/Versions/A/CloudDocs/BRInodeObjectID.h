@interface BRInodeObjectID : BRFileObjectID {
    unsigned long long _ino;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)folderID;
- (id)initWithFileID:(unsigned long long)a0;
- (id)asString;
- (unsigned long long)rawID;
- (BOOL)isFolderOrAliasID;

@end
