@class NSString;

@interface SMTRequestConjunctionInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ requestIndex;
    void /* unknown type, empty encoding */ requestCount;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
