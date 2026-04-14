@class NSString;

@interface SMTRequestConjunctionInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ requestIndex;
    void /* unknown type, empty encoding */ requestCount;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
