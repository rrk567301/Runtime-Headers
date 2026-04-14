@class NSString, NSArray;

@interface CKPCSKeysToRemove : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *etag;
@property (retain, nonatomic) NSArray *keys;

- (BOOL)isEmpty;
- (id)initInternal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithEtag:(id)a0 keys:(id)a1;

@end
