@interface BRDocObjectID : BRFileObjectID {
    unsigned int _docID;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned char)type;
- (id)initWithDocIDNumber:(id)a0;
- (id)initWithDocID:(unsigned int)a0;
- (id)asString;
- (unsigned long long)rawID;
- (id)documentID;
- (BOOL)isDocumentID;
- (BOOL)isFpfsItem;

@end
