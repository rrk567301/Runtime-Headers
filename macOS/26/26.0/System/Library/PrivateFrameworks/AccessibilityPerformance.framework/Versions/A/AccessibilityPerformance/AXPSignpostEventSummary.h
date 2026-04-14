@class NSString;

@interface AXPSignpostEventSummary : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *subsystem;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) long long totalCount;
@property (nonatomic) double totalIntervalTime;
@property (readonly, nonatomic) double averageIntervalTime;

+ (id)makeIdentifierFromSignpostName:(id)a0 metadata1:(id)a1 metadata2:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
