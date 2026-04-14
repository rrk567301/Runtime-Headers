@class NSString;

@interface AFSiriTaskUsageResult : NSObject <NSSecureCoding> {
    NSString *_originatingAceID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithOriginatingAceID:(id)a0;
- (id)_originatingAceID;
- (id)_resultDescription;

@end
