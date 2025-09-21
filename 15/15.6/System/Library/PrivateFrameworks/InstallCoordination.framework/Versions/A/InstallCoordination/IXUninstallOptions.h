@interface IXUninstallOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char ignoreRemovability;
@property (nonatomic) char ignoreRestrictions;
@property (nonatomic) char ignoreAppProtection;
@property (nonatomic) char requestUserConfirmation;
@property (nonatomic) char waitForDeletion;
@property (nonatomic) char showArchiveOption;
@property (nonatomic) char showDemotionOption;
@property (nonatomic) char systemAppNotAllowed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
