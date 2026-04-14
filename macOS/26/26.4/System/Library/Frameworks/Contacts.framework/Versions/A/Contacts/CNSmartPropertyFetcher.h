@class NSString;

@interface CNSmartPropertyFetcher : NSObject <CNKeyDescriptor_Private>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)a0;
- (id)_cn_ignorableKeys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_cn_requiredKeys;
- (id)_cn_optionalKeys;
- (id)initWithCoder:(id)a0;

@end
