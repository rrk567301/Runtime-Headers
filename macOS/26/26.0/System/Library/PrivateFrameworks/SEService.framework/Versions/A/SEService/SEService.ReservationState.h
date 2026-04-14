@class NSString;

@interface SEService.ReservationState : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ counts;
    void /* unknown type, empty encoding */ reservations;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
