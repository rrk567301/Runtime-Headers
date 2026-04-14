@class NSString, NSDate;

@interface SafariWebGLLoadPolicyEntry : NSObject <NSCopying>

@property (nonatomic) int loadPolicy;
@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *host;
@property (retain, nonatomic) NSDate *lastVisitedDate;
@property (nonatomic) BOOL webPageIsOpen;
@property (retain, nonatomic) NSDate *trustDialogDeferredDate;
@property (nonatomic, getter=isExplicitlySetByUser) BOOL explicitlySetByUser;
@property (nonatomic, getter=isExplicitlySetByAdmin) BOOL explicitlySetByAdmin;
@property (nonatomic) BOOL didShowSecurityAlertDialog;
@property (nonatomic, getter=isManagedByAdmin) BOOL managedByAdmin;

+ (id)stringFromPolicy:(int)a0;
+ (int)policyFromString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithPolicy:(int)a0 host:(id)a1;
- (id)initWithDictionaryRepresentation:(id)a0 host:(id)a1;
- (id)initWithPolicy:(int)a0 date:(id)a1 lastVisitedDate:(id)a2 host:(id)a3;

@end
