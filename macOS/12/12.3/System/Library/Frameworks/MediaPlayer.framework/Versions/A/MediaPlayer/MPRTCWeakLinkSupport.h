@class NSString;

@interface MPRTCWeakLinkSupport : NSObject

@property (class, readonly, nonatomic, getter=isRTCReportingSupported) BOOL RTCReportingSupported;
@property (class, readonly, copy, nonatomic) NSString *RTCReportingFrameworkPath;

+ (id)newHierarchyTokenFromParentToken:(id)a0;

@end
