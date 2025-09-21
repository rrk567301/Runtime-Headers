@class NSString, NSArray;

@interface CKPCSKeysToRemove : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *etag;
@property (retain, nonatomic) NSArray *keys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initInternal;
- (id)initWithEtag:(id)a0 keys:(id)a1;

@end
