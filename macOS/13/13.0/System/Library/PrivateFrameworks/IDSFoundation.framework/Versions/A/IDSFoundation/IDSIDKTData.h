@class NSUUID;

@interface IDSIDKTData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *verificationRequestID;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequestID:(id)a0;

@end
