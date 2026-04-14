@class NSString, NSNumber, NSDate;

@interface ASDAppLedgerQuery : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDate *installedSinceDate;
@property BOOL neverLaunched;
@property unsigned long long resultLimit;
@property (copy) NSString *genre;
@property (copy) NSNumber *genreID;
@property long long sortOrder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
