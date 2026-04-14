@class EMMessage, EMInstantAnswerFlight, NSString, EMInstantAnswerHotel;

@interface EMInstantAnswer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) EMMessage *message;
@property (readonly, nonatomic) EMInstantAnswerFlight *flight;
@property (readonly, nonatomic) EMInstantAnswerHotel *hotel;
@property (readonly, nonatomic) NSString *bodyCardSectionID;
@property (readonly, nonatomic) NSString *buttonsCardSectionID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initFakeWithMessage:(id)a0;
- (id)initWithCSInstantAnswers:(id)a0 message:(id)a1;

@end
