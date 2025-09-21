@interface FBKTeamPermissions : NSObject <NSSecureCoding>

@property (class, nonatomic, readonly) FBKTeamPermissions *personalTeamPermissions;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char canView;
@property (readonly, nonatomic) char canRespond;
@property (readonly, nonatomic) char canClose;
@property (readonly, nonatomic) char canDownload;
@property (readonly, nonatomic) char canDelete;
@property (readonly, nonatomic) char canAssign;
@property (readonly, nonatomic) char canDemote;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithJSONObject:(id)a0;
- (id)initWithView:(char)a0 respond:(char)a1 close:(char)a2 download:(char)a3 delete:(char)a4 assign:(char)a5 demote:(char)a6;

@end
