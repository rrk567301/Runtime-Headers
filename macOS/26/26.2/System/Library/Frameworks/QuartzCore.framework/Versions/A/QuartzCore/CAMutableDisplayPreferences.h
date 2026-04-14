@class NSString;

@interface CAMutableDisplayPreferences : CADisplayPreferences

@property (nonatomic) BOOL matchContent;
@property (copy, nonatomic) NSString *preferredHdrMode;
@property (nonatomic) BOOL prefersHighRefreshRate;
@property (nonatomic) BOOL prefersVariableRefreshRate;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
