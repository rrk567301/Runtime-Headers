@class LSApplicationRecord, NSString, NSURL;

@interface LSApplicationIdentity : NSObject <NSSecureCoding, NSCopying> {
    NSURL *_identityBookmark;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) LSApplicationRecord *weakRecord;
@property (readonly, nonatomic) NSString *identityString;
@property (readonly, nonatomic) NSString *personaUniqueString;

+ (id)enumeratorWithOptions:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentityBookmark:(id)a0 identityString:(id)a1 personaUniqueString:(id)a2;
- (id)initWithIdentityString:(id)a0;
- (id)initForRecord:(id)a0 personaUniqueString:(id)a1;
- (id)findApplicationRecordWithError:(id *)a0;

@end
