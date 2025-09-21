@class NSArray, NSMutableSet;

@interface HMMediaContentProfileAccessControl : HMAccessControl <NSCopying, NSMutableCopying> {
    NSMutableSet *_internalAccessories;
}

@property (readonly, copy) NSArray *accessories;

+ (id)shortDescription;
+ (char)isAccessorySupported:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0;
- (id)shortDescription;
- (id)descriptionWithPointer:(char)a0;
- (id)initWithUser:(id)a0 accessories:(id)a1;

@end
