@class NSString, FSContainerIdentifier;

@interface FSProbeResult : NSObject <NSSecureCoding>

@property (class, readonly) FSContainerIdentifier *cantReadContainerID;
@property (class, readonly) FSProbeResult *notRecognizedProbeResult;
@property (class, readonly) FSProbeResult *usableButLimitedProbeResult;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long result;
@property (readonly, copy) NSString *name;
@property (readonly) FSContainerIdentifier *containerID;

+ (id)newResult:(long long)a0 name:(id)a1 containerID:(id)a2;
+ (id)recognizedProbeResultWithName:(id)a0 containerID:(id)a1;
+ (id)resultWithResult:(long long)a0 name:(id)a1 containerID:(id)a2;
+ (id)usableButLimitedProbeResultWithName:(id)a0 containerID:(id)a1;
+ (id)usableProbeResultWithName:(id)a0 containerID:(id)a1;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithResult:(long long)a0 name:(id)a1 containerID:(id)a2;

@end
