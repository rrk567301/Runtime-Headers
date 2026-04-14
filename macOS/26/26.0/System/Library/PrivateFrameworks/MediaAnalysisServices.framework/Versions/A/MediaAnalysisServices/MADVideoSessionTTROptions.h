@class NSString, NSDate;

@interface MADVideoSessionTTROptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *streamID;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *eventDate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
