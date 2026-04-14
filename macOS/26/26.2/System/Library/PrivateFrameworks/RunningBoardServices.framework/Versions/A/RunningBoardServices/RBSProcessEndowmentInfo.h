@class NSString, NSObject;
@protocol OS_xpc_object;

@interface RBSProcessEndowmentInfo : NSObject <RBSXPCSecureCoding, NSCopying> {
    unsigned long long _hash;
    unsigned long long _encodedEndowmentHash;
}

@property (readonly, copy, nonatomic) NSString *endowmentNamespace;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)endowment;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)_initWithNamespace:(id)a0 environment:(id)a1 encodedEndowment:(id)a2;

@end
