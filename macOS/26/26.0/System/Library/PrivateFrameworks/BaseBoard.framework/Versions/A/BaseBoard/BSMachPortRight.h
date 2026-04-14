@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_port;
    unsigned int _rawPort;
    char _type;
    char _owner;
    unsigned char _lock_accessCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *trace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_type;

- (BOOL)isValid;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isUsable;
- (void)dealloc;
- (void)invalidate;
- (unsigned int)extractPortAndIKnowWhatImDoingISwear;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (unsigned int)rawPort;
- (void)accessPort:(id /* block */)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)matchesPortOfRight:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned int)extractPort;
- (unsigned int)port;
- (void).cxx_destruct;

@end
