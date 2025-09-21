@interface Settings.AEDescCodable : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ internalPointer;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
