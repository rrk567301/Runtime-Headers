@class NSString;

@interface GKFamiliarPlayerInternal : GKPlayerInternal {
    NSString *_firstName;
    NSString *_lastName;
    NSString *_compositeName;
}

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)firstName;
- (id)compositeName;
- (id)lastName;
- (void)setFirstName:(id)a0;
- (void)setLastName:(id)a0;
- (void)setCompositeName:(id)a0;

@end
