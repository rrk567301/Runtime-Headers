@class NSString, NSError;

@interface FPImportItemError : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long retryCount;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItemIdentifier:(id)a0 error:(id)a1 retryCount:(long long)a2;
- (id)json;

@end
