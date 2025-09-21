@interface BRDbRowObjectID : BRFileObjectID {
    unsigned long long _rowId;
    unsigned char _type;
}

+ (BOOL)supportsSecureCoding;

- (id)folderID;
- (id)initWithRowID:(unsigned long long)a0 type:(unsigned char)a1;
- (unsigned char)type;
- (void)encodeWithCoder:(id)a0;
- (id)documentID;
- (id)asString;
- (id)description;
- (unsigned long long)rawID;
- (id)initWithCoder:(id)a0;
- (id)itemDBRowID;

@end
