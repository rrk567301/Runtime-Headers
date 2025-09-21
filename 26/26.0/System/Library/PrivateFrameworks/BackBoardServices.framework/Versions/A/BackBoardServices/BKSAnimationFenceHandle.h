@class NSString, CAFenceHandle;

@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, BSXPCSecureCoding, NSSecureCoding, NSCopying, BSInvalidatable> {
    CAFenceHandle *_caFence;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fenceName;
@property (readonly, nonatomic, getter=isUsable) BOOL usable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newFenceHandleForCAFenceHandle:(id)a0;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)newFenceHandleForContext:(id)a0;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)_initWithCAFenceHandle:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)CAPort;
- (void).cxx_destruct;
- (id)CAFenceHandle;

@end
