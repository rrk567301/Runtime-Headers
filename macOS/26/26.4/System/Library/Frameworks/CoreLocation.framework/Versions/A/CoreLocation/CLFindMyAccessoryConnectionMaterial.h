@class NSData, NSNumber;

@interface CLFindMyAccessoryConnectionMaterial : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *address;
@property (readonly) NSData *ltk;
@property (readonly) NSNumber *primaryIndex;
@property (readonly) NSNumber *secondaryIndex;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)dictionaryDescription;
- (id)initWithAddress:(id)a0 ltk:(id)a1;
- (id)initWithAddress:(id)a0 ltk:(id)a1 primaryIndex:(id)a2 secondaryIndex:(id)a3;
- (BOOL)isEqualToMaterial:(id)a0;

@end
