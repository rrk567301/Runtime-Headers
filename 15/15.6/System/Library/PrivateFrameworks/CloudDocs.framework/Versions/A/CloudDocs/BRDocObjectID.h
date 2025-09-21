@interface BRDocObjectID : BRFileObjectID {
    unsigned int _docID;
}

+ (char)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned char)type;
- (id)asString;
- (id)documentID;
- (id)initWithDocID:(unsigned int)a0;
- (id)initWithDocIDNumber:(id)a0;
- (char)isDocumentID;
- (char)isFpfsItem;
- (unsigned long long)rawID;

@end
