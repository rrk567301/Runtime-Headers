@class NSString, NSURL;

@interface AVMetricMediaRendition : NSObject <NSSecureCoding> {
    NSString *_stableID;
    NSURL *_url;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *stableID;
@property (readonly) NSURL *URL;

- (id)debugDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStableID:(id)a0 URL:(id)a1;

@end
