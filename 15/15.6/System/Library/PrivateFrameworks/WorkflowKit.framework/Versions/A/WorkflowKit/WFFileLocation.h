@class NSString;

@interface WFFileLocation : NSObject <WFFileLocationRepresenting, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *relativeSubpath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subpathFromURL:(id)a0;
+ (char)canRepresentURL:(id)a0;
+ (id)locationWithSerializedRepresentation:(id)a0;
+ (id)locationWithURL:(id)a0;
+ (Class)supportedClassForURL:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)serializedRepresentation;
- (id)resolveLocationWithError:(id *)a0;
- (char)shouldShowUsersDuringDisplay:(id)a0;
- (id)initWithRelativeSubpath:(id)a0;
- (char)isSupportedOnCurrentPlatform;

@end
