@class NSDictionary, NSDate;

@interface ARPHomeControlCorrelationsArchive : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *archiveDate;
@property (readonly, nonatomic) NSDictionary *microlocationCorrelationsDictionary;
@property (readonly, nonatomic) NSDictionary *nextActionCorrelationsDictionary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMicrolocationsCorrelationsDictionary:(id)a0 nextActionCorrelationsDictionary:(id)a1 archiveDate:(id)a2;

@end
