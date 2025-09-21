@class NSArray;

@interface LNViewAnnotations : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSArray *entities;
@property (readonly, copy) NSArray *intents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEntities:(id)a0 intents:(id)a1;

@end
