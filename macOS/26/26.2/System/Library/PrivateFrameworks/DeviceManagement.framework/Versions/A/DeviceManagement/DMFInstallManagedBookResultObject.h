@class DMFBook;

@interface DMFInstallManagedBookResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) DMFBook *book;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBook:(id)a0;

@end
