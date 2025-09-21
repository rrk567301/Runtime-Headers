@class NSString, NSDictionary, NSURL, NSDate;

@interface CKDTrafficMetadata : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ url;
    void /* function */ method;
    void /* function */ headers;
    void /* function */ requestClassName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSString *method;
@property (nonatomic) long long status;
@property (nonatomic, copy) NSDictionary *headers;
@property (nonatomic, copy) NSString *requestClassName;
@property (nonatomic) BOOL parsingStandaloneMessage;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
