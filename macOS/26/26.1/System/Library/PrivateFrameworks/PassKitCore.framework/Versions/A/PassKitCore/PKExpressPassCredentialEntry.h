@class NSSet, NSData;

@interface PKExpressPassCredentialEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *selectionCriteria;
@property (readonly, nonatomic) NSData *readerIdentifier;
@property (readonly, nonatomic) NSSet *associatedReaders;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSelectionCriteria:(id)a0 readerIdentifier:(id)a1 associatedReaders:(id)a2;
- (BOOL)isEqualToCredentialEntry:(id)a0;

@end
