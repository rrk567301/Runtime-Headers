@protocol NSSecureCoding, CKTestDeviceReferenceProtocol;

@interface CKSessionAcquisitionSetupInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<NSSecureCoding> ckSessionID;
@property (readonly, nonatomic) id<NSSecureCoding> ckSessionConfiguration;
@property (readonly, nonatomic) id<NSSecureCoding> ckPreviousSessionInvalidationContext;
@property (readonly, nonatomic) id<CKTestDeviceReferenceProtocol> testDeviceReferenceProtocol;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCKSessionID:(id)a0 ckSessionConfiguration:(id)a1 ckPreviousSessionInvalidationContext:(id)a2 testDeviceReferenceProtocol:(id)a3;

@end
