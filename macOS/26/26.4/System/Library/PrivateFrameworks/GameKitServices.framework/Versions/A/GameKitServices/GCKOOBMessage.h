@class NSData;

@interface GCKOOBMessage : NSObject <NSSecureCoding> {
    unsigned int type;
    unsigned int band;
    NSData *data;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)band;
- (void)encodeWithCoder:(id)a0;
- (unsigned int)type;
- (id)init;
- (id)data;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
