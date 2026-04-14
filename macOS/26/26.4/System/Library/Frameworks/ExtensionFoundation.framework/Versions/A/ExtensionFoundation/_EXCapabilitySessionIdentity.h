@class NSString, NSUUID;

@interface _EXCapabilitySessionIdentity : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _inner;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *capabilityID;
@property (nonatomic, readonly) NSUUID *sessionUUID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCapabilityID:(id)a0 sessionUUID:(id)a1;

@end
