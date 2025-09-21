@protocol NSSecureCoding, CKTestDeviceReferenceProtocol;

@interface CKSessionAcquisitionSetupInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<NSSecureCoding> ckSessionID;
@property (readonly, nonatomic) id<NSSecureCoding> ckSessionConfiguration;
@property (readonly, nonatomic) id<NSSecureCoding> ckPreviousSessionInvalidationContext;
@property (readonly, nonatomic) id<CKTestDeviceReferenceProtocol> testDeviceReferenceProtocol;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCKSessionID:(id)a0 ckSessionConfiguration:(id)a1 ckPreviousSessionInvalidationContext:(id)a2 testDeviceReferenceProtocol:(id)a3;

@end
