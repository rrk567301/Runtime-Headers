@interface AAStoredUserIDComponents : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ storedUserIDComponents;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long rotationPeriod;
@property (nonatomic, readonly) long long startMonth;
@property (nonatomic, readonly) long long startYear;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0;

@end
