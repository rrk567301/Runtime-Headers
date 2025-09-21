@interface Settings.SidebarButtonAction : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ action;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
