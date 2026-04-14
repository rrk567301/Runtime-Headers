@class NSUUID, NSData;

@interface LACRecoveryData : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ properties;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSData *data;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 data:(id)a1;

@end
