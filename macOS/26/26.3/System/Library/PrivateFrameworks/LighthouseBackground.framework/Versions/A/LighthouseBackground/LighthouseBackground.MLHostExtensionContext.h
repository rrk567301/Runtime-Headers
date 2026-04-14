@class NSString;

@interface LighthouseBackground.MLHostExtensionContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ taskId;
    void /* unknown type, empty encoding */ taskName;
    void /* unknown type, empty encoding */ taskFolder;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
