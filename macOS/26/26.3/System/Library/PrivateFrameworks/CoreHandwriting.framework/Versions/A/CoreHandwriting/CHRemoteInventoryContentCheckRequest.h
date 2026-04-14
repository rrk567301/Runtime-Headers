@class NSSet;

@interface CHRemoteInventoryContentCheckRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStrokeIdentifiers:(id)a0;

@end
