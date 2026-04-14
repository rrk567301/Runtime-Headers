@class SIRINLUEXTERNALCDMNluRequest;

@interface CDMNluRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ swiftProto;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) SIRINLUEXTERNALCDMNluRequest *objcProto;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithObjcProto:(id)a0;

@end
