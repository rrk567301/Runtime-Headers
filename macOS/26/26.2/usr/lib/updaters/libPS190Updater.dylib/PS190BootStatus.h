@interface PS190BootStatus : NSObject

@property (readonly) unsigned char status;

- (id)initWithStatus:(unsigned char)a0;
- (id)description;

@end
