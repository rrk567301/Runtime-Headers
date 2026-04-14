@class NSString;

@interface LighthouseBackground.MLHostExtensionContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ taskId;
    void /* unknown type, empty encoding */ taskName;
    void /* unknown type, empty encoding */ taskFolder;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
