@class NSString, NSMutableArray;

@interface SMWindowsMigrationRequest : SMMigrationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *destinationPath;
@property (retain) NSMutableArray *systemComponentDicts;

- (id)initWithXPCDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)exportXPCDict;
- (void)updateAutoLoginUser;

@end
