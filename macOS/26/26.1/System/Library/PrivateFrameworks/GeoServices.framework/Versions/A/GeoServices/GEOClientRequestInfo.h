@class NSMutableDictionary;

@interface GEOClientRequestInfo : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_requests;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
