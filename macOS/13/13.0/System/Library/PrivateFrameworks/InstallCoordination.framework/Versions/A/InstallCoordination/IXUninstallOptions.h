@interface IXUninstallOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requestUserConfirmation;
@property (nonatomic) BOOL waitForDeletion;
@property (nonatomic) BOOL showArchiveOption;
@property (nonatomic) BOOL showDemotionOption;
@property (nonatomic) BOOL systemAppNotAllowed;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
