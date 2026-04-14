@class SIRINLUEXTERNALCDMNluResponse;

@interface CDMNluResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ swiftProto;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) SIRINLUEXTERNALCDMNluResponse *objcProto;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithObjcProto:(id)a0;

@end
