@interface BRDocObjectID : BRFileObjectID {
    unsigned int _docID;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asString;
- (BOOL)isDocumentID;
- (id)documentID;
- (unsigned long long)rawID;
- (id)initWithDocID:(unsigned int)a0;
- (id)initWithDocIDNumber:(id)a0;

@end
