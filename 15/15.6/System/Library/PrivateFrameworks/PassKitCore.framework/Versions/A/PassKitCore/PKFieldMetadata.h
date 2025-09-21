@class NSArray;

@interface PKFieldMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *associatedPassIdentifiers;
@property (readonly, nonatomic) char shouldIgnoreField;
@property (readonly, nonatomic) char foundExplicitlyRequestedPass;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssociatedPassIdentifiers:(id)a0 shouldIgnoreField:(char)a1 foundExplicitlyRequestedPass:(char)a2;

@end
