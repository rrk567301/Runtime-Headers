@class NSData, NSArray;

@interface IDSPinnedIdentities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) NSArray *pinnedIdentityMetadatas;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
