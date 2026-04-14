@class NSArray;

@interface LNViewAnnotations : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSArray *entities;
@property (readonly, copy) NSArray *intents;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEntities:(id)a0 intents:(id)a1;

@end
