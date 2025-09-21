@class NSSet;

@interface CHRemoteInventoryContentCheckRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStrokeIdentifiers:(id)a0;

@end
