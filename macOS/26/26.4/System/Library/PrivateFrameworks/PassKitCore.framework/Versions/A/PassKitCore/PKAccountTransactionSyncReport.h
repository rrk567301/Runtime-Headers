@class NSArray;

@interface PKAccountTransactionSyncReport : PKAccountReport <NSCopying, NSSecureCoding> {
    NSArray *_items;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_itemArrayRepresentation;
- (id)initWithItems:(id)a0 accountIdentifier:(id)a1;

@end
