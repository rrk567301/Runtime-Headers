@class NSMutableDictionary;

@interface GEOClientRequestInfo : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_requests;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
