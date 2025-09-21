@class NSString, SUCoreActivityOptions;

@interface SUCorePersistedActivity : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) SUCoreActivityOptions *activityOptions;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init:(id)a0 options:(id)a1;

@end
