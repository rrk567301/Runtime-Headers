@interface Settings.AEDescCodable : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ internalPointer;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;

@end
