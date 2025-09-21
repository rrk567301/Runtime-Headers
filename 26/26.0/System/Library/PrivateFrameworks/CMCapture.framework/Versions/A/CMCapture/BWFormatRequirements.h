@interface BWFormatRequirements : NSObject

@property (readonly) unsigned int mediaType;

- (Class)formatClass;
- (BOOL)isEmpty;
- (id)init;

@end
