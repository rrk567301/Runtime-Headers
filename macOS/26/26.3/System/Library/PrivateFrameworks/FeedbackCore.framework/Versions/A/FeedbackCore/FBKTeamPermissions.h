@interface FBKTeamPermissions : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) FBKTeamPermissions *personalTeamPermissions;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL canView;
@property (readonly, nonatomic) BOOL canRespond;
@property (readonly, nonatomic) BOOL canClose;
@property (readonly, nonatomic) BOOL canDownload;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canAssign;
@property (readonly, nonatomic) BOOL canDemote;

- (id)initWithJSONObject:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithView:(BOOL)a0 respond:(BOOL)a1 close:(BOOL)a2 download:(BOOL)a3 delete:(BOOL)a4 assign:(BOOL)a5 demote:(BOOL)a6;

@end
