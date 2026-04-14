@class NSString, NSError, NSDate;

@interface SPFirmwareUpdateStateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *stateDate;
@property (retain, nonatomic) NSString *currentSystemVersion;
@property (retain, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)dictionary;
- (id)firmwareUpdateState;

@end
