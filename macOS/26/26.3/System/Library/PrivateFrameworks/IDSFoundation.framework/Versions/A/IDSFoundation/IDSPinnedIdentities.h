@class NSData, NSArray;

@interface IDSPinnedIdentities : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) NSArray *pinnedIdentityMetadatas;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
