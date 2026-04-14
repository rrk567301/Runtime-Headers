@class NSNumber, NSData;

@interface LNDurationBridge : NSObject <NSSecureCoding, NSCoding> {
    void /* function */ data;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSNumber *seconds;
@property (nonatomic, readonly) NSNumber *attoseconds;
@property (nonatomic, readonly) NSNumber *timeInterval;
@property (nonatomic, readonly) NSData *data;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
