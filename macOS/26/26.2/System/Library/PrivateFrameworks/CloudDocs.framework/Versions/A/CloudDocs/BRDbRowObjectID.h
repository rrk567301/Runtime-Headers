@interface BRDbRowObjectID : BRFileObjectID {
    unsigned long long _rowId;
    unsigned char _type;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)folderID;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRowID:(unsigned long long)a0 type:(unsigned char)a1;
- (id)asString;
- (id)documentID;
- (unsigned char)type;
- (unsigned long long)rawID;
- (id)description;
- (id)itemDBRowID;

@end
