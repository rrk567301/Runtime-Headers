@class NSArray, NSString, NSSet;

@interface RBSProcessStateDescriptor : NSObject <RBSXPCSecureCoding, NSCopying> {
    NSSet *_endowmentNamespaces;
}

@property (nonatomic) unsigned long long values;
@property (copy, nonatomic) NSArray *endowmentNamespaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptor;
+ (char)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (void)filterState:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
