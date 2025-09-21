@class NSData, NSString;

@interface GTFaultingEncoder : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *cpuCallstackData;
@property (nonatomic) unsigned int cpuCallstackFramesNum;
@property (copy, nonatomic) NSString *metalLogMessage;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
