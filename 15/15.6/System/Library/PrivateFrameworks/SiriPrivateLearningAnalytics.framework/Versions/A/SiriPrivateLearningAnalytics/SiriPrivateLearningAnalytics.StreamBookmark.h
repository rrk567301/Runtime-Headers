@class NSString;

@interface SiriPrivateLearningAnalytics.StreamBookmark : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ bookmark;
    void /* unknown type, empty encoding */ timeIntervalSinceReferenceDate;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
