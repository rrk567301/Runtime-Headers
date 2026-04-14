@class NSURL, NSUUID, NSDate;

@interface PPSSignpostServiceRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *endDate;
@property (retain) NSURL *sourceURL;
@property (retain) NSDate *startDate;
@property int type;
@property (retain) NSUUID *uuid;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
