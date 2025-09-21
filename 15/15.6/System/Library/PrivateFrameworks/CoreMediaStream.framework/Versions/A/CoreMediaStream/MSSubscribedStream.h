@class NSString;

@interface MSSubscribedStream : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *streamID;
@property (retain, nonatomic) NSString *ctag;

+ (id)subscribedStreamWithStreamID:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStreamID:(id)a0;

@end
