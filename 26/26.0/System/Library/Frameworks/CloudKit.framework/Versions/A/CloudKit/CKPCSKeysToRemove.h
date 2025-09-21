@class NSString, NSArray;

@interface CKPCSKeysToRemove : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *etag;
@property (retain, nonatomic) NSArray *keys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initInternal;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEtag:(id)a0 keys:(id)a1;

@end
