@class NSURL, NSDictionary;

@interface CNCDDatabasePreparationResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic, getter=isPristineDatabase) BOOL pristineDatabase;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic) BOOL didMigrate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 options:(id)a1 pristineDatabase:(BOOL)a2 readOnly:(BOOL)a3 didMigrate:(BOOL)a4;

@end
