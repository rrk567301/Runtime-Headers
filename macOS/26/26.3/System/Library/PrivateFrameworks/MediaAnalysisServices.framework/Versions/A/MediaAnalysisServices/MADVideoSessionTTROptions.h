@class NSString, NSDate;

@interface MADVideoSessionTTROptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *streamID;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *eventDate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
