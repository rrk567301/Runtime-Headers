@class NSString;

@interface ABAddressBookSaveOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) ABAddressBookSaveOptions *defaultOptions;
@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL shouldTriggerSync;
@property BOOL shouldUseFileLock;
@property BOOL shouldIgnoreGuardianRestrictions;
@property (copy) NSString *transactionAuthor;

+ (id)none;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
