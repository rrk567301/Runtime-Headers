@class NSString, FSContainerIdentifier;

@interface FSProbeResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long result;
@property (readonly, copy) NSString *name;
@property (readonly) FSContainerIdentifier *containerID;

+ (id)newResult:(long long)a0 name:(id)a1 containerID:(id)a2;
+ (id)resultWithResult:(long long)a0 name:(id)a1 containerID:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(long long)a0 name:(id)a1 containerID:(id)a2;

@end
