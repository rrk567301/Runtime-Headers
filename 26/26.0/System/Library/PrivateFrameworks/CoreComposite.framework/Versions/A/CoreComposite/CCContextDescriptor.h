@class NSString, NSMutableArray;
@protocol MTLDevice;

@interface CCContextDescriptor : NSObject <CCVisitable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *services;
@property (retain, nonatomic) id<MTLDevice> mtlDevice;
@property (nonatomic) BOOL isLaneDataPreallocated;
@property (nonatomic) unsigned long long laneDataBufferSize;
@property (nonatomic) BOOL isProtected;
@property (nonatomic) unsigned long long protectionOptions;
@property (nonatomic) BOOL isCIF10OutputEnabled;
@property (nonatomic) BOOL enableLateLatching;
@property (nonatomic) float vrFlagClearValue;
@property (nonatomic) BOOL enableAdaptiveRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)getDescriptor:(Class)a0;

@end
