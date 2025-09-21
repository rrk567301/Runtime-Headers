@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned char volumeUUID[16];
    unsigned long long documentID;
    int deviceID;
}

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDocumentIdentifier:(id)a0;
- (id)initWithFileDescriptor:(int)a0 forItemAtURL:(id)a1 allocateIfNone:(char)a2 error:(id *)a3;

@end
