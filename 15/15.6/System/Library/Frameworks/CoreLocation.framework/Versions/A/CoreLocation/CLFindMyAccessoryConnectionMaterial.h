@class NSData, NSNumber;

@interface CLFindMyAccessoryConnectionMaterial : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSData *address;
@property (readonly) NSData *ltk;
@property (readonly) NSNumber *primaryIndex;
@property (readonly) NSNumber *secondaryIndex;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryDescription;
- (id)initWithAddress:(id)a0 ltk:(id)a1;
- (id)initWithAddress:(id)a0 ltk:(id)a1 primaryIndex:(id)a2 secondaryIndex:(id)a3;
- (char)isEqualToMaterial:(id)a0;

@end
