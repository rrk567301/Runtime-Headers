@class NSString;

@interface DAPropertyCompareString : NSObject <CUXPCCodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) unsigned long long compareOptions;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithXPCObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 compareOptions:(unsigned long long)a1;

@end
