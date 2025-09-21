@class NSUUID;

@interface DACChangeMarker : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSUUID *uuid;

+ (id)missingMarker;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_isEqualToChangeMarker:(id)a0;

@end
