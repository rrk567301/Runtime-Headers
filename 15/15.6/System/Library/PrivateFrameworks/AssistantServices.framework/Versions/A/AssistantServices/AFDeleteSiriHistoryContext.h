@class NSString;

@interface AFDeleteSiriHistoryContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *successTitle;
@property (readonly, copy, nonatomic) NSString *successBody;
@property (readonly, copy, nonatomic) NSString *successButtonText;
@property (readonly, copy, nonatomic) NSString *errorTitle;
@property (readonly, copy, nonatomic) NSString *errorBody;
@property (readonly, copy, nonatomic) NSString *errorButtonText;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithSuccessTitle:(id)a0 successBody:(id)a1 successButtonText:(id)a2 errorTitle:(id)a3 errorBody:(id)a4 errorButtonText:(id)a5;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
