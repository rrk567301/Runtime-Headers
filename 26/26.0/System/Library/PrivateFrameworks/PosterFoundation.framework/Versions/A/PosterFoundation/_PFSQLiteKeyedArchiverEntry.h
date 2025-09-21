@class NSString, NSData, NSDate;

@interface _PFSQLiteKeyedArchiverEntry : NSObject <PFSQLiteCoding>

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDate *lastModified;
@property (readonly, copy, nonatomic) NSDate *dateCreated;

+ (id)pf_sqliteCodingDescriptor;
+ (BOOL)pf_supportsPFSQLiteCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)updateWithData:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 data:(id)a1;

@end
