@class NSString;

@interface SVXClientInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int processIdentifier;
@property (readonly, copy, nonatomic) NSString *processName;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithProcessIdentifier:(int)a0 processName:(id)a1;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
