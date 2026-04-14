@class NSString;

@interface SEService.SESnapshot : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ seState;
    void /* unknown type, empty encoding */ reservationState;
    void /* unknown type, empty encoding */ stagedCredentials;
    void /* unknown type, empty encoding */ globalCredentials;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ memoryCalculator;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
