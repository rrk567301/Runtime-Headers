@interface BRDbRowObjectID : BRFileObjectID {
    unsigned long long _rowId;
    unsigned char _type;
}

+ (BOOL)supportsSecureCoding;

- (unsigned char)type;
- (id)documentID;
- (id)asString;
- (id)initWithRowID:(unsigned long long)a0 type:(unsigned char)a1;
- (unsigned long long)rawID;
- (id)folderID;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)itemDBRowID;

@end
