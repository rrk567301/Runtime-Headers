@interface BWFormatRequirements : NSObject

@property (readonly) unsigned int mediaType;

- (id)init;
- (char)isEmpty;
- (Class)formatClass;

@end
