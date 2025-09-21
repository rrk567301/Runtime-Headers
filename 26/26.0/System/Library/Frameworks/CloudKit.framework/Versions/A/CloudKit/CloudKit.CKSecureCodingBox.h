@class NSString;

@interface CloudKit.CKSecureCodingBox : NSObject <NSSecureCoding, CKSQLiteItem> {
    void /* unknown type, empty encoding */ wrapped;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
