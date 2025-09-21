@class NSString;

@interface CAMutableDisplayPreferences : CADisplayPreferences

@property (nonatomic) char matchContent;
@property (copy, nonatomic) NSString *preferredHdrMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
