@class EMInstantAnswerHotel, EMMessage, EMInstantAnswerFlight;

@interface EMInstantAnswer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) EMMessage *message;
@property (readonly, nonatomic) EMInstantAnswerFlight *flight;
@property (readonly, nonatomic) EMInstantAnswerHotel *hotel;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCSInstantAnswers:(id)a0 message:(id)a1;

@end
