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

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned int)port;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)accessPort:(id /* block */)a0;
- (unsigned int)extractPortAndIKnowWhatImDoingISwear;
- (BOOL)isUsable;
- (BOOL)matchesPortOfRight:(id)a0;
- (unsigned int)extractPort;
- (unsigned int)rawPort;

@end
