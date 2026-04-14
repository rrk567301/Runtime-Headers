@class IOCAggregateBuildDescription;

@interface IOCEventDeviceBuildRequest : NSObject <NSIOCEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IOCAggregateBuildDescription *buildDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDescription:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
