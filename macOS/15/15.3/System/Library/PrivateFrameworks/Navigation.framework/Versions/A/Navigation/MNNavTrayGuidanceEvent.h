@class GEOComposedString, NSString;

@interface MNNavTrayGuidanceEvent : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _guidanceEvent;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) GEOComposedString *title;
@property (nonatomic, readonly) GEOComposedString *detail;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGuidanceEvent:(id)a0;

@end
