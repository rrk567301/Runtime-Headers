@class NSArray;

@interface SFKeySearchFilter : NSObject <NSCopying, NSSecureCoding> {
    id _keySearchFilterInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *specifiers;
@property (copy, nonatomic) NSArray *domains;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;

@end
