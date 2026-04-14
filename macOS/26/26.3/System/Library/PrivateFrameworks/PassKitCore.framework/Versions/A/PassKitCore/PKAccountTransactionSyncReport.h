@class NSArray;

@interface PKAccountTransactionSyncReport : PKAccountReport <NSCopying, NSSecureCoding> {
    NSArray *_items;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_itemArrayRepresentation;
- (id)initWithItems:(id)a0 accountIdentifier:(id)a1;

@end
