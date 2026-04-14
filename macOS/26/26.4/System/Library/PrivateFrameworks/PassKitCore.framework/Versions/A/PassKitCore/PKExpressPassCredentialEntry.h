@class NSSet, NSData;

@interface PKExpressPassCredentialEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *selectionCriteria;
@property (readonly, nonatomic) NSData *readerIdentifier;
@property (readonly, nonatomic) NSSet *associatedReaders;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSelectionCriteria:(id)a0 readerIdentifier:(id)a1 associatedReaders:(id)a2;
- (BOOL)isEqualToCredentialEntry:(id)a0;

@end
