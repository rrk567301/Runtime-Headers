@class NSString;

@interface ABAddressBookSaveOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) ABAddressBookSaveOptions *defaultOptions;
@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL shouldTriggerSync;
@property BOOL shouldUseFileLock;
@property BOOL shouldIgnoreGuardianRestrictions;
@property (copy) NSString *transactionAuthor;

+ (id)none;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
