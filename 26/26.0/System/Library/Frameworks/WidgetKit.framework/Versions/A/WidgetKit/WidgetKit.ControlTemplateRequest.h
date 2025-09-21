@interface WidgetKit.ControlTemplateRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ control;
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ hostDeviceID;
    void /* unknown type, empty encoding */ isPreview;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
