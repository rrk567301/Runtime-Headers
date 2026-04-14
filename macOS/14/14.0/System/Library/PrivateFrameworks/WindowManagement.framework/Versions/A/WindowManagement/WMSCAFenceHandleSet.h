@interface WMSCAFenceHandleSet : NSObject <BSXPCCoding> {
    void /* unknown type, empty encoding */ fenceHandles;
}

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;

@end
