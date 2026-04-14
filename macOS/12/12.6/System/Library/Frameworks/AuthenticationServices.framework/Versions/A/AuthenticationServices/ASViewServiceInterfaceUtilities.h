@class NSFont;

@interface ASViewServiceInterfaceUtilities : NSObject

@property (class, readonly, nonatomic) NSFont *titleFont;
@property (class, readonly, nonatomic) NSFont *messageFont;

+ (id)messageLabelColor;

@end
