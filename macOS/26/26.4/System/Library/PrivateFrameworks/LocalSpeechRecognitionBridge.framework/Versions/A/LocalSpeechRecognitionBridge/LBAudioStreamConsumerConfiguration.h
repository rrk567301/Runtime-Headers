@class NSString, LBAudioStreamInfo;

@interface LBAudioStreamConsumerConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) LBAudioStreamInfo *streamInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestId:(id)a0 streamInfo:(id)a1;

@end
