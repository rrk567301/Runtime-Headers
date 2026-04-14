@class NSString;

@interface CoreIDVShared.GestureTimestamps : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ timestamps;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
