@class NSString, NSError, NSDate;

@interface SPFirmwareUpdateStateResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long state;
@property (retain, nonatomic) NSDate *stateDate;
@property (retain, nonatomic) NSString *currentSystemVersion;
@property (retain, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)firmwareUpdateState;

@end
