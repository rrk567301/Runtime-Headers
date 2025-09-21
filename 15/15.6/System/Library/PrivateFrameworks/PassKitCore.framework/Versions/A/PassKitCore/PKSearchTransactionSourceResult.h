@class NSString;

@interface PKSearchTransactionSourceResult : NSObject <PKSearchAutocompleteToken>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long transactionSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)tokenType;

@end
