@class NSString;

@interface DAAppSession : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;

@end
