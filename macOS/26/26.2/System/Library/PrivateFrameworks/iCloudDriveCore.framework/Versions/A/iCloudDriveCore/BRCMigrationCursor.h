@class CKQueryCursor, NSNumber;

@interface BRCMigrationCursor : NSObject

@property (readonly, nonatomic) CKQueryCursor *ckQueryCursor;
@property (readonly, nonatomic) NSNumber *dbEnumerationCursor;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCKQueryCursor:(id)a0;
- (id)initWithDbEnumerationCursor:(id)a0;

@end
