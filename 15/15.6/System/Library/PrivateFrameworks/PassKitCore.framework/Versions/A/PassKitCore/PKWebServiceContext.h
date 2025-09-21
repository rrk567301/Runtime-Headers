@interface PKWebServiceContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (id)contextWithArchive:(id)a0;
+ (id)contextWithArchive:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)archiveAtPath:(id)a0;
- (char)archiveAtPath:(id)a0 error:(id *)a1;

@end
