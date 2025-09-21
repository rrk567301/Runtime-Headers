@class NSString, NSDictionary, NSNumber;

@interface IDSReportClientEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *reportType;
@property (retain, nonatomic) NSDictionary *report;
@property (retain, nonatomic) NSNumber *timeout;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithReport:(id)a0 reportType:(id)a1 timeout:(id)a2;

@end
