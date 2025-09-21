@class NSDictionary;

@interface ML3ClientImportResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char success;
@property (readonly, copy, nonatomic) NSDictionary *resultingDatabasePersistentIDs;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuccess:(char)a0 resultingDatabasePersistentIDs:(id)a1;

@end
