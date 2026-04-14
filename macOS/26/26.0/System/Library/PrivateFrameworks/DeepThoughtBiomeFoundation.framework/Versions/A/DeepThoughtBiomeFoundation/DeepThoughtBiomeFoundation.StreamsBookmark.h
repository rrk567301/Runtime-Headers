@class NSString;

@interface DeepThoughtBiomeFoundation.StreamsBookmark : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ timeIntervals;
    void /* unknown type, empty encoding */ stagedTimeIntervals;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
