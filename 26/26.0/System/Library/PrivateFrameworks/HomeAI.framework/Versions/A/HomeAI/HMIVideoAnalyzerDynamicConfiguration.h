@class NSArray, NSString;

@interface HMIVideoAnalyzerDynamicConfiguration : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long decodeMode;
@property BOOL shouldEncode;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } timelapseInterval;
@property BOOL recognizeFaces;
@property long long eventTriggers;
@property (retain) NSArray *activityZones;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
