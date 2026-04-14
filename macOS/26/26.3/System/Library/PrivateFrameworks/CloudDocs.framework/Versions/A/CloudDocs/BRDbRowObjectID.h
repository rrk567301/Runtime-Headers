@interface BRDbRowObjectID : BRFileObjectID {
    unsigned long long _rowId;
    unsigned char _type;
}

+ (BOOL)supportsSecureCoding;

- (unsigned char)type;
- (id)itemDBRowID;
- (id)folderID;
- (id)description;
- (id)initWithRowID:(unsigned long long)a0 type:(unsigned char)a1;
- (unsigned long long)rawID;
- (id)asString;
- (id)initWithCoder:(id)a0;
- (id)documentID;
- (void)encodeWithCoder:(id)a0;

@end
