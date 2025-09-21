@class NSObject, NSString, RBSAssertionIdentifier;
@protocol OS_xpc_object;

@interface RBSInheritance : NSObject <RBSXPCSecureCoding, NSCopying> {
    unsigned long long _originatingAttributePath;
    unsigned long long _hash;
    unsigned long long _encodedEndowmentHash;
}

@property (readonly, copy, nonatomic) RBSAssertionIdentifier *originatingIdentifier;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment;
@property (readonly, copy, nonatomic) NSString *endowmentNamespace;
@property (readonly, nonatomic) NSString *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)_initWithNamespace:(id)a0 environment:(id)a1 encodedEndowment:(id)a2 originatingIdentifier:(id)a3 attributePath:(unsigned long long)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)init;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)endowment;
- (void).cxx_destruct;

@end
