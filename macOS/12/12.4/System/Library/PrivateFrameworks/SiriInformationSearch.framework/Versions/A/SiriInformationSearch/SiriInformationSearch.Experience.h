@class NSString;

@interface SiriInformationSearch.Experience : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ pluginIdentifier;
    void /* unknown type, empty encoding */ queryConfidence;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
