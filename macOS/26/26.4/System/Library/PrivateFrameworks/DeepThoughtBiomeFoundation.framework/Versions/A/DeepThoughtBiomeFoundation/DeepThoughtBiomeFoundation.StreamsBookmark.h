@class NSString;

@interface DeepThoughtBiomeFoundation.StreamsBookmark : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ timeIntervals;
    void /* unknown type, empty encoding */ stagedTimeIntervals;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
