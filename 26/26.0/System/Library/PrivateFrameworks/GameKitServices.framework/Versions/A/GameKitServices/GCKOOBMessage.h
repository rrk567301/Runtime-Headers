@class NSData;

@interface GCKOOBMessage : NSObject <NSSecureCoding> {
    unsigned int type;
    unsigned int band;
    NSData *data;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (unsigned int)type;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (unsigned int)band;
- (id)initWithCoder:(id)a0;
- (id)data;

@end
