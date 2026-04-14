@class NSArray, NSData;

@interface ARMultiClipOnEnrollmentResult : NSObject <ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSArray *clipOnInfos;
@property (readonly, nonatomic) NSData *serializedImageFeatures;

+ (id)resourceKey;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithClipOnInfos:(id)a0 serializedImageFeatures:(id)a1;

@end
