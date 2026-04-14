@class SIRINLUEXTERNALCDMNluRequest;

@interface CDMNluRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ swiftProto;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) SIRINLUEXTERNALCDMNluRequest *objcProto;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithObjcProto:(id)a0;

@end
