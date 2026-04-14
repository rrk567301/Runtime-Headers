@class NSString;

@interface SEService.AppletMemoryInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ pids;
    void /* unknown type, empty encoding */ packageMemory;
    void /* unknown type, empty encoding */ containerMemory;
    void /* unknown type, empty encoding */ selectableMemory;
    void /* unknown type, empty encoding */ personalizedMemory;
    void /* unknown type, empty encoding */ policy;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
