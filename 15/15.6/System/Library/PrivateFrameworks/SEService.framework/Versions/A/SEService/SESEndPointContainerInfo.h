@class NSData;

@interface SESEndPointContainerInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSData *appletAID;
@property (readonly) char isSuspended;

+ (id)withAppletAID:(id)a0 isSuspended:(char)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
