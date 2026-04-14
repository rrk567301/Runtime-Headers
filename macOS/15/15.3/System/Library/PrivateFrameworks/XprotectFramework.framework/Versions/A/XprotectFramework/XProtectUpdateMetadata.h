@class NSNumber, NSDate;

@interface XProtectUpdateMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *version;
@property (readonly, nonatomic) NSDate *date;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVersion:(id)a0 andDate:(id)a1;

@end
