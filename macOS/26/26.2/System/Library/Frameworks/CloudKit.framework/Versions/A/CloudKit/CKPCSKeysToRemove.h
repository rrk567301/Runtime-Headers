@class NSString, NSArray;

@interface CKPCSKeysToRemove : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *etag;
@property (retain, nonatomic) NSArray *keys;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEmpty;
- (id)initInternal;
- (id)initWithEtag:(id)a0 keys:(id)a1;

@end
