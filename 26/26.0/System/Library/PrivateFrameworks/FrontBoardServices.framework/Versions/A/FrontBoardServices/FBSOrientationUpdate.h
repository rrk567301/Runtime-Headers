@class NSString;

@interface FBSOrientationUpdate : NSObject <BSXPCSecureCoding>

@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) double duration;
@property (nonatomic) long long rotationDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithOrientation:(long long)a0 sequenceNumber:(unsigned long long)a1 duration:(double)a2 rotationDirection:(long long)a3;

@end
