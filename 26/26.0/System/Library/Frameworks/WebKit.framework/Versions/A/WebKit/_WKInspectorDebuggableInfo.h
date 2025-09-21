@class NSString;

@interface _WKInspectorDebuggableInfo : NSObject <WKObject, NSCopying> {
    struct AlignedStorage<API::DebuggableInfo, 8UL> { struct Storage { unsigned char data[56]; } m_storage; } _debuggableInfo;
}

@property (nonatomic) long long debuggableType;
@property (copy, nonatomic) NSString *targetPlatformName;
@property (copy, nonatomic) NSString *targetBuildVersion;
@property (copy, nonatomic) NSString *targetProductVersion;
@property (nonatomic) BOOL targetIsSimulator;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
