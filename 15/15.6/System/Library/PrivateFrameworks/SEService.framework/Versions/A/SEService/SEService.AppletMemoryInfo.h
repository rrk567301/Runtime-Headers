@class NSString;

@interface SEService.AppletMemoryInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ pids;
    void /* unknown type, empty encoding */ packageMemory;
    void /* unknown type, empty encoding */ containerMemory;
    void /* unknown type, empty encoding */ selectableMemory;
    void /* unknown type, empty encoding */ personalizedMemory;
    void /* unknown type, empty encoding */ policy;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
