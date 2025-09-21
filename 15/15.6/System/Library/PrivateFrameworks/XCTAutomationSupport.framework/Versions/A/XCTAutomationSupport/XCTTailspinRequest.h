@class NSString, NSDate;

@interface XCTTailspinRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int processID;
@property (readonly, nonatomic) char collectOSLogs;
@property (readonly, nonatomic) char collectOSSignposts;
@property (readonly, nonatomic) char redactSensitiveInformation;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSString *fileName;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProcessID:(int)a0 collectOSLogs:(char)a1 collectOSSignposts:(char)a2 redactSensitiveInformation:(char)a3 startDate:(id)a4 reason:(id)a5 fileName:(id)a6;

@end
