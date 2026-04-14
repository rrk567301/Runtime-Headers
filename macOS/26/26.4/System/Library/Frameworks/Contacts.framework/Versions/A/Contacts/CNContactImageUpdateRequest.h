@class NSString, NSNumber;

@interface CNContactImageUpdateRequest : CNContactPosterDataUpdateRequest <NSSecureCoding> {
    NSNumber *_ignoredForRevertNumber;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) BOOL ignoredForRevert;

+ (id)requestToUpdateIgnoredForRevert:(BOOL)a0 forImageIdentifier:(id)a1;

- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithImageIdentifier:(id)a0 ignoredForRevert:(BOOL)a1 hasIgnoredValue:(BOOL)a2;

@end
