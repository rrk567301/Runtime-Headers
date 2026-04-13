@class NSString, NSMutableArray;

@interface SMWindowsMigrationRequest : SMMigrationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *destinationPath;
@property (retain) NSMutableArray *systemComponentDicts;
@property (retain) NSMutableArray *otherDiskComponentDicts;
@property BOOL copiesCustomFiles;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCDict:(id)a0;
- (void)updateAutoLoginUser;
- (id)exportXPCDict;

@end
