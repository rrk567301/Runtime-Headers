@class NSString, NSObject;
@protocol NSSecureCoding;

@interface RBSSavedEndowment : NSObject <NSCopying, RBSXPCSecureCoding>

@property (readonly, nonatomic) NSObject<NSSecureCoding> *endowment;
@property (readonly, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)savedEndowment:(id)a0 withKey:(id)a1;
+ (char)supportsRBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithEndowment:(id)a0 andKey:(id)a1;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;

@end
