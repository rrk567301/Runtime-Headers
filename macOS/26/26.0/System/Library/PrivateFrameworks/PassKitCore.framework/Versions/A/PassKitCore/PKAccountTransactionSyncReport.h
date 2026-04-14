@class NSArray;

@interface PKAccountTransactionSyncReport : PKAccountReport <NSCopying, NSSecureCoding> {
    NSArray *_items;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_itemArrayRepresentation;
- (id)initWithItems:(id)a0 accountIdentifier:(id)a1;

@end
