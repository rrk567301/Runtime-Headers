@class NSSet;

@interface CHRemoteInventoryContentCheckRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStrokeIdentifiers:(id)a0;

@end
