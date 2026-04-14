@class SIRINLUEXTERNALCDMNluResponse;

@interface CDMNluResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ swiftProto;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) SIRINLUEXTERNALCDMNluResponse *objcProto;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithObjcProto:(id)a0;

@end
