@class NSData;

@interface UINSDragImage : NSObject <UINSDragImage>

@property (readonly, nonatomic) unsigned int slotID;
@property (readonly, copy, nonatomic) NSData *imageData;

- (id)initWithImageData:(id)a0;
- (void).cxx_destruct;
- (id)initWithSlotID:(unsigned int)a0;

@end
