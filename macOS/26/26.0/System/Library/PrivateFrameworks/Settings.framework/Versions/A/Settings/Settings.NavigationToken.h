@class NSString;

@interface Settings.NavigationToken : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ navigationPath;
    void /* unknown type, empty encoding */ iconData;
    void /* unknown type, empty encoding */ iconUTType;
    void /* unknown type, empty encoding */ hasPushedContent;
    void /* unknown type, empty encoding */ isRoot;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
