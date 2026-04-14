@class NSDictionary;

@interface CESRUserDataContactWord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *components;
@property (readonly, nonatomic) int frequency;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithComponents:(id)a0 frequency:(int)a1;

@end
