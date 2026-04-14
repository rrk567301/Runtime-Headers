@class NSString;

@interface ICScannerFeatureProps : NSObject

@property unsigned long long type;
@property (copy) NSString *internalName;
@property (copy) NSString *humanReadableName;
@property (copy) NSString *tooltip;

- (void)dealloc;

@end
