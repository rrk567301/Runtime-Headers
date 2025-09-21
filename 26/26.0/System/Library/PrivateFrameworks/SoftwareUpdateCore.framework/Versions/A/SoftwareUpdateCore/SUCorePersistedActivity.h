@class NSString, SUCoreActivityOptions;

@interface SUCorePersistedActivity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) SUCoreActivityOptions *activityOptions;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init:(id)a0 options:(id)a1;

@end
