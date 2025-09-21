@class NSString;

@interface CoreIDVShared.GestureTimestamps : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ timestamps;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
