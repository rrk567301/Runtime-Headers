@class _SFECKeySpecifier, NSString;
@protocol SFDigestOperation;

@interface _SFEC_X962SigningOperation : NSObject <SFSigningOperation> {
    id _x962SigningOperationInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _SFECKeySpecifier *signingKeySpecifier;
@property (copy) id<SFDigestOperation> digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithKeySpecifier:(id)a0 digestOperation:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithKeySpecifier:(id)a0;
- (id)sign:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)verify:(id)a0 withKey:(id)a1 error:(id *)a2;

@end
