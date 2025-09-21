@class NSString;

@interface RBSMachPort : NSObject <RBSXPCSecureCoding, NSSecureCoding, NSCopying> {
    unsigned int _port;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)portConsumingRightForPort:(unsigned int)a0;
+ (id)portForPort:(unsigned int)a0;
+ (char)supportsRBSXPCSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (unsigned int)port;
- (char)isUsable;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
