@class NSString;

@interface SEService.ReservationState : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ counts;
    void /* unknown type, empty encoding */ reservations;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
