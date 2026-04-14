@interface BRDbRowObjectID : BRFileObjectID {
    unsigned long long _rowId;
    unsigned char _type;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)rawID;
- (id)initWithRowID:(unsigned long long)a0 type:(unsigned char)a1;
- (void)encodeWithCoder:(id)a0;
- (id)itemDBRowID;
- (id)documentID;
- (unsigned char)type;
- (id)description;
- (id)asString;
- (id)initWithCoder:(id)a0;
- (id)folderID;

@end
